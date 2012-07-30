
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
     SQL_ALLOCATE = 258,
     SQL_AUTOCOMMIT = 259,
     SQL_BOOL = 260,
     SQL_BREAK = 261,
     SQL_CALL = 262,
     SQL_CARDINALITY = 263,
     SQL_CONNECT = 264,
     SQL_COUNT = 265,
     SQL_DATETIME_INTERVAL_CODE = 266,
     SQL_DATETIME_INTERVAL_PRECISION = 267,
     SQL_DESCRIBE = 268,
     SQL_DESCRIPTOR = 269,
     SQL_DISCONNECT = 270,
     SQL_FOUND = 271,
     SQL_FREE = 272,
     SQL_GET = 273,
     SQL_GO = 274,
     SQL_GOTO = 275,
     SQL_IDENTIFIED = 276,
     SQL_INDICATOR = 277,
     SQL_KEY_MEMBER = 278,
     SQL_LENGTH = 279,
     SQL_LONG = 280,
     SQL_NULLABLE = 281,
     SQL_OCTET_LENGTH = 282,
     SQL_OPEN = 283,
     SQL_OUTPUT = 284,
     SQL_REFERENCE = 285,
     SQL_RETURNED_LENGTH = 286,
     SQL_RETURNED_OCTET_LENGTH = 287,
     SQL_SCALE = 288,
     SQL_SECTION = 289,
     SQL_SHORT = 290,
     SQL_SIGNED = 291,
     SQL_SQL = 292,
     SQL_SQLERROR = 293,
     SQL_SQLPRINT = 294,
     SQL_SQLWARNING = 295,
     SQL_START = 296,
     SQL_STOP = 297,
     SQL_STRUCT = 298,
     SQL_UNSIGNED = 299,
     SQL_VAR = 300,
     SQL_WHENEVER = 301,
     S_ADD = 302,
     S_AND = 303,
     S_ANYTHING = 304,
     S_AUTO = 305,
     S_CONST = 306,
     S_DEC = 307,
     S_DIV = 308,
     S_DOTPOINT = 309,
     S_EQUAL = 310,
     S_EXTERN = 311,
     S_INC = 312,
     S_LSHIFT = 313,
     S_MEMPOINT = 314,
     S_MEMBER = 315,
     S_MOD = 316,
     S_MUL = 317,
     S_NEQUAL = 318,
     S_OR = 319,
     S_REGISTER = 320,
     S_RSHIFT = 321,
     S_STATIC = 322,
     S_SUB = 323,
     S_VOLATILE = 324,
     S_TYPEDEF = 325,
     TYPECAST = 326,
     CSTRING = 327,
     CVARIABLE = 328,
     CPP_LINE = 329,
     IP = 330,
     DOLCONST = 331,
     ECONST = 332,
     NCONST = 333,
     UCONST = 334,
     UIDENT = 335,
     ABORT_P = 336,
     ABSOLUTE_P = 337,
     ACCESS = 338,
     ACTION = 339,
     ADD_P = 340,
     ADMIN = 341,
     AFTER = 342,
     AGGREGATE = 343,
     ALGORITHM = 344,
     ALL = 345,
     ALSO = 346,
     ALTER = 347,
     ALWAYS = 348,
     ANALYSE = 349,
     ANALYZE = 350,
     AND = 351,
     ANY = 352,
     ARRAY = 353,
     AS = 354,
     ASC = 355,
     ASOF = 356,
     ASSERTION = 357,
     ASSIGNMENT = 358,
     ASYMMETRIC = 359,
     AT = 360,
     ATTRIBUTES = 361,
     AUTHORIZATION = 362,
     AVERAGE = 363,
     BACKWARD = 364,
     BEFORE = 365,
     BEGIN_P = 366,
     BETWEEN = 367,
     BIGINT = 368,
     BINARY = 369,
     BIT = 370,
     BOOLEAN_P = 371,
     BOTH = 372,
     BOTTOMUP = 373,
     BY = 374,
     CACHE = 375,
     CALLED = 376,
     CASCADE = 377,
     CASCADED = 378,
     CASE = 379,
     CAST = 380,
     CATALOG_P = 381,
     CHAIN = 382,
     CHAR_P = 383,
     CHARACTER = 384,
     CHARACTERISTICS = 385,
     CHECK = 386,
     CHECKPOINT = 387,
     CHOOSE = 388,
     CLASS = 389,
     CLOSE = 390,
     CLUSTER = 391,
     COALESCE = 392,
     COLLATE = 393,
     COLUMN = 394,
     COMMENT = 395,
     COMMIT = 396,
     COMMITTED = 397,
     COMPLETE = 398,
     CONCURRENTLY = 399,
     CONFIDENCE = 400,
     CONFIGURATION = 401,
     CONNECTION = 402,
     CONSTRAINT = 403,
     CONSTRAINTS = 404,
     CONTENT_P = 405,
     CONTINUE_P = 406,
     CONVERSION_P = 407,
     COPY = 408,
     CORRELATION = 409,
     COST = 410,
     CREATE = 411,
     CREATEDB = 412,
     CREATEROLE = 413,
     CREATEUSER = 414,
     CROSS = 415,
     CSV = 416,
     CURRENT_P = 417,
     CURRENT_CATALOG = 418,
     CURRENT_DATE = 419,
     CURRENT_ROLE = 420,
     CURRENT_SCHEMA = 421,
     CURRENT_TIME = 422,
     CURRENT_TIMESTAMP = 423,
     CURRENT_USER = 424,
     CURSOR = 425,
     CYCLE = 426,
     DATA_P = 427,
     DATABASE = 428,
     DAY_P = 429,
     DEALLOCATE = 430,
     DEC = 431,
     DECIMAL_P = 432,
     DECLARE = 433,
     DECOMPOSE = 434,
     DEFAULT = 435,
     DEFAULTS = 436,
     DEFERRABLE = 437,
     DEFERRED = 438,
     DEFINER = 439,
     DELETE_P = 440,
     DELIMITER = 441,
     DELIMITERS = 442,
     DESC = 443,
     DICTIONARY = 444,
     DIMENSION = 445,
     DISABLE_P = 446,
     DISAGGREGATE = 447,
     DISAGGSCHEME = 448,
     DISCARD = 449,
     DISTINCT = 450,
     DO = 451,
     DOCUMENT_P = 452,
     DOMAIN_P = 453,
     DOUBLE_P = 454,
     DROP = 455,
     EACH = 456,
     ELSE = 457,
     ENABLE_P = 458,
     ENCODING = 459,
     ENCRYPTED = 460,
     END_P = 461,
     ENUM_P = 462,
     ERRORLIMIT = 463,
     ESCAPE = 464,
     EXCEPT = 465,
     EXCLUDING = 466,
     EXCLUSIVE = 467,
     EXECUTE = 468,
     EXISTS = 469,
     EXPLAIN = 470,
     EXTERNAL = 471,
     EXTRACT = 472,
     FALSE_P = 473,
     FAMILY = 474,
     FETCH = 475,
     FILL = 476,
     FILLING = 477,
     FIRST = 478,
     FIRST_P = 479,
     FLOAT_P = 480,
     FOLLOWING = 481,
     FOR = 482,
     FORCE = 483,
     FORECAST = 484,
     FOREIGN = 485,
     FORWARD = 486,
     FREEZE = 487,
     FROM = 488,
     FULL = 489,
     FUNC = 490,
     FUNCTION = 491,
     GLOBAL = 492,
     GRANT = 493,
     GRANTED = 494,
     GREATEST = 495,
     GREEDY = 496,
     GROUP_P = 497,
     HANDLER = 498,
     HAVING = 499,
     HEADER_P = 500,
     HOLD = 501,
     HOUR_P = 502,
     IDENTITY_P = 503,
     IF_P = 504,
     ILIKE = 505,
     IMMEDIATE = 506,
     IMMUTABLE = 507,
     IMPLICIT_P = 508,
     IN_P = 509,
     INCLUDING = 510,
     INCREMENT = 511,
     INDEX = 512,
     INDEXES = 513,
     INHERIT = 514,
     INHERITS = 515,
     INITIALLY = 516,
     INNER_P = 517,
     INOUT = 518,
     INPUT_P = 519,
     INSENSITIVE = 520,
     INSERT = 521,
     INSTEAD = 522,
     INT_P = 523,
     INTEGER = 524,
     INTERSECT = 525,
     INTERVAL = 526,
     INTERVALP = 527,
     INTO = 528,
     INVOKER = 529,
     IS = 530,
     ISNULL = 531,
     ISOLATION = 532,
     JOIN = 533,
     KEY = 534,
     KEYS = 535,
     LANCOMPILER = 536,
     LANGUAGE = 537,
     LARGE_P = 538,
     LAST_P = 539,
     LAYERS = 540,
     LC_COLLATE_P = 541,
     LC_CTYPE_P = 542,
     LEADING = 543,
     LEAST = 544,
     LEFT = 545,
     LEVEL = 546,
     LIKE = 547,
     LIMIT = 548,
     LISTEN = 549,
     LOAD = 550,
     LOCAL = 551,
     LOCALTIME = 552,
     LOCALTIMESTAMP = 553,
     LOCATION = 554,
     LOCK_P = 555,
     LOGIN_P = 556,
     MAINTENANCE = 557,
     MAPPING = 558,
     MATCH = 559,
     MAXVALUE = 560,
     METHOD = 561,
     MINUTE_P = 562,
     MINVALUE = 563,
     MODE = 564,
     MODEL = 565,
     MODELGRAPH = 566,
     MODELINDEX = 567,
     MONTH_P = 568,
     MOVE = 569,
     MULT = 570,
     NAME_P = 571,
     NAMES = 572,
     NATIONAL = 573,
     NATURAL = 574,
     NCHAR = 575,
     NEW = 576,
     NEXT = 577,
     NO = 578,
     NOCREATEDB = 579,
     NOCREATEROLE = 580,
     NOCREATEUSER = 581,
     NOINHERIT = 582,
     NOLOGIN_P = 583,
     NONE = 584,
     NOSUPERUSER = 585,
     NOT = 586,
     NOTHING = 587,
     NOTIFY = 588,
     NOTNULL = 589,
     NOWAIT = 590,
     NULL_P = 591,
     NULLIF = 592,
     NULLS_P = 593,
     NUMBER = 594,
     NUMERIC = 595,
     OBJECT_P = 596,
     OF = 597,
     OFF = 598,
     OFFSET = 599,
     OIDS = 600,
     OLD = 601,
     ON = 602,
     ONDEMAND = 603,
     ONLY = 604,
     OPERATOR = 605,
     OPTION = 606,
     OPTIONS = 607,
     OR = 608,
     ORDER = 609,
     OUT_P = 610,
     OUTER_P = 611,
     OVER = 612,
     OVERLAPS = 613,
     OVERLAY = 614,
     OWNED = 615,
     OWNER = 616,
     PARAMETERS = 617,
     PARSER = 618,
     PARTIAL = 619,
     PARTITION = 620,
     PASSWORD = 621,
     PLACING = 622,
     PLANS = 623,
     POSITION = 624,
     PRECEDING = 625,
     PRECISION = 626,
     PRESERVE = 627,
     PREPARE = 628,
     PREPARED = 629,
     PRIMARY = 630,
     PRINT = 631,
     PRIOR = 632,
     PRIVILEGES = 633,
     PROCEDURAL = 634,
     PROCEDURE = 635,
     QCACHE = 636,
     QUARTER_P = 637,
     QUOTE = 638,
     RANGE = 639,
     READ = 640,
     REAL = 641,
     REASSIGN = 642,
     RECHECK = 643,
     RECURSIVE = 644,
     REESTIMATE = 645,
     REFERENCES = 646,
     REINDEX = 647,
     RELATIVE_P = 648,
     RELEASE = 649,
     RENAME = 650,
     REPEATABLE = 651,
     REPLACE = 652,
     REPLICA = 653,
     RESET = 654,
     RESTART = 655,
     RESTORE = 656,
     RESTRICT = 657,
     RETURNING = 658,
     RETURNS = 659,
     REVOKE = 660,
     RIGHT = 661,
     ROLE = 662,
     ROLLBACK = 663,
     ROW = 664,
     ROWS = 665,
     RULE = 666,
     SAVEPOINT = 667,
     SCHEMA = 668,
     SCROLL = 669,
     SEARCH = 670,
     SEASON = 671,
     SECOND_P = 672,
     SECURITY = 673,
     SELECT = 674,
     SEQUENCE = 675,
     SERIALIZABLE = 676,
     SERVER = 677,
     SESSION = 678,
     SESSION_USER = 679,
     SET = 680,
     SETOF = 681,
     SHARE = 682,
     SHOW = 683,
     SIMILAR = 684,
     SIMPLE = 685,
     SIMPLEREESTIMATE = 686,
     SMALLINT = 687,
     SOME = 688,
     STABLE = 689,
     STANDALONE_P = 690,
     START = 691,
     STATEMENT = 692,
     STATISTICS = 693,
     STRATEGY = 694,
     STDIN = 695,
     STDOUT = 696,
     STORAGE = 697,
     STORE = 698,
     STRICT_P = 699,
     STRIP_P = 700,
     SUBSTRING = 701,
     SUPERUSER_P = 702,
     SYMMETRIC = 703,
     SYSID = 704,
     SYSTEM_P = 705,
     TABLE = 706,
     TABLESPACE = 707,
     TEMP = 708,
     TEMPLATE = 709,
     TEMPORARY = 710,
     TEXT_P = 711,
     THEN = 712,
     TIME = 713,
     TIMESERIES = 714,
     TIMESTAMP = 715,
     TO = 716,
     TOPDOWN = 717,
     TRAILING = 718,
     TRAINING_DATA = 719,
     TRANSACTION = 720,
     TREAT = 721,
     TRIGGER = 722,
     TRIM = 723,
     TRUE_P = 724,
     TRUNCATE = 725,
     TRUSTED = 726,
     TYPE_P = 727,
     UNBOUNDED = 728,
     UNCOMMITTED = 729,
     UNENCRYPTED = 730,
     UNION = 731,
     UNIQUE = 732,
     UNKNOWN = 733,
     UNLISTEN = 734,
     UNTIL = 735,
     UPDATE = 736,
     USER = 737,
     USING = 738,
     VACUUM = 739,
     VALID = 740,
     VALIDATOR = 741,
     VALUE_P = 742,
     VALUES = 743,
     VARCHAR = 744,
     VARIADIC = 745,
     VARYING = 746,
     VERBOSE = 747,
     VERSION_P = 748,
     VIEW = 749,
     VOLATILE = 750,
     WEEK_P = 751,
     WHEN = 752,
     WHERE = 753,
     WHITESPACE_P = 754,
     WINDOW = 755,
     WITH = 756,
     WITHOUT = 757,
     WORK = 758,
     WRAPPER = 759,
     WRITE = 760,
     XML_P = 761,
     XMLATTRIBUTES = 762,
     XMLCONCAT = 763,
     XMLELEMENT = 764,
     XMLFOREST = 765,
     XMLPARSE = 766,
     XMLPI = 767,
     XMLROOT = 768,
     XMLSERIALIZE = 769,
     YEAR_P = 770,
     YES_P = 771,
     ZONE = 772,
     NULLS_FIRST = 773,
     NULLS_LAST = 774,
     WITH_TIME = 775,
     IDENT = 776,
     FCONST = 777,
     SCONST = 778,
     BCONST = 779,
     XCONST = 780,
     Op = 781,
     ICONST = 782,
     PARAM = 783,
     POSTFIXOP = 784,
     UMINUS = 785
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 387 "preproc.y"

	double	dval;
	char	*str;
	int     ival;
	struct	when		action;
	struct	index		index;
	int		tagname;
	struct	this_type	type;
	enum	ECPGttype	type_enum;
	enum	ECPGdtype	dtype_enum;
	struct	fetch_desc	descriptor;
	struct  su_symbol	struct_union;
	struct	prep		prep;



/* Line 1676 of yacc.c  */
#line 599 "preproc.h"
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

