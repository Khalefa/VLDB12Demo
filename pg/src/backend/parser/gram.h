
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_P = 258,
     ABSOLUTE_P = 259,
     ACCESS = 260,
     ACTION = 261,
     ADD_P = 262,
     ADMIN = 263,
     AFTER = 264,
     AGGREGATE = 265,
     ALGORITHM = 266,
     ALL = 267,
     ALSO = 268,
     ALTER = 269,
     ALWAYS = 270,
     ANALYSE = 271,
     ANALYZE = 272,
     AND = 273,
     ANY = 274,
     ARRAY = 275,
     AS = 276,
     ASC = 277,
     ASOF = 278,
     ASSERTION = 279,
     ASSIGNMENT = 280,
     ASYMMETRIC = 281,
     AT = 282,
     ATTRIBUTES = 283,
     AUTHORIZATION = 284,
     AVERAGE = 285,
     BACKWARD = 286,
     BEFORE = 287,
     BEGIN_P = 288,
     BETWEEN = 289,
     BIGINT = 290,
     BINARY = 291,
     BIT = 292,
     BOOLEAN_P = 293,
     BOTH = 294,
     BOTTOMUP = 295,
     BY = 296,
     CACHE = 297,
     CALLED = 298,
     CASCADE = 299,
     CASCADED = 300,
     CASE = 301,
     CAST = 302,
     CATALOG_P = 303,
     CHAIN = 304,
     CHAR_P = 305,
     CHARACTER = 306,
     CHARACTERISTICS = 307,
     CHECK = 308,
     CHECKPOINT = 309,
     CHOOSE = 310,
     CLASS = 311,
     CLOSE = 312,
     CLUSTER = 313,
     COALESCE = 314,
     COLLATE = 315,
     COLUMN = 316,
     COMMENT = 317,
     COMMIT = 318,
     COMMITTED = 319,
     COMPLETE = 320,
     CONCURRENTLY = 321,
     CONFIDENCE = 322,
     CONFIGURATION = 323,
     CONNECTION = 324,
     CONSTRAINT = 325,
     CONSTRAINTS = 326,
     CONTENT_P = 327,
     CONTINUE_P = 328,
     CONVERSION_P = 329,
     COPY = 330,
     CORRELATION = 331,
     COST = 332,
     CREATE = 333,
     CREATEDB = 334,
     CREATEROLE = 335,
     CREATEUSER = 336,
     CROSS = 337,
     CSV = 338,
     CURRENT_P = 339,
     CURRENT_CATALOG = 340,
     CURRENT_DATE = 341,
     CURRENT_ROLE = 342,
     CURRENT_SCHEMA = 343,
     CURRENT_TIME = 344,
     CURRENT_TIMESTAMP = 345,
     CURRENT_USER = 346,
     CURSOR = 347,
     CYCLE = 348,
     DATA_P = 349,
     DATABASE = 350,
     DAY_P = 351,
     DEALLOCATE = 352,
     DEC = 353,
     DECIMAL_P = 354,
     DECLARE = 355,
     DECOMPOSE = 356,
     DEFAULT = 357,
     DEFAULTS = 358,
     DEFERRABLE = 359,
     DEFERRED = 360,
     DEFINER = 361,
     DELETE_P = 362,
     DELIMITER = 363,
     DELIMITERS = 364,
     DESC = 365,
     DICTIONARY = 366,
     DIMENSION = 367,
     DISABLE_P = 368,
     DISAGGREGATE = 369,
     DISAGGSCHEME = 370,
     DISCARD = 371,
     DISTINCT = 372,
     DO = 373,
     DOCUMENT_P = 374,
     DOMAIN_P = 375,
     DOUBLE_P = 376,
     DROP = 377,
     EACH = 378,
     ELSE = 379,
     ENABLE_P = 380,
     ENCODING = 381,
     ENCRYPTED = 382,
     END_P = 383,
     ENUM_P = 384,
     ERRORLIMIT = 385,
     ESCAPE = 386,
     EXCEPT = 387,
     EXCLUDING = 388,
     EXCLUSIVE = 389,
     EXECUTE = 390,
     EXISTS = 391,
     EXPLAIN = 392,
     EXTERNAL = 393,
     EXTRACT = 394,
     FALSE_P = 395,
     FAMILY = 396,
     FETCH = 397,
     FILL = 398,
     FILLING = 399,
     FIRST = 400,
     FIRST_P = 401,
     FLOAT_P = 402,
     FOLLOWING = 403,
     FOR = 404,
     FORCE = 405,
     FORECAST = 406,
     FOREIGN = 407,
     FORWARD = 408,
     FREEZE = 409,
     FROM = 410,
     FULL = 411,
     FUNCTION = 412,
     GLOBAL = 413,
     GRANT = 414,
     GRANTED = 415,
     GREATEST = 416,
     GREEDY = 417,
     GROUP_P = 418,
     HANDLER = 419,
     HAVING = 420,
     HEADER_P = 421,
     HOLD = 422,
     HOUR_P = 423,
     IDENTITY_P = 424,
     IF_P = 425,
     ILIKE = 426,
     IMMEDIATE = 427,
     IMMUTABLE = 428,
     IMPLICIT_P = 429,
     IN_P = 430,
     INCLUDING = 431,
     INCREMENT = 432,
     INDEX = 433,
     INDEXES = 434,
     INHERIT = 435,
     INHERITS = 436,
     INITIALLY = 437,
     INNER_P = 438,
     INOUT = 439,
     INPUT_P = 440,
     INSENSITIVE = 441,
     INSERT = 442,
     INSTEAD = 443,
     INT_P = 444,
     INTEGER = 445,
     INTERSECT = 446,
     INTERVAL = 447,
     INTERVALP = 448,
     INTO = 449,
     INVOKER = 450,
     IS = 451,
     ISNULL = 452,
     ISOLATION = 453,
     JOIN = 454,
     KEY = 455,
     KEYS = 456,
     LANCOMPILER = 457,
     LANGUAGE = 458,
     LARGE_P = 459,
     LAST_P = 460,
     LC_COLLATE_P = 461,
     LC_CTYPE_P = 462,
     LEADING = 463,
     LEAST = 464,
     LEFT = 465,
     LEVEL = 466,
     LIKE = 467,
     LIMIT = 468,
     LISTEN = 469,
     LOAD = 470,
     LOCAL = 471,
     LOCALTIME = 472,
     LOCALTIMESTAMP = 473,
     LOCATION = 474,
     LOCK_P = 475,
     LOGIN_P = 476,
     MAINTENANCE = 477,
     MAPPING = 478,
     MATCH = 479,
     MAXVALUE = 480,
     METHOD = 481,
     MINUTE_P = 482,
     MINVALUE = 483,
     MODE = 484,
     MODEL = 485,
     MODELGRAPH = 486,
     MODELINDEX = 487,
     MONTH_P = 488,
     MOVE = 489,
     MULT = 490,
     NAME_P = 491,
     NAMES = 492,
     NATIONAL = 493,
     NATURAL = 494,
     NCHAR = 495,
     NEW = 496,
     NEXT = 497,
     NO = 498,
     NOCREATEDB = 499,
     NOCREATEROLE = 500,
     NOCREATEUSER = 501,
     NOINHERIT = 502,
     NOLOGIN_P = 503,
     NONE = 504,
     NOSUPERUSER = 505,
     NOT = 506,
     NOTHING = 507,
     NOTIFY = 508,
     NOTNULL = 509,
     NOWAIT = 510,
     NULL_P = 511,
     NULLIF = 512,
     NULLS_P = 513,
     NUMBER = 514,
     NUMERIC = 515,
     OBJECT_P = 516,
     OF = 517,
     OFF = 518,
     OFFSET = 519,
     OIDS = 520,
     OLD = 521,
     ON = 522,
     ONDEMAND = 523,
     ONLY = 524,
     OPERATOR = 525,
     OPTION = 526,
     OPTIONS = 527,
     OR = 528,
     ORDER = 529,
     OUT_P = 530,
     OUTER_P = 531,
     OVER = 532,
     OVERLAPS = 533,
     OVERLAY = 534,
     OWNED = 535,
     OWNER = 536,
     PARAMETERS = 537,
     PARSER = 538,
     PARTIAL = 539,
     PARTITION = 540,
     PASSWORD = 541,
     PLACING = 542,
     PLANS = 543,
     POSITION = 544,
     PRECEDING = 545,
     PRECISION = 546,
     PRESERVE = 547,
     PREPARE = 548,
     PREPARED = 549,
     PRIMARY = 550,
     PRINT = 551,
     PRIOR = 552,
     PRIVILEGES = 553,
     PROCEDURAL = 554,
     PROCEDURE = 555,
     QCACHE = 556,
     QUARTER_P = 557,
     QUOTE = 558,
     RANGE = 559,
     READ = 560,
     REAL = 561,
     REASSIGN = 562,
     RECHECK = 563,
     RECURSIVE = 564,
     REESTIMATE = 565,
     REFERENCES = 566,
     REINDEX = 567,
     RELATIVE_P = 568,
     RELEASE = 569,
     RENAME = 570,
     REPEATABLE = 571,
     REPLACE = 572,
     REPLICA = 573,
     RESET = 574,
     RESTART = 575,
     RESTORE = 576,
     RESTRICT = 577,
     RETURNING = 578,
     RETURNS = 579,
     REVOKE = 580,
     RIGHT = 581,
     ROLE = 582,
     ROLLBACK = 583,
     ROW = 584,
     ROWS = 585,
     RULE = 586,
     SAVEPOINT = 587,
     SCHEMA = 588,
     SCROLL = 589,
     SEARCH = 590,
     SEASON = 591,
     SECOND_P = 592,
     SECURITY = 593,
     SELECT = 594,
     SEQUENCE = 595,
     SERIALIZABLE = 596,
     SERVER = 597,
     SESSION = 598,
     SESSION_USER = 599,
     SET = 600,
     SETOF = 601,
     SHARE = 602,
     SHOW = 603,
     SIMILAR = 604,
     SIMPLE = 605,
     SIMPLEREESTIMATE = 606,
     SMALLINT = 607,
     SOME = 608,
     STABLE = 609,
     STANDALONE_P = 610,
     START = 611,
     STATEMENT = 612,
     STATISTICS = 613,
     STRATEGY = 614,
     STDIN = 615,
     STDOUT = 616,
     STORAGE = 617,
     STORE = 618,
     STRICT_P = 619,
     STRIP_P = 620,
     SUBSTRING = 621,
     SUPERUSER_P = 622,
     SYMMETRIC = 623,
     SYSID = 624,
     SYSTEM_P = 625,
     TABLE = 626,
     TABLESPACE = 627,
     TEMP = 628,
     TEMPLATE = 629,
     TEMPORARY = 630,
     TEXT_P = 631,
     THEN = 632,
     TIME = 633,
     TIMESERIES = 634,
     TIMESTAMP = 635,
     TO = 636,
     TOPDOWN = 637,
     TRAILING = 638,
     TRAINING_DATA = 639,
     TRANSACTION = 640,
     TREAT = 641,
     TRIGGER = 642,
     TRIM = 643,
     TRUE_P = 644,
     TRUNCATE = 645,
     TRUSTED = 646,
     TYPE_P = 647,
     UNBOUNDED = 648,
     UNCOMMITTED = 649,
     UNENCRYPTED = 650,
     UNION = 651,
     UNIQUE = 652,
     UNKNOWN = 653,
     UNLISTEN = 654,
     UNTIL = 655,
     UPDATE = 656,
     USER = 657,
     USING = 658,
     VACUUM = 659,
     VALID = 660,
     VALIDATOR = 661,
     VALUE_P = 662,
     VALUES = 663,
     VARCHAR = 664,
     VARIADIC = 665,
     VARYING = 666,
     VERBOSE = 667,
     VERSION_P = 668,
     VIEW = 669,
     VOLATILE = 670,
     WEEK_P = 671,
     WHEN = 672,
     WHERE = 673,
     WHITESPACE_P = 674,
     WINDOW = 675,
     WITH = 676,
     WITHOUT = 677,
     WORK = 678,
     WRAPPER = 679,
     WRITE = 680,
     XML_P = 681,
     XMLATTRIBUTES = 682,
     XMLCONCAT = 683,
     XMLELEMENT = 684,
     XMLFOREST = 685,
     XMLPARSE = 686,
     XMLPI = 687,
     XMLROOT = 688,
     XMLSERIALIZE = 689,
     YEAR_P = 690,
     YES_P = 691,
     ZONE = 692,
     NULLS_FIRST = 693,
     NULLS_LAST = 694,
     WITH_TIME = 695,
     IDENT = 696,
     FCONST = 697,
     SCONST = 698,
     BCONST = 699,
     XCONST = 700,
     Op = 701,
     ICONST = 702,
     PARAM = 703,
     POSTFIXOP = 704,
     UMINUS = 705,
     TYPECAST = 706
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 151 "gram.y"

	int					ival;
	char				chr;
	char				*str;
	const char			*keyword;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;

	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;

	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
	
	GraphAttribute		*graphAttr;



/* Line 1676 of yacc.c  */
#line 543 "gram.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE base_yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE base_yylloc;

