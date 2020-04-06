
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
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;
int flag = 0;



/* Line 189 of yacc.c  */
#line 87 "miniPasc.tab.c"

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
     procedure = 265,
     keyword_begin = 266,
     keyword_end = 267,
     affectop = 268,
     keyword_if = 269,
     keyword_then = 270,
     keyword_else = 271,
     keyword_while = 272,
     keyword_do = 273,
     keyword_write = 274,
     keyword_read = 275,
     opening_parenthesis = 276,
     closing_parenthesis = 277,
     opening_brackets = 278,
     closing_brackets = 279,
     mulop = 280,
     addop = 281,
     an_integer = 282,
     two_points = 283,
     comma = 284,
     colon = 285
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 159 "miniPasc.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    20,    27,    31,    35,    39,
      44,    47,    49,    53,    57,    61,    65,    69,    73,    75,
      79,    83,    87,    89,    98,   107,   116,   125,   134,   143,
     152,   160,   162,   164,   168,   170,   174,   178,   181,   185,
     189,   194,   198,   202,   206,   210,   214,   218,   220,   224,
     228,   231,   235,   238,   242,   244,   248,   252,   256,   260,
     262,   264,   271,   278,   285,   292,   297,   302,   307,   311,
     316,   321,   326,   330,   335,   340,   345,   347,   352,   356,
     361,   365,   369,   371,   375,   379,   381,   385,   389,   391,
     396,   401,   403,   407
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,     3,     5,     4,    44,    -1,     3,     5,
       4,    33,    44,    -1,     3,     5,     4,    39,    44,    -1,
       3,     5,     4,    33,    39,    44,    -1,     1,     5,     4,
      -1,     3,     1,     4,    -1,     3,     5,     1,    -1,     3,
       5,     4,     1,    -1,    33,    34,    -1,    34,    -1,     6,
      35,     4,    -1,     1,    35,     4,    -1,     6,    35,     1,
      -1,    36,    30,    37,    -1,    36,     1,    37,    -1,    36,
      29,     5,    -1,     5,    -1,     1,    29,     5,    -1,    36,
       1,     5,    -1,    36,    29,     1,    -1,    38,    -1,     7,
      23,    27,    28,    27,    24,     8,    38,    -1,     1,    23,
      27,    28,    27,    24,     8,    38,    -1,     7,     1,    27,
      28,    27,    24,     8,    38,    -1,     7,    23,     1,    28,
      27,    24,     8,    38,    -1,     7,    23,    27,     1,    27,
      24,     8,    38,    -1,     7,    23,    27,    28,     1,    24,
       8,    38,    -1,     7,    23,    27,    28,    27,     1,     8,
      38,    -1,     7,    23,    27,    28,    27,     1,    38,    -1,
       9,    -1,     1,    -1,    39,     4,    40,    -1,    40,    -1,
       1,     4,    40,    -1,    39,     1,    40,    -1,    41,    44,
      -1,    41,    33,    44,    -1,    10,     5,     4,    -1,    10,
       5,    42,     4,    -1,     1,     5,     4,    -1,    10,     1,
       4,    -1,    10,     5,     1,    -1,    21,    43,    22,    -1,
      21,    43,     1,    -1,    43,     4,    35,    -1,    35,    -1,
       1,     4,    35,    -1,    43,     1,    35,    -1,    11,    12,
      -1,    11,    45,    12,    -1,     1,    12,    -1,    45,     4,
      46,    -1,    46,    -1,     1,     4,    46,    -1,    45,     1,
      46,    -1,    47,    13,    50,    -1,    47,     1,    50,    -1,
      48,    -1,    44,    -1,    14,    50,    15,    46,    16,    46,
      -1,     1,    50,    15,    46,    16,    46,    -1,    14,    50,
       1,    46,    16,    46,    -1,    14,    50,    15,    46,     1,
      46,    -1,    17,    50,    18,    46,    -1,     1,    50,    18,
      46,    -1,    17,    50,     1,    46,    -1,    19,    21,    22,
      -1,    19,    21,    49,    22,    -1,    19,     1,    49,    22,
      -1,    19,    21,    49,     1,    -1,    20,    21,    22,    -1,
      20,    21,    49,    22,    -1,    20,     1,    49,    22,    -1,
      20,    21,    49,     1,    -1,     5,    -1,     5,    23,    50,
      24,    -1,     5,    21,    22,    -1,     5,    21,    49,    22,
      -1,     1,    21,    22,    -1,    49,    29,    50,    -1,    50,
      -1,     1,    29,    50,    -1,    49,     1,    50,    -1,    51,
      -1,    51,    26,    51,    -1,    51,    25,    51,    -1,     5,
      -1,     5,    23,    50,    24,    -1,     5,    23,    50,     1,
      -1,    27,    -1,    21,    50,    22,    -1,    21,    50,     1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    53,    54,    55,    56,
      59,    60,    63,    64,    65,    68,    69,    72,    73,    74,
      75,    76,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    94,    95,    96,    97,   100,   101,   104,
     105,   106,   107,   108,   111,   112,   115,   116,   117,   118,
     121,   122,   123,   126,   127,   128,   129,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   153,   154,   157,   158,
     159,   162,   163,   164,   165,   168,   169,   170,   173,   174,
     175,   176,   177,   178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "program", "semicolon", "identifier",
  "keyword_var", "keyword_array", "keyword_of", "type_integer",
  "procedure", "keyword_begin", "keyword_end", "affectop", "keyword_if",
  "keyword_then", "keyword_else", "keyword_while", "keyword_do",
  "keyword_write", "keyword_read", "opening_parenthesis",
  "closing_parenthesis", "opening_brackets", "closing_brackets", "mulop",
  "addop", "an_integer", "two_points", "comma", "colon", "$accept",
  "programmes", "liste_declarations", "declaration", "declaration_corps",
  "liste_identificateurs", "type", "standard_type", "declaration_methodes",
  "declaration_methode", "entete_methode", "arguments", "liste_parametres",
  "instruction_composee", "liste_instructions", "instruction", "lvalue",
  "appel_methode", "liste_expressions", "expression", "facteur", 0
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
     285
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    32,    32,    32,    32,    32,    32,    32,
      33,    33,    34,    34,    34,    35,    35,    36,    36,    36,
      36,    36,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    38,    38,    39,    39,    39,    39,    40,    40,    41,
      41,    41,    41,    41,    42,    42,    43,    43,    43,    43,
      44,    44,    44,    45,    45,    45,    45,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    47,    48,    48,
      48,    49,    49,    49,    49,    50,    50,    50,    51,    51,
      51,    51,    51,    51
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     5,     6,     3,     3,     3,     4,
       2,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     8,     8,     8,     8,     8,     8,     8,
       7,     1,     1,     3,     1,     3,     3,     2,     3,     3,
       4,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       2,     3,     2,     3,     1,     3,     3,     3,     3,     1,
       1,     6,     6,     6,     6,     4,     4,     4,     3,     4,
       4,     4,     3,     4,     4,     4,     1,     4,     3,     4,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     4,
       4,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     6,     7,
       8,     0,     0,     0,     0,     0,     0,    11,     0,    34,
       0,     2,     0,     0,    18,    52,     0,     0,    18,     0,
       0,     0,     0,    76,    50,     0,     0,     0,     0,    60,
       0,    54,     0,    59,     0,    10,     0,     3,     0,     0,
       4,     0,     0,    37,     0,     0,    35,    41,    13,     0,
       0,     0,    14,    12,    42,    43,    39,     0,     0,     0,
      88,     0,    91,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     5,
      36,    33,    38,    19,     0,    32,    20,     0,    31,    16,
      22,    21,    17,    15,     0,    47,     0,    40,     0,    55,
       0,    80,     0,     0,     0,     0,     0,     0,    78,     0,
      82,     0,     0,     0,     0,     0,     0,    68,     0,     0,
      72,     0,    56,    53,    58,    57,     0,     0,     0,     0,
       0,     0,    44,     0,    93,    92,     0,    66,    87,    86,
       0,     0,    79,     0,    77,     0,     0,    67,    65,    70,
      71,    69,    74,    75,    73,     0,     0,     0,     0,    48,
      49,    46,    90,    89,     0,    83,    84,    81,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
      30,     0,    24,    25,    26,    27,    28,    29,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    16,    17,    26,    27,    99,   100,    18,    19,
      20,    68,   106,    39,    40,    41,    42,    43,   119,   120,
      74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
     201,    59,    17,   139,   189,   215,   219,   -35,   -35,   -35,
     -35,   186,    15,    62,   159,   136,   188,   -35,   199,   -35,
     200,   -35,   -12,   166,   227,   -35,   232,     0,   -35,   229,
     233,   104,    99,   211,   -35,   109,   109,    95,   137,   -35,
     167,   -35,   148,   -35,   161,   -35,   199,   -35,   142,   166,
     -35,   169,   200,   -35,   234,   235,   -35,   -35,   -35,   207,
     190,   206,   -35,   -35,   -35,   -35,   -35,   204,   237,   158,
     221,   102,   -35,   220,    -2,    47,   109,   109,    13,    97,
      65,    60,    65,    72,   158,   158,   -35,   109,   109,   -35,
     -35,   -35,   -35,   -35,   227,   222,   -35,    94,   -35,   -35,
     -35,   -35,   -35,   -35,    71,   -35,   105,   -35,   130,   -35,
     109,   -35,   100,   158,   158,   109,   109,   213,   -35,     9,
     -35,   223,   158,   158,   158,   158,    11,   -35,    20,    24,
     -35,    25,   -35,   -35,   -35,   -35,   224,   225,     7,    62,
     217,    62,   -35,    12,   -35,   -35,   230,   -35,   -35,   -35,
     109,   109,   -35,   109,   -35,   238,    56,   -35,   -35,   -35,
     109,   -35,   -35,   109,   -35,   228,   231,   236,    31,   -35,
     -35,   -35,   -35,   -35,   158,   -35,   -35,   -35,   158,   158,
     158,   226,   239,   240,   241,    70,   -35,   -35,   -35,   -35,
     245,   246,   247,   248,   249,    61,   242,   250,   252,   253,
     254,   216,   255,   101,   101,   101,   101,   101,   -35,   101,
     -35,   101,   -35,   -35,   -35,   -35,   -35,   -35,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -35,   -35,   256,   -11,    -7,   -35,   182,   -21,   258,    35,
     -35,   -35,   -35,    -9,   -35,   -34,   -35,   -35,   146,   -32,
      -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -46
static const yytype_int16 yytable[] =
{
      73,    59,    21,    78,    79,    45,    29,    47,   167,    50,
     151,    53,   151,   172,   122,    -9,    22,    54,     5,    23,
      24,   160,     6,   115,   116,   151,   163,    25,   123,    60,
      61,   152,   184,   159,   168,   109,   173,    89,   153,   112,
     153,    45,   161,    92,   121,   112,   162,   164,   117,   153,
     132,   133,    70,   153,   153,   134,   135,   179,    56,   185,
     105,   117,   201,    22,     4,    70,   117,    28,    77,   118,
      70,   194,   180,   117,    72,   139,    73,    70,   143,   146,
     147,    77,   127,    90,    91,   202,    77,    72,   155,   156,
     157,   158,    72,    77,   130,   137,    80,   195,   124,    72,
      54,   144,   208,    69,    70,    65,   140,    70,    66,   141,
      98,    25,   148,   149,    70,   125,    81,   138,   175,   176,
      71,   177,   145,    77,   111,    67,    72,   142,   176,    72,
      77,   176,   169,   170,   171,    70,    72,    32,    82,     7,
     186,    33,    25,    55,   187,   188,   189,    15,    34,    87,
      35,    71,    14,    36,    25,    37,    38,    72,    83,   108,
      30,    88,    22,    33,    31,    23,    24,    55,    84,    15,
      22,    85,    35,    25,    28,    36,    14,    37,    38,    86,
     210,    25,   212,   213,   214,   215,   216,    12,   217,    44,
     218,   101,    13,     8,    13,   102,    14,    15,    14,    15,
      48,    51,     1,    49,     2,   104,    13,    95,    95,    28,
      15,    15,    96,    97,    97,    98,    98,   208,    22,     9,
      10,   -45,    28,    11,   209,    98,   126,   128,   129,   131,
      62,    57,    75,    63,    76,   113,    58,    64,   114,    93,
      94,   107,   150,   103,   110,   136,   174,   154,     0,     0,
     203,   165,   166,   190,   178,     0,   181,     0,   204,   182,
     205,   206,   207,   211,   183,     0,   191,   192,   193,   196,
     197,   198,   199,   200,    46,     0,    52
};

static const yytype_int16 yycheck[] =
{
      32,     1,    11,    35,    36,    16,    13,    16,     1,    18,
       1,    20,     1,     1,     1,     0,     1,    29,     1,     4,
       5,     1,     5,    25,    26,     1,     1,    12,    15,    29,
      30,    22,     1,    22,    27,    69,    24,    46,    29,    71,
      29,    52,    22,    52,    76,    77,    22,    22,     1,    29,
      84,    85,     5,    29,    29,    87,    88,     1,    23,    28,
      67,     1,     1,     1,     5,     5,     1,     5,    21,    22,
       5,     1,    16,     1,    27,     4,   108,     5,   110,   113,
     114,    21,    22,    48,    49,    24,    21,    27,   122,   123,
     124,   125,    27,    21,    22,     1,     1,    27,     1,    27,
      29,     1,     1,     4,     5,     1,     1,     5,     4,     4,
       9,    12,   115,   116,     5,    18,    21,    23,   150,   151,
      21,   153,    22,    21,    22,    21,    27,    22,   160,    27,
      21,   163,   139,   140,   141,     5,    27,     1,     1,     0,
     174,     5,    12,     1,   178,   179,   180,    11,    12,     1,
      14,    21,    10,    17,    12,    19,    20,    27,    21,     1,
       1,    13,     1,     5,     5,     4,     5,     1,     1,    11,
       1,     4,    14,    12,     5,    17,    10,    19,    20,    12,
     201,    12,   203,   204,   205,   206,   207,     1,   209,     1,
     211,     1,     6,     4,     6,     5,    10,    11,    10,    11,
       1,     1,     1,     4,     3,     1,     6,     1,     1,     5,
      11,    11,     5,     7,     7,     9,     9,     1,     1,     4,
       1,     4,     5,     4,     8,     9,    80,    81,    82,    83,
       1,     4,    21,     4,    23,    15,     4,     4,    18,     5,
       5,     4,    29,    61,    23,    23,    16,    24,    -1,    -1,
       8,    27,    27,    27,    16,    -1,    28,    -1,     8,    28,
       8,     8,     8,     8,    28,    -1,    27,    27,    27,    24,
      24,    24,    24,    24,    16,    -1,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    32,     5,     1,     5,     0,     4,     4,
       1,     4,     1,     6,    10,    11,    33,    34,    39,    40,
      41,    44,     1,     4,     5,    12,    35,    36,     5,    35,
       1,     5,     1,     5,    12,    14,    17,    19,    20,    44,
      45,    46,    47,    48,     1,    34,    39,    44,     1,     4,
      44,     1,    33,    44,    29,     1,    40,     4,     4,     1,
      29,    30,     1,     4,     4,     1,     4,    21,    42,     4,
       5,    21,    27,    50,    51,    21,    23,    21,    50,    50,
       1,    21,     1,    21,     1,     4,    12,     1,    13,    44,
      40,    40,    44,     5,     5,     1,     5,     7,     9,    37,
      38,     1,     5,    37,     1,    35,    43,     4,     1,    46,
      23,    22,    50,    15,    18,    25,    26,     1,    22,    49,
      50,    50,     1,    15,     1,    18,    49,    22,    49,    49,
      22,    49,    46,    46,    50,    50,    23,     1,    23,     4,
       1,     4,    22,    50,     1,    22,    46,    46,    51,    51,
      29,     1,    22,    29,    24,    46,    46,    46,    46,    22,
       1,    22,    22,     1,    22,    27,    27,     1,    27,    35,
      35,    35,     1,    24,    16,    50,    50,    50,    16,     1,
      16,    28,    28,    28,     1,    28,    46,    46,    46,    46,
      27,    27,    27,    27,     1,    27,    24,    24,    24,    24,
      24,     1,    24,     8,     8,     8,     8,     8,     1,     8,
      38,     8,    38,    38,    38,    38,    38,    38,    38
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
        case 6:

/* Line 1455 of yacc.c  */
#line 53 "miniPasc.y"
    {yyerror (" program attendu on line : "); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 54 "miniPasc.y"
    {yyerror (" identifier attendu on line : "); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 55 "miniPasc.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 56 "miniPasc.y"
    {yyerror (" instruction composee attendu on line");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 64 "miniPasc.y"
    {yyerror ("keyword var attendu on line : "); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 65 "miniPasc.y"
    {yyerror ("semicolon attendu on line : "); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 69 "miniPasc.y"
    {yyerror ("colon attendu on line : "); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 74 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 75 "miniPasc.y"
    {yyerror ("comma attendu on line : "); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 76 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 81 "miniPasc.y"
    {yyerror ("keyword array attendu on line : ");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 82 "miniPasc.y"
    {yyerror ("opening brackets attendu on line : ");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 83 "miniPasc.y"
    {yyerror ("an integer attendu on line : ");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 84 "miniPasc.y"
    {yyerror ("two points attendu on line : ");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 85 "miniPasc.y"
    {yyerror ("an integer attendu on line : ");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 86 "miniPasc.y"
    {yyerror ("closing brackets attendu on line : ");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 87 "miniPasc.y"
    {yyerror ("keyword of attendu on line : ");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 91 "miniPasc.y"
    {yyerror ("type integer attendu on line : "); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 96 "miniPasc.y"
    {yyerror ("declaration methode attendu on line : "); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 97 "miniPasc.y"
    {yyerror ("semicolon attendu on line : "); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 106 "miniPasc.y"
    {yyerror ("procedure attendu on line : "); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 107 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 108 "miniPasc.y"
    {yyerror ("semicolon attendu on line : "); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 112 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : "); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 117 "miniPasc.y"
    {yyerror ("parametre attendu on line : "); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 118 "miniPasc.y"
    {yyerror ("semicolon attendu on line : "); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 123 "miniPasc.y"
    {yyerror ("keyword_begin attendu on line : ");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 128 "miniPasc.y"
    {yyerror ("instruction attendu on line : ");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 129 "miniPasc.y"
    {yyerror ("semicolon attendu on line : ");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 133 "miniPasc.y"
    {yyerror ("affect op attendu on line : ");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 137 "miniPasc.y"
    {yyerror ("keyword_if attendu on line : ");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 138 "miniPasc.y"
    {yyerror ("keyword_then attendu on line : ");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 139 "miniPasc.y"
    {yyerror ("keyword_else attendu on line : ");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 141 "miniPasc.y"
    {yyerror ("keyword_while attendu on line : ");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 142 "miniPasc.y"
    {yyerror ("keyword_do attendu on line : ");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 145 "miniPasc.y"
    {yyerror ("opening_parenthesis attendu on line : ");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 146 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 149 "miniPasc.y"
    {yyerror ("opening_parenthesis attendu on line : ");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 150 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 159 "miniPasc.y"
    {yyerror ("identifier attendu on line : ");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 164 "miniPasc.y"
    {yyerror ("lexpression attendu on line : ");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 165 "miniPasc.y"
    {yyerror ("comma attendu on line : ");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 175 "miniPasc.y"
    {yyerror ("closing_brackets attendu on line : ");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 178 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;



/* Line 1455 of yacc.c  */
#line 1858 "miniPasc.tab.c"
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
#line 182 "miniPasc.y"
 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	flag = 1;
	return 0;
		
}

extern FILE *yyin;

int main(int argc, char *argv[])
{
 printf("\n analyse syntaxique\n");
 argc--, argv++;	/* ignorer le 1er paramétre: le nom du fichier C actuel */
	if(argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		printf("fichier introuvable !");
		return 0;
	}
 yyparse();
 if(flag == 0 ) printf("\n code correct");
 else printf("\n code incorrect");

 return 0 ;
}
yywrap()
{
	return(1);
}

