/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#define YYSTYPE char *
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <map>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector <string> allVar;

int yylex(void);

void yyerror (char const *s) {
   	fprintf (stderr, "%s\n", s);
}

FILE *user_code, *final_code;

extern char *yytext;
int labelID=0;
int globArgsIntReg=0;
int globArgsFloReg=6;


int stringType(string);
void add_operation(char*, char *, char *);
void sub_operation(char*, char *, char *);
void mul_operation(char*, char *, char *);
void div_operation(char*, char *, char *);
void less_than_op(char*, char *, char *);
void great_than_op(char*, char *, char *);
void equal_op(char*, char *, char *);
void less_eq_op(char*, char *, char *);
void great_eq_op(char*, char *, char *);
void not_eq_op(char*, char *, char *);
void checkNewDeclare(char *);
char * getArrayParam(char *);
char * getArrayName(char *);

#line 109 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    ID = 260,
    EQ = 261,
    DECL = 262,
    ARITH_REL_OPS = 263,
    IF = 264,
    GOTO = 265,
    LABEL = 266,
    FUNC = 267,
    BEGINN = 268,
    RETURN = 269,
    END = 270,
    PARAM = 271,
    REFPARAM = 272,
    CALL = 273,
    ARGS = 274,
    NULLL = 275
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 181 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   48

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  39
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  61

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    54,    58,    64,    65,    67,    68,
      69,    70,    71,    73,    74,    75,    76,    77,    78,    81,
     106,   111,   117,   122,   128,   129,   132,   223,   280,   286,
     291,   297,   302,   318,   343,   392,   397,   398,   440,   475
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "ID", "EQ", "DECL",
  "ARITH_REL_OPS", "IF", "GOTO", "LABEL", "FUNC", "BEGINN", "RETURN",
  "END", "PARAM", "REFPARAM", "CALL", "ARGS", "NULLL", "$accept", "funcs",
  "func", "funcname", "intm_code", "intm_line", "binary_operation",
  "id_or_num", "arith_rel_ops", "var_ID", "num", "assignment", "label",
  "jump_Cond", "jump_unCond", "args_stmt", "arr_decl_stmt", "param_stmt",
  "return_stmt", "ret_val", "refparam_stmt", "call_stmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275
};
# endif

#define YYPACT_NINF -17

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-17)))

#define YYTABLE_NINF -22

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,     5,    25,     1,    22,   -17,   -17,   -17,   -17,   -17,
      12,    22,     7,    22,   -17,    17,     0,     7,    22,    22,
      22,   -17,   -17,    27,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,    26,    28,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
       7,    22,    22,    29,    31,    33,   -17,   -17,   -17,     7,
     -17
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     0,     1,     2,    23,     6,     5,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,    12,    10,    11,    14,    13,
      15,    18,    16,    17,    33,    24,    25,     0,     0,    31,
       4,    36,    37,    20,    21,    35,    34,    38,    39,    32,
       0,     0,     0,     0,    26,    27,    29,    30,    22,     0,
      19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -17,    32,   -17,   -17,   -17,   -17,   -17,   -16,   -17,    -4,
     -10,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     8,    10,    21,    22,    42,    59,    43,
      44,    24,    25,    26,    27,    28,    29,    30,    31,    45,
      32,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       9,    46,    38,    35,    36,     7,    23,    34,    37,    39,
      35,    36,     7,     1,    47,    48,    49,     7,     4,    11,
      41,    12,    13,    14,    15,     5,    16,     7,    17,    18,
      19,    20,    40,    50,    53,     6,    51,    58,    52,   -20,
      55,   -21,     0,    60,     0,     0,    54,    56,    57
};

static const yytype_int8 yycheck[] =
{
       4,    17,    12,     3,     4,     5,    10,    11,    12,    13,
       3,     4,     5,    12,    18,    19,    20,     5,    13,     7,
      20,     9,    10,    11,    12,     0,    14,     5,    16,    17,
      18,    19,    15,     6,    50,     3,    10,     8,    10,     8,
      50,     8,    -1,    59,    -1,    -1,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    22,    23,    13,     0,    22,     5,    24,    30,
      25,     7,     9,    10,    11,    12,    14,    16,    17,    18,
      19,    26,    27,    30,    32,    33,    34,    35,    36,    37,
      38,    39,    41,    42,    30,     3,     4,    30,    31,    30,
      15,    20,    28,    30,    31,    40,    28,    30,    30,    30,
       6,    10,    10,    28,    30,    31,    30,    30,     8,    29,
      28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    22,    23,    24,    25,    25,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    27,
      28,    28,    29,    30,    31,    31,    32,    32,    33,    34,
      34,    35,    36,    37,    38,    39,    40,    40,    41,    42
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     6,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     4,
       4,     2,     2,     2,     2,     2,     1,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 51 "parser.y" /* yacc.c:1646  */
    {}
#line 1294 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "parser.y" /* yacc.c:1646  */
    {}
#line 1300 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "parser.y" /* yacc.c:1646  */
    {
						fprintf(user_code,"jr $ra\n");
					}
#line 1308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "parser.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[0]);
						fprintf(user_code, "\n%s:\n", (yyval));
					}
#line 1317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 76 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "parser.y" /* yacc.c:1646  */
    {globArgsFloReg = 6; globArgsIntReg = 0;}
#line 1365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 82 "parser.y" /* yacc.c:1646  */
    {
						if(strcmp((yyvsp[-1]),"+")==0)
							add_operation((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"-")==0)
							sub_operation((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"*")==0)
							mul_operation((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"/")==0)
							div_operation((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"<")==0)
							less_than_op((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),">")==0)
							great_than_op((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"==")==0)
							equal_op((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"<=")==0)
							less_eq_op((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),">=")==0)
							great_eq_op((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						else if(strcmp((yyvsp[-1]),"!=")==0)
							great_eq_op((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
						
					}
#line 1393 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 107 "parser.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[0]);
						cout << "num " << (yyvsp[0]) << endl;
					}
#line 1402 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "parser.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[0]); 
						cout << "num " << (yyvsp[0]) << endl;
					}
#line 1411 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "parser.y" /* yacc.c:1646  */
    { 
						(yyval) = strdup(yytext); 
					}
#line 1419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 123 "parser.y" /* yacc.c:1646  */
    { 
						(yyval) = strdup(yytext); 
						cout << (yyval) << endl;  
					}
#line 1428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 128 "parser.y" /* yacc.c:1646  */
    {(yyval) = strdup(yytext);}
#line 1434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval) = strdup(yytext);}
#line 1440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 133 "parser.y" /* yacc.c:1646  */
    {
						bool floR=false, floOp=false, resArr=false, oprArr=false;
						string res((yyvsp[-2]));
						string opr((yyvsp[0]));
						
						if(res[0]=='f')
							floR=true;
						if(opr[0]=='f')
							floOp=true;
						
						checkNewDeclare((yyvsp[0]));
						checkNewDeclare((yyvsp[-2]));


						if(stringType(opr)==3){
							oprArr=true;
							string xx(getArrayParam((yyvsp[0])));
							char * zz = getArrayParam((yyvsp[0]));
							char * yy = getArrayName((yyvsp[0]));
							if(stringType(xx)==0)
								fprintf(user_code,"lw $t3, %s\n", zz);
							else
								fprintf(user_code,"li $t3, %s\n", zz);
							fprintf(user_code, "la $t4, %s\n", yy);

							if(yy[0]=='f'){
								fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "l.s $f0, 0($t4)\n");
							}
							else{
								fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "lw $t0, 0($t4)\n");
							}
						}
						if(stringType(res)==3){
							resArr = true;
							string xx(getArrayParam((yyvsp[-2])));
							char * zz = getArrayParam((yyvsp[-2]));
							char * yy = getArrayName((yyvsp[-2]));
							if(stringType(xx)==0)
								fprintf(user_code,"lw $t3, %s\n", zz);
							else
								fprintf(user_code,"li $t3, %s\n", zz);
							fprintf(user_code, "la $t4, %s\n", yy);

							if(yy[0]=='f'){
								fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
							}
							else{
								fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
							}
						}


						if(!floR && !floOp){
							if(!oprArr)
								fprintf(user_code,"lw $t0, %s\n", (yyvsp[0]));
							if(!resArr)
								fprintf(user_code,"sw $t0, %s\n", (yyvsp[-2]));
							else
								fprintf(user_code,"sw $t0, 0($t4)\n");
						}
						else if(floR && !floOp){
							if(!oprArr){
								fprintf(user_code,"l.s $f0, %s\n", (yyvsp[0]));
								fprintf(user_code,"cvt.s.w $f0, $f0\n");
							}
							else{
								fprintf(user_code,"mtc1 $t0, $f0\n");
								fprintf(user_code,"cvt.s.w $f0, $f0\n");
							}
							if(!resArr)
								fprintf(user_code,"s.s $f0, %s\n", (yyvsp[-2]));
							else
								fprintf(user_code,"s.s $f0, 0($t4)\n");
						}
						else if(floR && floOp){
							if(!oprArr)
								fprintf(user_code,"l.s $f0, %s\n", (yyvsp[0]));
							if(!resArr)
								fprintf(user_code,"s.s $f0, %s\n", (yyvsp[-2]));
							else
								fprintf(user_code,"s.s $f0, 0($t4)\n");
						}
						
					}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 224 "parser.y" /* yacc.c:1646  */
    {
						bool floR=false, floOp=false, resArr=false;
						string res((yyvsp[-2]));
						string opr((yyvsp[0]));

						if(res[0]=='f')
							floR=true;
						if(stringType(opr)==2)
							floOp=true;
						
						checkNewDeclare((yyvsp[-2]));

						if(stringType(res)==3){
							resArr = true;
							string xx(getArrayParam((yyvsp[-2])));
							char * zz = getArrayParam((yyvsp[-2]));
							char * yy = getArrayName((yyvsp[-2]));
							if(stringType(xx)==0)
								fprintf(user_code,"lw $t3, %s\n", zz);
							else
								fprintf(user_code,"li $t3, %s\n", zz);
							fprintf(user_code, "la $t4, %s\n", yy);

							if(yy[0]=='f'){
								fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
							}
							else{
								fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
							}
						}
						
						if(!floR && !floOp){
							fprintf(user_code,"li $t0, %s\n", (yyvsp[0]));
							if(!resArr)
								fprintf(user_code,"sw $t0, %s\n", (yyvsp[-2]));
							else
								fprintf(user_code,"sw $t0, 0($t4)\n");
						}
						else if(floR && !floOp){
							fprintf(user_code,"li.s $f0, %s.0\n", (yyvsp[0]));
							if(!resArr)
								fprintf(user_code,"s.s $f0, %s\n", (yyvsp[-2]));
							else
								fprintf(user_code,"s.s $f0, 0($t4)\n");
						}
						else if(floR && floOp){
							fprintf(user_code,"li.s $f0, %s\n", (yyvsp[0]));
							if(!resArr)
								fprintf(user_code,"s.s $f0, %s\n", (yyvsp[-2]));
							else
								fprintf(user_code,"s.s $f0, 0($t4)\n");
						}
					}
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 281 "parser.y" /* yacc.c:1646  */
    {
						(yyval) = strdup(yytext);
						fprintf(user_code,"%s\n", (yyval));
					}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 287 "parser.y" /* yacc.c:1646  */
    {
						fprintf(user_code,"lw $t0 %s\n", (yyvsp[-2]));
						fprintf(user_code,"bne $t0, 0 %s\n",(yyvsp[0]));
					}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 292 "parser.y" /* yacc.c:1646  */
    {
						fprintf(user_code,"li $t0 %s\n", (yyvsp[-2]));
						fprintf(user_code,"bne $t0, 0 %s\n",(yyvsp[0]));
					}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 298 "parser.y" /* yacc.c:1646  */
    {
						fprintf(user_code,"b %s\n",(yyvsp[0]));
					}
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 303 "parser.y" /* yacc.c:1646  */
    {
						string a((yyvsp[0]));
						allVar.push_back(a);
						if((yyvsp[0])[0]=='f'){
							fprintf(final_code, "%s:\t\t.float 0.0\n", (yyvsp[0]));
							fprintf(user_code, "s.s $f%d, %s\n", globArgsFloReg, (yyvsp[0]));
							globArgsFloReg++;
						}
						else{
							fprintf(final_code, "%s:\t\t.word 0\n", (yyvsp[0]));
							fprintf(user_code, "sw $s%d, %s\n", globArgsIntReg, (yyvsp[0]));
							globArgsIntReg++;
						}
					}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 319 "parser.y" /* yacc.c:1646  */
    {
						string arrName(getArrayName((yyvsp[0])));
						//string arrSize(getArrayParam($2));
						int n = atoi(getArrayParam((yyvsp[0])));
						string ss="";
						if(arrName[0]=='f'){
							for(int i=1;i<n;i++)
								ss += "0.0, ";
							ss += "0.0";
							const char *cstr = ss.c_str();
							fprintf(final_code, "%s:\t\t.float %s\n", getArrayName((yyvsp[0])), cstr);
						}
						else{
							for(int i=1;i<n;i++)
								ss += "0, ";
							ss += "0";
							const char *cstr = ss.c_str();
							fprintf(final_code, "%s:\t\t.word %s\n", getArrayName((yyvsp[0])), cstr);
						}
						 
						

					}
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 344 "parser.y" /* yacc.c:1646  */
    {
						string a((yyvsp[0]));
						if(stringType(a)==3){
							string xx(getArrayParam((yyvsp[0])));
							char * zz = getArrayParam((yyvsp[0]));
							char * yy = getArrayName((yyvsp[0]));
							if(stringType(xx)==0)
								fprintf(user_code,"lw $t3, %s\n", zz);
							else
								fprintf(user_code,"li $t3, %s\n", zz);
							fprintf(user_code, "la $t4, %s\n", yy);

							if(yy[0]=='f'){
								fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "l.s $f%d, 0($t4)\n",globArgsFloReg);
								globArgsFloReg++;
							}
							else{
								fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "lw $s%d, 0($t4)\n",globArgsIntReg);
								globArgsIntReg++;
							}
						}
						else if(stringType(a)==0)
						{
							checkNewDeclare((yyvsp[0]));
							if(a[0]=='f'){
								fprintf(user_code, "l.s $f%d, %s\n", globArgsFloReg, (yyvsp[0]));
								globArgsFloReg++;
							}
							else{
								fprintf(user_code, "lw $s%d, %s\n", globArgsIntReg, (yyvsp[0]));
								globArgsIntReg++;
							}
						}
						else if(stringType(a)==1)
						{
							fprintf(user_code, "li $s%d, %s\n", globArgsIntReg, (yyvsp[0]));
							globArgsIntReg++;
						}
						else
						{
							fprintf(user_code, "li.s $f%d, %s\n", globArgsFloReg, (yyvsp[0]));
							globArgsFloReg++;
						}
					}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 393 "parser.y" /* yacc.c:1646  */
    {
						fprintf(user_code,"jr $ra\n" );
					}
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 397 "parser.y" /* yacc.c:1646  */
    {}
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 399 "parser.y" /* yacc.c:1646  */
    {
						(yyval) = (yyvsp[0]);
						checkNewDeclare((yyvsp[0]));
						string a((yyvsp[0]));

						if(stringType(a)==3){
							string xx(getArrayParam((yyvsp[0])));
							char * zz = getArrayParam((yyvsp[0]));
							char * yy = getArrayName((yyvsp[0]));
							if(stringType(xx)==0)
								fprintf(user_code,"lw $t3, %s\n", zz);
							else
								fprintf(user_code,"li $t3, %s\n", zz);
							fprintf(user_code, "la $t4, %s\n", yy);

							if(yy[0]=='f'){
								fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "l.s $f20, 0($t4)\n");
								
							}
							else{
								fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "lw $s7, 0($t4)\n");
								
							}
						}
						else if(stringType(a)==0){
							
							if(a[0]=='f')
								fprintf(user_code, "l.s $f20, %s\n", (yyvsp[0]));
							else
								fprintf(user_code, "lw $s7, %s\n", (yyvsp[0]));
						}
						else if(stringType(a)==1)
							fprintf(user_code, "li $s7, %s\n", (yyvsp[0]));
						else
							fprintf(user_code, "li.s $f20, %s\n", (yyvsp[0]));
					}
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 441 "parser.y" /* yacc.c:1646  */
    {
						checkNewDeclare((yyvsp[0]));
						string a((yyvsp[0]));
						if(stringType(a)==3){
							string xx(getArrayParam((yyvsp[0])));
							char * zz = getArrayParam((yyvsp[0]));
							char * yy = getArrayName((yyvsp[0]));
							if(stringType(xx)==0)
								fprintf(user_code,"lw $t3, %s\n", zz);
							else
								fprintf(user_code,"li $t3, %s\n", zz);
							fprintf(user_code, "la $t4, %s\n", yy);

							if(yy[0]=='f'){
								fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "s.s $f20, 0($t4)\n");
								
							}
							else{
								fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
								fprintf(user_code, "add $t4, $t4, $t3\n");
								fprintf(user_code, "sw $s7, 0($t4)\n");
								
							}
						}
						else{
							if((yyvsp[0])[0]=='f')
								fprintf(user_code, "s.s $f20, %s\n", (yyvsp[0]));
							else
								fprintf(user_code, "sw $s7, %s\n", (yyvsp[0]));
						}						
					}
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 476 "parser.y" /* yacc.c:1646  */
    {
						fprintf(user_code, "addi $sp, $sp, -4\n");
						fprintf(user_code, "sw $ra, 0($sp)\n");
						fprintf(user_code, "jal %s\n", (yyvsp[0]));
						fprintf(user_code, "lw $ra, 0($sp)\n");
						fprintf(user_code, "addi $sp, $sp, 4\n");
					}
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1843 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 484 "parser.y" /* yacc.c:1906  */


int stringType(string x){
	for(int i=0; i<x.size();i++){
		if(x[i]=='(')
			return 3;	// Array Var
	}
	if(x[0]=='f'||x[0]=='i')
		return 0; 		// Variable 
	for(int i=0; i<x.size();i++){
		if(x[i]=='.')
			return 2;	// Float
	}
	return 1;			// Integer
}

char * getArrayName(char *a){
	string s(a);
	string s2 = s.substr(0, s.find("("));
	char *cstr = new char[s2.length() + 1];
	strcpy(cstr, s2.c_str());
	return cstr;
}

char * getArrayParam(char * a){
	string s(a);
	string s2 = s.substr(s.find("(")+1, s.find(")")-s.find("(")-1);
	char *cstr = new char[s2.length() + 1];
	strcpy(cstr, s2.c_str());
	return cstr;
}

void add_operation(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);
	bool flo1=false;
	bool flo2=false;

	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f1, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t1, 0($t4)\n");
		}

	}
	else if(stringType(op1)==0){
		checkNewDeclare(a);
		if(op1[0]=='f'){
			flo1 = true;
			fprintf(user_code,"l.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"lw $t1, %s\n",a);
		}
	}
	else{
		if(stringType(op1)==2){
			flo1 = true;
			fprintf(user_code,"li.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"li $t1, %s\n",a);
		}
	}

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f2, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t2, 0($t4)\n");
		}

	}
	else if(stringType(op2)==0){
		checkNewDeclare(b);
		if(op2[0]=='f'){
			flo2 = true;
			fprintf(user_code,"l.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"lw $t2, %s\n",b);
		}
	}
	else{
		if(stringType(op2)==2){
			flo2 = true;
			fprintf(user_code,"li.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"li $t2, %s\n",b);
		}
	}

	if(stringType(res)!=3)
		checkNewDeclare(r);
	
	bool resArr = false;
	if(stringType(res)==3){
		resArr = true;
		string xx(getArrayParam(r));
		char * zz = getArrayParam(r);
		char * yy = getArrayName(r);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
	}
	if(flo1 || flo2){
		if(!flo1){
			fprintf(user_code,"mtc1 $t1, $f1\n");
			fprintf(user_code,"cvt.s.w $f1, $f1\n");
		}
		if(!flo2){
			fprintf(user_code,"mtc1 $t2, $f2\n");
			fprintf(user_code,"cvt.s.w $f2, $f2\n");
		}
		fprintf(user_code,"add.s $f0, $f1, $f2\n");
		if(!resArr)
			fprintf(user_code,"s.s $f0, %s\n", r);
		else
			fprintf(user_code,"s.s $f0, 0($t4)\n");
	}
	else{
		fprintf(user_code,"add $t0, $t1, $t2\n");
		if(!resArr)
			fprintf(user_code,"sw $t0, %s\n", r);
		else
			fprintf(user_code,"sw $t0, 0($t4)\n");
	}
}

void sub_operation(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);
	bool flo1=false;
	bool flo2=false;

	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f1, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t1, 0($t4)\n");
		}

	}
	else if(stringType(op1)==0){
		checkNewDeclare(a);
		if(op1[0]=='f'){
			flo1 = true;
			fprintf(user_code,"l.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"lw $t1, %s\n",a);
		}
	}
	else{
		if(stringType(op1)==2){
			flo1 = true;
			fprintf(user_code,"li.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"li $t1, %s\n",a);
		}
	}

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f2, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t2, 0($t4)\n");
		}

	}
	else if(stringType(op2)==0){
		checkNewDeclare(b);
		if(op2[0]=='f'){
			flo2 = true;
			fprintf(user_code,"l.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"lw $t2, %s\n",b);
		}
	}
	else{
		if(stringType(op2)==2){
			flo2 = true;
			fprintf(user_code,"li.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"li $t2, %s\n",b);
		}
	}

	if(stringType(res)!=3)
		checkNewDeclare(r);

	bool resArr = false;
	if(stringType(res)==3){
		resArr = true;
		string xx(getArrayParam(r));
		char * zz = getArrayParam(r);
		char * yy = getArrayName(r);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
	}
	if(flo1 || flo2){
		if(!flo1){
			fprintf(user_code,"mtc1 $t1, $f1\n");
			fprintf(user_code,"cvt.s.w $f1, $f1\n");
		}
		if(!flo2){
			fprintf(user_code,"mtc1 $t2, $f2\n");
			fprintf(user_code,"cvt.s.w $f2, $f2\n");
		}
		fprintf(user_code,"sub.s $f0, $f1, $f2\n");
		if(!resArr)
			fprintf(user_code,"s.s $f0, %s\n", r);
		else
			fprintf(user_code,"s.s $f0, 0($t4)\n");
	}
	else{
		fprintf(user_code,"sub $t0, $t1, $t2\n");
		if(!resArr)
			fprintf(user_code,"sw $t0, %s\n", r);
		else
			fprintf(user_code,"sw $t0, 0($t4)\n");
	}
}

void mul_operation(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);
	bool flo1=false;
	bool flo2=false;

	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f1, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t1, 0($t4)\n");
		}

	}
	else if(stringType(op1)==0){
		checkNewDeclare(a);
		if(op1[0]=='f'){
			flo1 = true;
			fprintf(user_code,"l.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"lw $t1, %s\n",a);
		}
	}
	else{
		if(stringType(op1)==2){
			flo1 = true;
			fprintf(user_code,"li.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"li $t1, %s\n",a);
		}
	}

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f2, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t2, 0($t4)\n");
		}

	}
	else if(stringType(op2)==0){
		checkNewDeclare(b);
		if(op2[0]=='f'){
			flo2 = true;
			fprintf(user_code,"l.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"lw $t2, %s\n",b);
		}
	}
	else{
		if(stringType(op2)==2){
			flo2 = true;
			fprintf(user_code,"li.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"li $t2, %s\n",b);
		}
	}

	if(stringType(res)!=3)
		checkNewDeclare(r);
		
	bool resArr = false;
	if(stringType(res)==3){
		resArr = true;
		string xx(getArrayParam(r));
		char * zz = getArrayParam(r);
		char * yy = getArrayName(r);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
	}
	if(flo1 || flo2){
		if(!flo1){
			fprintf(user_code,"mtc1 $t1, $f1\n");
			fprintf(user_code,"cvt.s.w $f1, $f1\n");
		}
		if(!flo2){
			fprintf(user_code,"mtc1 $t2, $f2\n");
			fprintf(user_code,"cvt.s.w $f2, $f2\n");
		}
		fprintf(user_code,"mul.s $f0, $f1, $f2\n");
		if(!resArr)
			fprintf(user_code,"s.s $f0, %s\n", r);
		else
			fprintf(user_code,"s.s $f0, 0($t4)\n");
	}
	else{
		fprintf(user_code,"mul $t0, $t1, $t2\n");
		if(!resArr)
			fprintf(user_code,"sw $t0, %s\n", r);
		else
			fprintf(user_code,"sw $t0, 0($t4)\n");
	}
}

void div_operation(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);
	bool flo1=false;
	bool flo2=false;

	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f1, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t1, 0($t4)\n");
		}

	}
	else if(stringType(op1)==0){
		checkNewDeclare(a);
		if(op1[0]=='f'){
			flo1 = true;
			fprintf(user_code,"l.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"lw $t1, %s\n",a);
		}
	}
	else{
		if(stringType(op1)==2){
			flo1 = true;
			fprintf(user_code,"li.s $f1, %s\n",a);
		}
		else{
			fprintf(user_code,"li $t1, %s\n",a);
		}
	}

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "l.s $f2, 0($t4)\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
			fprintf(user_code, "lw $t2, 0($t4)\n");
		}

	}
	else if(stringType(op2)==0){
		checkNewDeclare(b);
		if(op2[0]=='f'){
			flo2 = true;
			fprintf(user_code,"l.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"lw $t2, %s\n",b);
		}
	}
	else{
		if(stringType(op2)==2){
			flo2 = true;
			fprintf(user_code,"li.s $f2, %s\n",b);
		}
		else{
			fprintf(user_code,"li $t2, %s\n",b);
		}
	}

	if(stringType(res)!=3)
		checkNewDeclare(r);
		
	bool resArr = false;
	if(stringType(res)==3){
		resArr = true;
		string xx(getArrayParam(r));
		char * zz = getArrayParam(r);
		char * yy = getArrayName(r);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		if(yy[0]=='f'){
			fprintf(user_code, "li $t5, 8\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
		else{
			fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
			fprintf(user_code, "add $t4, $t4, $t3\n");
		}
	}
	if(flo1 || flo2){
		if(!flo1){
			fprintf(user_code,"mtc1 $t1, $f1\n");
			fprintf(user_code,"cvt.s.w $f1, $f1\n");
		}
		if(!flo2){
			fprintf(user_code,"mtc1 $t2, $f2\n");
			fprintf(user_code,"cvt.s.w $f2, $f2\n");
		}
		fprintf(user_code,"div.s $f0, $f1, $f2\n");
		if(!resArr)
			fprintf(user_code,"s.s $f0, %s\n", r);
		else
			fprintf(user_code,"s.s $f0, 0($t4)\n");
	}
	else{
		fprintf(user_code,"div $t0, $t1, $t2\n");
		if(!resArr)
			fprintf(user_code,"sw $t0, %s\n", r);
		else
			fprintf(user_code,"sw $t0, 0($t4)\n");
	}
}

void less_than_op(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);

	checkNewDeclare(a);
	checkNewDeclare(b);
	checkNewDeclare(r);
	
	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t1, 0($t4)\n");
	}
	else if(stringType(op1)==0)
		fprintf(user_code,"lw $t1, %s\n",a);
	else
		fprintf(user_code,"li $t1, %s\n",a);
	

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t2, 0($t4)\n");
	}
	else if(stringType(op2)==0)
		fprintf(user_code,"lw $t2, %s\n",b);
	else
		fprintf(user_code,"li $t2, %s\n",b);
	
	fprintf(user_code,"li $t0, 0\n");
	fprintf(user_code,"slt $t0, $t1, $t2\n");
	fprintf(user_code,"sw $t0, %s\n", r);
}

void great_than_op(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);

	checkNewDeclare(a);
	checkNewDeclare(b);
	checkNewDeclare(r);
	
	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t1, 0($t4)\n");
	}
	else if(stringType(op1)==0)
		fprintf(user_code,"lw $t1, %s\n",a);
	else
		fprintf(user_code,"li $t1, %s\n",a);
	

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t2, 0($t4)\n");
	}
	else if(stringType(op2)==0)
		fprintf(user_code,"lw $t2, %s\n",b);
	else
		fprintf(user_code,"li $t2, %s\n",b);
	
	fprintf(user_code,"li $t0, 0\n");
	fprintf(user_code,"sgt $t0, $t1, $t2\n");
	fprintf(user_code,"sw $t0, %s\n", r);
}

void equal_op(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);

	checkNewDeclare(a);
	checkNewDeclare(b);
	checkNewDeclare(r);
	
	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t1, 0($t4)\n");
	}
	else if(stringType(op1)==0)
		fprintf(user_code,"lw $t1, %s\n",a);
	else
		fprintf(user_code,"li $t1, %s\n",a);
	

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t2, 0($t4)\n");
	}
	else if(stringType(op2)==0)
		fprintf(user_code,"lw $t2, %s\n",b);
	else
		fprintf(user_code,"li $t2, %s\n",b);
	
	fprintf(user_code,"li $t0, 0\n");
	fprintf(user_code,"seq $t0, $t1, $t2\n");
	fprintf(user_code,"sw $t0, %s\n", r);
}

void less_eq_op(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);

	checkNewDeclare(a);
	checkNewDeclare(b);
	checkNewDeclare(r);
	
	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t1, 0($t4)\n");
	}
	else if(stringType(op1)==0)
		fprintf(user_code,"lw $t1, %s\n",a);
	else
		fprintf(user_code,"li $t1, %s\n",a);
	

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t2, 0($t4)\n");
	}
	else if(stringType(op2)==0)
		fprintf(user_code,"lw $t2, %s\n",b);
	else
		fprintf(user_code,"li $t2, %s\n",b);
	
	fprintf(user_code,"li $t0, 0\n");
	fprintf(user_code,"sle $t0, $t1, $t2\n");
	fprintf(user_code,"sw $t0, %s\n", r);
}

void great_eq_op(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);

	checkNewDeclare(a);
	checkNewDeclare(b);
	checkNewDeclare(r);
	
	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t1, 0($t4)\n");
	}
	else if(stringType(op1)==0)
		fprintf(user_code,"lw $t1, %s\n",a);
	else
		fprintf(user_code,"li $t1, %s\n",a);
	

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t2, 0($t4)\n");
	}
	else if(stringType(op2)==0)
		fprintf(user_code,"lw $t2, %s\n",b);
	else
		fprintf(user_code,"li $t2, %s\n",b);
	
	fprintf(user_code,"li $t0, 0\n");
	fprintf(user_code,"sge $t0, $t1, $t2\n");
	fprintf(user_code,"sw $t0, %s\n", r);
}

void not_eq_op(char *r, char *a, char *b){
	string res(r);
	string op1(a);
	string op2(b);

	checkNewDeclare(a);
	checkNewDeclare(b);
	checkNewDeclare(r);
	
	if(stringType(op1)==3){
		string xx(getArrayParam(a));
		char * zz = getArrayParam(a);
		char * yy = getArrayName(a);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t1, 0($t4)\n");
	}
	else if(stringType(op1)==0)
		fprintf(user_code,"lw $t1, %s\n",a);
	else
		fprintf(user_code,"li $t1, %s\n",a);
	

	if(stringType(op2)==3){
		string xx(getArrayParam(b));
		char * zz = getArrayParam(b);
		char * yy = getArrayName(b);
		if(stringType(xx)==0)
			fprintf(user_code,"lw $t3, %s\n", zz);
		else
			fprintf(user_code,"li $t3, %s\n", zz);
		fprintf(user_code, "la $t4, %s\n", yy);

		fprintf(user_code, "li $t5, 4\n"); fprintf(user_code, "mul $t3, $t3, $t5\n");
		fprintf(user_code, "add $t4, $t4, $t3\n");
		fprintf(user_code, "lw $t2, 0($t4)\n");
	}
	else if(stringType(op2)==0)
		fprintf(user_code,"lw $t2, %s\n",b);
	else
		fprintf(user_code,"li $t2, %s\n",b);
	
	fprintf(user_code,"li $t0, 0\n");
	fprintf(user_code,"sne $t0, $t1, $t2\n");
	fprintf(user_code,"sw $t0, %s\n", r);
}

void checkNewDeclare(char * s){
	string ss(s);
	if(stringType(ss)!=0)
		return;
	
	if(find(allVar.begin(), allVar.end(), ss) == allVar.end()){
		allVar.push_back(ss);
		if(s[0]=='f')
			fprintf(final_code,"%s:\t\t .float 0.0\n", s);
		else
			fprintf(final_code,"%s:\t\t .word 0\n", s);
		
	}
}

int main (void) {
	char a[1000];
	
	user_code=fopen("temp_mips.s","w");
	final_code=fopen("mips.s","w");

	fprintf(final_code,".data\n");

	yyparse ();

	fprintf(final_code,"\n.text\n" );
	
	fclose(user_code);
	fclose(final_code);

	std::ifstream in("temp_mips.s");
	std::ofstream out("mips.s", std::ios::app);
	out << in.rdbuf();
	
	return 0;
}

int yyerror (char *s){
	fprintf (stderr, "%s\n", s);
}