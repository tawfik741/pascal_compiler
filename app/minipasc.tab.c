
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "miniPasc.y"

	

#include <stdio.h>
#include <stdlib.h>
#include "semantique.c"
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;
int flag = 0;



/* Line 189 of yacc.c  */
#line 88 "miniPasc.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     program = 258,
     semicolon = 259,
     identifier = 260,
     keyword_var = 261,
     keyword_array = 262,
     keyword_of = 263,
     type_integer = 264,
     type_string = 265,
     procedure = 266,
     keyword_begin = 267,
     keyword_end = 268,
     affectop = 269,
     keyword_if = 270,
     keyword_then = 271,
     keyword_else = 272,
     keyword_while = 273,
     keyword_do = 274,
     keyword_write = 275,
     keyword_read = 276,
     opening_parenthesis = 277,
     closing_parenthesis = 278,
     opening_brackets = 279,
     closing_brackets = 280,
     mulop = 281,
     addop = 282,
     compop = 283,
     an_integer = 284,
     two_points = 285,
     comma = 286,
     colon = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "miniPasc.y"

  char * string;



/* Line 214 of yacc.c  */
#line 162 "miniPasc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 174 "miniPasc.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     8,    13,    19,    24,    31,    37,
      45,    49,    56,    64,    68,    72,    77,    79,    82,    84,
      87,    90,    94,    98,   102,   104,   108,   112,   116,   118,
     127,   136,   145,   154,   163,   172,   181,   189,   191,   193,
     195,   198,   200,   203,   207,   213,   218,   221,   224,   228,
     231,   234,   238,   242,   246,   248,   252,   256,   259,   263,
     266,   270,   273,   277,   281,   285,   289,   291,   293,   298,
     305,   312,   319,   326,   331,   336,   341,   346,   351,   355,
     360,   365,   370,   374,   379,   384,   389,   391,   396,   400,
     405,   409,   413,   415,   419,   423,   425,   429,   433,   437,
     439,   444,   449,   453,   457
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,     3,     5,     4,    -1,    -1,     3,     5,
       4,    46,    -1,     3,     5,     4,     6,    35,    -1,     3,
       5,     4,    41,    -1,     3,     5,     4,     6,    35,    46,
      -1,     3,     5,     4,    42,    46,    -1,     3,     5,     4,
       6,    35,    41,    46,    -1,     1,     5,     4,    -1,     3,
       5,     4,     1,    35,    46,    -1,     3,     5,     4,     1,
      35,    41,    46,    -1,     3,     1,     4,    -1,     3,     5,
       1,    -1,     3,     5,     4,     1,    -1,     5,    -1,    36,
      35,    -1,    36,    -1,    37,     4,    -1,    37,     1,    -1,
      38,    32,    39,    -1,    38,     1,    39,    -1,    38,    31,
       5,    -1,     5,    -1,     1,    31,     5,    -1,    38,     1,
       5,    -1,    38,    31,     1,    -1,    40,    -1,     7,    24,
      29,    30,    29,    25,     8,    40,    -1,     1,    24,    29,
      30,    29,    25,     8,    40,    -1,     7,     1,    29,    30,
      29,    25,     8,    40,    -1,     7,    24,     1,    30,    29,
      25,     8,    40,    -1,     7,    24,    29,     1,    29,    25,
       8,    40,    -1,     7,    24,    29,    30,     1,    25,     8,
      40,    -1,     7,    24,    29,    30,    29,     1,     8,    40,
      -1,     7,    24,    29,    30,    29,     1,    40,    -1,     9,
      -1,    10,    -1,     1,    -1,    42,    41,    -1,    42,    -1,
       1,    41,    -1,    43,     4,    46,    -1,    43,     4,     6,
      35,    46,    -1,    43,     4,     6,    35,    -1,    43,     4,
      -1,    11,     5,    -1,    11,     5,    44,    -1,     1,     5,
      -1,    11,     1,    -1,    22,    45,    23,    -1,    22,    45,
       1,    -1,    45,    31,    37,    -1,    37,    -1,     1,    31,
      37,    -1,    45,     1,    37,    -1,    12,    13,    -1,    12,
      47,    13,    -1,     1,    13,    -1,    48,     4,    47,    -1,
      48,     4,    -1,     1,     4,    48,    -1,    48,     1,    47,
      -1,    49,    14,    52,    -1,    49,     1,    52,    -1,    50,
      -1,    46,    -1,    15,    52,    16,    48,    -1,    15,    52,
      16,    48,    17,    48,    -1,     1,    52,    16,    48,    17,
      48,    -1,    15,    52,     1,    48,    17,    48,    -1,    15,
      52,    16,    48,     1,    48,    -1,     1,    52,    16,    48,
      -1,    15,    52,     1,    48,    -1,    18,    52,    19,    48,
      -1,     1,    52,    19,    48,    -1,    18,    52,     1,    48,
      -1,    20,    22,    23,    -1,    20,    22,    51,    23,    -1,
      20,     1,    51,    23,    -1,    20,    22,    51,     1,    -1,
      21,    22,    23,    -1,    21,    22,    51,    23,    -1,    21,
       1,    51,    23,    -1,    21,    22,    51,     1,    -1,     5,
      -1,     5,    24,    52,    25,    -1,     5,    22,    23,    -1,
       5,    22,    51,    23,    -1,     1,    22,    23,    -1,    51,
      31,    52,    -1,    52,    -1,     1,    31,    52,    -1,    51,
       1,    52,    -1,    53,    -1,    53,    27,    53,    -1,    53,
      26,    53,    -1,    53,    28,    53,    -1,     5,    -1,     5,
      24,    52,    25,    -1,     5,    24,    52,     1,    -1,    22,
      52,    23,    -1,    22,    52,     1,    -1,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    72,    73,    77,
      78,    80,    81,    84,    86,    89,    90,    91,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   105,   106,   107,
     110,   111,   112,   115,   116,   117,   118,   120,   121,   122,
     123,   126,   127,   130,   131,   132,   133,   136,   137,   138,
     141,   142,   143,   144,   147,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   173,   177,   180,   181,
     182,   185,   186,   187,   188,   191,   192,   193,   194,   197,
     198,   199,   200,   201,   202
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "program", "semicolon", "identifier",
  "keyword_var", "keyword_array", "keyword_of", "type_integer",
  "type_string", "procedure", "keyword_begin", "keyword_end", "affectop",
  "keyword_if", "keyword_then", "keyword_else", "keyword_while",
  "keyword_do", "keyword_write", "keyword_read", "opening_parenthesis",
  "closing_parenthesis", "opening_brackets", "closing_brackets", "mulop",
  "addop", "compop", "an_integer", "two_points", "comma", "colon",
  "$accept", "programmes", "liste_declarations", "declaration",
  "declaration_corps", "liste_identificateurs", "type", "standard_type",
  "declaration_methodes", "declaration_methode", "entete_methode",
  "arguments", "liste_parametres", "instruction_composee",
  "liste_instructions", "instruction", "lvalue", "appel_methode",
  "liste_expressions", "expression", "facteur", 0
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
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    35,    35,    36,
      36,    37,    37,    38,    38,    38,    38,    38,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    40,    40,    40,
      41,    41,    41,    42,    42,    42,    42,    43,    43,    43,
      43,    44,    44,    45,    45,    45,    45,    46,    46,    46,
      47,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    49,    49,    50,    50,
      50,    51,    51,    51,    51,    52,    52,    52,    52,    53,
      53,    53,    53,    53,    53
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     4,     5,     4,     6,     5,     7,
       3,     6,     7,     3,     3,     4,     1,     2,     1,     2,
       2,     3,     3,     3,     1,     3,     3,     3,     1,     8,
       8,     8,     8,     8,     8,     8,     7,     1,     1,     1,
       2,     1,     2,     3,     5,     4,     2,     2,     3,     2,
       2,     3,     3,     3,     1,     3,     3,     2,     3,     2,
       3,     2,     3,     3,     3,     3,     1,     1,     4,     6,
       6,     6,     6,     4,     4,     4,     4,     4,     3,     4,
       4,     4,     3,     4,     4,     4,     1,     4,     3,     4,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     4,     3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    16,     0,     0,     0,     0,     1,    10,
      13,    14,     0,     0,     0,     0,     0,     6,     0,     0,
       4,     0,    24,    59,     0,     0,     0,     0,    42,     0,
       0,    24,     0,    50,    47,     0,    86,    57,     0,     0,
       0,     0,    67,     0,     0,     0,    66,     0,    40,     8,
       0,     0,    49,     0,     0,    11,    17,    20,    19,     0,
       0,     0,     0,     7,     0,    48,     0,    99,     0,   104,
       0,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,     0,     0,    43,    25,
      12,    39,    26,     0,    37,    38,    22,    28,    27,    23,
      21,     9,     0,    54,     0,     0,    62,     0,    90,     0,
       0,     0,     0,     0,     0,     0,    88,     0,    92,     0,
       0,     0,     0,     0,     0,    78,     0,     0,    82,     0,
      63,    60,    65,    64,     0,     0,     0,     0,     0,     0,
      51,     0,     0,   103,   102,    73,    76,    97,    96,    98,
       0,     0,    89,     0,    87,    74,     0,    77,    75,    80,
      81,    79,    84,    85,    83,    44,     0,     0,     0,     0,
      24,    55,    56,    53,   101,   100,     0,    93,    94,    91,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      72,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,    36,     0,    30,    31,    32,    33,    34,    35,
      29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,    24,    25,    26,    27,    96,    97,    28,    29,
      19,    65,   104,    42,    43,    44,    45,    46,   117,   118,
      71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -60
static const yytype_int16 yypact[] =
{
     269,     4,    61,   -60,    16,    55,   107,   195,   -60,   -60,
     -60,   -60,   142,   202,   131,   150,   126,   -60,   208,   113,
     -60,     6,   148,   -60,   157,   205,   281,     0,   -60,   211,
      72,   -60,   224,   -60,    75,    97,   271,   -60,   101,   101,
      90,    99,   -60,   165,   282,   136,   -60,   226,   -60,   -60,
     160,   227,   -60,   185,    14,   -60,   -60,   -60,   -60,   248,
     213,   253,    14,   -60,   270,   -60,   162,   173,    85,   -60,
     154,   261,    64,   101,   101,    93,   121,    56,    66,    56,
      76,   -60,   174,   144,   101,   101,   230,   131,   -60,   -60,
     -60,   197,   -60,    17,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   220,   -60,     5,    91,   -60,   101,   -60,    28,
     162,   162,   101,   101,   101,   225,   -60,    11,   -60,   251,
     162,   162,   162,   162,    12,   -60,    22,    23,   -60,    24,
     -60,   -60,   -60,   -60,   229,   255,   265,    19,   272,   260,
     -60,   131,    59,   -60,   -60,   209,   -60,   -60,   -60,   -60,
     101,   101,   -60,   101,   -60,   279,   187,   -60,   -60,   -60,
     101,   -60,   -60,   101,   -60,   -60,   267,   268,   273,    26,
     -60,   -60,   -60,   -60,   -60,   -60,   162,   -60,   -60,   -60,
     162,   162,   162,   275,   276,   277,   278,    29,   -60,   -60,
     -60,   -60,   274,   283,   284,   285,   286,    67,   292,   293,
     294,   304,   305,   258,   306,   175,   175,   175,   175,   175,
     -60,   175,   -60,   175,   -60,   -60,   -60,   -60,   -60,   -60,
     -60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,    -4,   -60,   -59,   -60,   254,    39,   169,   307,
     -60,   -60,   -60,   -10,   151,   -47,   -60,   -60,   201,   -35,
     178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -69
static const yytype_int16 yytable[] =
{
      70,    59,    20,    75,    76,   103,   139,    51,    49,     5,
      32,    52,   151,   151,    55,    86,     8,    15,   136,   106,
     168,    56,    63,   160,   151,   163,    16,   186,   140,   143,
     196,    60,    61,   109,   152,   159,   141,    53,   119,   109,
      88,   137,   153,   153,    90,   161,   162,   164,   169,   132,
     133,   144,   101,   153,   153,   153,   187,   115,   197,     9,
     174,    67,     6,   145,   146,   115,     7,   115,   203,    67,
      70,    67,   142,   155,   156,   157,   158,   115,    74,   171,
     172,    67,   173,   134,   175,    69,    74,   116,    74,   125,
      67,    77,   204,    69,   120,    69,    67,    64,    74,   128,
      79,    66,    67,    53,    23,    69,    67,    74,   108,   121,
      23,    10,    78,    68,    69,   177,   178,    50,   179,    68,
      69,    80,   122,    74,   165,   178,    69,    35,   178,   188,
      69,    36,    30,   189,   190,   191,    31,    84,    16,    37,
     123,    38,    -2,    13,    39,    35,    40,    41,    14,    36,
      85,    33,   -49,    15,    16,    34,    16,   -61,    47,    38,
     -46,    86,    39,   105,    40,    41,    87,    36,    15,    16,
     110,   -46,    16,   111,    16,    35,   210,    38,    81,    36,
      39,    17,    40,    41,    94,    95,    16,    48,   181,    38,
      89,   -68,    39,    54,    40,    41,    11,   107,    48,    12,
     -68,    62,   -15,    21,   182,   -18,    30,    22,   -41,    47,
      31,   -41,    51,    15,    98,    23,   -18,   -18,    99,    15,
      16,   135,    15,   -41,    -5,    47,   176,    51,    51,   -45,
      86,    52,    52,   130,   131,    15,    16,    15,    15,    23,
     -45,    16,   212,    23,   214,   215,   216,   217,   218,    91,
     219,   138,   220,    92,    91,    93,   150,    94,    95,   210,
      93,    30,    94,    95,   -52,    31,   211,    94,    95,    -3,
       1,   102,     2,    30,     3,    31,   154,   170,   124,   126,
     127,   129,    57,    82,   166,    58,    83,   112,   113,   114,
     147,   148,   149,    72,   167,    73,   180,   183,   184,   198,
     205,   206,   207,   185,   192,   193,   194,   195,   199,   200,
     201,   202,   208,   209,   213,   100,     0,     0,     0,    18
};

static const yytype_int16 yycheck[] =
{
      35,     1,    12,    38,    39,    64,     1,     1,    18,     5,
      14,     5,     1,     1,    24,     1,     0,    11,     1,    66,
       1,    25,    32,     1,     1,     1,    12,     1,    23,     1,
       1,    31,    32,    68,    23,    23,    31,    31,    73,    74,
      50,    24,    31,    31,    54,    23,    23,    23,    29,    84,
      85,    23,    62,    31,    31,    31,    30,     1,    29,     4,
       1,     5,     1,   110,   111,     1,     5,     1,     1,     5,
     105,     5,   107,   120,   121,   122,   123,     1,    22,   138,
     139,     5,   141,    87,    25,    29,    22,    23,    22,    23,
       5,     1,    25,    29,     1,    29,     5,    22,    22,    23,
       1,     4,     5,    31,    13,    29,     5,    22,    23,    16,
      13,     4,    22,    22,    29,   150,   151,     4,   153,    22,
      29,    22,     1,    22,   134,   160,    29,     1,   163,   176,
      29,     5,     1,   180,   181,   182,     5,     1,    12,    13,
      19,    15,     0,     1,    18,     1,    20,    21,     6,     5,
      14,     1,     4,    11,    12,     5,    12,    13,     1,    15,
       0,     1,    18,     1,    20,    21,     6,     5,    11,    12,
      16,    11,    12,    19,    12,     1,     1,    15,    13,     5,
      18,    12,    20,    21,     9,    10,    12,    18,     1,    15,
       5,     4,    18,    24,    20,    21,     1,    24,    29,     4,
      13,    32,     0,     1,    17,     0,     1,     5,     0,     1,
       5,     0,     1,    11,     1,    13,    11,    12,     5,    11,
      12,    24,    11,    12,     0,     1,    17,     1,     1,     0,
       1,     5,     5,    82,    83,    11,    12,    11,    11,    13,
      11,    12,   203,    13,   205,   206,   207,   208,   209,     1,
     211,    31,   213,     5,     1,     7,    31,     9,    10,     1,
       7,     1,     9,    10,     4,     5,     8,     9,    10,     0,
       1,     1,     3,     1,     5,     5,    25,     5,    77,    78,
      79,    80,     1,     1,    29,     4,     4,    26,    27,    28,
     112,   113,   114,    22,    29,    24,    17,    30,    30,    25,
       8,     8,     8,    30,    29,    29,    29,    29,    25,    25,
      25,    25,     8,     8,     8,    61,    -1,    -1,    -1,    12
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     5,    34,     5,     1,     5,     0,     4,
       4,     1,     4,     1,     6,    11,    12,    41,    42,    43,
      46,     1,     5,    13,    35,    36,    37,    38,    41,    42,
       1,     5,    35,     1,     5,     1,     5,    13,    15,    18,
      20,    21,    46,    47,    48,    49,    50,     1,    41,    46,
       4,     1,     5,    31,    41,    46,    35,     1,     4,     1,
      31,    32,    41,    46,    22,    44,     4,     5,    22,    29,
      52,    53,    22,    24,    22,    52,    52,     1,    22,     1,
      22,    13,     1,     4,     1,    14,     1,     6,    46,     5,
      46,     1,     5,     7,     9,    10,    39,    40,     1,     5,
      39,    46,     1,    37,    45,     1,    48,    24,    23,    52,
      16,    19,    26,    27,    28,     1,    23,    51,    52,    52,
       1,    16,     1,    19,    51,    23,    51,    51,    23,    51,
      47,    47,    52,    52,    35,    24,     1,    24,    31,     1,
      23,    31,    52,     1,    23,    48,    48,    53,    53,    53,
      31,     1,    23,    31,    25,    48,    48,    48,    48,    23,
       1,    23,    23,     1,    23,    46,    29,    29,     1,    29,
       5,    37,    37,    37,     1,    25,    17,    52,    52,    52,
      17,     1,    17,    30,    30,    30,     1,    30,    48,    48,
      48,    48,    29,    29,    29,    29,     1,    29,    25,    25,
      25,    25,    25,     1,    25,     8,     8,     8,     8,     8,
       1,     8,    40,     8,    40,    40,    40,    40,    40,    40,
      40
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 10:

/* Line 1455 of yacc.c  */
#line 64 "miniPasc.y"
    {yyerror (" program attendu on line : "); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 65 "miniPasc.y"
    {yyerror ("keyword var attendu on line : "); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 66 "miniPasc.y"
    {yyerror ("keyword var attendu on line : "); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 67 "miniPasc.y"
    {yyerror (" identifier attendu on line : "); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "miniPasc.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 69 "miniPasc.y"
    {yyerror (" instruction composee attendu on line");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 70 "miniPasc.y"
    {printf( "%s" , (yyvsp[(1) - (1)]. string ) );;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 78 "miniPasc.y"
    {yyerror ("[declaration]semicolon attendu on line : "); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 81 "miniPasc.y"
    {yyerror ("colon attendu on line : "); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 84 "miniPasc.y"
    {	//set_args();
																		add_var_identifier((yyvsp[(3) - (3)]. string ), yylineno);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 86 "miniPasc.y"
    {	//printf("test value : %s \n",$1);
						   												//set_args();
					   													add_var_identifier((char*)(yyvsp[(1) - (1)]. string ), yylineno);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 89 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 90 "miniPasc.y"
    {yyerror ("comma attendu on line : "); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 91 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 96 "miniPasc.y"
    {yyerror ("keyword array attendu on line : ");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 97 "miniPasc.y"
    {yyerror ("opening brackets attendu on line : ");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 98 "miniPasc.y"
    {yyerror ("an integer attendu on line : ");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 99 "miniPasc.y"
    {yyerror ("two points attendu on line : ");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 100 "miniPasc.y"
    {yyerror ("an integer attendu on line : ");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 101 "miniPasc.y"
    {yyerror ("closing brackets attendu on line : ");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 102 "miniPasc.y"
    {yyerror ("keyword of attendu on line : ");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 107 "miniPasc.y"
    {yyerror ("type attendu on line : "); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 112 "miniPasc.y"
    {yyerror ("declaration methode attendu on line : "); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 120 "miniPasc.y"
    {add_proc_identifier((yyvsp[(2) - (2)]. string ), yylineno);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 121 "miniPasc.y"
    {add_proc_identifier((yyvsp[(2) - (3)]. string ), yylineno);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 122 "miniPasc.y"
    {yyerror ("procedure attendu on line : "); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 123 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 127 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : "); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 132 "miniPasc.y"
    {yyerror ("parametre attendu on line : "); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 133 "miniPasc.y"
    {yyerror ("[parametres]semicolon attendu on line : "); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 136 "miniPasc.y"
    {reset_branch();;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 137 "miniPasc.y"
    {reset_branch();;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 138 "miniPasc.y"
    {yyerror ("keyword_end attendu on line : ");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 143 "miniPasc.y"
    {yyerror ("instruction attendu on line : ");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 144 "miniPasc.y"
    {yyerror ("[instructions]semicolon attendu on line : ");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 147 "miniPasc.y"
    {	
												//affectation(yylineno);
												;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 150 "miniPasc.y"
    {yyerror ("affect op attendu on line : ");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 151 "miniPasc.y"
    {printf("method call\n");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 155 "miniPasc.y"
    {yyerror ("keyword_if attendu on line : ");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 156 "miniPasc.y"
    {yyerror ("keyword_then attendu on line : ");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 157 "miniPasc.y"
    {yyerror ("keyword_else attendu on line : ");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 158 "miniPasc.y"
    {yyerror ("keyword_if attendu on line : ");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 159 "miniPasc.y"
    {yyerror ("keyword_then attendu on line : ");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 161 "miniPasc.y"
    {yyerror ("keyword_while attendu on line : ");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 162 "miniPasc.y"
    {yyerror ("keyword_do attendu on line : ");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 165 "miniPasc.y"
    {yyerror ("opening_parenthesis attendu on line : ");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 166 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 169 "miniPasc.y"
    {yyerror ("opening_parenthesis attendu on line : ");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 170 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 173 "miniPasc.y"
    {								printf("affect op %s \n",(yyvsp[(1) - (1)]. string ));
												add_element_to_operation((yyvsp[(1) - (1)]. string ),0,0);
												print_operation();
												;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 180 "miniPasc.y"
    {check_identifier((yyvsp[(1) - (3)]. string ), yylineno);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 181 "miniPasc.y"
    {check_identifier((yyvsp[(1) - (4)]. string ), yylineno);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 182 "miniPasc.y"
    {yyerror ("identifier attendu on line : ");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 187 "miniPasc.y"
    {yyerror ("lexpression attendu on line : ");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 188 "miniPasc.y"
    {yyerror ("comma attendu on line : ");;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 192 "miniPasc.y"
    {mull_add_op(yylineno);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 193 "miniPasc.y"
    {mull_add_op(yylineno);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 194 "miniPasc.y"
    {mull_add_op(yylineno);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 197 "miniPasc.y"
    {check_identifier((yyvsp[(1) - (1)]. string ), yylineno);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 198 "miniPasc.y"
    {check_identifier((yyvsp[(1) - (4)]. string ), yylineno);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 199 "miniPasc.y"
    {yyerror ("closing_brackets attendu on line : ");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 201 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 202 "miniPasc.y"
    {add_int_to_operation();;}
    break;



/* Line 1455 of yacc.c  */
#line 2034 "miniPasc.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 206 "miniPasc.y"
 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	flag = 1;
	return 0;
		
}

extern FILE *yyin;

int main(int argc, char *argv[])
{
 printf("\n STARTING ANALYSIS\n");
 argc--, argv++;	/* ignorer le 1er paramétre: le nom du fichier C actuel */
	if(argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		printf("fichier introuvable !");
		return 0;
	}
 	create_dict();
 	create_operation();
 	print_dict();
	print_args();
 yyparse();
 if((flag == 0)&&(flag1 ==0)) printf("\nCODE CORRECT");
 else printf("\n CODE INCORRECT");
 
 return 0 ;
}
yywrap()
{
	return(1);
}

