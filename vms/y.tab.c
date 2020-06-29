/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ADD = 258,
     _SUB = 259,
     _MUL = 260,
     _DIV = 261,
     _MOD = 262,
     _NOT = 263,
     _INF = 264,
     _INFEQ = 265,
     _SUP = 266,
     _SUPEQ = 267,
     _FADD = 268,
     _FSUB = 269,
     _FSIN = 270,
     _FCOS = 271,
     _FTAN = 272,
     _FMUL = 273,
     _FDIV = 274,
     _FINF = 275,
     _FINFEQ = 276,
     _FSUP = 277,
     _FSUPEQ = 278,
     _PADD = 279,
     _CONCAT = 280,
     _ALLOC = 281,
     _ALLOCN = 282,
     _FREE = 283,
     _EQUAL = 284,
     _ATOI = 285,
     _ATOF = 286,
     _ITOF = 287,
     _FTOI = 288,
     _STRI = 289,
     _STRF = 290,
     _PUSHI = 291,
     _PUSHN = 292,
     _PUSHF = 293,
     _PUSHS = 294,
     _PUSHG = 295,
     _PUSHL = 296,
     _PUSHSP = 297,
     _PUSHFP = 298,
     _PUSHGP = 299,
     _LOAD = 300,
     _LOADN = 301,
     _DUP = 302,
     _DUPN = 303,
     _POP = 304,
     _POPN = 305,
     _STOREL = 306,
     _STOREG = 307,
     _STORE = 308,
     _STOREN = 309,
     _CHECK = 310,
     _SWAP = 311,
     _WRITEI = 312,
     _WRITEF = 313,
     _WRITES = 314,
     _READ = 315,
     _READI = 316,
     _READF = 317,
     _READS = 318,
     _JUMP = 319,
     _JZ = 320,
     _PUSHA = 321,
     _CALL = 322,
     _ARETURN = 323,
     _START = 324,
     _NOP = 325,
     _ERR = 326,
     _STOP = 327,
     _INT = 328,
     _FLOAT = 329,
     _STRING = 330,
     _LABEL = 331
   };
#endif
/* Tokens.  */
#define _ADD 258
#define _SUB 259
#define _MUL 260
#define _DIV 261
#define _MOD 262
#define _NOT 263
#define _INF 264
#define _INFEQ 265
#define _SUP 266
#define _SUPEQ 267
#define _FADD 268
#define _FSUB 269
#define _FSIN 270
#define _FCOS 271
#define _FTAN 272
#define _FMUL 273
#define _FDIV 274
#define _FINF 275
#define _FINFEQ 276
#define _FSUP 277
#define _FSUPEQ 278
#define _PADD 279
#define _CONCAT 280
#define _ALLOC 281
#define _ALLOCN 282
#define _FREE 283
#define _EQUAL 284
#define _ATOI 285
#define _ATOF 286
#define _ITOF 287
#define _FTOI 288
#define _STRI 289
#define _STRF 290
#define _PUSHI 291
#define _PUSHN 292
#define _PUSHF 293
#define _PUSHS 294
#define _PUSHG 295
#define _PUSHL 296
#define _PUSHSP 297
#define _PUSHFP 298
#define _PUSHGP 299
#define _LOAD 300
#define _LOADN 301
#define _DUP 302
#define _DUPN 303
#define _POP 304
#define _POPN 305
#define _STOREL 306
#define _STOREG 307
#define _STORE 308
#define _STOREN 309
#define _CHECK 310
#define _SWAP 311
#define _WRITEI 312
#define _WRITEF 313
#define _WRITES 314
#define _READ 315
#define _READI 316
#define _READF 317
#define _READS 318
#define _JUMP 319
#define _JZ 320
#define _PUSHA 321
#define _CALL 322
#define _ARETURN 323
#define _START 324
#define _NOP 325
#define _ERR 326
#define _STOP 327
#define _INT 328
#define _FLOAT 329
#define _STRING 330
#define _LABEL 331




/* Copy the first part of user declarations.  */
#line 1 "syntax.y"

#include <stdio.h>
#include <unistd.h>
#include <glib.h>
#include "structs/code.h"
#include "structs/types.h"

extern int yylineno;
extern Code code;
extern GHashTable* labels;

extern void finish();

void yyerror (const char*);
void add(CodeElem);
int yylex();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "syntax.y"
{
    int i;
    float f;
    GString* s;
}
/* Line 193 of yacc.c.  */
#line 272 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 285 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   91

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  4
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  93

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    12,    15,    18,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    53,    55,    57,    59,    61,
      63,    65,    67,    69,    71,    73,    75,    78,    80,    83,
      85,    88,    91,    93,    95,    97,   100,   102,   105,   108,
     111,   113,   115,   118,   121,   123,   125,   127,   129,   131,
     133,   135,   137,   139,   141,   143,   145,   148,   151,   153,
     156,   158,   162
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      79,     0,    -1,    79,    80,    -1,    -1,    81,    -1,    76,
      77,    -1,    36,    73,    -1,    38,    74,    -1,    37,    73,
      -1,    69,    -1,     3,    -1,    57,    -1,    58,    -1,    59,
      -1,     8,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    18,    -1,    19,    -1,    16,    -1,    15,
      -1,    17,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    29,    -1,    24,    -1,    26,    73,    -1,    27,    -1,
      47,    73,    -1,    48,    -1,    40,    73,    -1,    41,    73,
      -1,    42,    -1,    43,    -1,    44,    -1,    49,    73,    -1,
      50,    -1,    64,    76,    -1,    65,    76,    -1,    66,    76,
      -1,    67,    -1,    68,    -1,    51,    73,    -1,    52,    73,
      -1,    70,    -1,    72,    -1,    56,    -1,    60,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,
      -1,    25,    -1,    28,    -1,    39,    75,    -1,    45,    73,
      -1,    46,    -1,    53,    73,    -1,    54,    -1,    55,    73,
      73,    -1,    71,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    34,    37,    38,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ADD", "_SUB", "_MUL", "_DIV", "_MOD",
  "_NOT", "_INF", "_INFEQ", "_SUP", "_SUPEQ", "_FADD", "_FSUB", "_FSIN",
  "_FCOS", "_FTAN", "_FMUL", "_FDIV", "_FINF", "_FINFEQ", "_FSUP",
  "_FSUPEQ", "_PADD", "_CONCAT", "_ALLOC", "_ALLOCN", "_FREE", "_EQUAL",
  "_ATOI", "_ATOF", "_ITOF", "_FTOI", "_STRI", "_STRF", "_PUSHI", "_PUSHN",
  "_PUSHF", "_PUSHS", "_PUSHG", "_PUSHL", "_PUSHSP", "_PUSHFP", "_PUSHGP",
  "_LOAD", "_LOADN", "_DUP", "_DUPN", "_POP", "_POPN", "_STOREL",
  "_STOREG", "_STORE", "_STOREN", "_CHECK", "_SWAP", "_WRITEI", "_WRITEF",
  "_WRITES", "_READ", "_READI", "_READF", "_READS", "_JUMP", "_JZ",
  "_PUSHA", "_CALL", "_ARETURN", "_START", "_NOP", "_ERR", "_STOP", "_INT",
  "_FLOAT", "_STRING", "_LABEL", "':'", "$accept", "Program", "Elem",
  "Instr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     1,     2,     1,     2,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       1,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    10,    15,    16,    17,    18,    14,    19,
      20,    21,    22,    23,    24,    28,    27,    29,    25,    26,
      30,    31,    32,    33,    35,    64,     0,    37,    65,    34,
      58,    59,    60,    61,    62,    63,     0,     0,     0,     0,
       0,     0,    42,    43,    44,     0,    68,     0,    39,     0,
      46,     0,     0,     0,    70,     0,    56,    11,    12,    13,
      57,     0,     0,     0,    50,    51,     9,    54,     0,    55,
       0,     2,     4,    36,     6,     8,     7,    66,    40,    41,
      67,    38,    45,    52,    53,    69,     0,    47,    48,    49,
      72,     5,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    71,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -73
static const yytype_int8 yypact[] =
{
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -72,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -71,   -12,   -11,   -13,
       1,     2,   -73,   -73,   -73,     4,   -73,     5,   -73,     6,
     -73,     7,     8,     9,   -73,    10,   -73,   -73,   -73,   -73,
     -73,    -3,    11,    12,   -73,   -73,   -73,   -73,    14,   -73,
      13,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,    18,   -73,   -73,   -73,
     -73,   -73,   -73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -73,   -73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       2,    73,    74,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    75,    77,    76,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    87,    78,    79,    70,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,    88,    89,    90,
      91,    92
};

static const yytype_int8 yycheck[] =
{
       0,    73,    73,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    73,    75,    74,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    76,    73,    73,    76,    73,    73,    73,
      73,    73,    73,    73,    -1,    -1,    -1,    76,    76,    75,
      77,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    79,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      76,    80,    81,    73,    73,    73,    74,    75,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    76,    76,    76,
      75,    77,    73
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 38 "syntax.y"
    { g_hash_table_insert(labels, (yyvsp[(1) - (2)].s)->str, newHashData((code.array.len)-1)); }
    break;

  case 6:
#line 41 "syntax.y"
    { Code_add( newCodeElem( PUSHI  , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 7:
#line 42 "syntax.y"
    { Code_add( newCodeElem( PUSHF  , newValue((Uvalue) (yyvsp[(2) - (2)].f), T_float ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 8:
#line 43 "syntax.y"
    { Code_add( newCodeElem( PUSHN  , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 9:
#line 44 "syntax.y"
    { Code_add( newCodeElem( START  , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 10:
#line 45 "syntax.y"
    { Code_add( newCodeElem( ADD    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 11:
#line 46 "syntax.y"
    { Code_add( newCodeElem( WRITEI , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 12:
#line 47 "syntax.y"
    { Code_add( newCodeElem( WRITEF , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 13:
#line 48 "syntax.y"
    { Code_add( newCodeElem( WRITES , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 14:
#line 49 "syntax.y"
    { Code_add( newCodeElem( NOT    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 15:
#line 50 "syntax.y"
    { Code_add( newCodeElem( SUB    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 16:
#line 51 "syntax.y"
    { Code_add( newCodeElem( MUL    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 17:
#line 52 "syntax.y"
    { Code_add( newCodeElem( DIV    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 18:
#line 53 "syntax.y"
    { Code_add( newCodeElem( MOD    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 19:
#line 54 "syntax.y"
    { Code_add( newCodeElem( INF    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 20:
#line 55 "syntax.y"
    { Code_add( newCodeElem( INFEQ  , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 21:
#line 56 "syntax.y"
    { Code_add( newCodeElem( SUP    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 22:
#line 57 "syntax.y"
    { Code_add( newCodeElem( SUPEQ  , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 23:
#line 58 "syntax.y"
    { Code_add( newCodeElem( FADD   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 24:
#line 59 "syntax.y"
    { Code_add( newCodeElem( FSUB   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 25:
#line 60 "syntax.y"
    { Code_add( newCodeElem( FMUL   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 26:
#line 61 "syntax.y"
    { Code_add( newCodeElem( FDIV   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 27:
#line 62 "syntax.y"
    { Code_add( newCodeElem( FCOS   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 28:
#line 63 "syntax.y"
    { Code_add( newCodeElem( FSIN   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 29:
#line 64 "syntax.y"
    { Code_add( newCodeElem( FTAN   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 30:
#line 65 "syntax.y"
    { Code_add( newCodeElem( FINF   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 31:
#line 66 "syntax.y"
    { Code_add( newCodeElem( FINFEQ , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 32:
#line 67 "syntax.y"
    { Code_add( newCodeElem( FSUP   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 33:
#line 68 "syntax.y"
    { Code_add( newCodeElem( FSUPEQ , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 34:
#line 69 "syntax.y"
    { Code_add( newCodeElem( EQUAL  , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 35:
#line 70 "syntax.y"
    { Code_add( newCodeElem( PADD   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 36:
#line 71 "syntax.y"
    { Code_add( newCodeElem( ALLOC  , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 37:
#line 72 "syntax.y"
    { Code_add( newCodeElem( ALLOCN , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 38:
#line 73 "syntax.y"
    { Code_add( newCodeElem( DUP    , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 39:
#line 74 "syntax.y"
    { Code_add( newCodeElem( DUPN   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 40:
#line 75 "syntax.y"
    { Code_add( newCodeElem( PUSHG  , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 41:
#line 76 "syntax.y"
    { Code_add( newCodeElem( PUSHL  , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 42:
#line 77 "syntax.y"
    { Code_add( newCodeElem( PUSHSP , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 43:
#line 78 "syntax.y"
    { Code_add( newCodeElem( PUSHFP , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 44:
#line 79 "syntax.y"
    { Code_add( newCodeElem( PUSHGP , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 45:
#line 80 "syntax.y"
    { Code_add( newCodeElem( POP    , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 46:
#line 81 "syntax.y"
    { Code_add( newCodeElem( POPN   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 47:
#line 82 "syntax.y"
    { Code_add( newCodeElem( JUMP   , newValue((Uvalue) (yyvsp[(2) - (2)].s), T_string), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 48:
#line 83 "syntax.y"
    { Code_add( newCodeElem( JZ     , newValue((Uvalue) (yyvsp[(2) - (2)].s), T_string), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 49:
#line 84 "syntax.y"
    { Code_add( newCodeElem( PUSHA  , newValue((Uvalue) (yyvsp[(2) - (2)].s), T_string), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 50:
#line 85 "syntax.y"
    { Code_add( newCodeElem( CALL   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 51:
#line 86 "syntax.y"
    { Code_add( newCodeElem( ARETURN, newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 52:
#line 87 "syntax.y"
    { Code_add( newCodeElem( STOREL , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 53:
#line 88 "syntax.y"
    { Code_add( newCodeElem( STOREG , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 54:
#line 89 "syntax.y"
    { Code_add( newCodeElem( NOP    , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 55:
#line 90 "syntax.y"
    { Code_add( newCodeElem( STOP   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 56:
#line 91 "syntax.y"
    { Code_add( newCodeElem( SWAP   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 57:
#line 92 "syntax.y"
    { Code_add( newCodeElem( READ   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 58:
#line 93 "syntax.y"
    { Code_add( newCodeElem( ATOI   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 59:
#line 94 "syntax.y"
    { Code_add( newCodeElem( ATOF   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 60:
#line 95 "syntax.y"
    { Code_add( newCodeElem( ITOF   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 61:
#line 96 "syntax.y"
    { Code_add( newCodeElem( FTOI   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 62:
#line 97 "syntax.y"
    { Code_add( newCodeElem( STRI   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 63:
#line 98 "syntax.y"
    { Code_add( newCodeElem( STRF   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 64:
#line 99 "syntax.y"
    { Code_add( newCodeElem( CONCAT , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 65:
#line 100 "syntax.y"
    { Code_add( newCodeElem( FREE   , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 66:
#line 101 "syntax.y"
    { Code_add( newCodeElem( PUSHS  , newValue((Uvalue) (yyvsp[(2) - (2)].s), T_string), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 67:
#line 102 "syntax.y"
    { Code_add( newCodeElem( LOAD   , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 68:
#line 103 "syntax.y"
    { Code_add( newCodeElem( LOADN  , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 69:
#line 104 "syntax.y"
    { Code_add( newCodeElem( STORE  , newValue((Uvalue) (yyvsp[(2) - (2)].i), T_int   ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 70:
#line 105 "syntax.y"
    { Code_add( newCodeElem( STOREN , newValue((Uvalue) -1, NOTHING ), newValue((Uvalue) -1, NOTHING) ) ); }
    break;

  case 71:
#line 106 "syntax.y"
    { Code_add( newCodeElem( CHECK  , newValue((Uvalue) (yyvsp[(2) - (3)].i), T_int   ), newValue((Uvalue) (yyvsp[(3) - (3)].i), T_int  ) ) ); }
    break;

  case 72:
#line 107 "syntax.y"
    { Code_add( newCodeElem( ERR    , newValue((Uvalue) (yyvsp[(2) - (2)].s), T_string), newValue((Uvalue) -1, NOTHING) ) ); }
    break;


/* Line 1267 of yacc.c.  */
#line 1918 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 110 "syntax.y"


void yyerror(const char *s){
    fprintf(stderr , "\e[1mline:%d: \e[31mERRO\e[0m\e[1m: %s\e[0m \n" , yylineno, s);
    finish();
    //_exit(0);
}

