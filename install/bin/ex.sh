awk 'begin{i=0; } { i=i+1 ;if((i % 2)==1) {print ($10 ',' $3)}}' ex1.o | sed -e 's/mb\[1,//' |sed 's/\]//'
awk 'begin{i=0; } { i=i+1 ;if((i % 2)==0) {print ($13 , $3)}}' ex1.o | sed -e 's/<//' |sed 's/;//'

