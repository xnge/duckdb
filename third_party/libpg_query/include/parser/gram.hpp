/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> cd57a6c5f (Implicitly typed constraints working)
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     FCONST = 259,
     SCONST = 260,
     BCONST = 261,
     XCONST = 262,
     Op = 263,
     ICONST = 264,
     PARAM = 265,
     TYPECAST = 266,
     DOT_DOT = 267,
     COLON_EQUALS = 268,
     EQUALS_GREATER = 269,
     LAMBDA_ARROW = 270,
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> cd57a6c5f (Implicitly typed constraints working)
     POWER_OF = 271,
     LESS_EQUALS = 272,
     GREATER_EQUALS = 273,
     NOT_EQUALS = 274,
     ABORT_P = 275,
     ABSOLUTE_P = 276,
     ACCESS = 277,
     ACTION = 278,
     ADD_P = 279,
     ADMIN = 280,
     AFTER = 281,
     AGGREGATE = 282,
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 4db86e588 (Update Alias Type)
     ALL = 283,
     ALSO = 284,
     ALTER = 285,
     ALWAYS = 286,
     ANALYSE = 287,
     ANALYZE = 288,
     AND = 289,
     ANY = 290,
     ARRAY = 291,
     AS = 292,
     ASC_P = 293,
     ASSERTION = 294,
     ASSIGNMENT = 295,
     ASYMMETRIC = 296,
     AT = 297,
     ATTACH = 298,
     ATTRIBUTE = 299,
     AUTHORIZATION = 300,
     BACKWARD = 301,
     BEFORE = 302,
     BEGIN_P = 303,
     BETWEEN = 304,
     BIGINT = 305,
     BINARY = 306,
     BIT = 307,
     BOOLEAN_P = 308,
     BOTH = 309,
     BY = 310,
     CACHE = 311,
     CALL_P = 312,
     CALLED = 313,
     CASCADE = 314,
     CASCADED = 315,
     CASE = 316,
     CAST = 317,
     CATALOG_P = 318,
     CHAIN = 319,
     CHAR_P = 320,
     CHARACTER = 321,
     CHARACTERISTICS = 322,
     CHECK_P = 323,
     CHECKPOINT = 324,
     CLASS = 325,
     CLOSE = 326,
     CLUSTER = 327,
     COALESCE = 328,
     COLLATE = 329,
     COLLATION = 330,
     COLUMN = 331,
     COLUMNS = 332,
     COMMENT = 333,
     COMMENTS = 334,
     COMMIT = 335,
     COMMITTED = 336,
     COMPRESSION = 337,
     CONCURRENTLY = 338,
     CONFIGURATION = 339,
     CONFLICT = 340,
     CONNECTION = 341,
     CONSTRAINT = 342,
     CONSTRAINTS = 343,
     CONTENT_P = 344,
     CONTINUE_P = 345,
     CONVERSION_P = 346,
     COPY = 347,
     COST = 348,
     CREATE_P = 349,
     CROSS = 350,
     CSV = 351,
     CUBE = 352,
     CURRENT_P = 353,
     CURRENT_CATALOG = 354,
     CURRENT_DATE = 355,
     CURRENT_ROLE = 356,
     CURRENT_SCHEMA = 357,
     CURRENT_TIME = 358,
     CURRENT_TIMESTAMP = 359,
     CURRENT_USER = 360,
     CURSOR = 361,
     CYCLE = 362,
     DATA_P = 363,
     DATABASE = 364,
     DAY_P = 365,
     DAYS_P = 366,
     DEALLOCATE = 367,
     DEC = 368,
     DECIMAL_P = 369,
     DECLARE = 370,
     DEFAULT = 371,
     DEFAULTS = 372,
     DEFERRABLE = 373,
     DEFERRED = 374,
     DEFINER = 375,
     DELETE_P = 376,
     DELIMITER = 377,
     DELIMITERS = 378,
     DEPENDS = 379,
     DESC_P = 380,
     DESCRIBE = 381,
     DETACH = 382,
     DICTIONARY = 383,
     DISABLE_P = 384,
     DISCARD = 385,
     DISTINCT = 386,
     DO = 387,
     DOCUMENT_P = 388,
     DOMAIN_P = 389,
     DOUBLE_P = 390,
     DROP = 391,
     EACH = 392,
     ELSE = 393,
     ENABLE_P = 394,
     ENCODING = 395,
     ENCRYPTED = 396,
     END_P = 397,
     ENUM_P = 398,
     ESCAPE = 399,
     EVENT = 400,
     EXCEPT = 401,
     EXCLUDE = 402,
     EXCLUDING = 403,
     EXCLUSIVE = 404,
     EXECUTE = 405,
     EXISTS = 406,
     EXPLAIN = 407,
     EXPORT_P = 408,
     EXPORT_STATE = 409,
     EXTENSION = 410,
     EXTERNAL = 411,
     EXTRACT = 412,
     FALSE_P = 413,
     FAMILY = 414,
     FETCH = 415,
     FILTER = 416,
     FIRST_P = 417,
     FLOAT_P = 418,
     FOLLOWING = 419,
     FOR = 420,
     FORCE = 421,
     FOREIGN = 422,
     FORWARD = 423,
     FREEZE = 424,
     FROM = 425,
     FULL = 426,
     FUNCTION = 427,
     FUNCTIONS = 428,
     GENERATED = 429,
     GLOB = 430,
     GLOBAL = 431,
     GRANT = 432,
     GRANTED = 433,
     GROUP_P = 434,
     GROUPING = 435,
     GROUPING_ID = 436,
     HANDLER = 437,
     HAVING = 438,
     HEADER_P = 439,
     HOLD = 440,
     HOUR_P = 441,
     HOURS_P = 442,
     IDENTITY_P = 443,
     IF_P = 444,
     IGNORE_P = 445,
     ILIKE = 446,
     IMMEDIATE = 447,
     IMMUTABLE = 448,
     IMPLICIT_P = 449,
     IMPORT_P = 450,
     IN_P = 451,
     INCLUDING = 452,
     INCREMENT = 453,
     INDEX = 454,
     INDEXES = 455,
     INHERIT = 456,
     INHERITS = 457,
     INITIALLY = 458,
     INLINE_P = 459,
     INNER_P = 460,
     INOUT = 461,
     INPUT_P = 462,
     INSENSITIVE = 463,
     INSERT = 464,
     INSTALL = 465,
     INSTEAD = 466,
     INT_P = 467,
     INTEGER = 468,
     INTERSECT = 469,
     INTERVAL = 470,
     INTO = 471,
     INVOKER = 472,
     IS = 473,
     ISNULL = 474,
     ISOLATION = 475,
     JOIN = 476,
     JSON = 477,
     KEY = 478,
     LABEL = 479,
     LANGUAGE = 480,
     LARGE_P = 481,
     LAST_P = 482,
     LATERAL_P = 483,
     LEADING = 484,
     LEAKPROOF = 485,
     LEFT = 486,
     LEVEL = 487,
     LIKE = 488,
     LIMIT = 489,
     LISTEN = 490,
     LOAD = 491,
     LOCAL = 492,
     LOCALTIME = 493,
     LOCALTIMESTAMP = 494,
     LOCATION = 495,
     LOCK_P = 496,
     LOCKED = 497,
     LOGGED = 498,
     MACRO = 499,
     MAP = 500,
     MAPPING = 501,
     MATCH = 502,
     MATERIALIZED = 503,
     MAXVALUE = 504,
     METHOD = 505,
     MICROSECOND_P = 506,
     MICROSECONDS_P = 507,
     MILLISECOND_P = 508,
     MILLISECONDS_P = 509,
     MINUTE_P = 510,
     MINUTES_P = 511,
     MINVALUE = 512,
     MODE = 513,
     MONTH_P = 514,
     MONTHS_P = 515,
     MOVE = 516,
     NAME_P = 517,
     NAMES = 518,
     NATIONAL = 519,
     NATURAL = 520,
     NCHAR = 521,
     NEW = 522,
     NEXT = 523,
     NO = 524,
     NONE = 525,
     NOT = 526,
     NOTHING = 527,
     NOTIFY = 528,
     NOTNULL = 529,
     NOWAIT = 530,
     NULL_P = 531,
     NULLIF = 532,
     NULLS_P = 533,
     NUMERIC = 534,
     OBJECT_P = 535,
     OF = 536,
     OFF = 537,
     OFFSET = 538,
     OIDS = 539,
     OLD = 540,
     ON = 541,
     ONLY = 542,
     OPERATOR = 543,
     OPTION = 544,
     OPTIONS = 545,
     OR = 546,
     ORDER = 547,
     ORDINALITY = 548,
     OUT_P = 549,
     OUTER_P = 550,
     OVER = 551,
     OVERLAPS = 552,
     OVERLAY = 553,
     OVERRIDING = 554,
     OWNED = 555,
     OWNER = 556,
     PARALLEL = 557,
     PARSER = 558,
     PARTIAL = 559,
     PARTITION = 560,
     PASSING = 561,
     PASSWORD = 562,
     PERCENT = 563,
     PLACING = 564,
     PLANS = 565,
     POLICY = 566,
     POSITION = 567,
     PRAGMA_P = 568,
     PRECEDING = 569,
     PRECISION = 570,
     PREPARE = 571,
     PREPARED = 572,
     PRESERVE = 573,
     PRIMARY = 574,
     PRIOR = 575,
     PRIVILEGES = 576,
     PROCEDURAL = 577,
     PROCEDURE = 578,
     PROGRAM = 579,
     PUBLICATION = 580,
     QUALIFY = 581,
     QUOTE = 582,
     RANGE = 583,
     READ_P = 584,
     REAL = 585,
     REASSIGN = 586,
     RECHECK = 587,
     RECURSIVE = 588,
     REF = 589,
     REFERENCES = 590,
     REFERENCING = 591,
     REFRESH = 592,
     REINDEX = 593,
     RELATIVE_P = 594,
     RELEASE = 595,
     RENAME = 596,
     REPEATABLE = 597,
     REPLACE = 598,
     REPLICA = 599,
     RESET = 600,
     RESPECT_P = 601,
     RESTART = 602,
     RESTRICT = 603,
     RETURNING = 604,
     RETURNS = 605,
     REVOKE = 606,
     RIGHT = 607,
     ROLE = 608,
     ROLLBACK = 609,
     ROLLUP = 610,
     ROW = 611,
     ROWS = 612,
     RULE = 613,
     SAMPLE = 614,
     SAVEPOINT = 615,
     SCHEMA = 616,
     SCHEMAS = 617,
     SCROLL = 618,
     SEARCH = 619,
     SECOND_P = 620,
     SECONDS_P = 621,
     SECURITY = 622,
     SELECT = 623,
     SEQUENCE = 624,
     SEQUENCES = 625,
     SERIALIZABLE = 626,
     SERVER = 627,
     SESSION = 628,
     SESSION_USER = 629,
     SET = 630,
     SETOF = 631,
     SETS = 632,
     SHARE = 633,
     SHOW = 634,
     SIMILAR = 635,
     SIMPLE = 636,
     SKIP = 637,
     SMALLINT = 638,
     SNAPSHOT = 639,
     SOME = 640,
     SQL_P = 641,
     STABLE = 642,
     STANDALONE_P = 643,
     START = 644,
     STATEMENT = 645,
     STATISTICS = 646,
     STDIN = 647,
     STDOUT = 648,
     STORAGE = 649,
<<<<<<< HEAD
<<<<<<< HEAD
=======
     LESS_EQUALS = 271,
     GREATER_EQUALS = 272,
     NOT_EQUALS = 273,
     ABORT_P = 274,
     ABSOLUTE_P = 275,
     ACCESS = 276,
     ACTION = 277,
     ADD_P = 278,
     ADMIN = 279,
     AFTER = 280,
     AGGREGATE = 281,
     ALL = 282,
     ALSO = 283,
     ALTER = 284,
     ALWAYS = 285,
     ANALYSE = 286,
     ANALYZE = 287,
     AND = 288,
     ANY = 289,
     ARRAY = 290,
     AS = 291,
     ASC_P = 292,
     ASSERTION = 293,
     ASSIGNMENT = 294,
     ASYMMETRIC = 295,
     AT = 296,
     ATTACH = 297,
     ATTRIBUTE = 298,
     AUTHORIZATION = 299,
     BACKWARD = 300,
     BEFORE = 301,
     BEGIN_P = 302,
     BETWEEN = 303,
     BIGINT = 304,
     BINARY = 305,
     BIT = 306,
     BOOLEAN_P = 307,
     BOTH = 308,
     BY = 309,
     CACHE = 310,
     CALL_P = 311,
     CALLED = 312,
     CASCADE = 313,
     CASCADED = 314,
     CASE = 315,
     CAST = 316,
     CATALOG_P = 317,
     CHAIN = 318,
     CHAR_P = 319,
     CHARACTER = 320,
     CHARACTERISTICS = 321,
     CHECK_P = 322,
     CHECKPOINT = 323,
     CLASS = 324,
     CLOSE = 325,
     CLUSTER = 326,
     COALESCE = 327,
     COLLATE = 328,
     COLLATION = 329,
     COLUMN = 330,
     COLUMNS = 331,
     COMMENT = 332,
     COMMENTS = 333,
     COMMIT = 334,
     COMMITTED = 335,
     COMPRESSION = 336,
     CONCURRENTLY = 337,
     CONFIGURATION = 338,
     CONFLICT = 339,
     CONNECTION = 340,
     CONSTRAINT = 341,
     CONSTRAINTS = 342,
     CONTENT_P = 343,
     CONTINUE_P = 344,
     CONVERSION_P = 345,
     COPY = 346,
     COST = 347,
     CREATE_P = 348,
     CROSS = 349,
     CSV = 350,
     CUBE = 351,
     CURRENT_P = 352,
     CURRENT_CATALOG = 353,
     CURRENT_DATE = 354,
     CURRENT_ROLE = 355,
     CURRENT_SCHEMA = 356,
     CURRENT_TIME = 357,
     CURRENT_TIMESTAMP = 358,
     CURRENT_USER = 359,
     CURSOR = 360,
     CYCLE = 361,
     DATA_P = 362,
     DATABASE = 363,
     DAY_P = 364,
     DAYS_P = 365,
     DEALLOCATE = 366,
     DEC = 367,
     DECIMAL_P = 368,
     DECLARE = 369,
     DEFAULT = 370,
     DEFAULTS = 371,
     DEFERRABLE = 372,
     DEFERRED = 373,
     DEFINER = 374,
     DELETE_P = 375,
     DELIMITER = 376,
     DELIMITERS = 377,
     DEPENDS = 378,
     DESC_P = 379,
     DESCRIBE = 380,
     DETACH = 381,
     DICTIONARY = 382,
     DISABLE_P = 383,
     DISCARD = 384,
     DISTINCT = 385,
     DO = 386,
     DOCUMENT_P = 387,
     DOMAIN_P = 388,
     DOUBLE_P = 389,
     DROP = 390,
     EACH = 391,
     ELSE = 392,
     ENABLE_P = 393,
     ENCODING = 394,
     ENCRYPTED = 395,
     END_P = 396,
     ENUM_P = 397,
     ESCAPE = 398,
     EVENT = 399,
     EXCEPT = 400,
     EXCLUDE = 401,
     EXCLUDING = 402,
     EXCLUSIVE = 403,
     EXECUTE = 404,
     EXISTS = 405,
     EXPLAIN = 406,
     EXPORT_P = 407,
     EXPORT_STATE = 408,
     EXTENSION = 409,
     EXTERNAL = 410,
     EXTRACT = 411,
     FALSE_P = 412,
     FAMILY = 413,
     FETCH = 414,
     FILTER = 415,
     FIRST_P = 416,
     FLOAT_P = 417,
     FOLLOWING = 418,
     FOR = 419,
     FORCE = 420,
     FOREIGN = 421,
     FORWARD = 422,
     FREEZE = 423,
     FROM = 424,
     FULL = 425,
     FUNCTION = 426,
     FUNCTIONS = 427,
     GENERATED = 428,
     GLOB = 429,
     GLOBAL = 430,
     GRANT = 431,
     GRANTED = 432,
     GROUP_P = 433,
     GROUPING = 434,
     GROUPING_ID = 435,
     HANDLER = 436,
     HAVING = 437,
     HEADER_P = 438,
     HOLD = 439,
     HOUR_P = 440,
     HOURS_P = 441,
     IDENTITY_P = 442,
     IF_P = 443,
     IGNORE_P = 444,
     ILIKE = 445,
     IMMEDIATE = 446,
     IMMUTABLE = 447,
     IMPLICIT_P = 448,
     IMPORT_P = 449,
     IN_P = 450,
     INCLUDING = 451,
     INCREMENT = 452,
     INDEX = 453,
     INDEXES = 454,
     INHERIT = 455,
     INHERITS = 456,
     INITIALLY = 457,
     INLINE_P = 458,
     INNER_P = 459,
     INOUT = 460,
     INPUT_P = 461,
     INSENSITIVE = 462,
     INSERT = 463,
     INSTALL = 464,
     INSTEAD = 465,
     INT_P = 466,
     INTEGER = 467,
     INTERSECT = 468,
     INTERVAL = 469,
     INTO = 470,
     INVOKER = 471,
     IS = 472,
     ISNULL = 473,
     ISOLATION = 474,
     JOIN = 475,
     JSON = 476,
     KEY = 477,
     LABEL = 478,
     LANGUAGE = 479,
     LARGE_P = 480,
     LAST_P = 481,
     LATERAL_P = 482,
     LEADING = 483,
     LEAKPROOF = 484,
     LEFT = 485,
     LEVEL = 486,
     LIKE = 487,
     LIMIT = 488,
     LISTEN = 489,
     LOAD = 490,
     LOCAL = 491,
     LOCALTIME = 492,
     LOCALTIMESTAMP = 493,
     LOCATION = 494,
     LOCK_P = 495,
     LOCKED = 496,
     LOGGED = 497,
     MACRO = 498,
     MAP = 499,
     MAPPING = 500,
     MATCH = 501,
     MATERIALIZED = 502,
     MAXVALUE = 503,
     METHOD = 504,
     MICROSECOND_P = 505,
     MICROSECONDS_P = 506,
     MILLISECOND_P = 507,
     MILLISECONDS_P = 508,
     MINUTE_P = 509,
     MINUTES_P = 510,
     MINVALUE = 511,
     MODE = 512,
     MONTH_P = 513,
     MONTHS_P = 514,
     MOVE = 515,
     NAME_P = 516,
     NAMES = 517,
     NATIONAL = 518,
     NATURAL = 519,
     NCHAR = 520,
     NEW = 521,
     NEXT = 522,
     NO = 523,
     NONE = 524,
     NOT = 525,
     NOTHING = 526,
     NOTIFY = 527,
     NOTNULL = 528,
     NOWAIT = 529,
     NULL_P = 530,
     NULLIF = 531,
     NULLS_P = 532,
     NUMERIC = 533,
     OBJECT_P = 534,
     OF = 535,
     OFF = 536,
     OFFSET = 537,
     OIDS = 538,
     OLD = 539,
     ON = 540,
     ONLY = 541,
     OPERATOR = 542,
     OPTION = 543,
     OPTIONS = 544,
     OR = 545,
     ORDER = 546,
     ORDINALITY = 547,
     OUT_P = 548,
     OUTER_P = 549,
     OVER = 550,
     OVERLAPS = 551,
     OVERLAY = 552,
     OVERRIDING = 553,
     OWNED = 554,
     OWNER = 555,
     PARALLEL = 556,
     PARSER = 557,
     PARTIAL = 558,
     PARTITION = 559,
     PASSING = 560,
     PASSWORD = 561,
     PERCENT = 562,
     PLACING = 563,
     PLANS = 564,
     POLICY = 565,
     POSITION = 566,
     PRAGMA_P = 567,
     PRECEDING = 568,
     PRECISION = 569,
     PREPARE = 570,
     PREPARED = 571,
     PRESERVE = 572,
     PRIMARY = 573,
     PRIOR = 574,
     PRIVILEGES = 575,
     PROCEDURAL = 576,
     PROCEDURE = 577,
     PROGRAM = 578,
     PUBLICATION = 579,
     QUALIFY = 580,
     QUOTE = 581,
     RANGE = 582,
     READ_P = 583,
     REAL = 584,
     REASSIGN = 585,
     RECHECK = 586,
     RECURSIVE = 587,
     REF = 588,
     REFERENCES = 589,
     REFERENCING = 590,
     REFRESH = 591,
     REINDEX = 592,
     RELATIVE_P = 593,
     RELEASE = 594,
     RENAME = 595,
     REPEATABLE = 596,
     REPLACE = 597,
     REPLICA = 598,
     RESET = 599,
     RESPECT_P = 600,
     RESTART = 601,
     RESTRICT = 602,
     RETURNING = 603,
     RETURNS = 604,
     REVOKE = 605,
     RIGHT = 606,
     ROLE = 607,
     ROLLBACK = 608,
     ROLLUP = 609,
     ROW = 610,
     ROWS = 611,
     RULE = 612,
     SAMPLE = 613,
     SAVEPOINT = 614,
     SCHEMA = 615,
     SCHEMAS = 616,
     SCROLL = 617,
     SEARCH = 618,
     SECOND_P = 619,
     SECONDS_P = 620,
     SECURITY = 621,
     SELECT = 622,
     SEQUENCE = 623,
     SEQUENCES = 624,
     SERIALIZABLE = 625,
     SERVER = 626,
     SESSION = 627,
     SESSION_USER = 628,
     SET = 629,
     SETOF = 630,
     SETS = 631,
     SHARE = 632,
     SHOW = 633,
     SIMILAR = 634,
     SIMPLE = 635,
     SKIP = 636,
     SMALLINT = 637,
     SNAPSHOT = 638,
     SOME = 639,
     SQL_P = 640,
     STABLE = 641,
     STANDALONE_P = 642,
     START = 643,
     STATEMENT = 644,
     STATISTICS = 645,
     STDIN = 646,
     STDOUT = 647,
     STORAGE = 648,
     STORED = 649,
>>>>>>> 685d6e15e (added support in the grammar for VIRTUAL generated columns)
=======
>>>>>>> 4db86e588 (Update Alias Type)
     STRICT_P = 650,
     STRIP_P = 651,
     STRUCT = 652,
     SUBSCRIPTION = 653,
     SUBSTRING = 654,
     SUMMARIZE = 655,
     SYMMETRIC = 656,
     SYSID = 657,
     SYSTEM_P = 658,
     TABLE = 659,
     TABLES = 660,
     TABLESAMPLE = 661,
     TABLESPACE = 662,
     TEMP = 663,
     TEMPLATE = 664,
     TEMPORARY = 665,
     TEXT_P = 666,
     THEN = 667,
     TIME = 668,
     TIMESTAMP = 669,
     TO = 670,
     TRAILING = 671,
     TRANSACTION = 672,
     TRANSFORM = 673,
     TREAT = 674,
     TRIGGER = 675,
     TRIM = 676,
     TRUE_P = 677,
     TRUNCATE = 678,
     TRUSTED = 679,
     TRY_CAST = 680,
     TYPE_P = 681,
     TYPES_P = 682,
     UNBOUNDED = 683,
     UNCOMMITTED = 684,
     UNENCRYPTED = 685,
     UNION = 686,
     UNIQUE = 687,
     UNKNOWN = 688,
     UNLISTEN = 689,
     UNLOGGED = 690,
     UNTIL = 691,
     UPDATE = 692,
     USER = 693,
     USING = 694,
     VACUUM = 695,
     VALID = 696,
     VALIDATE = 697,
     VALIDATOR = 698,
     VALUE_P = 699,
     VALUES = 700,
     VARCHAR = 701,
     VARIADIC = 702,
     VARYING = 703,
     VERBOSE = 704,
     VERSION_P = 705,
     VIEW = 706,
     VIEWS = 707,
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 4db86e588 (Update Alias Type)
     VOLATILE = 708,
     WHEN = 709,
     WHERE = 710,
     WHITESPACE_P = 711,
     WINDOW = 712,
     WITH = 713,
     WITHIN = 714,
     WITHOUT = 715,
     WORK = 716,
     WRAPPER = 717,
     WRITE_P = 718,
     XML_P = 719,
     XMLATTRIBUTES = 720,
     XMLCONCAT = 721,
     XMLELEMENT = 722,
     XMLEXISTS = 723,
     XMLFOREST = 724,
     XMLNAMESPACES = 725,
     XMLPARSE = 726,
     XMLPI = 727,
     XMLROOT = 728,
     XMLSERIALIZE = 729,
     XMLTABLE = 730,
     YEAR_P = 731,
     YEARS_P = 732,
     YES_P = 733,
     ZONE = 734,
     NOT_LA = 735,
     NULLS_LA = 736,
     WITH_LA = 737,
     POSTFIXOP = 738,
     UMINUS = 739
<<<<<<< HEAD
=======
     VIRTUAL = 708,
     VOLATILE = 709,
     WHEN = 710,
     WHERE = 711,
     WHITESPACE_P = 712,
     WINDOW = 713,
     WITH = 714,
     WITHIN = 715,
     WITHOUT = 716,
     WORK = 717,
     WRAPPER = 718,
     WRITE_P = 719,
     XML_P = 720,
     XMLATTRIBUTES = 721,
     XMLCONCAT = 722,
     XMLELEMENT = 723,
     XMLEXISTS = 724,
     XMLFOREST = 725,
     XMLNAMESPACES = 726,
     XMLPARSE = 727,
     XMLPI = 728,
     XMLROOT = 729,
     XMLSERIALIZE = 730,
     XMLTABLE = 731,
     YEAR_P = 732,
     YEARS_P = 733,
     YES_P = 734,
     ZONE = 735,
     NOT_LA = 736,
     NULLS_LA = 737,
     WITH_LA = 738,
     POSTFIXOP = 739,
     UMINUS = 740
>>>>>>> 685d6e15e (added support in the grammar for VIRTUAL generated columns)
   };
#endif
/* Tokens.  */
#define IDENT 258
#define FCONST 259
#define SCONST 260
#define BCONST 261
#define XCONST 262
#define Op 263
#define ICONST 264
#define PARAM 265
#define TYPECAST 266
#define DOT_DOT 267
#define COLON_EQUALS 268
#define EQUALS_GREATER 269
#define LAMBDA_ARROW 270
<<<<<<< HEAD
#define POWER_OF 271
#define LESS_EQUALS 272
#define GREATER_EQUALS 273
#define NOT_EQUALS 274
#define ABORT_P 275
#define ABSOLUTE_P 276
#define ACCESS 277
#define ACTION 278
#define ADD_P 279
#define ADMIN 280
#define AFTER 281
#define AGGREGATE 282
#define ALL 283
#define ALSO 284
#define ALTER 285
#define ALWAYS 286
#define ANALYSE 287
#define ANALYZE 288
#define AND 289
#define ANY 290
#define ARRAY 291
#define AS 292
#define ASC_P 293
#define ASSERTION 294
#define ASSIGNMENT 295
#define ASYMMETRIC 296
#define AT 297
#define ATTACH 298
#define ATTRIBUTE 299
#define AUTHORIZATION 300
#define BACKWARD 301
#define BEFORE 302
#define BEGIN_P 303
#define BETWEEN 304
#define BIGINT 305
#define BINARY 306
#define BIT 307
#define BOOLEAN_P 308
#define BOTH 309
#define BY 310
#define CACHE 311
#define CALL_P 312
#define CALLED 313
#define CASCADE 314
#define CASCADED 315
#define CASE 316
#define CAST 317
#define CATALOG_P 318
#define CHAIN 319
#define CHAR_P 320
#define CHARACTER 321
#define CHARACTERISTICS 322
#define CHECK_P 323
#define CHECKPOINT 324
#define CLASS 325
#define CLOSE 326
#define CLUSTER 327
#define COALESCE 328
#define COLLATE 329
#define COLLATION 330
#define COLUMN 331
#define COLUMNS 332
#define COMMENT 333
#define COMMENTS 334
#define COMMIT 335
#define COMMITTED 336
#define COMPRESSION 337
#define CONCURRENTLY 338
#define CONFIGURATION 339
#define CONFLICT 340
#define CONNECTION 341
#define CONSTRAINT 342
#define CONSTRAINTS 343
#define CONTENT_P 344
#define CONTINUE_P 345
#define CONVERSION_P 346
#define COPY 347
#define COST 348
#define CREATE_P 349
#define CROSS 350
#define CSV 351
#define CUBE 352
#define CURRENT_P 353
#define CURRENT_CATALOG 354
#define CURRENT_DATE 355
#define CURRENT_ROLE 356
#define CURRENT_SCHEMA 357
#define CURRENT_TIME 358
#define CURRENT_TIMESTAMP 359
#define CURRENT_USER 360
#define CURSOR 361
#define CYCLE 362
#define DATA_P 363
#define DATABASE 364
#define DAY_P 365
#define DAYS_P 366
#define DEALLOCATE 367
#define DEC 368
#define DECIMAL_P 369
#define DECLARE 370
#define DEFAULT 371
#define DEFAULTS 372
#define DEFERRABLE 373
#define DEFERRED 374
#define DEFINER 375
#define DELETE_P 376
#define DELIMITER 377
#define DELIMITERS 378
#define DEPENDS 379
#define DESC_P 380
#define DESCRIBE 381
#define DETACH 382
#define DICTIONARY 383
#define DISABLE_P 384
#define DISCARD 385
#define DISTINCT 386
#define DO 387
#define DOCUMENT_P 388
#define DOMAIN_P 389
#define DOUBLE_P 390
#define DROP 391
#define EACH 392
#define ELSE 393
#define ENABLE_P 394
#define ENCODING 395
#define ENCRYPTED 396
#define END_P 397
#define ENUM_P 398
#define ESCAPE 399
#define EVENT 400
#define EXCEPT 401
#define EXCLUDE 402
#define EXCLUDING 403
#define EXCLUSIVE 404
#define EXECUTE 405
#define EXISTS 406
#define EXPLAIN 407
#define EXPORT_P 408
#define EXPORT_STATE 409
#define EXTENSION 410
#define EXTERNAL 411
#define EXTRACT 412
#define FALSE_P 413
#define FAMILY 414
#define FETCH 415
#define FILTER 416
#define FIRST_P 417
#define FLOAT_P 418
#define FOLLOWING 419
#define FOR 420
#define FORCE 421
#define FOREIGN 422
#define FORWARD 423
#define FREEZE 424
#define FROM 425
#define FULL 426
#define FUNCTION 427
#define FUNCTIONS 428
#define GENERATED 429
#define GLOB 430
#define GLOBAL 431
#define GRANT 432
#define GRANTED 433
#define GROUP_P 434
#define GROUPING 435
#define GROUPING_ID 436
#define HANDLER 437
#define HAVING 438
#define HEADER_P 439
#define HOLD 440
#define HOUR_P 441
#define HOURS_P 442
#define IDENTITY_P 443
#define IF_P 444
#define IGNORE_P 445
#define ILIKE 446
#define IMMEDIATE 447
#define IMMUTABLE 448
#define IMPLICIT_P 449
#define IMPORT_P 450
#define IN_P 451
#define INCLUDING 452
#define INCREMENT 453
#define INDEX 454
#define INDEXES 455
#define INHERIT 456
#define INHERITS 457
#define INITIALLY 458
#define INLINE_P 459
#define INNER_P 460
#define INOUT 461
#define INPUT_P 462
#define INSENSITIVE 463
#define INSERT 464
#define INSTALL 465
#define INSTEAD 466
#define INT_P 467
#define INTEGER 468
#define INTERSECT 469
#define INTERVAL 470
#define INTO 471
#define INVOKER 472
#define IS 473
#define ISNULL 474
#define ISOLATION 475
#define JOIN 476
#define JSON 477
#define KEY 478
#define LABEL 479
#define LANGUAGE 480
#define LARGE_P 481
#define LAST_P 482
#define LATERAL_P 483
#define LEADING 484
#define LEAKPROOF 485
#define LEFT 486
#define LEVEL 487
#define LIKE 488
#define LIMIT 489
#define LISTEN 490
#define LOAD 491
#define LOCAL 492
#define LOCALTIME 493
#define LOCALTIMESTAMP 494
#define LOCATION 495
#define LOCK_P 496
#define LOCKED 497
#define LOGGED 498
#define MACRO 499
#define MAP 500
#define MAPPING 501
#define MATCH 502
#define MATERIALIZED 503
#define MAXVALUE 504
#define METHOD 505
#define MICROSECOND_P 506
#define MICROSECONDS_P 507
#define MILLISECOND_P 508
#define MILLISECONDS_P 509
#define MINUTE_P 510
#define MINUTES_P 511
#define MINVALUE 512
#define MODE 513
#define MONTH_P 514
#define MONTHS_P 515
#define MOVE 516
#define NAME_P 517
#define NAMES 518
#define NATIONAL 519
#define NATURAL 520
#define NCHAR 521
#define NEW 522
#define NEXT 523
#define NO 524
#define NONE 525
#define NOT 526
#define NOTHING 527
#define NOTIFY 528
#define NOTNULL 529
#define NOWAIT 530
#define NULL_P 531
#define NULLIF 532
#define NULLS_P 533
#define NUMERIC 534
#define OBJECT_P 535
#define OF 536
#define OFF 537
#define OFFSET 538
#define OIDS 539
#define OLD 540
#define ON 541
#define ONLY 542
#define OPERATOR 543
#define OPTION 544
#define OPTIONS 545
#define OR 546
#define ORDER 547
#define ORDINALITY 548
#define OUT_P 549
#define OUTER_P 550
#define OVER 551
#define OVERLAPS 552
#define OVERLAY 553
#define OVERRIDING 554
#define OWNED 555
#define OWNER 556
#define PARALLEL 557
#define PARSER 558
#define PARTIAL 559
#define PARTITION 560
#define PASSING 561
#define PASSWORD 562
#define PERCENT 563
#define PLACING 564
#define PLANS 565
#define POLICY 566
#define POSITION 567
#define PRAGMA_P 568
#define PRECEDING 569
#define PRECISION 570
#define PREPARE 571
#define PREPARED 572
#define PRESERVE 573
#define PRIMARY 574
#define PRIOR 575
#define PRIVILEGES 576
#define PROCEDURAL 577
#define PROCEDURE 578
#define PROGRAM 579
#define PUBLICATION 580
#define QUALIFY 581
#define QUOTE 582
#define RANGE 583
#define READ_P 584
#define REAL 585
#define REASSIGN 586
#define RECHECK 587
#define RECURSIVE 588
#define REF 589
#define REFERENCES 590
#define REFERENCING 591
#define REFRESH 592
#define REINDEX 593
#define RELATIVE_P 594
#define RELEASE 595
#define RENAME 596
#define REPEATABLE 597
#define REPLACE 598
#define REPLICA 599
#define RESET 600
#define RESPECT_P 601
#define RESTART 602
#define RESTRICT 603
#define RETURNING 604
#define RETURNS 605
#define REVOKE 606
#define RIGHT 607
#define ROLE 608
#define ROLLBACK 609
#define ROLLUP 610
#define ROW 611
#define ROWS 612
#define RULE 613
#define SAMPLE 614
#define SAVEPOINT 615
#define SCHEMA 616
#define SCHEMAS 617
#define SCROLL 618
#define SEARCH 619
#define SECOND_P 620
#define SECONDS_P 621
#define SECURITY 622
#define SELECT 623
#define SEQUENCE 624
#define SEQUENCES 625
#define SERIALIZABLE 626
#define SERVER 627
#define SESSION 628
#define SESSION_USER 629
#define SET 630
#define SETOF 631
#define SETS 632
#define SHARE 633
#define SHOW 634
#define SIMILAR 635
#define SIMPLE 636
#define SKIP 637
#define SMALLINT 638
#define SNAPSHOT 639
#define SOME 640
#define SQL_P 641
#define STABLE 642
#define STANDALONE_P 643
#define START 644
#define STATEMENT 645
#define STATISTICS 646
#define STDIN 647
#define STDOUT 648
#define STORAGE 649
=======
#define LESS_EQUALS 271
#define GREATER_EQUALS 272
#define NOT_EQUALS 273
#define ABORT_P 274
#define ABSOLUTE_P 275
#define ACCESS 276
#define ACTION 277
#define ADD_P 278
#define ADMIN 279
#define AFTER 280
#define AGGREGATE 281
#define ALL 282
#define ALSO 283
#define ALTER 284
#define ALWAYS 285
#define ANALYSE 286
#define ANALYZE 287
#define AND 288
#define ANY 289
#define ARRAY 290
#define AS 291
#define ASC_P 292
#define ASSERTION 293
#define ASSIGNMENT 294
#define ASYMMETRIC 295
#define AT 296
#define ATTACH 297
#define ATTRIBUTE 298
#define AUTHORIZATION 299
#define BACKWARD 300
#define BEFORE 301
#define BEGIN_P 302
#define BETWEEN 303
#define BIGINT 304
#define BINARY 305
#define BIT 306
#define BOOLEAN_P 307
#define BOTH 308
#define BY 309
#define CACHE 310
#define CALL_P 311
#define CALLED 312
#define CASCADE 313
#define CASCADED 314
#define CASE 315
#define CAST 316
#define CATALOG_P 317
#define CHAIN 318
#define CHAR_P 319
#define CHARACTER 320
#define CHARACTERISTICS 321
#define CHECK_P 322
#define CHECKPOINT 323
#define CLASS 324
#define CLOSE 325
#define CLUSTER 326
#define COALESCE 327
#define COLLATE 328
#define COLLATION 329
#define COLUMN 330
#define COLUMNS 331
#define COMMENT 332
#define COMMENTS 333
#define COMMIT 334
#define COMMITTED 335
#define COMPRESSION 336
#define CONCURRENTLY 337
#define CONFIGURATION 338
#define CONFLICT 339
#define CONNECTION 340
#define CONSTRAINT 341
#define CONSTRAINTS 342
#define CONTENT_P 343
#define CONTINUE_P 344
#define CONVERSION_P 345
#define COPY 346
#define COST 347
#define CREATE_P 348
#define CROSS 349
#define CSV 350
#define CUBE 351
#define CURRENT_P 352
#define CURRENT_CATALOG 353
#define CURRENT_DATE 354
#define CURRENT_ROLE 355
#define CURRENT_SCHEMA 356
#define CURRENT_TIME 357
#define CURRENT_TIMESTAMP 358
#define CURRENT_USER 359
#define CURSOR 360
#define CYCLE 361
#define DATA_P 362
#define DATABASE 363
#define DAY_P 364
#define DAYS_P 365
#define DEALLOCATE 366
#define DEC 367
#define DECIMAL_P 368
#define DECLARE 369
#define DEFAULT 370
#define DEFAULTS 371
#define DEFERRABLE 372
#define DEFERRED 373
#define DEFINER 374
#define DELETE_P 375
#define DELIMITER 376
#define DELIMITERS 377
#define DEPENDS 378
#define DESC_P 379
#define DESCRIBE 380
#define DETACH 381
#define DICTIONARY 382
#define DISABLE_P 383
#define DISCARD 384
#define DISTINCT 385
#define DO 386
#define DOCUMENT_P 387
#define DOMAIN_P 388
#define DOUBLE_P 389
#define DROP 390
#define EACH 391
#define ELSE 392
#define ENABLE_P 393
#define ENCODING 394
#define ENCRYPTED 395
#define END_P 396
#define ENUM_P 397
#define ESCAPE 398
#define EVENT 399
#define EXCEPT 400
#define EXCLUDE 401
#define EXCLUDING 402
#define EXCLUSIVE 403
#define EXECUTE 404
#define EXISTS 405
#define EXPLAIN 406
#define EXPORT_P 407
#define EXPORT_STATE 408
#define EXTENSION 409
#define EXTERNAL 410
#define EXTRACT 411
#define FALSE_P 412
#define FAMILY 413
#define FETCH 414
#define FILTER 415
#define FIRST_P 416
#define FLOAT_P 417
#define FOLLOWING 418
#define FOR 419
#define FORCE 420
#define FOREIGN 421
#define FORWARD 422
#define FREEZE 423
#define FROM 424
#define FULL 425
#define FUNCTION 426
#define FUNCTIONS 427
#define GENERATED 428
#define GLOB 429
#define GLOBAL 430
#define GRANT 431
#define GRANTED 432
#define GROUP_P 433
#define GROUPING 434
#define GROUPING_ID 435
#define HANDLER 436
#define HAVING 437
#define HEADER_P 438
#define HOLD 439
#define HOUR_P 440
#define HOURS_P 441
#define IDENTITY_P 442
#define IF_P 443
#define IGNORE_P 444
#define ILIKE 445
#define IMMEDIATE 446
#define IMMUTABLE 447
#define IMPLICIT_P 448
#define IMPORT_P 449
#define IN_P 450
#define INCLUDING 451
#define INCREMENT 452
#define INDEX 453
#define INDEXES 454
#define INHERIT 455
#define INHERITS 456
#define INITIALLY 457
#define INLINE_P 458
#define INNER_P 459
#define INOUT 460
#define INPUT_P 461
#define INSENSITIVE 462
#define INSERT 463
#define INSTALL 464
#define INSTEAD 465
#define INT_P 466
#define INTEGER 467
#define INTERSECT 468
#define INTERVAL 469
#define INTO 470
#define INVOKER 471
#define IS 472
#define ISNULL 473
#define ISOLATION 474
#define JOIN 475
#define JSON 476
#define KEY 477
#define LABEL 478
#define LANGUAGE 479
#define LARGE_P 480
#define LAST_P 481
#define LATERAL_P 482
#define LEADING 483
#define LEAKPROOF 484
#define LEFT 485
#define LEVEL 486
#define LIKE 487
#define LIMIT 488
#define LISTEN 489
#define LOAD 490
#define LOCAL 491
#define LOCALTIME 492
#define LOCALTIMESTAMP 493
#define LOCATION 494
#define LOCK_P 495
#define LOCKED 496
#define LOGGED 497
#define MACRO 498
#define MAP 499
#define MAPPING 500
#define MATCH 501
#define MATERIALIZED 502
#define MAXVALUE 503
#define METHOD 504
#define MICROSECOND_P 505
#define MICROSECONDS_P 506
#define MILLISECOND_P 507
#define MILLISECONDS_P 508
#define MINUTE_P 509
#define MINUTES_P 510
#define MINVALUE 511
#define MODE 512
#define MONTH_P 513
#define MONTHS_P 514
#define MOVE 515
#define NAME_P 516
#define NAMES 517
#define NATIONAL 518
#define NATURAL 519
#define NCHAR 520
#define NEW 521
#define NEXT 522
#define NO 523
#define NONE 524
#define NOT 525
#define NOTHING 526
#define NOTIFY 527
#define NOTNULL 528
#define NOWAIT 529
#define NULL_P 530
#define NULLIF 531
#define NULLS_P 532
#define NUMERIC 533
#define OBJECT_P 534
#define OF 535
#define OFF 536
#define OFFSET 537
#define OIDS 538
#define OLD 539
#define ON 540
#define ONLY 541
#define OPERATOR 542
#define OPTION 543
#define OPTIONS 544
#define OR 545
#define ORDER 546
#define ORDINALITY 547
#define OUT_P 548
#define OUTER_P 549
#define OVER 550
#define OVERLAPS 551
#define OVERLAY 552
#define OVERRIDING 553
#define OWNED 554
#define OWNER 555
#define PARALLEL 556
#define PARSER 557
#define PARTIAL 558
#define PARTITION 559
#define PASSING 560
#define PASSWORD 561
#define PERCENT 562
#define PLACING 563
#define PLANS 564
#define POLICY 565
#define POSITION 566
#define PRAGMA_P 567
#define PRECEDING 568
#define PRECISION 569
#define PREPARE 570
#define PREPARED 571
#define PRESERVE 572
#define PRIMARY 573
#define PRIOR 574
#define PRIVILEGES 575
#define PROCEDURAL 576
#define PROCEDURE 577
#define PROGRAM 578
#define PUBLICATION 579
#define QUALIFY 580
#define QUOTE 581
#define RANGE 582
#define READ_P 583
#define REAL 584
#define REASSIGN 585
#define RECHECK 586
#define RECURSIVE 587
#define REF 588
#define REFERENCES 589
#define REFERENCING 590
#define REFRESH 591
#define REINDEX 592
#define RELATIVE_P 593
#define RELEASE 594
#define RENAME 595
#define REPEATABLE 596
#define REPLACE 597
#define REPLICA 598
#define RESET 599
#define RESPECT_P 600
#define RESTART 601
#define RESTRICT 602
#define RETURNING 603
#define RETURNS 604
#define REVOKE 605
#define RIGHT 606
#define ROLE 607
#define ROLLBACK 608
#define ROLLUP 609
#define ROW 610
#define ROWS 611
#define RULE 612
#define SAMPLE 613
#define SAVEPOINT 614
#define SCHEMA 615
#define SCHEMAS 616
#define SCROLL 617
#define SEARCH 618
#define SECOND_P 619
#define SECONDS_P 620
#define SECURITY 621
#define SELECT 622
#define SEQUENCE 623
#define SEQUENCES 624
#define SERIALIZABLE 625
#define SERVER 626
#define SESSION 627
#define SESSION_USER 628
#define SET 629
#define SETOF 630
#define SETS 631
#define SHARE 632
#define SHOW 633
#define SIMILAR 634
#define SIMPLE 635
#define SKIP 636
#define SMALLINT 637
#define SNAPSHOT 638
#define SOME 639
#define SQL_P 640
#define STABLE 641
#define STANDALONE_P 642
#define START 643
#define STATEMENT 644
#define STATISTICS 645
#define STDIN 646
#define STDOUT 647
#define STORAGE 648
#define STORED 649
>>>>>>> 685d6e15e (added support in the grammar for VIRTUAL generated columns)
#define STRICT_P 650
#define STRIP_P 651
#define STRUCT 652
#define SUBSCRIPTION 653
#define SUBSTRING 654
#define SUMMARIZE 655
#define SYMMETRIC 656
#define SYSID 657
#define SYSTEM_P 658
#define TABLE 659
#define TABLES 660
#define TABLESAMPLE 661
#define TABLESPACE 662
#define TEMP 663
#define TEMPLATE 664
#define TEMPORARY 665
#define TEXT_P 666
#define THEN 667
#define TIME 668
#define TIMESTAMP 669
#define TO 670
#define TRAILING 671
#define TRANSACTION 672
#define TRANSFORM 673
#define TREAT 674
#define TRIGGER 675
#define TRIM 676
#define TRUE_P 677
#define TRUNCATE 678
#define TRUSTED 679
#define TRY_CAST 680
#define TYPE_P 681
#define TYPES_P 682
#define UNBOUNDED 683
#define UNCOMMITTED 684
#define UNENCRYPTED 685
#define UNION 686
#define UNIQUE 687
#define UNKNOWN 688
#define UNLISTEN 689
#define UNLOGGED 690
#define UNTIL 691
#define UPDATE 692
#define USER 693
#define USING 694
#define VACUUM 695
#define VALID 696
#define VALIDATE 697
#define VALIDATOR 698
#define VALUE_P 699
#define VALUES 700
#define VARCHAR 701
#define VARIADIC 702
#define VARYING 703
#define VERBOSE 704
#define VERSION_P 705
#define VIEW 706
#define VIEWS 707
<<<<<<< HEAD
#define VOLATILE 708
#define WHEN 709
#define WHERE 710
#define WHITESPACE_P 711
#define WINDOW 712
#define WITH 713
#define WITHIN 714
#define WITHOUT 715
#define WORK 716
#define WRAPPER 717
#define WRITE_P 718
#define XML_P 719
#define XMLATTRIBUTES 720
#define XMLCONCAT 721
#define XMLELEMENT 722
#define XMLEXISTS 723
#define XMLFOREST 724
#define XMLNAMESPACES 725
#define XMLPARSE 726
#define XMLPI 727
#define XMLROOT 728
#define XMLSERIALIZE 729
#define XMLTABLE 730
#define YEAR_P 731
#define YEARS_P 732
#define YES_P 733
#define ZONE 734
#define NOT_LA 735
#define NULLS_LA 736
#define WITH_LA 737
#define POSTFIXOP 738
#define UMINUS 739
=======
#define VIRTUAL 708
#define VOLATILE 709
#define WHEN 710
#define WHERE 711
#define WHITESPACE_P 712
#define WINDOW 713
#define WITH 714
#define WITHIN 715
#define WITHOUT 716
#define WORK 717
#define WRAPPER 718
#define WRITE_P 719
#define XML_P 720
#define XMLATTRIBUTES 721
#define XMLCONCAT 722
#define XMLELEMENT 723
#define XMLEXISTS 724
#define XMLFOREST 725
#define XMLNAMESPACES 726
#define XMLPARSE 727
#define XMLPI 728
#define XMLROOT 729
#define XMLSERIALIZE 730
#define XMLTABLE 731
#define YEAR_P 732
#define YEARS_P 733
#define YES_P 734
#define ZONE 735
#define NOT_LA 736
#define NULLS_LA 737
#define WITH_LA 738
#define POSTFIXOP 739
#define UMINUS 740
>>>>>>> 685d6e15e (added support in the grammar for VIRTUAL generated columns)



=======
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    FCONST = 259,                  /* FCONST  */
    SCONST = 260,                  /* SCONST  */
    BCONST = 261,                  /* BCONST  */
    XCONST = 262,                  /* XCONST  */
    Op = 263,                      /* Op  */
    ICONST = 264,                  /* ICONST  */
    PARAM = 265,                   /* PARAM  */
    TYPECAST = 266,                /* TYPECAST  */
    DOT_DOT = 267,                 /* DOT_DOT  */
    COLON_EQUALS = 268,            /* COLON_EQUALS  */
    EQUALS_GREATER = 269,          /* EQUALS_GREATER  */
    LAMBDA_ARROW = 270,            /* LAMBDA_ARROW  */
    POWER_OF = 271,                /* POWER_OF  */
    LESS_EQUALS = 272,             /* LESS_EQUALS  */
    GREATER_EQUALS = 273,          /* GREATER_EQUALS  */
    NOT_EQUALS = 274,              /* NOT_EQUALS  */
    ABORT_P = 275,                 /* ABORT_P  */
    ABSOLUTE_P = 276,              /* ABSOLUTE_P  */
    ACCESS = 277,                  /* ACCESS  */
    ACTION = 278,                  /* ACTION  */
    ADD_P = 279,                   /* ADD_P  */
    ADMIN = 280,                   /* ADMIN  */
    AFTER = 281,                   /* AFTER  */
    AGGREGATE = 282,               /* AGGREGATE  */
    ALL = 283,                     /* ALL  */
    ALSO = 284,                    /* ALSO  */
    ALTER = 285,                   /* ALTER  */
    ALWAYS = 286,                  /* ALWAYS  */
    ANALYSE = 287,                 /* ANALYSE  */
    ANALYZE = 288,                 /* ANALYZE  */
    AND = 289,                     /* AND  */
    ANY = 290,                     /* ANY  */
    ARRAY = 291,                   /* ARRAY  */
    AS = 292,                      /* AS  */
    ASC_P = 293,                   /* ASC_P  */
    ASSERTION = 294,               /* ASSERTION  */
    ASSIGNMENT = 295,              /* ASSIGNMENT  */
    ASYMMETRIC = 296,              /* ASYMMETRIC  */
    AT = 297,                      /* AT  */
    ATTACH = 298,                  /* ATTACH  */
    ATTRIBUTE = 299,               /* ATTRIBUTE  */
    AUTHORIZATION = 300,           /* AUTHORIZATION  */
    BACKWARD = 301,                /* BACKWARD  */
    BEFORE = 302,                  /* BEFORE  */
    BEGIN_P = 303,                 /* BEGIN_P  */
    BETWEEN = 304,                 /* BETWEEN  */
    BIGINT = 305,                  /* BIGINT  */
    BINARY = 306,                  /* BINARY  */
    BIT = 307,                     /* BIT  */
    BOOLEAN_P = 308,               /* BOOLEAN_P  */
    BOTH = 309,                    /* BOTH  */
    BY = 310,                      /* BY  */
    CACHE = 311,                   /* CACHE  */
    CALL_P = 312,                  /* CALL_P  */
    CALLED = 313,                  /* CALLED  */
    CASCADE = 314,                 /* CASCADE  */
    CASCADED = 315,                /* CASCADED  */
    CASE = 316,                    /* CASE  */
    CAST = 317,                    /* CAST  */
    CATALOG_P = 318,               /* CATALOG_P  */
    CHAIN = 319,                   /* CHAIN  */
    CHAR_P = 320,                  /* CHAR_P  */
    CHARACTER = 321,               /* CHARACTER  */
    CHARACTERISTICS = 322,         /* CHARACTERISTICS  */
    CHECK_P = 323,                 /* CHECK_P  */
    CHECKPOINT = 324,              /* CHECKPOINT  */
    CLASS = 325,                   /* CLASS  */
    CLOSE = 326,                   /* CLOSE  */
    CLUSTER = 327,                 /* CLUSTER  */
    COALESCE = 328,                /* COALESCE  */
    COLLATE = 329,                 /* COLLATE  */
    COLLATION = 330,               /* COLLATION  */
    COLUMN = 331,                  /* COLUMN  */
    COLUMNS = 332,                 /* COLUMNS  */
    COMMENT = 333,                 /* COMMENT  */
    COMMENTS = 334,                /* COMMENTS  */
    COMMIT = 335,                  /* COMMIT  */
    COMMITTED = 336,               /* COMMITTED  */
    COMPRESSION = 337,             /* COMPRESSION  */
    CONCURRENTLY = 338,            /* CONCURRENTLY  */
    CONFIGURATION = 339,           /* CONFIGURATION  */
    CONFLICT = 340,                /* CONFLICT  */
    CONNECTION = 341,              /* CONNECTION  */
    CONSTRAINT = 342,              /* CONSTRAINT  */
    CONSTRAINTS = 343,             /* CONSTRAINTS  */
    CONTENT_P = 344,               /* CONTENT_P  */
    CONTINUE_P = 345,              /* CONTINUE_P  */
    CONVERSION_P = 346,            /* CONVERSION_P  */
    COPY = 347,                    /* COPY  */
    COST = 348,                    /* COST  */
    CREATE_P = 349,                /* CREATE_P  */
    CROSS = 350,                   /* CROSS  */
    CSV = 351,                     /* CSV  */
    CUBE = 352,                    /* CUBE  */
    CURRENT_P = 353,               /* CURRENT_P  */
    CURRENT_CATALOG = 354,         /* CURRENT_CATALOG  */
    CURRENT_DATE = 355,            /* CURRENT_DATE  */
    CURRENT_ROLE = 356,            /* CURRENT_ROLE  */
    CURRENT_SCHEMA = 357,          /* CURRENT_SCHEMA  */
    CURRENT_TIME = 358,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 359,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 360,            /* CURRENT_USER  */
    CURSOR = 361,                  /* CURSOR  */
    CYCLE = 362,                   /* CYCLE  */
    DATA_P = 363,                  /* DATA_P  */
    DATABASE = 364,                /* DATABASE  */
    DAY_P = 365,                   /* DAY_P  */
    DAYS_P = 366,                  /* DAYS_P  */
    DEALLOCATE = 367,              /* DEALLOCATE  */
    DEC = 368,                     /* DEC  */
    DECIMAL_P = 369,               /* DECIMAL_P  */
    DECLARE = 370,                 /* DECLARE  */
    DEFAULT = 371,                 /* DEFAULT  */
    DEFAULTS = 372,                /* DEFAULTS  */
    DEFERRABLE = 373,              /* DEFERRABLE  */
    DEFERRED = 374,                /* DEFERRED  */
    DEFINER = 375,                 /* DEFINER  */
    DELETE_P = 376,                /* DELETE_P  */
    DELIMITER = 377,               /* DELIMITER  */
    DELIMITERS = 378,              /* DELIMITERS  */
    DEPENDS = 379,                 /* DEPENDS  */
    DESC_P = 380,                  /* DESC_P  */
    DESCRIBE = 381,                /* DESCRIBE  */
    DETACH = 382,                  /* DETACH  */
    DICTIONARY = 383,              /* DICTIONARY  */
    DISABLE_P = 384,               /* DISABLE_P  */
    DISCARD = 385,                 /* DISCARD  */
    DISTINCT = 386,                /* DISTINCT  */
    DO = 387,                      /* DO  */
    DOCUMENT_P = 388,              /* DOCUMENT_P  */
    DOMAIN_P = 389,                /* DOMAIN_P  */
    DOUBLE_P = 390,                /* DOUBLE_P  */
    DROP = 391,                    /* DROP  */
    EACH = 392,                    /* EACH  */
    ELSE = 393,                    /* ELSE  */
    ENABLE_P = 394,                /* ENABLE_P  */
    ENCODING = 395,                /* ENCODING  */
    ENCRYPTED = 396,               /* ENCRYPTED  */
    END_P = 397,                   /* END_P  */
    ENUM_P = 398,                  /* ENUM_P  */
    ESCAPE = 399,                  /* ESCAPE  */
    EVENT = 400,                   /* EVENT  */
    EXCEPT = 401,                  /* EXCEPT  */
    EXCLUDE = 402,                 /* EXCLUDE  */
    EXCLUDING = 403,               /* EXCLUDING  */
    EXCLUSIVE = 404,               /* EXCLUSIVE  */
    EXECUTE = 405,                 /* EXECUTE  */
    EXISTS = 406,                  /* EXISTS  */
    EXPLAIN = 407,                 /* EXPLAIN  */
    EXPORT_P = 408,                /* EXPORT_P  */
    EXPORT_STATE = 409,            /* EXPORT_STATE  */
    EXTENSION = 410,               /* EXTENSION  */
    EXTERNAL = 411,                /* EXTERNAL  */
    EXTRACT = 412,                 /* EXTRACT  */
    FALSE_P = 413,                 /* FALSE_P  */
    FAMILY = 414,                  /* FAMILY  */
    FETCH = 415,                   /* FETCH  */
    FILTER = 416,                  /* FILTER  */
    FIRST_P = 417,                 /* FIRST_P  */
    FLOAT_P = 418,                 /* FLOAT_P  */
    FOLLOWING = 419,               /* FOLLOWING  */
    FOR = 420,                     /* FOR  */
    FORCE = 421,                   /* FORCE  */
    FOREIGN = 422,                 /* FOREIGN  */
    FORWARD = 423,                 /* FORWARD  */
    FREEZE = 424,                  /* FREEZE  */
    FROM = 425,                    /* FROM  */
    FULL = 426,                    /* FULL  */
    FUNCTION = 427,                /* FUNCTION  */
    FUNCTIONS = 428,               /* FUNCTIONS  */
    GENERATED = 429,               /* GENERATED  */
    GLOB = 430,                    /* GLOB  */
    GLOBAL = 431,                  /* GLOBAL  */
    GRANT = 432,                   /* GRANT  */
    GRANTED = 433,                 /* GRANTED  */
    GROUP_P = 434,                 /* GROUP_P  */
    GROUPING = 435,                /* GROUPING  */
    GROUPING_ID = 436,             /* GROUPING_ID  */
    HANDLER = 437,                 /* HANDLER  */
    HAVING = 438,                  /* HAVING  */
    HEADER_P = 439,                /* HEADER_P  */
    HOLD = 440,                    /* HOLD  */
    HOUR_P = 441,                  /* HOUR_P  */
    HOURS_P = 442,                 /* HOURS_P  */
    IDENTITY_P = 443,              /* IDENTITY_P  */
    IF_P = 444,                    /* IF_P  */
    IGNORE_P = 445,                /* IGNORE_P  */
    ILIKE = 446,                   /* ILIKE  */
    IMMEDIATE = 447,               /* IMMEDIATE  */
    IMMUTABLE = 448,               /* IMMUTABLE  */
    IMPLICIT_P = 449,              /* IMPLICIT_P  */
    IMPORT_P = 450,                /* IMPORT_P  */
    IN_P = 451,                    /* IN_P  */
    INCLUDING = 452,               /* INCLUDING  */
    INCREMENT = 453,               /* INCREMENT  */
    INDEX = 454,                   /* INDEX  */
    INDEXES = 455,                 /* INDEXES  */
    INHERIT = 456,                 /* INHERIT  */
    INHERITS = 457,                /* INHERITS  */
    INITIALLY = 458,               /* INITIALLY  */
    INLINE_P = 459,                /* INLINE_P  */
    INNER_P = 460,                 /* INNER_P  */
    INOUT = 461,                   /* INOUT  */
    INPUT_P = 462,                 /* INPUT_P  */
    INSENSITIVE = 463,             /* INSENSITIVE  */
    INSERT = 464,                  /* INSERT  */
    INSTALL = 465,                 /* INSTALL  */
    INSTEAD = 466,                 /* INSTEAD  */
    INT_P = 467,                   /* INT_P  */
    INTEGER = 468,                 /* INTEGER  */
    INTERSECT = 469,               /* INTERSECT  */
    INTERVAL = 470,                /* INTERVAL  */
    INTO = 471,                    /* INTO  */
    INVOKER = 472,                 /* INVOKER  */
    IS = 473,                      /* IS  */
    ISNULL = 474,                  /* ISNULL  */
    ISOLATION = 475,               /* ISOLATION  */
    JOIN = 476,                    /* JOIN  */
    JSON = 477,                    /* JSON  */
    KEY = 478,                     /* KEY  */
    LABEL = 479,                   /* LABEL  */
    LANGUAGE = 480,                /* LANGUAGE  */
    LARGE_P = 481,                 /* LARGE_P  */
    LAST_P = 482,                  /* LAST_P  */
    LATERAL_P = 483,               /* LATERAL_P  */
    LEADING = 484,                 /* LEADING  */
    LEAKPROOF = 485,               /* LEAKPROOF  */
    LEFT = 486,                    /* LEFT  */
    LEVEL = 487,                   /* LEVEL  */
    LIKE = 488,                    /* LIKE  */
    LIMIT = 489,                   /* LIMIT  */
    LISTEN = 490,                  /* LISTEN  */
    LOAD = 491,                    /* LOAD  */
    LOCAL = 492,                   /* LOCAL  */
    LOCALTIME = 493,               /* LOCALTIME  */
    LOCALTIMESTAMP = 494,          /* LOCALTIMESTAMP  */
    LOCATION = 495,                /* LOCATION  */
    LOCK_P = 496,                  /* LOCK_P  */
    LOCKED = 497,                  /* LOCKED  */
    LOGGED = 498,                  /* LOGGED  */
    MACRO = 499,                   /* MACRO  */
    MAP = 500,                     /* MAP  */
    MAPPING = 501,                 /* MAPPING  */
    MATCH = 502,                   /* MATCH  */
    MATERIALIZED = 503,            /* MATERIALIZED  */
    MAXVALUE = 504,                /* MAXVALUE  */
    METHOD = 505,                  /* METHOD  */
    MICROSECOND_P = 506,           /* MICROSECOND_P  */
    MICROSECONDS_P = 507,          /* MICROSECONDS_P  */
    MILLISECOND_P = 508,           /* MILLISECOND_P  */
    MILLISECONDS_P = 509,          /* MILLISECONDS_P  */
    MINUTE_P = 510,                /* MINUTE_P  */
    MINUTES_P = 511,               /* MINUTES_P  */
    MINVALUE = 512,                /* MINVALUE  */
    MODE = 513,                    /* MODE  */
    MONTH_P = 514,                 /* MONTH_P  */
    MONTHS_P = 515,                /* MONTHS_P  */
    MOVE = 516,                    /* MOVE  */
    NAME_P = 517,                  /* NAME_P  */
    NAMES = 518,                   /* NAMES  */
    NATIONAL = 519,                /* NATIONAL  */
    NATURAL = 520,                 /* NATURAL  */
    NCHAR = 521,                   /* NCHAR  */
    NEW = 522,                     /* NEW  */
    NEXT = 523,                    /* NEXT  */
    NO = 524,                      /* NO  */
    NONE = 525,                    /* NONE  */
    NOT = 526,                     /* NOT  */
    NOTHING = 527,                 /* NOTHING  */
    NOTIFY = 528,                  /* NOTIFY  */
    NOTNULL = 529,                 /* NOTNULL  */
    NOWAIT = 530,                  /* NOWAIT  */
    NULL_P = 531,                  /* NULL_P  */
    NULLIF = 532,                  /* NULLIF  */
    NULLS_P = 533,                 /* NULLS_P  */
    NUMERIC = 534,                 /* NUMERIC  */
    OBJECT_P = 535,                /* OBJECT_P  */
    OF = 536,                      /* OF  */
    OFF = 537,                     /* OFF  */
    OFFSET = 538,                  /* OFFSET  */
    OIDS = 539,                    /* OIDS  */
    OLD = 540,                     /* OLD  */
    ON = 541,                      /* ON  */
    ONLY = 542,                    /* ONLY  */
    OPERATOR = 543,                /* OPERATOR  */
    OPTION = 544,                  /* OPTION  */
    OPTIONS = 545,                 /* OPTIONS  */
    OR = 546,                      /* OR  */
    ORDER = 547,                   /* ORDER  */
    ORDINALITY = 548,              /* ORDINALITY  */
    OUT_P = 549,                   /* OUT_P  */
    OUTER_P = 550,                 /* OUTER_P  */
    OVER = 551,                    /* OVER  */
    OVERLAPS = 552,                /* OVERLAPS  */
    OVERLAY = 553,                 /* OVERLAY  */
    OVERRIDING = 554,              /* OVERRIDING  */
    OWNED = 555,                   /* OWNED  */
    OWNER = 556,                   /* OWNER  */
    PARALLEL = 557,                /* PARALLEL  */
    PARSER = 558,                  /* PARSER  */
    PARTIAL = 559,                 /* PARTIAL  */
    PARTITION = 560,               /* PARTITION  */
    PASSING = 561,                 /* PASSING  */
    PASSWORD = 562,                /* PASSWORD  */
    PERCENT = 563,                 /* PERCENT  */
    PLACING = 564,                 /* PLACING  */
    PLANS = 565,                   /* PLANS  */
    POLICY = 566,                  /* POLICY  */
    POSITION = 567,                /* POSITION  */
    PRAGMA_P = 568,                /* PRAGMA_P  */
    PRECEDING = 569,               /* PRECEDING  */
    PRECISION = 570,               /* PRECISION  */
    PREPARE = 571,                 /* PREPARE  */
    PREPARED = 572,                /* PREPARED  */
    PRESERVE = 573,                /* PRESERVE  */
    PRIMARY = 574,                 /* PRIMARY  */
    PRIOR = 575,                   /* PRIOR  */
    PRIVILEGES = 576,              /* PRIVILEGES  */
    PROCEDURAL = 577,              /* PROCEDURAL  */
    PROCEDURE = 578,               /* PROCEDURE  */
    PROGRAM = 579,                 /* PROGRAM  */
    PUBLICATION = 580,             /* PUBLICATION  */
    QUALIFY = 581,                 /* QUALIFY  */
    QUOTE = 582,                   /* QUOTE  */
    RANGE = 583,                   /* RANGE  */
    READ_P = 584,                  /* READ_P  */
    REAL = 585,                    /* REAL  */
    REASSIGN = 586,                /* REASSIGN  */
    RECHECK = 587,                 /* RECHECK  */
    RECURSIVE = 588,               /* RECURSIVE  */
    REF = 589,                     /* REF  */
    REFERENCES = 590,              /* REFERENCES  */
    REFERENCING = 591,             /* REFERENCING  */
    REFRESH = 592,                 /* REFRESH  */
    REINDEX = 593,                 /* REINDEX  */
    RELATIVE_P = 594,              /* RELATIVE_P  */
    RELEASE = 595,                 /* RELEASE  */
    RENAME = 596,                  /* RENAME  */
    REPEATABLE = 597,              /* REPEATABLE  */
    REPLACE = 598,                 /* REPLACE  */
    REPLICA = 599,                 /* REPLICA  */
    RESET = 600,                   /* RESET  */
    RESPECT_P = 601,               /* RESPECT_P  */
    RESTART = 602,                 /* RESTART  */
    RESTRICT = 603,                /* RESTRICT  */
    RETURNING = 604,               /* RETURNING  */
    RETURNS = 605,                 /* RETURNS  */
    REVOKE = 606,                  /* REVOKE  */
    RIGHT = 607,                   /* RIGHT  */
    ROLE = 608,                    /* ROLE  */
    ROLLBACK = 609,                /* ROLLBACK  */
    ROLLUP = 610,                  /* ROLLUP  */
    ROW = 611,                     /* ROW  */
    ROWS = 612,                    /* ROWS  */
    RULE = 613,                    /* RULE  */
    SAMPLE = 614,                  /* SAMPLE  */
    SAVEPOINT = 615,               /* SAVEPOINT  */
    SCHEMA = 616,                  /* SCHEMA  */
    SCHEMAS = 617,                 /* SCHEMAS  */
    SCROLL = 618,                  /* SCROLL  */
    SEARCH = 619,                  /* SEARCH  */
    SECOND_P = 620,                /* SECOND_P  */
    SECONDS_P = 621,               /* SECONDS_P  */
    SECURITY = 622,                /* SECURITY  */
    SELECT = 623,                  /* SELECT  */
    SEQUENCE = 624,                /* SEQUENCE  */
    SEQUENCES = 625,               /* SEQUENCES  */
    SERIALIZABLE = 626,            /* SERIALIZABLE  */
    SERVER = 627,                  /* SERVER  */
    SESSION = 628,                 /* SESSION  */
    SESSION_USER = 629,            /* SESSION_USER  */
    SET = 630,                     /* SET  */
    SETOF = 631,                   /* SETOF  */
    SETS = 632,                    /* SETS  */
    SHARE = 633,                   /* SHARE  */
    SHOW = 634,                    /* SHOW  */
    SIMILAR = 635,                 /* SIMILAR  */
    SIMPLE = 636,                  /* SIMPLE  */
    SKIP = 637,                    /* SKIP  */
    SMALLINT = 638,                /* SMALLINT  */
    SNAPSHOT = 639,                /* SNAPSHOT  */
    SOME = 640,                    /* SOME  */
    SQL_P = 641,                   /* SQL_P  */
    STABLE = 642,                  /* STABLE  */
    STANDALONE_P = 643,            /* STANDALONE_P  */
    START = 644,                   /* START  */
    STATEMENT = 645,               /* STATEMENT  */
    STATISTICS = 646,              /* STATISTICS  */
    STDIN = 647,                   /* STDIN  */
    STDOUT = 648,                  /* STDOUT  */
    STORAGE = 649,                 /* STORAGE  */
    STORED = 650,                  /* STORED  */
    STRICT_P = 651,                /* STRICT_P  */
    STRIP_P = 652,                 /* STRIP_P  */
    STRUCT = 653,                  /* STRUCT  */
    SUBSCRIPTION = 654,            /* SUBSCRIPTION  */
    SUBSTRING = 655,               /* SUBSTRING  */
    SUMMARIZE = 656,               /* SUMMARIZE  */
    SYMMETRIC = 657,               /* SYMMETRIC  */
    SYSID = 658,                   /* SYSID  */
    SYSTEM_P = 659,                /* SYSTEM_P  */
    TABLE = 660,                   /* TABLE  */
    TABLES = 661,                  /* TABLES  */
    TABLESAMPLE = 662,             /* TABLESAMPLE  */
    TABLESPACE = 663,              /* TABLESPACE  */
    TEMP = 664,                    /* TEMP  */
    TEMPLATE = 665,                /* TEMPLATE  */
    TEMPORARY = 666,               /* TEMPORARY  */
    TEXT_P = 667,                  /* TEXT_P  */
    THEN = 668,                    /* THEN  */
    TIME = 669,                    /* TIME  */
    TIMESTAMP = 670,               /* TIMESTAMP  */
    TO = 671,                      /* TO  */
    TRAILING = 672,                /* TRAILING  */
    TRANSACTION = 673,             /* TRANSACTION  */
    TRANSFORM = 674,               /* TRANSFORM  */
    TREAT = 675,                   /* TREAT  */
    TRIGGER = 676,                 /* TRIGGER  */
    TRIM = 677,                    /* TRIM  */
    TRUE_P = 678,                  /* TRUE_P  */
    TRUNCATE = 679,                /* TRUNCATE  */
    TRUSTED = 680,                 /* TRUSTED  */
    TRY_CAST = 681,                /* TRY_CAST  */
    TYPE_P = 682,                  /* TYPE_P  */
    TYPES_P = 683,                 /* TYPES_P  */
    UNBOUNDED = 684,               /* UNBOUNDED  */
    UNCOMMITTED = 685,             /* UNCOMMITTED  */
    UNENCRYPTED = 686,             /* UNENCRYPTED  */
    UNION = 687,                   /* UNION  */
    UNIQUE = 688,                  /* UNIQUE  */
    UNKNOWN = 689,                 /* UNKNOWN  */
    UNLISTEN = 690,                /* UNLISTEN  */
    UNLOGGED = 691,                /* UNLOGGED  */
    UNTIL = 692,                   /* UNTIL  */
    UPDATE = 693,                  /* UPDATE  */
    USER = 694,                    /* USER  */
    USING = 695,                   /* USING  */
    VACUUM = 696,                  /* VACUUM  */
    VALID = 697,                   /* VALID  */
    VALIDATE = 698,                /* VALIDATE  */
    VALIDATOR = 699,               /* VALIDATOR  */
    VALUE_P = 700,                 /* VALUE_P  */
    VALUES = 701,                  /* VALUES  */
    VARCHAR = 702,                 /* VARCHAR  */
    VARIADIC = 703,                /* VARIADIC  */
    VARYING = 704,                 /* VARYING  */
    VERBOSE = 705,                 /* VERBOSE  */
    VERSION_P = 706,               /* VERSION_P  */
    VIEW = 707,                    /* VIEW  */
    VIEWS = 708,                   /* VIEWS  */
    VIRTUAL = 709,                 /* VIRTUAL  */
    VOLATILE = 710,                /* VOLATILE  */
    WHEN = 711,                    /* WHEN  */
    WHERE = 712,                   /* WHERE  */
    WHITESPACE_P = 713,            /* WHITESPACE_P  */
    WINDOW = 714,                  /* WINDOW  */
    WITH = 715,                    /* WITH  */
    WITHIN = 716,                  /* WITHIN  */
    WITHOUT = 717,                 /* WITHOUT  */
    WORK = 718,                    /* WORK  */
    WRAPPER = 719,                 /* WRAPPER  */
    WRITE_P = 720,                 /* WRITE_P  */
    XML_P = 721,                   /* XML_P  */
    XMLATTRIBUTES = 722,           /* XMLATTRIBUTES  */
    XMLCONCAT = 723,               /* XMLCONCAT  */
    XMLELEMENT = 724,              /* XMLELEMENT  */
    XMLEXISTS = 725,               /* XMLEXISTS  */
    XMLFOREST = 726,               /* XMLFOREST  */
    XMLNAMESPACES = 727,           /* XMLNAMESPACES  */
    XMLPARSE = 728,                /* XMLPARSE  */
    XMLPI = 729,                   /* XMLPI  */
    XMLROOT = 730,                 /* XMLROOT  */
    XMLSERIALIZE = 731,            /* XMLSERIALIZE  */
    XMLTABLE = 732,                /* XMLTABLE  */
    YEAR_P = 733,                  /* YEAR_P  */
    YEARS_P = 734,                 /* YEARS_P  */
    YES_P = 735,                   /* YES_P  */
    ZONE = 736,                    /* ZONE  */
    NOT_LA = 737,                  /* NOT_LA  */
    NULLS_LA = 738,                /* NULLS_LA  */
    WITH_LA = 739,                 /* WITH_LA  */
    POSTFIXOP = 740,               /* POSTFIXOP  */
    UMINUS = 741                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
>>>>>>> eacf963c7 (opt_Typename)
=======
     STORED = 650,
=======
     ALIAS_P = 283,
     ALL = 284,
     ALSO = 285,
     ALTER = 286,
     ALWAYS = 287,
     ANALYSE = 288,
     ANALYZE = 289,
     AND = 290,
     ANY = 291,
     ARRAY = 292,
     AS = 293,
     ASC_P = 294,
     ASSERTION = 295,
     ASSIGNMENT = 296,
     ASYMMETRIC = 297,
     AT = 298,
     ATTACH = 299,
     ATTRIBUTE = 300,
     AUTHORIZATION = 301,
     BACKWARD = 302,
     BEFORE = 303,
     BEGIN_P = 304,
     BETWEEN = 305,
     BIGINT = 306,
     BINARY = 307,
     BIT = 308,
     BOOLEAN_P = 309,
     BOTH = 310,
     BY = 311,
     CACHE = 312,
     CALL_P = 313,
     CALLED = 314,
     CASCADE = 315,
     CASCADED = 316,
     CASE = 317,
     CAST = 318,
     CATALOG_P = 319,
     CHAIN = 320,
     CHAR_P = 321,
     CHARACTER = 322,
     CHARACTERISTICS = 323,
     CHECK_P = 324,
     CHECKPOINT = 325,
     CLASS = 326,
     CLOSE = 327,
     CLUSTER = 328,
     COALESCE = 329,
     COLLATE = 330,
     COLLATION = 331,
     COLUMN = 332,
     COLUMNS = 333,
     COMMENT = 334,
     COMMENTS = 335,
     COMMIT = 336,
     COMMITTED = 337,
     COMPRESSION = 338,
     CONCURRENTLY = 339,
     CONFIGURATION = 340,
     CONFLICT = 341,
     CONNECTION = 342,
     CONSTRAINT = 343,
     CONSTRAINTS = 344,
     CONTENT_P = 345,
     CONTINUE_P = 346,
     CONVERSION_P = 347,
     COPY = 348,
     COST = 349,
     CREATE_P = 350,
     CROSS = 351,
     CSV = 352,
     CUBE = 353,
     CURRENT_P = 354,
     CURRENT_CATALOG = 355,
     CURRENT_DATE = 356,
     CURRENT_ROLE = 357,
     CURRENT_SCHEMA = 358,
     CURRENT_TIME = 359,
     CURRENT_TIMESTAMP = 360,
     CURRENT_USER = 361,
     CURSOR = 362,
     CYCLE = 363,
     DATA_P = 364,
     DATABASE = 365,
     DAY_P = 366,
     DAYS_P = 367,
     DEALLOCATE = 368,
     DEC = 369,
     DECIMAL_P = 370,
     DECLARE = 371,
     DEFAULT = 372,
     DEFAULTS = 373,
     DEFERRABLE = 374,
     DEFERRED = 375,
     DEFINER = 376,
     DELETE_P = 377,
     DELIMITER = 378,
     DELIMITERS = 379,
     DEPENDS = 380,
     DESC_P = 381,
     DESCRIBE = 382,
     DETACH = 383,
     DICTIONARY = 384,
     DISABLE_P = 385,
     DISCARD = 386,
     DISTINCT = 387,
     DO = 388,
     DOCUMENT_P = 389,
     DOMAIN_P = 390,
     DOUBLE_P = 391,
     DROP = 392,
     EACH = 393,
     ELSE = 394,
     ENABLE_P = 395,
     ENCODING = 396,
     ENCRYPTED = 397,
     END_P = 398,
     ENUM_P = 399,
     ESCAPE = 400,
     EVENT = 401,
     EXCEPT = 402,
     EXCLUDE = 403,
     EXCLUDING = 404,
     EXCLUSIVE = 405,
     EXECUTE = 406,
     EXISTS = 407,
     EXPLAIN = 408,
     EXPORT_P = 409,
     EXPORT_STATE = 410,
     EXTENSION = 411,
     EXTERNAL = 412,
     EXTRACT = 413,
     FALSE_P = 414,
     FAMILY = 415,
     FETCH = 416,
     FILTER = 417,
     FIRST_P = 418,
     FLOAT_P = 419,
     FOLLOWING = 420,
     FOR = 421,
     FORCE = 422,
     FOREIGN = 423,
     FORWARD = 424,
     FREEZE = 425,
     FROM = 426,
     FULL = 427,
     FUNCTION = 428,
     FUNCTIONS = 429,
     GENERATED = 430,
     GLOB = 431,
     GLOBAL = 432,
     GRANT = 433,
     GRANTED = 434,
     GROUP_P = 435,
     GROUPING = 436,
     GROUPING_ID = 437,
     HANDLER = 438,
     HAVING = 439,
     HEADER_P = 440,
     HOLD = 441,
     HOUR_P = 442,
     HOURS_P = 443,
     IDENTITY_P = 444,
     IF_P = 445,
     IGNORE_P = 446,
     ILIKE = 447,
     IMMEDIATE = 448,
     IMMUTABLE = 449,
     IMPLICIT_P = 450,
     IMPORT_P = 451,
     IN_P = 452,
     INCLUDING = 453,
     INCREMENT = 454,
     INDEX = 455,
     INDEXES = 456,
     INHERIT = 457,
     INHERITS = 458,
     INITIALLY = 459,
     INLINE_P = 460,
     INNER_P = 461,
     INOUT = 462,
     INPUT_P = 463,
     INSENSITIVE = 464,
     INSERT = 465,
     INSTALL = 466,
     INSTEAD = 467,
     INT_P = 468,
     INTEGER = 469,
     INTERSECT = 470,
     INTERVAL = 471,
     INTO = 472,
     INVOKER = 473,
     IS = 474,
     ISNULL = 475,
     ISOLATION = 476,
     JOIN = 477,
     JSON = 478,
     KEY = 479,
     LABEL = 480,
     LANGUAGE = 481,
     LARGE_P = 482,
     LAST_P = 483,
     LATERAL_P = 484,
     LEADING = 485,
     LEAKPROOF = 486,
     LEFT = 487,
     LEVEL = 488,
     LIKE = 489,
     LIMIT = 490,
     LISTEN = 491,
     LOAD = 492,
     LOCAL = 493,
     LOCALTIME = 494,
     LOCALTIMESTAMP = 495,
     LOCATION = 496,
     LOCK_P = 497,
     LOCKED = 498,
     LOGGED = 499,
     MACRO = 500,
     MAP = 501,
     MAPPING = 502,
     MATCH = 503,
     MATERIALIZED = 504,
     MAXVALUE = 505,
     METHOD = 506,
     MICROSECOND_P = 507,
     MICROSECONDS_P = 508,
     MILLISECOND_P = 509,
     MILLISECONDS_P = 510,
     MINUTE_P = 511,
     MINUTES_P = 512,
     MINVALUE = 513,
     MODE = 514,
     MONTH_P = 515,
     MONTHS_P = 516,
     MOVE = 517,
     NAME_P = 518,
     NAMES = 519,
     NATIONAL = 520,
     NATURAL = 521,
     NCHAR = 522,
     NEW = 523,
     NEXT = 524,
     NO = 525,
     NONE = 526,
     NOT = 527,
     NOTHING = 528,
     NOTIFY = 529,
     NOTNULL = 530,
     NOWAIT = 531,
     NULL_P = 532,
     NULLIF = 533,
     NULLS_P = 534,
     NUMERIC = 535,
     OBJECT_P = 536,
     OF = 537,
     OFF = 538,
     OFFSET = 539,
     OIDS = 540,
     OLD = 541,
     ON = 542,
     ONLY = 543,
     OPERATOR = 544,
     OPTION = 545,
     OPTIONS = 546,
     OR = 547,
     ORDER = 548,
     ORDINALITY = 549,
     OUT_P = 550,
     OUTER_P = 551,
     OVER = 552,
     OVERLAPS = 553,
     OVERLAY = 554,
     OVERRIDING = 555,
     OWNED = 556,
     OWNER = 557,
     PARALLEL = 558,
     PARSER = 559,
     PARTIAL = 560,
     PARTITION = 561,
     PASSING = 562,
     PASSWORD = 563,
     PERCENT = 564,
     PLACING = 565,
     PLANS = 566,
     POLICY = 567,
     POSITION = 568,
     PRAGMA_P = 569,
     PRECEDING = 570,
     PRECISION = 571,
     PREPARE = 572,
     PREPARED = 573,
     PRESERVE = 574,
     PRIMARY = 575,
     PRIOR = 576,
     PRIVILEGES = 577,
     PROCEDURAL = 578,
     PROCEDURE = 579,
     PROGRAM = 580,
     PUBLICATION = 581,
     QUALIFY = 582,
     QUOTE = 583,
     RANGE = 584,
     READ_P = 585,
     REAL = 586,
     REASSIGN = 587,
     RECHECK = 588,
     RECURSIVE = 589,
     REF = 590,
     REFERENCES = 591,
     REFERENCING = 592,
     REFRESH = 593,
     REINDEX = 594,
     RELATIVE_P = 595,
     RELEASE = 596,
     RENAME = 597,
     REPEATABLE = 598,
     REPLACE = 599,
     REPLICA = 600,
     RESET = 601,
     RESPECT_P = 602,
     RESTART = 603,
     RESTRICT = 604,
     RETURNING = 605,
     RETURNS = 606,
     REVOKE = 607,
     RIGHT = 608,
     ROLE = 609,
     ROLLBACK = 610,
     ROLLUP = 611,
     ROW = 612,
     ROWS = 613,
     RULE = 614,
     SAMPLE = 615,
     SAVEPOINT = 616,
     SCHEMA = 617,
     SCHEMAS = 618,
     SCROLL = 619,
     SEARCH = 620,
     SECOND_P = 621,
     SECONDS_P = 622,
     SECURITY = 623,
     SELECT = 624,
     SEQUENCE = 625,
     SEQUENCES = 626,
     SERIALIZABLE = 627,
     SERVER = 628,
     SESSION = 629,
     SESSION_USER = 630,
     SET = 631,
     SETOF = 632,
     SETS = 633,
     SHARE = 634,
     SHOW = 635,
     SIMILAR = 636,
     SIMPLE = 637,
     SKIP = 638,
     SMALLINT = 639,
     SNAPSHOT = 640,
     SOME = 641,
     SQL_P = 642,
     STABLE = 643,
     STANDALONE_P = 644,
     START = 645,
     STATEMENT = 646,
     STATISTICS = 647,
     STDIN = 648,
     STDOUT = 649,
     STORAGE = 650,
>>>>>>> 01f1e3899 (Adding alias type)
     STRICT_P = 651,
     STRIP_P = 652,
     STRUCT = 653,
     SUBSCRIPTION = 654,
     SUBSTRING = 655,
     SUMMARIZE = 656,
     SYMMETRIC = 657,
     SYSID = 658,
     SYSTEM_P = 659,
     TABLE = 660,
     TABLES = 661,
     TABLESAMPLE = 662,
     TABLESPACE = 663,
     TEMP = 664,
     TEMPLATE = 665,
     TEMPORARY = 666,
     TEXT_P = 667,
     THEN = 668,
     TIME = 669,
     TIMESTAMP = 670,
     TO = 671,
     TRAILING = 672,
     TRANSACTION = 673,
     TRANSFORM = 674,
     TREAT = 675,
     TRIGGER = 676,
     TRIM = 677,
     TRUE_P = 678,
     TRUNCATE = 679,
     TRUSTED = 680,
     TRY_CAST = 681,
     TYPE_P = 682,
     TYPES_P = 683,
     UNBOUNDED = 684,
     UNCOMMITTED = 685,
     UNENCRYPTED = 686,
     UNION = 687,
     UNIQUE = 688,
     UNKNOWN = 689,
     UNLISTEN = 690,
     UNLOGGED = 691,
     UNTIL = 692,
     UPDATE = 693,
     USER = 694,
     USING = 695,
     VACUUM = 696,
     VALID = 697,
     VALIDATE = 698,
     VALIDATOR = 699,
     VALUE_P = 700,
     VALUES = 701,
     VARCHAR = 702,
     VARIADIC = 703,
     VARYING = 704,
     VERBOSE = 705,
     VERSION_P = 706,
     VIEW = 707,
     VIEWS = 708,
<<<<<<< HEAD
     VIRTUAL = 709,
     VOLATILE = 710,
     WHEN = 711,
     WHERE = 712,
     WHITESPACE_P = 713,
     WINDOW = 714,
     WITH = 715,
     WITHIN = 716,
     WITHOUT = 717,
     WORK = 718,
     WRAPPER = 719,
     WRITE_P = 720,
     XML_P = 721,
     XMLATTRIBUTES = 722,
     XMLCONCAT = 723,
     XMLELEMENT = 724,
     XMLEXISTS = 725,
     XMLFOREST = 726,
     XMLNAMESPACES = 727,
     XMLPARSE = 728,
     XMLPI = 729,
     XMLROOT = 730,
     XMLSERIALIZE = 731,
     XMLTABLE = 732,
     YEAR_P = 733,
     YEARS_P = 734,
     YES_P = 735,
     ZONE = 736,
     NOT_LA = 737,
     NULLS_LA = 738,
     WITH_LA = 739,
     POSTFIXOP = 740,
     UMINUS = 741
=======
     VOLATILE = 709,
     WHEN = 710,
     WHERE = 711,
     WHITESPACE_P = 712,
     WINDOW = 713,
     WITH = 714,
     WITHIN = 715,
     WITHOUT = 716,
     WORK = 717,
     WRAPPER = 718,
     WRITE_P = 719,
     XML_P = 720,
     XMLATTRIBUTES = 721,
     XMLCONCAT = 722,
     XMLELEMENT = 723,
     XMLEXISTS = 724,
     XMLFOREST = 725,
     XMLNAMESPACES = 726,
     XMLPARSE = 727,
     XMLPI = 728,
     XMLROOT = 729,
     XMLSERIALIZE = 730,
     XMLTABLE = 731,
     YEAR_P = 732,
     YEARS_P = 733,
     YES_P = 734,
     ZONE = 735,
     NOT_LA = 736,
     NULLS_LA = 737,
     WITH_LA = 738,
     POSTFIXOP = 739,
     UMINUS = 740
>>>>>>> 01f1e3899 (Adding alias type)
=======
>>>>>>> 4db86e588 (Update Alias Type)
   };
#endif
/* Tokens.  */
#define IDENT 258
#define FCONST 259
#define SCONST 260
#define BCONST 261
#define XCONST 262
#define Op 263
#define ICONST 264
#define PARAM 265
#define TYPECAST 266
#define DOT_DOT 267
#define COLON_EQUALS 268
#define EQUALS_GREATER 269
#define LAMBDA_ARROW 270
#define POWER_OF 271
#define LESS_EQUALS 272
#define GREATER_EQUALS 273
#define NOT_EQUALS 274
#define ABORT_P 275
#define ABSOLUTE_P 276
#define ACCESS 277
#define ACTION 278
#define ADD_P 279
#define ADMIN 280
#define AFTER 281
#define AGGREGATE 282
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 4db86e588 (Update Alias Type)
#define ALL 283
#define ALSO 284
#define ALTER 285
#define ALWAYS 286
#define ANALYSE 287
#define ANALYZE 288
#define AND 289
#define ANY 290
#define ARRAY 291
#define AS 292
#define ASC_P 293
#define ASSERTION 294
#define ASSIGNMENT 295
#define ASYMMETRIC 296
#define AT 297
#define ATTACH 298
#define ATTRIBUTE 299
#define AUTHORIZATION 300
#define BACKWARD 301
#define BEFORE 302
#define BEGIN_P 303
#define BETWEEN 304
#define BIGINT 305
#define BINARY 306
#define BIT 307
#define BOOLEAN_P 308
#define BOTH 309
#define BY 310
#define CACHE 311
#define CALL_P 312
#define CALLED 313
#define CASCADE 314
#define CASCADED 315
#define CASE 316
#define CAST 317
#define CATALOG_P 318
#define CHAIN 319
#define CHAR_P 320
#define CHARACTER 321
#define CHARACTERISTICS 322
#define CHECK_P 323
#define CHECKPOINT 324
#define CLASS 325
#define CLOSE 326
#define CLUSTER 327
#define COALESCE 328
#define COLLATE 329
#define COLLATION 330
#define COLUMN 331
#define COLUMNS 332
#define COMMENT 333
#define COMMENTS 334
#define COMMIT 335
#define COMMITTED 336
#define COMPRESSION 337
#define CONCURRENTLY 338
#define CONFIGURATION 339
#define CONFLICT 340
#define CONNECTION 341
#define CONSTRAINT 342
#define CONSTRAINTS 343
#define CONTENT_P 344
#define CONTINUE_P 345
#define CONVERSION_P 346
#define COPY 347
#define COST 348
#define CREATE_P 349
#define CROSS 350
#define CSV 351
#define CUBE 352
#define CURRENT_P 353
#define CURRENT_CATALOG 354
#define CURRENT_DATE 355
#define CURRENT_ROLE 356
#define CURRENT_SCHEMA 357
#define CURRENT_TIME 358
#define CURRENT_TIMESTAMP 359
#define CURRENT_USER 360
#define CURSOR 361
#define CYCLE 362
#define DATA_P 363
#define DATABASE 364
#define DAY_P 365
#define DAYS_P 366
#define DEALLOCATE 367
#define DEC 368
#define DECIMAL_P 369
#define DECLARE 370
#define DEFAULT 371
#define DEFAULTS 372
#define DEFERRABLE 373
#define DEFERRED 374
#define DEFINER 375
#define DELETE_P 376
#define DELIMITER 377
#define DELIMITERS 378
#define DEPENDS 379
#define DESC_P 380
#define DESCRIBE 381
#define DETACH 382
#define DICTIONARY 383
#define DISABLE_P 384
#define DISCARD 385
#define DISTINCT 386
#define DO 387
#define DOCUMENT_P 388
#define DOMAIN_P 389
#define DOUBLE_P 390
#define DROP 391
#define EACH 392
#define ELSE 393
#define ENABLE_P 394
#define ENCODING 395
#define ENCRYPTED 396
#define END_P 397
#define ENUM_P 398
#define ESCAPE 399
#define EVENT 400
#define EXCEPT 401
#define EXCLUDE 402
#define EXCLUDING 403
#define EXCLUSIVE 404
#define EXECUTE 405
#define EXISTS 406
#define EXPLAIN 407
#define EXPORT_P 408
#define EXPORT_STATE 409
#define EXTENSION 410
#define EXTERNAL 411
#define EXTRACT 412
#define FALSE_P 413
#define FAMILY 414
#define FETCH 415
#define FILTER 416
#define FIRST_P 417
#define FLOAT_P 418
#define FOLLOWING 419
#define FOR 420
#define FORCE 421
#define FOREIGN 422
#define FORWARD 423
#define FREEZE 424
#define FROM 425
#define FULL 426
#define FUNCTION 427
#define FUNCTIONS 428
#define GENERATED 429
#define GLOB 430
#define GLOBAL 431
#define GRANT 432
#define GRANTED 433
#define GROUP_P 434
#define GROUPING 435
#define GROUPING_ID 436
#define HANDLER 437
#define HAVING 438
#define HEADER_P 439
#define HOLD 440
#define HOUR_P 441
#define HOURS_P 442
#define IDENTITY_P 443
#define IF_P 444
#define IGNORE_P 445
#define ILIKE 446
#define IMMEDIATE 447
#define IMMUTABLE 448
#define IMPLICIT_P 449
#define IMPORT_P 450
#define IN_P 451
#define INCLUDING 452
#define INCREMENT 453
#define INDEX 454
#define INDEXES 455
#define INHERIT 456
#define INHERITS 457
#define INITIALLY 458
#define INLINE_P 459
#define INNER_P 460
#define INOUT 461
#define INPUT_P 462
#define INSENSITIVE 463
#define INSERT 464
#define INSTALL 465
#define INSTEAD 466
#define INT_P 467
#define INTEGER 468
#define INTERSECT 469
#define INTERVAL 470
#define INTO 471
#define INVOKER 472
#define IS 473
#define ISNULL 474
#define ISOLATION 475
#define JOIN 476
#define JSON 477
#define KEY 478
#define LABEL 479
#define LANGUAGE 480
#define LARGE_P 481
#define LAST_P 482
#define LATERAL_P 483
#define LEADING 484
#define LEAKPROOF 485
#define LEFT 486
#define LEVEL 487
#define LIKE 488
#define LIMIT 489
#define LISTEN 490
#define LOAD 491
#define LOCAL 492
#define LOCALTIME 493
#define LOCALTIMESTAMP 494
#define LOCATION 495
#define LOCK_P 496
#define LOCKED 497
#define LOGGED 498
#define MACRO 499
#define MAP 500
#define MAPPING 501
#define MATCH 502
#define MATERIALIZED 503
#define MAXVALUE 504
#define METHOD 505
#define MICROSECOND_P 506
#define MICROSECONDS_P 507
#define MILLISECOND_P 508
#define MILLISECONDS_P 509
#define MINUTE_P 510
#define MINUTES_P 511
#define MINVALUE 512
#define MODE 513
#define MONTH_P 514
#define MONTHS_P 515
#define MOVE 516
#define NAME_P 517
#define NAMES 518
#define NATIONAL 519
#define NATURAL 520
#define NCHAR 521
#define NEW 522
#define NEXT 523
#define NO 524
#define NONE 525
#define NOT 526
#define NOTHING 527
#define NOTIFY 528
#define NOTNULL 529
#define NOWAIT 530
#define NULL_P 531
#define NULLIF 532
#define NULLS_P 533
#define NUMERIC 534
#define OBJECT_P 535
#define OF 536
#define OFF 537
#define OFFSET 538
#define OIDS 539
#define OLD 540
#define ON 541
#define ONLY 542
#define OPERATOR 543
#define OPTION 544
#define OPTIONS 545
#define OR 546
#define ORDER 547
#define ORDINALITY 548
#define OUT_P 549
#define OUTER_P 550
#define OVER 551
#define OVERLAPS 552
#define OVERLAY 553
#define OVERRIDING 554
#define OWNED 555
#define OWNER 556
#define PARALLEL 557
#define PARSER 558
#define PARTIAL 559
#define PARTITION 560
#define PASSING 561
#define PASSWORD 562
#define PERCENT 563
#define PLACING 564
#define PLANS 565
#define POLICY 566
#define POSITION 567
#define PRAGMA_P 568
#define PRECEDING 569
#define PRECISION 570
#define PREPARE 571
#define PREPARED 572
#define PRESERVE 573
#define PRIMARY 574
#define PRIOR 575
#define PRIVILEGES 576
#define PROCEDURAL 577
#define PROCEDURE 578
#define PROGRAM 579
#define PUBLICATION 580
#define QUALIFY 581
#define QUOTE 582
#define RANGE 583
#define READ_P 584
#define REAL 585
#define REASSIGN 586
#define RECHECK 587
#define RECURSIVE 588
#define REF 589
#define REFERENCES 590
#define REFERENCING 591
#define REFRESH 592
#define REINDEX 593
#define RELATIVE_P 594
#define RELEASE 595
#define RENAME 596
#define REPEATABLE 597
#define REPLACE 598
#define REPLICA 599
#define RESET 600
#define RESPECT_P 601
#define RESTART 602
#define RESTRICT 603
#define RETURNING 604
#define RETURNS 605
#define REVOKE 606
#define RIGHT 607
#define ROLE 608
#define ROLLBACK 609
#define ROLLUP 610
#define ROW 611
#define ROWS 612
#define RULE 613
#define SAMPLE 614
#define SAVEPOINT 615
#define SCHEMA 616
#define SCHEMAS 617
#define SCROLL 618
#define SEARCH 619
#define SECOND_P 620
#define SECONDS_P 621
#define SECURITY 622
#define SELECT 623
#define SEQUENCE 624
#define SEQUENCES 625
#define SERIALIZABLE 626
#define SERVER 627
#define SESSION 628
#define SESSION_USER 629
#define SET 630
#define SETOF 631
#define SETS 632
#define SHARE 633
#define SHOW 634
#define SIMILAR 635
#define SIMPLE 636
#define SKIP 637
#define SMALLINT 638
#define SNAPSHOT 639
#define SOME 640
#define SQL_P 641
#define STABLE 642
#define STANDALONE_P 643
#define START 644
#define STATEMENT 645
#define STATISTICS 646
#define STDIN 647
#define STDOUT 648
#define STORAGE 649
<<<<<<< HEAD
#define STORED 650
=======
#define ALIAS_P 283
#define ALL 284
#define ALSO 285
#define ALTER 286
#define ALWAYS 287
#define ANALYSE 288
#define ANALYZE 289
#define AND 290
#define ANY 291
#define ARRAY 292
#define AS 293
#define ASC_P 294
#define ASSERTION 295
#define ASSIGNMENT 296
#define ASYMMETRIC 297
#define AT 298
#define ATTACH 299
#define ATTRIBUTE 300
#define AUTHORIZATION 301
#define BACKWARD 302
#define BEFORE 303
#define BEGIN_P 304
#define BETWEEN 305
#define BIGINT 306
#define BINARY 307
#define BIT 308
#define BOOLEAN_P 309
#define BOTH 310
#define BY 311
#define CACHE 312
#define CALL_P 313
#define CALLED 314
#define CASCADE 315
#define CASCADED 316
#define CASE 317
#define CAST 318
#define CATALOG_P 319
#define CHAIN 320
#define CHAR_P 321
#define CHARACTER 322
#define CHARACTERISTICS 323
#define CHECK_P 324
#define CHECKPOINT 325
#define CLASS 326
#define CLOSE 327
#define CLUSTER 328
#define COALESCE 329
#define COLLATE 330
#define COLLATION 331
#define COLUMN 332
#define COLUMNS 333
#define COMMENT 334
#define COMMENTS 335
#define COMMIT 336
#define COMMITTED 337
#define COMPRESSION 338
#define CONCURRENTLY 339
#define CONFIGURATION 340
#define CONFLICT 341
#define CONNECTION 342
#define CONSTRAINT 343
#define CONSTRAINTS 344
#define CONTENT_P 345
#define CONTINUE_P 346
#define CONVERSION_P 347
#define COPY 348
#define COST 349
#define CREATE_P 350
#define CROSS 351
#define CSV 352
#define CUBE 353
#define CURRENT_P 354
#define CURRENT_CATALOG 355
#define CURRENT_DATE 356
#define CURRENT_ROLE 357
#define CURRENT_SCHEMA 358
#define CURRENT_TIME 359
#define CURRENT_TIMESTAMP 360
#define CURRENT_USER 361
#define CURSOR 362
#define CYCLE 363
#define DATA_P 364
#define DATABASE 365
#define DAY_P 366
#define DAYS_P 367
#define DEALLOCATE 368
#define DEC 369
#define DECIMAL_P 370
#define DECLARE 371
#define DEFAULT 372
#define DEFAULTS 373
#define DEFERRABLE 374
#define DEFERRED 375
#define DEFINER 376
#define DELETE_P 377
#define DELIMITER 378
#define DELIMITERS 379
#define DEPENDS 380
#define DESC_P 381
#define DESCRIBE 382
#define DETACH 383
#define DICTIONARY 384
#define DISABLE_P 385
#define DISCARD 386
#define DISTINCT 387
#define DO 388
#define DOCUMENT_P 389
#define DOMAIN_P 390
#define DOUBLE_P 391
#define DROP 392
#define EACH 393
#define ELSE 394
#define ENABLE_P 395
#define ENCODING 396
#define ENCRYPTED 397
#define END_P 398
#define ENUM_P 399
#define ESCAPE 400
#define EVENT 401
#define EXCEPT 402
#define EXCLUDE 403
#define EXCLUDING 404
#define EXCLUSIVE 405
#define EXECUTE 406
#define EXISTS 407
#define EXPLAIN 408
#define EXPORT_P 409
#define EXPORT_STATE 410
#define EXTENSION 411
#define EXTERNAL 412
#define EXTRACT 413
#define FALSE_P 414
#define FAMILY 415
#define FETCH 416
#define FILTER 417
#define FIRST_P 418
#define FLOAT_P 419
#define FOLLOWING 420
#define FOR 421
#define FORCE 422
#define FOREIGN 423
#define FORWARD 424
#define FREEZE 425
#define FROM 426
#define FULL 427
#define FUNCTION 428
#define FUNCTIONS 429
#define GENERATED 430
#define GLOB 431
#define GLOBAL 432
#define GRANT 433
#define GRANTED 434
#define GROUP_P 435
#define GROUPING 436
#define GROUPING_ID 437
#define HANDLER 438
#define HAVING 439
#define HEADER_P 440
#define HOLD 441
#define HOUR_P 442
#define HOURS_P 443
#define IDENTITY_P 444
#define IF_P 445
#define IGNORE_P 446
#define ILIKE 447
#define IMMEDIATE 448
#define IMMUTABLE 449
#define IMPLICIT_P 450
#define IMPORT_P 451
#define IN_P 452
#define INCLUDING 453
#define INCREMENT 454
#define INDEX 455
#define INDEXES 456
#define INHERIT 457
#define INHERITS 458
#define INITIALLY 459
#define INLINE_P 460
#define INNER_P 461
#define INOUT 462
#define INPUT_P 463
#define INSENSITIVE 464
#define INSERT 465
#define INSTALL 466
#define INSTEAD 467
#define INT_P 468
#define INTEGER 469
#define INTERSECT 470
#define INTERVAL 471
#define INTO 472
#define INVOKER 473
#define IS 474
#define ISNULL 475
#define ISOLATION 476
#define JOIN 477
#define JSON 478
#define KEY 479
#define LABEL 480
#define LANGUAGE 481
#define LARGE_P 482
#define LAST_P 483
#define LATERAL_P 484
#define LEADING 485
#define LEAKPROOF 486
#define LEFT 487
#define LEVEL 488
#define LIKE 489
#define LIMIT 490
#define LISTEN 491
#define LOAD 492
#define LOCAL 493
#define LOCALTIME 494
#define LOCALTIMESTAMP 495
#define LOCATION 496
#define LOCK_P 497
#define LOCKED 498
#define LOGGED 499
#define MACRO 500
#define MAP 501
#define MAPPING 502
#define MATCH 503
#define MATERIALIZED 504
#define MAXVALUE 505
#define METHOD 506
#define MICROSECOND_P 507
#define MICROSECONDS_P 508
#define MILLISECOND_P 509
#define MILLISECONDS_P 510
#define MINUTE_P 511
#define MINUTES_P 512
#define MINVALUE 513
#define MODE 514
#define MONTH_P 515
#define MONTHS_P 516
#define MOVE 517
#define NAME_P 518
#define NAMES 519
#define NATIONAL 520
#define NATURAL 521
#define NCHAR 522
#define NEW 523
#define NEXT 524
#define NO 525
#define NONE 526
#define NOT 527
#define NOTHING 528
#define NOTIFY 529
#define NOTNULL 530
#define NOWAIT 531
#define NULL_P 532
#define NULLIF 533
#define NULLS_P 534
#define NUMERIC 535
#define OBJECT_P 536
#define OF 537
#define OFF 538
#define OFFSET 539
#define OIDS 540
#define OLD 541
#define ON 542
#define ONLY 543
#define OPERATOR 544
#define OPTION 545
#define OPTIONS 546
#define OR 547
#define ORDER 548
#define ORDINALITY 549
#define OUT_P 550
#define OUTER_P 551
#define OVER 552
#define OVERLAPS 553
#define OVERLAY 554
#define OVERRIDING 555
#define OWNED 556
#define OWNER 557
#define PARALLEL 558
#define PARSER 559
#define PARTIAL 560
#define PARTITION 561
#define PASSING 562
#define PASSWORD 563
#define PERCENT 564
#define PLACING 565
#define PLANS 566
#define POLICY 567
#define POSITION 568
#define PRAGMA_P 569
#define PRECEDING 570
#define PRECISION 571
#define PREPARE 572
#define PREPARED 573
#define PRESERVE 574
#define PRIMARY 575
#define PRIOR 576
#define PRIVILEGES 577
#define PROCEDURAL 578
#define PROCEDURE 579
#define PROGRAM 580
#define PUBLICATION 581
#define QUALIFY 582
#define QUOTE 583
#define RANGE 584
#define READ_P 585
#define REAL 586
#define REASSIGN 587
#define RECHECK 588
#define RECURSIVE 589
#define REF 590
#define REFERENCES 591
#define REFERENCING 592
#define REFRESH 593
#define REINDEX 594
#define RELATIVE_P 595
#define RELEASE 596
#define RENAME 597
#define REPEATABLE 598
#define REPLACE 599
#define REPLICA 600
#define RESET 601
#define RESPECT_P 602
#define RESTART 603
#define RESTRICT 604
#define RETURNING 605
#define RETURNS 606
#define REVOKE 607
#define RIGHT 608
#define ROLE 609
#define ROLLBACK 610
#define ROLLUP 611
#define ROW 612
#define ROWS 613
#define RULE 614
#define SAMPLE 615
#define SAVEPOINT 616
#define SCHEMA 617
#define SCHEMAS 618
#define SCROLL 619
#define SEARCH 620
#define SECOND_P 621
#define SECONDS_P 622
#define SECURITY 623
#define SELECT 624
#define SEQUENCE 625
#define SEQUENCES 626
#define SERIALIZABLE 627
#define SERVER 628
#define SESSION 629
#define SESSION_USER 630
#define SET 631
#define SETOF 632
#define SETS 633
#define SHARE 634
#define SHOW 635
#define SIMILAR 636
#define SIMPLE 637
#define SKIP 638
#define SMALLINT 639
#define SNAPSHOT 640
#define SOME 641
#define SQL_P 642
#define STABLE 643
#define STANDALONE_P 644
#define START 645
#define STATEMENT 646
#define STATISTICS 647
#define STDIN 648
#define STDOUT 649
#define STORAGE 650
>>>>>>> 01f1e3899 (Adding alias type)
#define STRICT_P 651
#define STRIP_P 652
#define STRUCT 653
#define SUBSCRIPTION 654
#define SUBSTRING 655
#define SUMMARIZE 656
#define SYMMETRIC 657
#define SYSID 658
#define SYSTEM_P 659
#define TABLE 660
#define TABLES 661
#define TABLESAMPLE 662
#define TABLESPACE 663
#define TEMP 664
#define TEMPLATE 665
#define TEMPORARY 666
#define TEXT_P 667
#define THEN 668
#define TIME 669
#define TIMESTAMP 670
#define TO 671
#define TRAILING 672
#define TRANSACTION 673
#define TRANSFORM 674
#define TREAT 675
#define TRIGGER 676
#define TRIM 677
#define TRUE_P 678
#define TRUNCATE 679
#define TRUSTED 680
#define TRY_CAST 681
#define TYPE_P 682
#define TYPES_P 683
#define UNBOUNDED 684
#define UNCOMMITTED 685
#define UNENCRYPTED 686
#define UNION 687
#define UNIQUE 688
#define UNKNOWN 689
#define UNLISTEN 690
#define UNLOGGED 691
#define UNTIL 692
#define UPDATE 693
#define USER 694
#define USING 695
#define VACUUM 696
#define VALID 697
#define VALIDATE 698
#define VALIDATOR 699
#define VALUE_P 700
#define VALUES 701
#define VARCHAR 702
#define VARIADIC 703
#define VARYING 704
#define VERBOSE 705
#define VERSION_P 706
#define VIEW 707
#define VIEWS 708
<<<<<<< HEAD
#define VIRTUAL 709
#define VOLATILE 710
#define WHEN 711
#define WHERE 712
#define WHITESPACE_P 713
#define WINDOW 714
#define WITH 715
#define WITHIN 716
#define WITHOUT 717
#define WORK 718
#define WRAPPER 719
#define WRITE_P 720
#define XML_P 721
#define XMLATTRIBUTES 722
#define XMLCONCAT 723
#define XMLELEMENT 724
#define XMLEXISTS 725
#define XMLFOREST 726
#define XMLNAMESPACES 727
#define XMLPARSE 728
#define XMLPI 729
#define XMLROOT 730
#define XMLSERIALIZE 731
#define XMLTABLE 732
#define YEAR_P 733
#define YEARS_P 734
#define YES_P 735
#define ZONE 736
#define NOT_LA 737
#define NULLS_LA 738
#define WITH_LA 739
#define POSTFIXOP 740
#define UMINUS 741
=======
#define VOLATILE 709
#define WHEN 710
#define WHERE 711
#define WHITESPACE_P 712
#define WINDOW 713
#define WITH 714
#define WITHIN 715
#define WITHOUT 716
#define WORK 717
#define WRAPPER 718
#define WRITE_P 719
#define XML_P 720
#define XMLATTRIBUTES 721
#define XMLCONCAT 722
#define XMLELEMENT 723
#define XMLEXISTS 724
#define XMLFOREST 725
#define XMLNAMESPACES 726
#define XMLPARSE 727
#define XMLPI 728
#define XMLROOT 729
#define XMLSERIALIZE 730
#define XMLTABLE 731
#define YEAR_P 732
#define YEARS_P 733
#define YES_P 734
#define ZONE 735
#define NOT_LA 736
#define NULLS_LA 737
#define WITH_LA 738
#define POSTFIXOP 739
#define UMINUS 740
>>>>>>> 01f1e3899 (Adding alias type)
=======
#define STRICT_P 650
#define STRIP_P 651
#define STRUCT 652
#define SUBSCRIPTION 653
#define SUBSTRING 654
#define SUMMARIZE 655
#define SYMMETRIC 656
#define SYSID 657
#define SYSTEM_P 658
#define TABLE 659
#define TABLES 660
#define TABLESAMPLE 661
#define TABLESPACE 662
#define TEMP 663
#define TEMPLATE 664
#define TEMPORARY 665
#define TEXT_P 666
#define THEN 667
#define TIME 668
#define TIMESTAMP 669
#define TO 670
#define TRAILING 671
#define TRANSACTION 672
#define TRANSFORM 673
#define TREAT 674
#define TRIGGER 675
#define TRIM 676
#define TRUE_P 677
#define TRUNCATE 678
#define TRUSTED 679
#define TRY_CAST 680
#define TYPE_P 681
#define TYPES_P 682
#define UNBOUNDED 683
#define UNCOMMITTED 684
#define UNENCRYPTED 685
#define UNION 686
#define UNIQUE 687
#define UNKNOWN 688
#define UNLISTEN 689
#define UNLOGGED 690
#define UNTIL 691
#define UPDATE 692
#define USER 693
#define USING 694
#define VACUUM 695
#define VALID 696
#define VALIDATE 697
#define VALIDATOR 698
#define VALUE_P 699
#define VALUES 700
#define VARCHAR 701
#define VARIADIC 702
#define VARYING 703
#define VERBOSE 704
#define VERSION_P 705
#define VIEW 706
#define VIEWS 707
#define VOLATILE 708
#define WHEN 709
#define WHERE 710
#define WHITESPACE_P 711
#define WINDOW 712
#define WITH 713
#define WITHIN 714
#define WITHOUT 715
#define WORK 716
#define WRAPPER 717
#define WRITE_P 718
#define XML_P 719
#define XMLATTRIBUTES 720
#define XMLCONCAT 721
#define XMLELEMENT 722
#define XMLEXISTS 723
#define XMLFOREST 724
#define XMLNAMESPACES 725
#define XMLPARSE 726
#define XMLPI 727
#define XMLROOT 728
#define XMLSERIALIZE 729
#define XMLTABLE 730
#define YEAR_P 731
#define YEARS_P 732
#define YES_P 733
#define ZONE 734
#define NOT_LA 735
#define NULLS_LA 736
#define WITH_LA 737
#define POSTFIXOP 738
#define UMINUS 739
>>>>>>> 4db86e588 (Update Alias Type)



>>>>>>> cd57a6c5f (Implicitly typed constraints working)

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "third_party/libpg_query/grammar/grammar.y"
{
	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;
	const char          *conststr;

	char				chr;
	bool				boolean;
	PGJoinType			jtype;
	PGDropBehavior		dbehavior;
	PGOnCommitAction		oncommit;
	PGOnCreateConflict		oncreateconflict;
	PGList				*list;
	PGNode				*node;
	PGValue				*value;
	PGObjectType			objtype;
	PGTypeName			*typnam;
	PGObjectWithArgs		*objwithargs;
	PGDefElem				*defelt;
	PGSortBy				*sortby;
	PGWindowDef			*windef;
	PGJoinExpr			*jexpr;
	PGIndexElem			*ielem;
	PGAlias				*alias;
	PGRangeVar			*range;
	PGIntoClause			*into;
	PGWithClause			*with;
	PGInferClause			*infer;
	PGOnConflictClause	*onconflict;
	PGAIndices			*aind;
	PGResTarget			*target;
	PGInsertStmt			*istmt;
	PGVariableSetStmt		*vsetstmt;
	PGOverridingKind       override;
	PGSortByDir            sortorder;
	PGSortByNulls          nullorder;
	PGConstrType           constr;
	PGLockClauseStrength lockstrength;
	PGLockWaitPolicy lockwaitpolicy;
	PGSubLinkType subquerytype;
	PGViewCheckOption viewcheckoption;
<<<<<<< HEAD
<<<<<<< HEAD
}
<<<<<<< HEAD
<<<<<<< HEAD
/* Line 1529 of yacc.c.  */
<<<<<<< HEAD
<<<<<<< HEAD
#line 1061 "third_party/libpg_query/grammar/grammar_out.hpp"
=======
/* Line 1489 of yacc.c.  */
=======
/* Line 1529 of yacc.c.  */
>>>>>>> 850c9f1c6 (added CASCADE to ALTER COLUMN TYPE for generated columns, if it's specified and the column is a dependency of a generated column, the generated column is removed)
#line 1063 "third_party/libpg_query/grammar/grammar_out.hpp"
>>>>>>> 685d6e15e (added support in the grammar for VIRTUAL generated columns)
=======
#line 1063 "third_party/libpg_query/grammar/grammar_out.hpp"
>>>>>>> 01f1e3899 (Adding alias type)
=======
#line 1061 "third_party/libpg_query/grammar/grammar_out.hpp"
>>>>>>> 4db86e588 (Update Alias Type)
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
=======

#line 594 "third_party/libpg_query/grammar/grammar_out.hpp"

};
typedef union YYSTYPE YYSTYPE;
>>>>>>> eacf963c7 (opt_Typename)
# define YYSTYPE_IS_TRIVIAL 1
=======
}
/* Line 1529 of yacc.c.  */
#line 1066 "third_party/libpg_query/grammar/grammar_out.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
>>>>>>> cd57a6c5f (Implicitly typed constraints working)
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



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


