/* this file reads a model from disk and passes the result to the scanner*/
#include "model/model.h"
#include "utils/guc.h"


void PrintModel(DModel *m) {
	int i;
	printf("---------------------\n");
	printf("Id%d Type%d  len%d  Err%f freq%d\n",m->id,m->type,m->len,m->err,m->freq);
	printf("Values(%d):",m->nv);
	for(i=0;i<m->nv;i++)printf("%f ",m->values[i]);
	printf("\nTs(%d):",m->nts);
	for(i=0;i<m->nts;i++)printf("%f ",m->ts[i]);
	printf("\nChildren(%d):",m->nc);
	for(i=0;i<m->nc;i++)printf("%d ",m->children[i]);
	printf("\nSeasonal:%d",m->seasonal);

	printf("---------------------\n");
}

double Eval(int j,int x, double * error)  {
	double t, s;
	double xx,tt ;
	DModel *m= (DModel*)&(models[j]);
 	if (m->seasonal == -1 && m->nv == 0) { 
		return m->ts[x]; }
	if (m->seasonal == -1) { 
		return m->values[0] * x + m->values[1];}

	t = s = 0;
	if (m->type == EXPLICIT)  t = m->values[x / m->freq];
	else if (m->type == IMPLICIT)
		t = m->values[0] * x / m->freq + m->values[1];
	else t = m->values[0] * x + m->values[1];
	
	s = Eval(m->seasonal, x % m->freq,&tt);
	xx= s+t;
//	printf("Total  %lf\n",xx);
	*error=m->err;
	return xx;
}
double EvalProb(int j,int x,double err)  {
	int i=0;
	DModel *m= (DModel*)&(models[j]);
	double error=0;
	double y= Eval(j,x,&error);// no need to compute the value
	//elog(WARNING, "Model error%f requested error %f",error,err);
	//btw, compute the next values and add them to the cache
	//	return y;
	if ((err >error)||(m->nc <= 0)) {
		//elog(WARNING," matches the error %p",cache);
		if((cache != NULL) && (m_cache>0)) {
			//    elog(WARNING, "Filling from %d len: %d",x+1+i,m_cache);	
       			cache_start=x+1;
			for(i=0;i<m->len;i++) {
			   if(i>=m_cache)break;
			   cache[i]=Eval(j,x+1+i,&error);
			 }
			 for(i=x+m->len;i<m_cache;i++) {
			    cache[i]=-1;
			 }
		}		
		return y; // found result within the error
	}
	//elog(WARNING,"here");
	DModel *mm;

	int l=0;
	l=m->children[0];
	mm= (DModel*)&(models[l]);
        int llen = mm->len;
        int li = x / llen;
	
        if (li >= m->nc) {
          li =m-> nc - 1;
	  l=m->children[li];
	  mm= (DModel*)&(models[l]);
          llen = mm->len;
            }
	l=m->children[li];
//	printf("l %d li %d\n",l,li);
        return EvalProb(l,x % llen, err);
}


double GetValue(int x) {
	//elog(WARNING," value of %d",x);
	if(m_cache==-1) return 199;
	else if(m_cache== 0) return EvalProb(0,x,error_level);
	if(cache_start==-1) {
	//elog(WARNING,"Cache has not not been initlized");
	return EvalProb(0,x,error_level);
	}
	if((x-cache_start)>=m_cache) return EvalProb(0,x,error_level);
	//elog(WARNING,"Use case value %d",x);
	double v=cache[x-cache_start];
	if(v==-1)return EvalProb(0,x,error_level); 
	else
	return v;
}

DModel* ReadModel(FILE* f,int j){
	DModel *m= (DModel*)&(models[j]);
	int ti;
	double tf;
	int i;
	fscanf(f, "%d", &ti);
	m->id=ti;
	fscanf(f, "%d", &ti);
	m->type=ti;
	fscanf(f, "%d", &ti);
	m->len=ti;

	fscanf(f, "%lf", &tf);
	m->err=tf;

	fscanf(f, "%d", &ti);
	m->freq=ti;

	fscanf(f, "%d", &ti);
	m->seasonal=ti;

	//read v
	fscanf(f, "%d", &ti);
	m->nv=ti;
	m->values=(double *) malloc(sizeof(double)*m->nv);
	for(i=0;i<m->nv;i++) {
		fscanf(f, "%lf", &tf);
		m->values[i]=tf;
	}
	//read ts
	fscanf(f, "%d", &ti);
	m->nts=ti;
	m->ts=(double *) malloc(sizeof(double)*m->nts);
	for(i=0;i<m->nts;i++) {
		fscanf(f, "%lf", &tf);
		m->ts[i]=tf;
	}
	//read c
	fscanf(f, "%d", &ti);
	m->nc=ti;
	m->children=(int *) malloc(sizeof(int)*m->nc);
	for(i=0;i<m->nc;i++) {
		fscanf(f, "%d", &ti);
		m->children[i]=ti;
	}
	fscanf(f, "\n");
	return m;
}

void LoadModules() {
	
//   /home/khalefa/model/uk2.b  uk2m.b
	FILE* f=fopen("/home/khalefa/D3.4/mdata/uk2m.b","r");
	int n,i;
	fscanf(f,"%d\n",&n);

	models=(DModel *) malloc(sizeof(DModel)*n);

	for( i=0;i<n;i++){
		ReadModel(f,i);
	}

	fclose(f);

	cache=NULL;
	cache_start=-1;
}

void ReLoadModules(char * filename) {
	
//   /home/khalefa/model/uk2.b
	FILE* f=fopen(filename,"r");
	int n,i;
	fscanf(f,"%d\n",&n);
        if(models != NULL) free(models);
	models=(DModel *) malloc(sizeof(DModel)*n);

	for( i=0;i<n;i++){
		ReadModel(f,i);
	}

	fclose(f);

}


/*int main() { 

	FILE* f=fopen("a.txt","r");
	int n,i;
	double xx=0;
	fscanf(f,"%d\n",&n);
	models=(DModel *) malloc(sizeof(DModel)*n);


	for( i=0;i<n;i++){
		ReadModel(f,i);
		//PrintModel(&models[i]);
	}
	fclose(f);

	//data=(double*)malloc(sizeof(double)*10);

	for(i=1;i<20;i++) {

		xx=EvalProb(0,i,5.0);
		xx++;
		printf("Totalx  %lf\n",xx);
	}
}*/
