
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
     a_string = 285,
     two_points = 286,
     comma = 287,
     colon = 288
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
#line 162 "miniPasc.tab.c"

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
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    13,    18,    25,    31,    39,    43,
      50,    58,    62,    66,    71,    74,    76,    79,    82,    86,
      90,    94,    96,   100,   104,   108,   110,   119,   128,   137,
     146,   155,   164,   173,   181,   183,   185,   187,   191,   194,
     198,   202,   206,   212,   217,   220,   223,   227,   230,   233,
     236,   240,   244,   248,   250,   254,   258,   261,   265,   268,
     272,   275,   279,   283,   287,   291,   293,   295,   300,   307,
     314,   321,   328,   333,   338,   343,   348,   353,   357,   362,
     367,   372,   376,   381,   386,   391,   393,   398,   402,   407,
     411,   415,   417,   421,   425,   427,   431,   435,   439,   441,
     443,   448,   453,   455,   459
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,     3,     5,     4,    47,    -1,     3,     5,
       4,    36,    -1,     3,     5,     4,    43,    -1,     3,     5,
       4,     6,    36,    47,    -1,     3,     5,     4,    42,    47,
      -1,     3,     5,     4,     6,    36,    42,    47,    -1,     1,
       5,     4,    -1,     3,     5,     4,     1,    36,    47,    -1,
       3,     5,     4,     1,    36,    42,    47,    -1,     3,     1,
       4,    -1,     3,     5,     1,    -1,     3,     5,     4,     1,
      -1,    36,    37,    -1,    37,    -1,    38,     4,    -1,    38,
       1,    -1,    39,    33,    40,    -1,    39,     1,    40,    -1,
      39,    32,     5,    -1,     5,    -1,     1,    32,     5,    -1,
      39,     1,     5,    -1,    39,    32,     1,    -1,    41,    -1,
       7,    24,    29,    31,    29,    25,     8,    41,    -1,     1,
      24,    29,    31,    29,    25,     8,    41,    -1,     7,     1,
      29,    31,    29,    25,     8,    41,    -1,     7,    24,     1,
      31,    29,    25,     8,    41,    -1,     7,    24,    29,     1,
      29,    25,     8,    41,    -1,     7,    24,    29,    31,     1,
      25,     8,    41,    -1,     7,    24,    29,    31,    29,     1,
       8,    41,    -1,     7,    24,    29,    31,    29,     1,    41,
      -1,     9,    -1,    10,    -1,     1,    -1,    43,     4,    42,
      -1,    43,     4,    -1,     1,     4,    42,    -1,    43,     1,
      42,    -1,    44,     4,    47,    -1,    44,     4,     6,    36,
      47,    -1,    44,     4,     6,    36,    -1,    44,     4,    -1,
      11,     5,    -1,    11,     5,    45,    -1,     1,     5,    -1,
      11,     1,    -1,    11,     5,    -1,    22,    46,    23,    -1,
      22,    46,     1,    -1,    46,     4,    38,    -1,    38,    -1,
       1,     4,    38,    -1,    46,     1,    38,    -1,    12,    13,
      -1,    12,    48,    13,    -1,     1,    13,    -1,    49,     4,
      48,    -1,    49,     4,    -1,     1,     4,    49,    -1,    49,
       1,    48,    -1,    50,    14,    53,    -1,    50,     1,    53,
      -1,    51,    -1,    47,    -1,    15,    53,    16,    49,    -1,
      15,    53,    16,    49,    17,    49,    -1,     1,    53,    16,
      49,    17,    49,    -1,    15,    53,     1,    49,    17,    49,
      -1,    15,    53,    16,    49,     1,    49,    -1,     1,    53,
      16,    49,    -1,    15,    53,     1,    49,    -1,    18,    53,
      19,    49,    -1,     1,    53,    19,    49,    -1,    18,    53,
       1,    49,    -1,    20,    22,    23,    -1,    20,    22,    52,
      23,    -1,    20,     1,    52,    23,    -1,    20,    22,    52,
       1,    -1,    21,    22,    23,    -1,    21,    22,    52,    23,
      -1,    21,     1,    52,    23,    -1,    21,    22,    52,     1,
      -1,     5,    -1,     5,    24,    53,    25,    -1,     5,    22,
      23,    -1,     5,    22,    52,    23,    -1,     1,    22,    23,
      -1,    52,    32,    53,    -1,    53,    -1,     1,    32,    53,
      -1,    52,     1,    53,    -1,    54,    -1,    54,    27,    54,
      -1,    54,    26,    54,    -1,    54,    28,    54,    -1,     5,
      -1,    30,    -1,     5,    24,    53,    25,    -1,     5,    24,
      53,     1,    -1,    29,    -1,    22,    53,    23,    -1,    22,
      53,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    66,    67,    70,    71,    74,    75,
      78,    79,    80,    81,    82,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    96,    97,    98,   101,   102,   103,
     104,   107,   108,   109,   110,   112,   113,   114,   115,   116,
     119,   120,   123,   124,   125,   126,   129,   130,   131,   134,
     135,   136,   137,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   164,   165,   168,   169,   170,
     173,   174,   175,   176,   179,   180,   181,   182,   185,   186,
     187,   188,   189,   190,   191
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
  "addop", "compop", "an_integer", "a_string", "two_points", "comma",
  "colon", "$accept", "programmes", "liste_declarations", "declaration",
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
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    36,    36,    37,    37,    38,    38,
      39,    39,    39,    39,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    41,    41,    41,    42,    42,    42,
      42,    43,    43,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    46,    46,    47,    47,    47,    48,
      48,    48,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    51,    51,    51,
      52,    52,    52,    52,    53,    53,    53,    53,    54,    54,
      54,    54,    54,    54,    54
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     4,     6,     5,     7,     3,     6,
       7,     3,     3,     4,     2,     1,     2,     2,     3,     3,
       3,     1,     3,     3,     3,     1,     8,     8,     8,     8,
       8,     8,     8,     7,     1,     1,     1,     3,     2,     3,
       3,     3,     5,     4,     2,     2,     3,     2,     2,     2,
       3,     3,     3,     1,     3,     3,     2,     3,     2,     3,
       2,     3,     3,     3,     3,     1,     1,     4,     6,     6,
       6,     6,     4,     4,     4,     4,     4,     3,     4,     4,
       4,     3,     4,     4,     4,     1,     4,     3,     4,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       4,     4,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     8,    11,
      12,     0,     0,    21,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     2,     0,     0,    21,    58,     0,
       0,     0,    48,    45,     0,    85,    56,     0,     0,     0,
       0,    66,     0,     0,     0,    65,    14,    17,    16,     0,
       0,     0,     0,     6,     0,     0,     0,     0,    39,     0,
      22,     0,     0,     9,     0,     5,     0,    46,     0,    98,
       0,   102,    99,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    36,
      23,     0,    34,    35,    19,    25,    24,    20,    18,    40,
      37,     0,    41,    47,    10,     7,     0,    53,     0,     0,
      61,     0,    89,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    91,     0,     0,     0,     0,     0,     0,    77,
       0,     0,    81,     0,    62,    59,    64,    63,     0,     0,
       0,     0,     0,     0,     0,    50,     0,   104,   103,    72,
      75,    96,    95,    97,     0,     0,    88,     0,    86,    73,
       0,    76,    74,    79,    80,    78,    83,    84,    82,     0,
       0,     0,     0,     0,    42,    54,    55,    52,   101,   100,
       0,    92,    93,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,    71,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    33,     0,    27,    28,
      29,    30,    31,    32,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    17,    18,    19,    20,    94,    95,    21,    59,
      23,    67,   108,    41,    42,    43,    44,    45,   121,   122,
      74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -61
static const yytype_int16 yypact[] =
{
     296,    14,   216,    64,    24,    44,   147,   -61,   -61,   -61,
     -61,   231,    13,   -61,   219,   239,   159,   274,   -61,   182,
       0,   151,   154,   115,   -61,    96,     1,   157,   -61,   168,
     234,   234,   -61,   172,   137,   278,   -61,   127,   127,   121,
     146,   -61,   190,   200,   104,   -61,   -61,   -61,   -61,   253,
     275,   258,   198,   -61,     1,   164,   187,   283,   -61,   205,
     -61,   112,   151,   -61,   151,   -61,   276,   -61,   195,   199,
      80,   -61,   -61,   270,   264,    66,   127,   127,    43,   110,
      85,    69,    85,    71,   -61,   207,   177,   127,   127,   214,
     -61,    22,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   219,   -61,   -61,   -61,   -61,    23,   -61,   123,   140,
     -61,   127,   -61,   103,   195,   195,   127,   127,   127,   194,
     -61,     8,   -61,   206,   195,   195,   195,   195,    15,   -61,
      28,    29,   -61,    34,   -61,   -61,   -61,   -61,   227,   237,
      33,   229,   219,   180,   219,   -61,    38,   -61,   -61,   261,
     -61,   -61,   -61,   -61,   127,   127,   -61,   127,   -61,   281,
     201,   -61,   -61,   -61,   127,   -61,   -61,   127,   -61,   217,
     262,   277,    10,    74,   -61,   -61,   -61,   -61,   -61,   -61,
     195,   -61,   -61,   -61,   195,   195,   195,   272,   280,   282,
     284,    36,   -61,   -61,   -61,   -61,   285,   287,   289,   290,
     291,    48,   297,   298,   299,   309,   310,   263,   311,   260,
     260,   260,   260,   260,   -61,   260,   -61,   260,   -61,   -61,
     -61,   -61,   -61,   -61,   -61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -61,    -4,   -10,   -60,   -61,   269,    40,    82,   312,
     -61,   -61,   -61,    -6,   218,   -46,   -61,   -61,   202,   -34,
     178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -68
static const yytype_int16 yytable[] =
{
      73,    49,    57,    78,    79,    24,   107,    46,    30,   155,
      31,   190,    15,   -13,    25,    53,   155,    26,    27,     4,
      46,    46,   110,   139,    63,    65,    28,   142,     8,   164,
     155,   156,    50,    51,   171,   167,   113,   200,   163,   178,
     157,   191,   123,   113,   124,    29,   140,   157,     9,   207,
     102,   165,   166,   136,   137,    29,   104,   168,   105,   125,
     157,   157,   172,   179,     7,   201,   157,   119,   149,   150,
     119,    69,   119,   208,    69,    73,    69,   146,   159,   160,
     161,   162,   175,   176,   177,    69,   119,    28,    77,   120,
      69,    77,   129,    77,   132,    71,    72,   141,    71,    72,
      71,    72,    77,   112,   147,    87,    29,    77,    58,    71,
      72,   126,    62,    64,    71,    72,    26,   103,    88,    56,
     181,   182,    80,   183,   143,    28,   148,   144,    29,   127,
     182,    46,    69,   182,   192,   174,    99,   100,   193,   194,
     195,    68,    69,    81,    29,    69,   145,    82,    10,    77,
      28,    11,    52,    28,    -4,    54,    71,    72,    55,    70,
      34,   -47,    70,    16,    35,    57,    71,    72,    83,    71,
      72,    16,    36,    60,    37,    15,   -38,    38,    34,    39,
      40,    25,    35,    47,   -51,    13,    48,   -44,    52,    16,
     -60,   -44,    37,   101,    66,    38,   109,    39,    40,    16,
      35,    85,   185,    84,    86,   -67,    54,    16,    34,    55,
      37,    28,    35,    38,   -67,    39,    40,     5,   186,    16,
      25,     6,    37,   111,    13,    38,   154,    39,    40,   -43,
     173,   158,    12,   -43,    13,    61,    13,    14,   138,    13,
      32,    16,    15,    16,    33,    15,    16,   216,   187,   218,
     219,   220,   221,   222,    89,   223,   169,   224,    90,    89,
      91,   214,    92,    93,   214,    91,   170,    92,    93,    92,
      93,   215,    92,    93,    -3,    25,    96,   106,   180,    13,
      97,    13,   128,   130,   131,   133,   114,    26,   103,   115,
     116,   117,   118,   188,   151,   152,   153,     1,   184,     2,
      75,   196,    76,   134,   135,   209,   210,   211,   189,   197,
     202,   198,   203,   199,   204,   205,   206,   212,   213,   217,
      98,     0,     0,    22
};

static const yytype_int16 yycheck[] =
{
      34,     1,     1,    37,    38,    11,    66,    17,    12,     1,
      14,     1,    11,     0,     1,    21,     1,     4,     5,     5,
      30,    31,    68,     1,    30,    31,    13,     4,     4,     1,
       1,    23,    32,    33,     1,     1,    70,     1,    23,     1,
      32,    31,    76,    77,     1,    32,    24,    32,     4,     1,
      56,    23,    23,    87,    88,    32,    62,    23,    64,    16,
      32,    32,    29,    25,     0,    29,    32,     1,   114,   115,
       1,     5,     1,    25,     5,   109,     5,   111,   124,   125,
     126,   127,   142,   143,   144,     5,     1,    13,    22,    23,
       5,    22,    23,    22,    23,    29,    30,   101,    29,    30,
      29,    30,    22,    23,     1,     1,    32,    22,    26,    29,
      30,     1,    30,    31,    29,    30,     4,     5,    14,     4,
     154,   155,     1,   157,     1,    13,    23,     4,    32,    19,
     164,   141,     5,   167,   180,   141,    54,    55,   184,   185,
     186,     4,     5,    22,    32,     5,    23,     1,     1,    22,
      13,     4,     1,    13,     0,     1,    29,    30,     4,    22,
       1,     4,    22,    12,     5,     1,    29,    30,    22,    29,
      30,    12,    13,     5,    15,    11,    12,    18,     1,    20,
      21,     1,     5,     1,     4,     5,     4,     0,     1,    12,
      13,     4,    15,     6,    22,    18,     1,    20,    21,    12,
       5,     1,     1,    13,     4,     4,     1,    12,     1,     4,
      15,    13,     5,    18,    13,    20,    21,     1,    17,    12,
       1,     5,    15,    24,     5,    18,    32,    20,    21,     0,
       1,    25,     1,     4,     5,     1,     5,     6,    24,     5,
       1,    12,    11,    12,     5,    11,    12,   207,    31,   209,
     210,   211,   212,   213,     1,   215,    29,   217,     5,     1,
       7,     1,     9,    10,     1,     7,    29,     9,    10,     9,
      10,     8,     9,    10,     0,     1,     1,     1,    17,     5,
       5,     5,    80,    81,    82,    83,    16,     4,     5,    19,
      26,    27,    28,    31,   116,   117,   118,     1,    17,     3,
      22,    29,    24,    85,    86,     8,     8,     8,    31,    29,
      25,    29,    25,    29,    25,    25,    25,     8,     8,     8,
      51,    -1,    -1,    11
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    35,     5,     1,     5,     0,     4,     4,
       1,     4,     1,     5,     6,    11,    12,    36,    37,    38,
      39,    42,    43,    44,    47,     1,     4,     5,    13,    32,
      36,    36,     1,     5,     1,     5,    13,    15,    18,    20,
      21,    47,    48,    49,    50,    51,    37,     1,     4,     1,
      32,    33,     1,    47,     1,     4,     4,     1,    42,    43,
       5,     1,    42,    47,    42,    47,    22,    45,     4,     5,
      22,    29,    30,    53,    54,    22,    24,    22,    53,    53,
       1,    22,     1,    22,    13,     1,     4,     1,    14,     1,
       5,     7,     9,    10,    40,    41,     1,     5,    40,    42,
      42,     6,    47,     5,    47,    47,     1,    38,    46,     1,
      49,    24,    23,    53,    16,    19,    26,    27,    28,     1,
      23,    52,    53,    53,     1,    16,     1,    19,    52,    23,
      52,    52,    23,    52,    48,    48,    53,    53,    24,     1,
      24,    36,     4,     1,     4,    23,    53,     1,    23,    49,
      49,    54,    54,    54,    32,     1,    23,    32,    25,    49,
      49,    49,    49,    23,     1,    23,    23,     1,    23,    29,
      29,     1,    29,     1,    47,    38,    38,    38,     1,    25,
      17,    53,    53,    53,    17,     1,    17,    31,    31,    31,
       1,    31,    49,    49,    49,    49,    29,    29,    29,    29,
       1,    29,    25,    25,    25,    25,    25,     1,    25,     8,
       8,     8,     8,     8,     1,     8,    41,     8,    41,    41,
      41,    41,    41,    41,    41
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
        case 8:

/* Line 1455 of yacc.c  */
#line 58 "miniPasc.y"
    {yyerror (" program attendu on line : "); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 59 "miniPasc.y"
    {yyerror ("keyword var attendu on line : "); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 60 "miniPasc.y"
    {yyerror ("keyword var attendu on line : "); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 61 "miniPasc.y"
    {yyerror (" identifier attendu on line : "); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 62 "miniPasc.y"
    {yyerror (" point virgule attendu on line : "); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 63 "miniPasc.y"
    {yyerror (" instruction composee attendu on line");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 71 "miniPasc.y"
    {yyerror ("[declaration]semicolon attendu on line : "); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 75 "miniPasc.y"
    {yyerror ("colon attendu on line : "); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 80 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 81 "miniPasc.y"
    {yyerror ("comma attendu on line : "); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 82 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 87 "miniPasc.y"
    {yyerror ("keyword array attendu on line : ");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 88 "miniPasc.y"
    {yyerror ("opening brackets attendu on line : ");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 89 "miniPasc.y"
    {yyerror ("an integer attendu on line : ");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 90 "miniPasc.y"
    {yyerror ("two points attendu on line : ");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 91 "miniPasc.y"
    {yyerror ("an integer attendu on line : ");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 92 "miniPasc.y"
    {yyerror ("closing brackets attendu on line : ");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 93 "miniPasc.y"
    {yyerror ("keyword of attendu on line : ");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 98 "miniPasc.y"
    {yyerror ("type attendu on line : "); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 103 "miniPasc.y"
    {yyerror ("declaration methode attendu on line : "); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 104 "miniPasc.y"
    {yyerror ("[declaration]semicolon attendu on line : "); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 114 "miniPasc.y"
    {yyerror ("procedure attendu on line : "); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 115 "miniPasc.y"
    {yyerror ("identifier attendu on line : "); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 116 "miniPasc.y"
    {yyerror ("[entete]semicolon attendu on line : "); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 120 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : "); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 125 "miniPasc.y"
    {yyerror ("parametre attendu on line : "); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 126 "miniPasc.y"
    {yyerror ("[parametres]semicolon attendu on line : "); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 131 "miniPasc.y"
    {yyerror ("keyword_end attendu on line : ");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 136 "miniPasc.y"
    {yyerror ("instruction attendu on line : ");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 137 "miniPasc.y"
    {yyerror ("[instructions]semicolon attendu on line : ");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 141 "miniPasc.y"
    {yyerror ("affect op attendu on line : ");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 146 "miniPasc.y"
    {yyerror ("keyword_if attendu on line : ");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 147 "miniPasc.y"
    {yyerror ("keyword_then attendu on line : ");;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 148 "miniPasc.y"
    {yyerror ("keyword_else attendu on line : ");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 149 "miniPasc.y"
    {yyerror ("keyword_if attendu on line : ");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 150 "miniPasc.y"
    {yyerror ("keyword_then attendu on line : ");;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 152 "miniPasc.y"
    {yyerror ("keyword_while attendu on line : ");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 153 "miniPasc.y"
    {yyerror ("keyword_do attendu on line : ");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 156 "miniPasc.y"
    {yyerror ("opening_parenthesis attendu on line : ");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 157 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 160 "miniPasc.y"
    {yyerror ("opening_parenthesis attendu on line : ");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 161 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 170 "miniPasc.y"
    {yyerror ("identifier attendu on line : ");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 175 "miniPasc.y"
    {yyerror ("lexpression attendu on line : ");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 176 "miniPasc.y"
    {yyerror ("comma attendu on line : ");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 188 "miniPasc.y"
    {yyerror ("closing_brackets attendu on line : ");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 191 "miniPasc.y"
    {yyerror ("closing_parenthesis attendu on line : ");;}
    break;



/* Line 1455 of yacc.c  */
#line 1905 "miniPasc.tab.c"
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
#line 195 "miniPasc.y"
 

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

