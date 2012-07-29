
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
     FUNC = 412,
     FUNCTION = 413,
     GLOBAL = 414,
     GRANT = 415,
     GRANTED = 416,
     GREATEST = 417,
     GREEDY = 418,
     GROUP_P = 419,
     HANDLER = 420,
     HAVING = 421,
     HEADER_P = 422,
     HOLD = 423,
     HOUR_P = 424,
     IDENTITY_P = 425,
     IF_P = 426,
     ILIKE = 427,
     IMMEDIATE = 428,
     IMMUTABLE = 429,
     IMPLICIT_P = 430,
     IN_P = 431,
     INCLUDING = 432,
     INCREMENT = 433,
     INDEX = 434,
     INDEXES = 435,
     INHERIT = 436,
     INHERITS = 437,
     INITIALLY = 438,
     INNER_P = 439,
     INOUT = 440,
     INPUT_P = 441,
     INSENSITIVE = 442,
     INSERT = 443,
     INSTEAD = 444,
     INT_P = 445,
     INTEGER = 446,
     INTERSECT = 447,
     INTERVAL = 448,
     INTERVALP = 449,
     INTO = 450,
     INVOKER = 451,
     IS = 452,
     ISNULL = 453,
     ISOLATION = 454,
     JOIN = 455,
     KEY = 456,
     KEYS = 457,
     LANCOMPILER = 458,
     LANGUAGE = 459,
     LARGE_P = 460,
     LAST_P = 461,
     LC_COLLATE_P = 462,
     LC_CTYPE_P = 463,
     LEADING = 464,
     LEAST = 465,
     LEFT = 466,
     LEVEL = 467,
     LIKE = 468,
     LIMIT = 469,
     LISTEN = 470,
     LOAD = 471,
     LOCAL = 472,
     LOCALTIME = 473,
     LOCALTIMESTAMP = 474,
     LOCATION = 475,
     LOCK_P = 476,
     LOGIN_P = 477,
     MAINTENANCE = 478,
     MAPPING = 479,
     MATCH = 480,
     MAXVALUE = 481,
     METHOD = 482,
     MINUTE_P = 483,
     MINVALUE = 484,
     MODE = 485,
     MODEL = 486,
     MODELGRAPH = 487,
     MODELINDEX = 488,
     MONTH_P = 489,
     MOVE = 490,
     MULT = 491,
     NAME_P = 492,
     NAMES = 493,
     NATIONAL = 494,
     NATURAL = 495,
     NCHAR = 496,
     NEW = 497,
     NEXT = 498,
     NO = 499,
     NOCREATEDB = 500,
     NOCREATEROLE = 501,
     NOCREATEUSER = 502,
     NOINHERIT = 503,
     NOLOGIN_P = 504,
     NONE = 505,
     NOSUPERUSER = 506,
     NOT = 507,
     NOTHING = 508,
     NOTIFY = 509,
     NOTNULL = 510,
     NOWAIT = 511,
     NULL_P = 512,
     NULLIF = 513,
     NULLS_P = 514,
     NUMBER = 515,
     NUMERIC = 516,
     OBJECT_P = 517,
     OF = 518,
     OFF = 519,
     OFFSET = 520,
     OIDS = 521,
     OLD = 522,
     ON = 523,
     ONDEMAND = 524,
     ONLY = 525,
     OPERATOR = 526,
     OPTION = 527,
     OPTIONS = 528,
     OR = 529,
     ORDER = 530,
     OUT_P = 531,
     OUTER_P = 532,
     OVER = 533,
     OVERLAPS = 534,
     OVERLAY = 535,
     OWNED = 536,
     OWNER = 537,
     PARAMETERS = 538,
     PARSER = 539,
     PARTIAL = 540,
     PARTITION = 541,
     PASSWORD = 542,
     PLACING = 543,
     PLANS = 544,
     POSITION = 545,
     PRECEDING = 546,
     PRECISION = 547,
     PRESERVE = 548,
     PREPARE = 549,
     PREPARED = 550,
     PRIMARY = 551,
     PRINT = 552,
     PRIOR = 553,
     PRIVILEGES = 554,
     PROCEDURAL = 555,
     PROCEDURE = 556,
     QCACHE = 557,
     QUARTER_P = 558,
     QUOTE = 559,
     RANGE = 560,
     READ = 561,
     REAL = 562,
     REASSIGN = 563,
     RECHECK = 564,
     RECURSIVE = 565,
     REESTIMATE = 566,
     REFERENCES = 567,
     REINDEX = 568,
     RELATIVE_P = 569,
     RELEASE = 570,
     RENAME = 571,
     REPEATABLE = 572,
     REPLACE = 573,
     REPLICA = 574,
     RESET = 575,
     RESTART = 576,
     RESTORE = 577,
     RESTRICT = 578,
     RETURNING = 579,
     RETURNS = 580,
     REVOKE = 581,
     RIGHT = 582,
     ROLE = 583,
     ROLLBACK = 584,
     ROW = 585,
     ROWS = 586,
     RULE = 587,
     SAVEPOINT = 588,
     SCHEMA = 589,
     SCROLL = 590,
     SEARCH = 591,
     SEASON = 592,
     SECOND_P = 593,
     SECURITY = 594,
     SELECT = 595,
     SEQUENCE = 596,
     SERIALIZABLE = 597,
     SERVER = 598,
     SESSION = 599,
     SESSION_USER = 600,
     SET = 601,
     SETOF = 602,
     SHARE = 603,
     SHOW = 604,
     SIMILAR = 605,
     SIMPLE = 606,
     SIMPLEREESTIMATE = 607,
     SMALLINT = 608,
     SOME = 609,
     STABLE = 610,
     STANDALONE_P = 611,
     START = 612,
     STATEMENT = 613,
     STATISTICS = 614,
     STRATEGY = 615,
     STDIN = 616,
     STDOUT = 617,
     STORAGE = 618,
     STORE = 619,
     STRICT_P = 620,
     STRIP_P = 621,
     SUBSTRING = 622,
     SUPERUSER_P = 623,
     SYMMETRIC = 624,
     SYSID = 625,
     SYSTEM_P = 626,
     TABLE = 627,
     TABLESPACE = 628,
     TEMP = 629,
     TEMPLATE = 630,
     TEMPORARY = 631,
     TEXT_P = 632,
     THEN = 633,
     TIME = 634,
     TIMESERIES = 635,
     TIMESTAMP = 636,
     TO = 637,
     TOPDOWN = 638,
     TRAILING = 639,
     TRAINING_DATA = 640,
     TRANSACTION = 641,
     TREAT = 642,
     TRIGGER = 643,
     TRIM = 644,
     TRUE_P = 645,
     TRUNCATE = 646,
     TRUSTED = 647,
     TYPE_P = 648,
     UNBOUNDED = 649,
     UNCOMMITTED = 650,
     UNENCRYPTED = 651,
     UNION = 652,
     UNIQUE = 653,
     UNKNOWN = 654,
     UNLISTEN = 655,
     UNTIL = 656,
     UPDATE = 657,
     USER = 658,
     USING = 659,
     VACUUM = 660,
     VALID = 661,
     VALIDATOR = 662,
     VALUE_P = 663,
     VALUES = 664,
     VARCHAR = 665,
     VARIADIC = 666,
     VARYING = 667,
     VERBOSE = 668,
     VERSION_P = 669,
     VIEW = 670,
     VOLATILE = 671,
     WEEK_P = 672,
     WHEN = 673,
     WHERE = 674,
     WHITESPACE_P = 675,
     WINDOW = 676,
     WITH = 677,
     WITHOUT = 678,
     WORK = 679,
     WRAPPER = 680,
     WRITE = 681,
     XML_P = 682,
     XMLATTRIBUTES = 683,
     XMLCONCAT = 684,
     XMLELEMENT = 685,
     XMLFOREST = 686,
     XMLPARSE = 687,
     XMLPI = 688,
     XMLROOT = 689,
     XMLSERIALIZE = 690,
     YEAR_P = 691,
     YES_P = 692,
     ZONE = 693,
     NULLS_FIRST = 694,
     NULLS_LAST = 695,
     WITH_TIME = 696,
     IDENT = 697,
     FCONST = 698,
     SCONST = 699,
     BCONST = 700,
     XCONST = 701,
     Op = 702,
     ICONST = 703,
     PARAM = 704,
     POSTFIXOP = 705,
     UMINUS = 706,
     TYPECAST = 707
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
#line 544 "gram.h"
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

