/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "mini_l.y" /* yacc.c:339  */

#define YY_NO_INPUT
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
extern int currPos;
extern int currLine;
//extern char * yytext;


#line 77 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    BEGIN_PROGRAM = 259,
    END_PROGRAM = 260,
    INTEGER = 261,
    ARRAY = 262,
    OF = 263,
    IF = 264,
    THEN = 265,
    ENDIF = 266,
    ELSE = 267,
    ELSEIF = 268,
    WHILE = 269,
    DO = 270,
    BEGINLOOP = 271,
    ENDLOOP = 272,
    BREAK = 273,
    CONTINUE = 274,
    EXIT = 275,
    READ = 276,
    WRITE = 277,
    AND = 278,
    OR = 279,
    NOT = 280,
    TRUE = 281,
    FALSE = 282,
    SUB = 283,
    ADD = 284,
    MULT = 285,
    DIV = 286,
    MOD = 287,
    EQ = 288,
    NEQ = 289,
    LT = 290,
    GT = 291,
    LTE = 292,
    GTE = 293,
    SEMICOLON = 294,
    COLON = 295,
    COMMA = 296,
    QUESTION = 297,
    L_BRACKET = 298,
    R_BRACKET = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    ASSIGN = 302,
    NUMBER = 303,
    IDENT = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 19 "mini_l.y" /* yacc.c:355  */

    int int_val;
    char* string_val;

#line 172 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   123,   123,   127,   131,   133,   137,   140,   143,   147,
     149,   153,   155,   159,   161,   163,   165,   167,   169,   171,
     173,   175,   179,   181,   185,   188,   191,   195,   197,   199,
     203,   207,   210,   213,   217,   220,   223,   225,   229,   231,
     233,   235,   239,   241,   243,   245,   247,   249,   253,   257,
     259,   262,   265,   269,   271,   273,   276,   279,   281,   285,
     287,   289,   293,   297,   300
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "BEGIN_PROGRAM",
  "END_PROGRAM", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "ELSEIF", "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "BREAK", "CONTINUE",
  "EXIT", "READ", "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "SUB",
  "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE",
  "SEMICOLON", "COLON", "COMMA", "QUESTION", "L_BRACKET", "R_BRACKET",
  "L_PAREN", "R_PAREN", "ASSIGN", "NUMBER", "IDENT", "$accept", "program",
  "block", "block_pm", "statement_pm", "declaration", "declaration_pm",
  "declaration_pm_pm", "statement", "var_pm", "var_pm_pm", "if_pm",
  "if_pm_pm", "bool_exp", "bool_exp_pm", "relation_and_exp",
  "relation_and_exp_pm", "relation_exp", "relation_exp_pm", "comp",
  "expression", "expression_pm", "multiplicative_exp",
  "multiplicative_exp_pm", "term", "term_pm", "var", "var_pm_pm_pm", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -78

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -28,    24,     6,   -78,   -21,    13,    35,     8,    65,
      26,   -78,   -78,     1,   -78,    40,   -78,    13,    37,   -78,
      46,    56,   -78,   -12,   -12,    81,   -78,   -78,   -78,    63,
      63,    70,    75,    68,     1,    76,    53,   -78,   -78,    60,
     -12,   -78,   111,    98,   100,   -78,    54,    49,   -13,   -78,
     -78,   112,    37,    86,    86,   -22,   -78,    37,   -12,   -78,
     122,   -78,   -22,   -78,    85,    28,    37,   -12,   -78,   -12,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -22,   -22,   -22,
     -78,   -22,   -22,   -22,   -78,    37,    93,    63,   -78,   -78,
      89,   -78,    95,   -78,    94,    54,   129,    91,   -78,   -78,
      99,   -78,    98,   100,   -78,    49,    49,   -13,   -13,   -13,
     101,    37,    86,   -78,    37,   -22,   -78,    37,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,    37,   124,   -78,   -78,   102,
      -3,   126,   125,   -22,   -78,    37,   -12,   -78,   -78,   -12,
     -78,   105,    37,   -78,    37,   106,   135,    37,   -78,    -3,
     -78
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     8,     2,     0,    11,     0,    10,     0,     0,     3,
       0,     0,     9,     0,     0,     0,    19,    20,    21,     0,
       0,    64,     0,     0,     0,     0,     0,    39,    40,     0,
       0,    60,     0,    32,    35,    37,     0,    51,    56,    58,
      59,     0,     0,    25,    25,     0,    62,     7,     0,     4,
       0,    36,     0,    57,     0,     0,     0,     0,    30,     0,
      33,    42,    43,    44,    45,    46,    47,     0,     0,     0,
      48,     0,     0,     0,    52,     0,     0,     0,    17,    18,
       0,     5,     0,    13,     0,    22,     0,     0,    41,    61,
       0,    14,    32,    35,    38,    51,    51,    56,    56,    56,
       0,     7,    25,    63,     7,     0,    12,     7,    31,    34,
      49,    50,    53,    54,    55,     7,     0,    24,     6,     0,
       0,     0,     0,     0,    27,     0,     0,    26,    15,     0,
      23,     0,     0,    16,     7,     0,     0,     7,    29,     0,
      28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   113,   -41,   143,   132,   -78,   -17,   -78,
     -52,   -78,     2,   -20,    48,    87,    50,    83,   119,   -78,
     -33,   -11,    32,   -77,   -40,   117,   -18,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    19,    91,    20,    11,    16,    92,    93,
      88,   101,   137,    42,    68,    43,    70,    44,    45,    77,
      46,    80,    47,    84,    48,    49,    50,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      33,    32,    89,     1,    51,    18,    39,    65,   134,   135,
     136,    53,    54,    36,    37,    38,    39,    81,    82,    83,
      64,     3,    90,    62,     4,    95,    41,    31,     6,    97,
     122,   123,   124,    40,    33,    86,    41,    31,    94,    33,
      12,   107,   108,   109,   104,     5,    23,    13,    33,   100,
       6,    24,    25,     9,    10,    26,    27,    28,    29,    30,
     127,    71,    72,    73,    74,    75,    76,    33,   110,   112,
     126,    14,    15,   128,    99,    17,   130,    78,    79,    37,
      38,    39,   129,    21,   131,    34,    31,    71,    72,    73,
      74,    75,    76,    33,   120,   121,    33,    52,    40,    33,
     140,    41,    31,   146,    35,    62,   149,    33,    41,    31,
     105,   106,    31,    55,    57,    58,   142,    33,   141,   143,
      60,    66,    67,    69,    33,   145,    33,    87,    85,    33,
      96,    98,   111,   113,   114,   116,   115,    99,   117,   139,
     125,   132,   133,   138,   144,   147,   148,    59,     8,    22,
     118,   150,   103,   119,   102,    61,    63
};

static const yytype_uint8 yycheck[] =
{
      18,    18,    54,     3,    24,     4,    28,    40,    11,    12,
      13,    29,    30,    25,    26,    27,    28,    30,    31,    32,
      40,    49,    55,    45,     0,    58,    48,    49,    49,    62,
     107,   108,   109,    45,    52,    52,    48,    49,    58,    57,
       5,    81,    82,    83,    77,    39,     9,    39,    66,    66,
      49,    14,    15,    40,    41,    18,    19,    20,    21,    22,
     112,    33,    34,    35,    36,    37,    38,    85,    85,    87,
     111,     6,     7,   114,    46,    49,   117,    28,    29,    26,
      27,    28,   115,    43,   125,    39,    49,    33,    34,    35,
      36,    37,    38,   111,   105,   106,   114,    16,    45,   117,
     133,    48,    49,   144,    48,    45,   147,   125,    48,    49,
      78,    79,    49,    43,    39,    47,   136,   135,   135,   139,
      44,    10,    24,    23,   142,   142,   144,    41,    16,   147,
       8,    46,    39,    44,    39,     6,    42,    46,    39,    14,
      39,    17,    40,    17,    39,    39,    11,    34,     5,    17,
     102,   149,    69,   103,    67,    36,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    51,    49,     0,    39,    49,    52,    55,    40,
      41,    56,     5,    39,     6,     7,    57,    49,     4,    53,
      55,    43,    56,     9,    14,    15,    18,    19,    20,    21,
      22,    49,    58,    76,    39,    48,    25,    26,    27,    28,
      45,    48,    63,    65,    67,    68,    70,    72,    74,    75,
      76,    63,    16,    76,    76,    43,    77,    39,    47,    53,
      44,    68,    45,    75,    63,    70,    10,    24,    64,    23,
      66,    33,    34,    35,    36,    37,    38,    69,    28,    29,
      71,    30,    31,    32,    73,    16,    58,    41,    60,    60,
      70,    54,    58,    59,    63,    70,     8,    70,    46,    46,
      58,    61,    65,    67,    70,    72,    72,    74,    74,    74,
      58,    39,    76,    44,    39,    42,     6,    39,    64,    66,
      71,    71,    73,    73,    73,    39,    54,    60,    54,    70,
      54,    54,    17,    40,    11,    12,    13,    62,    17,    14,
      70,    58,    63,    63,    39,    58,    54,    39,    11,    54,
      62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    53,    53,    54,    54,    55,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    62,    62,    62,
      63,    64,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    71,
      71,    71,    72,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    76,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     3,     4,     3,     0,     2,     3,
       2,     1,     6,     3,     4,     7,     8,     3,     3,     1,
       1,     1,     1,     5,     3,     0,     4,     1,     6,     5,
       2,     3,     0,     2,     3,     0,     2,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     0,     2,     3,     3,     3,     0,     2,     1,     1,
       1,     3,     2,     3,     0
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
#line 124 "mini_l.y" /* yacc.c:1646  */
    {printf("program -> PROGRAM IDENT SEMICOLON block END_PROGRAM\n");}
#line 1369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "mini_l.y" /* yacc.c:1646  */
    {printf("block -> declaration SEMICOLON block_pm\n");}
#line 1375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 132 "mini_l.y" /* yacc.c:1646  */
    {printf("block' -> declaration SEMICOLON block'\n");}
#line 1381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 134 "mini_l.y" /* yacc.c:1646  */
    {printf("block' -> BEGIN_PROGRAM statement SEMICOLON statement'\n");}
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 138 "mini_l.y" /* yacc.c:1646  */
    {printf("statement' -> statement SEMICOLON statement'\n");}
#line 1393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 140 "mini_l.y" /* yacc.c:1646  */
    {printf("statement' -> epsilon\n");}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration -> IDENT declaration'\n");}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 148 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration' -> COMMA IDENT declaration'\n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 150 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration' -> COLON declaration''\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration'' -> INTEGER\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 156 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration'' -> ARRAY L_BRACKET NUMBER R_BRACKET OF INTEGER\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> var ASSIGN var'\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 162 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> IF bool_exp THEN if'\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 164 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> WHILE bool_exp BEGINLOOP statement SEMICOLON statement' ENDLOOP\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> DO BEGINLOOP statement SEMICOLON statement' ENDLOOP WHILE bool_exp\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 168 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> READ var var''\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 170 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> WRITE var var''\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> BREAK\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 174 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> CONTINUE\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 176 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> EXIT\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 180 "mini_l.y" /* yacc.c:1646  */
    {printf("var' -> expression\n");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 182 "mini_l.y" /* yacc.c:1646  */
    {printf("var' -> bool_exp QUESTION expression COLON expression\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 186 "mini_l.y" /* yacc.c:1646  */
    {printf("var'' -> COMMA var var''\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 188 "mini_l.y" /* yacc.c:1646  */
    {printf("var'' -> epsilon\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 192 "mini_l.y" /* yacc.c:1646  */
    {printf("if' -> statement SEMICOLON statement' if''\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 196 "mini_l.y" /* yacc.c:1646  */
    {printf("if'' -> ENDIF\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 198 "mini_l.y" /* yacc.c:1646  */
    {printf("if'' -> ELSEIF bool_exp statement SEMICOLON statement' if''\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 200 "mini_l.y" /* yacc.c:1646  */
    {printf("if'' -> ELSE statement SEMICOLON statement' ENDIF\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "mini_l.y" /* yacc.c:1646  */
    {printf("bool_exp -> relation_and_exp bool_exp'\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 208 "mini_l.y" /* yacc.c:1646  */
    {printf("bool_exp' -> OR relation_and_exp bool_exp'\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 210 "mini_l.y" /* yacc.c:1646  */
    {printf("bool_exp' -> epsilon\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 214 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_and_exp -> relation_exp relation_and_exp'\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 218 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_and_exp' -> AND relation_exp relation_and_exp'\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 220 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_and_exp' -> epsilon\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 224 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exp -> NOT relation_exp'\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 226 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exp -> relation_exp'\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 230 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exp' -> expression comp expression\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 232 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exp' -> TRUE\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 234 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exp' -> FALSE\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 236 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_exp' -> L_PAREN bool_exp R_PAREN\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 240 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> EQ\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 242 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> NEQ\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> LT\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 246 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> GT\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 248 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> LTE\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 250 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> GTE\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 254 "mini_l.y" /* yacc.c:1646  */
    {printf("expression -> multiplicative_exp expression'\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "mini_l.y" /* yacc.c:1646  */
    {printf("expression' -> SUB multiplicative_exp expression'\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 260 "mini_l.y" /* yacc.c:1646  */
    {printf("expression' -> ADD multiplicative_exp expression'\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 262 "mini_l.y" /* yacc.c:1646  */
    {printf("expression' -> epsilon\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 266 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_exp -> term multiplicative_exp'\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 270 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_exp' -> MULT term multiplicative_exp'\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 272 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_exp' -> DIV term multiplicative_exp'\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 274 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_exp' -> MOD term multiplicative_exp'\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 276 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_exp' -> epsilon\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 280 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> SUB term'\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 282 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> term'\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 286 "mini_l.y" /* yacc.c:1646  */
    {printf("term' -> var\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 288 "mini_l.y" /* yacc.c:1646  */
    {printf("term' -> NUMBER\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 290 "mini_l.y" /* yacc.c:1646  */
    {printf("term' -> L_PAREN expression R_PAREN\n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 294 "mini_l.y" /* yacc.c:1646  */
    {printf("var -> IDENT var'''\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 298 "mini_l.y" /* yacc.c:1646  */
    {printf("var''' -> L_BRACKET expression R_BRACKET\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 300 "mini_l.y" /* yacc.c:1646  */
    {printf("var''' -> epsilon\n");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1745 "y.tab.c" /* yacc.c:1646  */
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
#line 303 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char * s)
{
  //extern int yylineno;	// defined and maintained in lex.c
  //extern char *yytext;	// defined and maintained in lex.c
  
  //cerr << "ERROR: " << s << " at symbol \"" << yytext;
  //cerr << "\" on line " << yylineno << endl;
  //exit(1);
  
  printf("ERROR Line %d: %s\n", currLine, s);
}

int main(int argc, char **argv)
{
    yyparse();
    
    return 0;
}
