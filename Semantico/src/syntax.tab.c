/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "./src/syntax.y"

  #include <stdio.h>
  #include <string.h>
  #include "escopo.h"
  #include "arvore.h"
  #include "tabela.h"
  #include "colors.h"

  #define eh "Eh funcao"
  #define nao_eh "Nao eh" 


  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex();
  extern int yylex_destroy();

  int error = 0;

#line 91 "./src/syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_FUNCTION = 4,                   /* FUNCTION  */
  YYSYMBOL_INFIX = 5,                      /* INFIX  */
  YYSYMBOL_INPUT = 6,                      /* INPUT  */
  YYSYMBOL_OUTPUT = 7,                     /* OUTPUT  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_ASSIGN = 12,                    /* ASSIGN  */
  YYSYMBOL_NIL = 13,                       /* NIL  */
  YYSYMBOL_TYPE = 14,                      /* TYPE  */
  YYSYMBOL_LISTTYPE = 15,                  /* LISTTYPE  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_STRING = 18,                    /* STRING  */
  YYSYMBOL_19_ = 19,                       /* '%'  */
  YYSYMBOL_20_ = 20,                       /* '!'  */
  YYSYMBOL_21_ = 21,                       /* '?'  */
  YYSYMBOL_22_ = 22,                       /* ','  */
  YYSYMBOL_23_ = 23,                       /* ';'  */
  YYSYMBOL_24_ = 24,                       /* '('  */
  YYSYMBOL_25_ = 25,                       /* ')'  */
  YYSYMBOL_26_ = 26,                       /* '{'  */
  YYSYMBOL_27_ = 27,                       /* '}'  */
  YYSYMBOL_REL_OP = 28,                    /* REL_OP  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_MUL_DIV = 31,                   /* MUL_DIV  */
  YYSYMBOL_SUB_ADD = 32,                   /* SUB_ADD  */
  YYSYMBOL_LEXICAL_ERROR = 33,             /* LEXICAL_ERROR  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_program = 35,                   /* program  */
  YYSYMBOL_paramList = 36,                 /* paramList  */
  YYSYMBOL_param = 37,                     /* param  */
  YYSYMBOL_variableParam = 38,             /* variableParam  */
  YYSYMBOL_functionParam = 39,             /* functionParam  */
  YYSYMBOL_functionParams = 40,            /* functionParams  */
  YYSYMBOL_functionParamsList = 41,        /* functionParamsList  */
  YYSYMBOL_call = 42,                      /* call  */
  YYSYMBOL_argList = 43,                   /* argList  */
  YYSYMBOL_stmList = 44,                   /* stmList  */
  YYSYMBOL_stmt = 45,                      /* stmt  */
  YYSYMBOL_expStatement = 46,              /* expStatement  */
  YYSYMBOL_compoundStatement = 47,         /* compoundStatement  */
  YYSYMBOL_ifStatement = 48,               /* ifStatement  */
  YYSYMBOL_forStatement = 49,              /* forStatement  */
  YYSYMBOL_returnStatement = 50,           /* returnStatement  */
  YYSYMBOL_inputStatement = 51,            /* inputStatement  */
  YYSYMBOL_outputStatement = 52,           /* outputStatement  */
  YYSYMBOL_expression = 53,                /* expression  */
  YYSYMBOL_orExpression = 54,              /* orExpression  */
  YYSYMBOL_andExpression = 55,             /* andExpression  */
  YYSYMBOL_relationalExpression = 56,      /* relationalExpression  */
  YYSYMBOL_listExpression = 57,            /* listExpression  */
  YYSYMBOL_arithmExpression = 58,          /* arithmExpression  */
  YYSYMBOL_arithmMulDivExpression = 59,    /* arithmMulDivExpression  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_unaryTerm = 61,                 /* unaryTerm  */
  YYSYMBOL_immutable = 62,                 /* immutable  */
  YYSYMBOL_const = 63,                     /* const  */
  YYSYMBOL_listOP = 64                     /* listOP  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    20,     2,     2,     2,    19,     2,     2,
      24,    25,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
       2,     2,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   108,   113,   118,   121,   126,   149,   168,
     172,   178,   200,   228,   231,   234,   240,   261,   286,   306,
     331,   340,   348,   354,   359,   364,   369,   372,   375,   378,
     381,   384,   387,   390,   395,   401,   404,   410,   418,   431,
     443,   450,   461,   470,   479,   482,   487,   494,   503,   506,
     511,   518,   526,   529,   534,   541,   549,   552,   557,   564,
     570,   576,   584,   589,   597,   603,   606,   609,   613,   616,
     619,   625,   632,   639,   646,   656,   667,   673,   679,   685,
     693,   699
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "FUNCTION",
  "INFIX", "INPUT", "OUTPUT", "IF", "ELSE", "RETURN", "FOR", "ASSIGN",
  "NIL", "TYPE", "LISTTYPE", "INT", "FLOAT", "STRING", "'%'", "'!'", "'?'",
  "','", "';'", "'('", "')'", "'{'", "'}'", "REL_OP", "AND", "OR",
  "MUL_DIV", "SUB_ADD", "LEXICAL_ERROR", "$accept", "program", "paramList",
  "param", "variableParam", "functionParam", "functionParams",
  "functionParamsList", "call", "argList", "stmList", "stmt",
  "expStatement", "compoundStatement", "ifStatement", "forStatement",
  "returnStatement", "inputStatement", "outputStatement", "expression",
  "orExpression", "andExpression", "relationalExpression",
  "listExpression", "arithmExpression", "arithmMulDivExpression", "term",
  "unaryTerm", "immutable", "const", "listOP", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    37,
      33,    63,    44,    59,    40,    41,   123,   125,   274,   275,
     276,   277,   278,   279
};
#endif

#define YYPACT_NINF (-208)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,     2,    16,    14,    27,    81,    85,     8,     7,    42,
    -208,    87,   118,    33,   137,   139,   200,    57,    51,    61,
     337,   237,    33,   436,    26,  2588,    88,   103,   454,   256,
     212,    86,   106,   138,   394,   147,   129,   890,     4,   935,
    2933,  2944,    59,    59,    59,  2700,  1688,   513,   375,   113,
      59,   255,  2955,   278,   297,   344,   351,   352,   428,   432,
     448,   172,   128,   501,   657,   675,   776,  2965,  2975,  2985,
    2995,  3005,   105,  2588,   162,    71,   201,   477,  2700,   180,
     394,   189,    12,   827,  3015,  3025,  3035,   116,   449,  1718,
    1748,  3045,   468,   913,  2722,  2746,  2882,  2904,    59,    59,
      59,   498,   207,   469,   209,   532,   543,   197,   205,   225,
     474,   394,   231,  3055,   492,  1778,   509,   721,   735,  3065,
     786,  3075,   561,   253,  3085,   242,   247,  2618,  2700,   573,
     502,   503,    89,   250,  2588,  2588,   504,   505,  2780,   575,
     269,  2810,  3095,  3105,  3114,  2926,  2926,  2926,  2700,   583,
     223,    67,  2926,  3124,   143,   296,   611,   758,  3264,  3136,
    3146,  3154,  3165,  3176,   257,   274,   285,   394,   303,     5,
    1808,  1838,  1868,  1898,  1928,  1958,  1988,  2018,  2048,   306,
     309,   145,   329,   330,   338,   355,   477,   477,   477,  2700,
     477,   383,   384,   396,   406,   327,   409,   414,   419,   394,
     426,     6,  2078,   107,   117,   133,   140,   150,   184,   187,
     188,   433,   981,    71,    39,  3184,  3194,  3206,   441,  3216,
    2770,  2800,  2830,  2926,  2926,  2926,   478,   477,  2700,   476,
     394,   487,    15,   510,  2108,  2138,  2168,    71,   475,   519,
     530,   531,   544,  2860,   571,   477,  2700,   511,   394,   512,
      20,   558,   199,  2198,   206,   563,   603,  3224,   371,   850,
     859,  3235,   923,  3246,   572,   576,   577,  2228,   394,  2258,
     586,  2288,  2318,  2348,   622,   585,   589,   597,   599,   249,
     394,   262,   615,   282,   290,   293,  3254,   623,   637,  2648,
    2700,  2378,   612,   638,   647,  2618,  2700,   308,  2408,  2438,
     649,   650,   658,   394,   659,     9,  2468,  1028,  1058,  1088,
    1118,  1148,  1178,  1208,  1238,  1268,   668,   656,   319,   376,
     377,   663,   697,   477,  2700,   683,   394,   685,    23,   688,
    1298,  2498,  2678,  1328,  2678,  2618,  2618,   677,   687,   689,
    1358,   394,  1388,   698,  1418,  1448,  1478,  2528,  2558,   378,
     427,   699,   702,  2648,  2700,  1508,  1538,  1568,  1598,   704,
    2648,  2648,  1628,  1658
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,   724,     0,  -208,   429,  -208,   339,  -207,
    -169,    11,   -21,   -12,    21,    84,    94,    99,   104,   -23,
     679,   654,   665,   614,   600,   495,   325,   430,   444,   549,
     587
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   171,     6,    19,    20,    52,   106,
      89,    90,   172,   173,   174,   175,   176,   177,   178,   179,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   235,    61,     5,    54,     7,   256,    81,   231,   249,
      14,    79,   327,    55,    -2,   112,    10,     8,   270,    82,
     232,   250,    87,   282,   328,    51,   343,    -4,     1,    28,
     274,    12,    13,   253,    17,     9,    53,     9,   233,   251,
      15,    -4,   329,   -67,   -67,    15,    56,    18,   271,     1,
      61,   104,    54,   283,    23,   109,   344,   195,   -14,   111,
      29,    55,    83,   213,   -67,    16,    24,   -67,   -67,   -67,
     -67,   -67,    37,    51,   105,    39,    40,    41,    42,    43,
      44,    -5,   -15,    45,   103,    -6,    25,    -3,   195,   -37,
     128,    50,   -50,   -23,    56,    -5,   -23,   -50,   134,    -6,
     115,    -3,    72,   -37,   211,   133,   204,   -33,   101,    57,
      76,    61,    61,    54,    54,   205,   -33,   -26,    -8,    58,
     102,   -33,    55,    55,    59,   218,   -26,   203,    73,    60,
      77,   -26,    -8,   -27,    51,    51,   -50,   331,   132,    -9,
     -28,   113,   -27,   -50,   229,   136,   137,   -27,   206,   -28,
     -29,   -44,   -46,    -9,   -28,    56,    56,    57,    93,   -29,
      21,    22,    78,    29,   -29,    30,   241,    58,   -44,   237,
     -67,    80,    59,   220,    36,    37,   247,    60,    39,    40,
      41,    42,    43,    44,   -30,   -45,    45,   -31,   -32,   255,
      47,    48,    49,   -30,    50,    92,   -31,   -32,   -30,   -36,
     -10,   -31,   -32,   110,   107,   266,   -34,   195,   -36,   268,
     122,   207,    12,   -36,   -10,   -34,   -67,   -67,    57,    57,
     -34,   208,   125,   278,    74,   195,   209,   280,    58,    58,
     126,   210,   -43,    59,    59,   -67,    75,    -7,    60,    60,
     -67,   -67,   -67,   -67,   -67,   195,   115,   290,   -54,   -40,
     127,    -7,   -54,   -54,    21,   -33,   129,   195,   -40,   296,
     -70,   -70,    -8,   -40,   115,   130,   316,   317,   309,   -33,
     131,    -8,   211,   321,   204,   135,    -8,   310,   -11,   -70,
     325,   226,    -9,   205,   -70,   -70,   -70,   -70,   -70,   307,
     -10,    -9,   -11,   -35,   -46,   203,    -9,   -26,   227,   -10,
     308,   339,   -35,   195,   -10,   341,   320,   -35,    -7,   228,
     311,   -26,   211,   211,   204,   204,   206,    -7,   195,   -41,
     354,   -48,    -7,   205,   205,   221,   -48,   230,   -41,   236,
     316,   359,   309,   -41,   -70,   203,   203,   316,   316,   309,
     309,   310,   115,   347,   -27,   348,   349,   350,   310,   310,
     243,   -28,   -29,   307,   -79,   -76,   206,   206,   -27,    26,
     307,   307,   -13,   -77,   358,   -28,   -29,    84,    85,    86,
     160,   362,   363,   312,   311,    91,   -42,   -37,   -38,   207,
     -78,   311,   311,   313,   153,   -42,   335,   -38,   314,   208,
     -42,   -37,   -38,   315,   209,    29,   -47,    30,   -54,   210,
     221,   -47,   108,   160,   -54,   -54,    36,    37,   -66,   -68,
      39,    40,    41,    42,    43,    44,   191,   153,    45,   207,
     207,   -69,    47,    48,    49,   121,    50,   -39,   -30,   208,
     208,   -65,   -31,   244,   209,   209,   -39,   312,   245,   210,
     210,   -39,   -30,   246,   312,   312,   -31,   313,   -32,   -36,
     248,    27,   314,   160,   313,   313,   254,   315,   -18,   314,
     314,   -18,   -32,   -36,   315,   315,   257,   153,   -34,   -12,
     215,   216,   217,   160,   -40,   161,   -19,   219,   180,   -19,
     181,   264,   -34,   -12,   153,   153,   153,   153,   -40,   162,
     182,   153,   -35,   183,   184,   185,   186,   187,   188,   267,
     -72,   189,   -41,   -42,   -38,   -39,   -35,   192,   161,   190,
     269,   238,   239,   240,   160,   242,   -41,   -42,   -38,   -39,
     -16,   193,   162,   -16,   -48,   191,   191,   191,   153,   191,
      94,   -48,   -47,   272,   279,   281,   -58,   160,    94,   -47,
     159,   -58,   -58,   -58,   -71,   160,   160,   160,   160,   160,
     263,   153,   265,   160,   -22,   -73,   275,   -22,   161,   153,
     153,   153,   153,   153,   153,   123,   191,   153,   124,   -74,
     277,   160,   162,   159,   276,   161,   161,   161,   161,   -67,
     -67,   284,   161,   -17,   191,   153,   -17,   212,   -43,   162,
     162,   162,   162,   119,   163,   -21,   162,   287,   -21,   213,
     -67,   288,   289,   -67,   -67,   -67,   -67,   -67,   -58,   291,
     -75,   -58,   -58,   -58,   293,   160,   192,   192,   192,   161,
     192,   160,   294,   159,   295,   123,   194,   163,   286,   153,
     193,   193,   193,   162,   193,   153,   -52,   -20,   297,   222,
     -52,   -52,   161,   159,   123,   158,   298,   292,   338,   160,
     161,   161,   161,   161,   161,   161,   162,   192,   161,   157,
     299,   318,   191,   153,   162,   162,   162,   162,   162,   162,
     319,   193,   162,   322,   323,   192,   161,   163,   158,   160,
     -52,   334,   324,   326,   159,    95,   -52,   -52,   336,   193,
     162,   333,   157,   153,   163,   163,   163,   163,   -56,   155,
     337,   163,   351,   -56,   -56,   -56,   340,   159,   342,   118,
     156,   345,   352,   120,   353,   159,   159,   159,   261,   159,
     161,   355,   356,   159,   154,   357,   161,    11,   158,   361,
       0,     0,   155,     0,   162,   194,   194,   194,   163,   194,
     162,   159,   157,   156,   -51,   224,     0,   116,   158,    95,
     -51,   -51,     0,   192,   161,     0,     0,   154,   -55,   117,
       0,   163,   157,   -55,   -55,   -55,     0,   193,   162,   163,
     163,   163,   163,   163,   163,     0,   194,   163,     0,     0,
      96,    97,   155,   -56,   161,   159,   -56,   -56,   -56,   158,
       0,   159,     0,   156,   194,   163,     0,     0,   162,   -60,
       0,     0,   155,   157,   -60,   -60,   -60,   154,    98,   -59,
       0,     0,   158,   156,   -59,   -59,   -59,     0,     0,   159,
     158,   158,   158,     0,   158,     0,   157,   154,   158,     0,
       0,   -67,   -67,     0,   157,   157,   260,     0,   262,   163,
       0,     0,   157,   155,     0,   163,   158,     0,     0,   159,
     -67,    75,     0,     0,   156,   -67,   -67,   -67,   -67,   -67,
     157,     0,     0,     0,     0,     0,   155,     0,   154,     0,
       0,     0,   194,   163,   258,   -51,     0,   156,   222,   -51,
     -51,     0,   155,     0,   -55,   156,   259,   -55,   -55,   -55,
     158,   154,     0,   156,   -79,   -79,   158,     0,     0,     0,
     155,     0,     0,   163,   157,     0,     0,   154,     0,     0,
     157,   156,     0,   -79,    29,     0,    83,     0,   -79,   -79,
     -79,   -79,   -79,     0,   158,   154,    37,     0,     0,    39,
      40,    41,    42,    43,    44,     0,   -49,    45,   157,   -76,
     -76,    47,    48,   -49,   155,    50,     0,     0,   -59,     0,
     155,   -59,   -59,   -59,   158,   156,     0,     0,   -76,     0,
       0,   156,     0,   -76,   -76,   -76,   -76,   -76,   157,   154,
       0,     0,     0,     0,     0,   154,     0,     0,   155,     0,
       0,     0,   138,     0,   139,     0,     0,     0,     0,   156,
       0,     0,     0,   140,   141,     0,     0,   142,   143,   144,
     145,   146,   147,   154,     0,   148,   -45,     0,   155,   149,
     150,   151,     0,   152,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -33,
       0,   -33,     0,   154,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -37,
     -33,   -37,     0,     0,   -37,   -37,   -37,   332,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -26,
     -37,   -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -27,
     -26,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -28,
     -27,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -29,
     -28,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -30,
     -29,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -31,
     -30,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -32,
     -31,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -36,
     -32,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -34,
     -36,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -40,
     -34,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,    -8,
     -40,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -9,
      -8,    -9,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,
       0,     0,    -9,     0,    -9,    -9,    -9,    -9,    -9,   -10,
      -9,   -10,     0,     0,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,   -10,   -10,
       0,     0,   -10,     0,   -10,   -10,   -10,   -10,   -10,   -35,
     -10,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,    -7,
     -35,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -41,
      -7,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -42,
     -41,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -37,
     -42,   -37,     0,     0,   -37,   -37,   -37,   360,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -38,
     -37,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -39,
     -38,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,    29,
     -39,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,    88,    47,    48,    49,    29,
      50,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   114,    47,    48,    49,   -25,
      50,   -25,     0,     0,   -25,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -24,
     -25,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,    29,
     -24,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   234,    47,    48,    49,   -33,
      50,   -33,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -26,
     -33,   -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -27,
     -26,   -27,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -28,
     -27,   -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -29,
     -28,   -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -30,
     -29,   -30,     0,     0,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -31,
     -30,   -31,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -32,
     -31,   -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,    29,
     -32,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   252,    47,    48,    49,   -36,
      50,   -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,    29,
     -36,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   273,    47,    48,    49,   -34,
      50,   -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,    29,
     -34,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   285,    47,    48,    49,   -40,
      50,   -40,     0,     0,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,   -40,   -40,   -40,   -40,   -40,    -8,
     -40,    -8,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -9,
      -8,    -9,     0,     0,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,
       0,     0,    -9,     0,    -9,    -9,    -9,    -9,    -9,   -10,
      -9,   -10,     0,     0,   -10,   -10,   -10,     0,   -10,   -10,
     -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,   -10,   -10,
       0,     0,   -10,     0,   -10,   -10,   -10,   -10,   -10,   -35,
     -10,   -35,     0,     0,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,    -7,
     -35,    -7,     0,     0,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -41,
      -7,   -41,     0,     0,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -42,
     -41,   -42,     0,     0,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,    29,
     -42,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   330,    47,    48,    49,    29,
      50,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   170,   346,    47,    48,    49,   -38,
      50,   -38,     0,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -39,
     -38,   -39,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,    29,
     -39,    30,     0,     0,    31,    32,    33,     0,    34,    35,
      36,    37,    38,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,    46,     0,    47,    48,    49,    29,
      50,    30,     0,     0,   196,   197,   198,     0,   199,   200,
      36,    37,   201,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   202,     0,    47,    48,    49,    29,
      50,    30,     0,     0,   300,   301,   302,     0,   303,   304,
      36,    37,   305,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   306,     0,    47,    48,    49,    29,
      50,    30,     0,     0,   164,   165,   166,     0,   167,   168,
      36,    37,   169,     0,    39,    40,    41,    42,    43,    44,
       0,   138,    45,   139,   170,     0,    47,    48,    49,     0,
      50,     0,   140,   141,     0,     0,   142,   143,   144,   145,
     146,   147,     0,    29,   148,    83,     0,     0,   149,   150,
     151,     0,   152,     0,     0,    37,     0,     0,    39,    40,
      41,    42,    43,    44,     0,   -53,    45,    29,     0,    83,
      47,   -53,   -53,     0,    50,     0,     0,     0,     0,    37,
       0,     0,    39,    40,    41,    42,    43,    44,     0,   -57,
      45,   138,     0,   214,   -57,   -57,   -57,     0,    50,     0,
       0,     0,     0,   141,   -70,   -70,   142,   143,   144,   145,
     146,   147,     0,     0,   148,   -49,     0,     0,   149,   150,
     -49,   138,   152,   214,     0,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -70,   141,   -79,   -79,   142,   143,   144,   145,
     146,   147,     0,     0,   148,   -53,     0,     0,   149,   -53,
     -53,   138,   152,   214,     0,   -79,     0,     0,   -79,   -79,
     -79,   -79,   -79,   141,     0,     0,   142,   143,   144,   145,
     146,   147,     0,     0,   148,   -57,     0,     0,   -57,   -57,
     -57,   -34,   152,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -80,   -34,   -80,     0,     0,   -34,   -34,
     -34,     0,   -34,     0,     0,   -80,     0,     0,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -81,   -80,   -81,     0,     0,
       0,     0,     0,     0,   -80,     0,     0,   -81,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   138,   -81,   214,
       0,     0,     0,     0,     0,     0,   -81,   -77,   -77,   141,
       0,     0,   142,   143,   144,   145,   146,   147,   -78,   -78,
     148,     0,     0,     0,     0,     0,   -77,     0,   152,   -66,
     -66,   -77,   -77,   -77,   -77,   -77,     0,   -78,     0,   -62,
     -62,     0,   -78,   -78,   -78,   -78,   -78,     0,   -66,   -64,
     -64,     0,     0,   -66,   -66,   -66,   -66,   -66,   -62,   -68,
     -68,     0,     0,   -62,   -62,   -62,   100,   -62,   -64,   -69,
     -69,     0,     0,   -64,   -64,   -64,   -64,   -64,   -68,   -65,
     -65,     0,     0,   -68,   -68,   -68,   -68,   -68,   -69,   -72,
     -72,     0,     0,   -69,   -69,   -69,   -69,   -69,   -65,   -71,
     -71,     0,     0,   -65,   -65,   -65,   -65,   -65,   -72,   -73,
     -73,     0,     0,   -72,   -72,   -72,   -72,   -72,   -71,   -74,
     -74,     0,     0,   -71,   -71,   -71,   -71,   -71,   -73,   -75,
     -75,     0,     0,   -73,   -73,   -73,   -73,   -73,   -74,   -61,
     -61,     0,     0,   -74,   -74,   -74,   -74,   -74,   -75,   -63,
     -63,     0,     0,   -75,   -75,   -75,   -75,   -75,   -61,   -20,
     -20,     0,     0,   -61,   -61,   -61,   100,   -61,   -63,   -76,
     -76,     0,     0,   -63,   -63,   -63,   -63,   -63,   -20,   -77,
     -77,     0,     0,   -20,   -20,   -20,   -20,   -20,   -78,   -78,
     -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   -66,   -66,
     -77,     0,     0,   -77,   -77,   -77,   -77,   -77,     0,   -78,
     -62,   -62,   -78,   -78,   -78,   -78,   -78,     0,     0,   -66,
     -64,   -64,   -66,   -66,   -66,   -66,   -66,     0,   -68,   -68,
       0,   -62,     0,     0,   -62,   -62,   -62,   225,   -62,   -69,
     -69,   -64,     0,     0,   -64,   -64,   -64,   -64,   -64,   -68,
     -65,   -65,   -68,   -68,   -68,   -68,   -68,     0,   -72,   -72,
     -69,     0,     0,   -69,   -69,   -69,   -69,   -69,   -71,   -71,
       0,   -65,     0,     0,   -65,   -65,   -65,   -65,   -65,   -72,
     -73,   -73,   -72,   -72,   -72,   -72,   -72,     0,     0,   -71,
     -74,   -74,   -71,   -71,   -71,   -71,   -71,     0,   -75,   -75,
       0,   -73,     0,     0,   -73,   -73,   -73,   -73,   -73,   -61,
     -61,   -74,     0,     0,   -74,   -74,   -74,   -74,   -74,   -75,
     -63,   -63,   -75,   -75,   -75,   -75,   -75,     0,   -20,   -20,
     -61,     0,     0,   -61,   -61,   -61,   225,   -61,    96,    97,
       0,   -63,     0,     0,   -63,   -63,   -63,   -63,   -63,   -20,
       0,     0,   -20,   -20,   -20,   -20,   -20,     0,     0,   -60,
       0,     0,   -60,   -60,   -60,     0,   223
};

static const yytype_int16 yycheck[] =
{
       0,   170,    25,     3,    25,     3,   213,     3,     3,     3,
       3,    34,     3,    25,     0,     3,     0,    15,     3,    15,
      15,    15,    45,     3,    15,    25,     3,     0,    14,     3,
     237,    23,    24,   202,     1,    33,    25,    33,    33,    33,
      33,    14,    33,     4,     5,    33,    25,    14,    33,    14,
      73,    74,    73,    33,     3,    78,    33,    80,    25,    80,
       1,    73,     3,    24,    25,    23,    15,    28,    29,    30,
      31,    32,    13,    73,     3,    16,    17,    18,    19,    20,
      21,     0,    25,    24,    73,     0,    25,     0,   111,     0,
     111,    32,    25,    22,    73,    14,    25,    30,     9,    14,
      89,    14,    14,    14,   127,   128,   127,     0,     3,    25,
      24,   134,   135,   134,   135,   127,     9,     0,     0,    25,
      15,    14,   134,   135,    25,   148,     9,   127,    25,    25,
      24,    14,    14,     0,   134,   135,    23,   306,   127,     0,
       0,    25,     9,    30,   167,   134,   135,    14,   127,     9,
       0,    23,    23,    14,    14,   134,   135,    73,    30,     9,
      23,    24,    24,     1,    14,     3,   189,    73,    25,    24,
      25,    24,    73,    30,    12,    13,   199,    73,    16,    17,
      18,    19,    20,    21,     0,    23,    24,     0,     0,   212,
      28,    29,    30,     9,    32,    23,     9,     9,    14,     0,
       0,    14,    14,    23,     3,   228,     0,   230,     9,   230,
       3,   127,    23,    14,    14,     9,     4,     5,   134,   135,
      14,   127,    25,   246,    12,   248,   127,   248,   134,   135,
      25,   127,    23,   134,   135,    23,    24,     0,   134,   135,
      28,    29,    30,    31,    32,   268,   235,   268,    25,     0,
      25,    14,    29,    30,    23,     0,     3,   280,     9,   280,
       4,     5,     0,    14,   253,    23,   289,   290,   289,    14,
      23,     9,   295,   296,   295,    25,    14,   289,     0,    23,
     303,    24,     0,   295,    28,    29,    30,    31,    32,   289,
       0,     9,    14,     0,    25,   295,    14,     0,    24,     9,
     289,   324,     9,   326,    14,   326,   295,    14,     0,    24,
     289,    14,   335,   336,   335,   336,   295,     9,   341,     0,
     341,    25,    14,   335,   336,    29,    30,    24,     9,    23,
     353,   354,   353,    14,    25,   335,   336,   360,   361,   360,
     361,   353,   331,   332,     0,   334,   335,   336,   360,   361,
      23,     0,     0,   353,    25,    25,   335,   336,    14,    22,
     360,   361,    25,    25,   353,    14,    14,    42,    43,    44,
      45,   360,   361,   289,   353,    50,     0,     0,     0,   295,
      25,   360,   361,   289,    45,     9,     9,     9,   289,   295,
      14,    14,    14,   289,   295,     1,    25,     3,    23,   295,
      29,    30,    77,    78,    29,    30,    12,    13,    25,    25,
      16,    17,    18,    19,    20,    21,    77,    78,    24,   335,
     336,    25,    28,    29,    30,   100,    32,     0,     0,   335,
     336,    25,     0,    24,   335,   336,     9,   353,    24,   335,
     336,    14,    14,    24,   360,   361,    14,   353,     0,     0,
      24,    22,   353,   128,   360,   361,    23,   353,    22,   360,
     361,    25,    14,    14,   360,   361,    25,   128,     0,     0,
     145,   146,   147,   148,     0,    45,    22,   152,     1,    25,
       3,     3,    14,    14,   145,   146,   147,   148,    14,    45,
      13,   152,     0,    16,    17,    18,    19,    20,    21,    23,
      25,    24,     0,     0,     0,     0,    14,    77,    78,    32,
      23,   186,   187,   188,   189,   190,    14,    14,    14,    14,
      22,    77,    78,    25,    23,   186,   187,   188,   189,   190,
      29,    30,    23,    23,    23,    23,    23,   212,    29,    30,
      45,    28,    29,    30,    25,   220,   221,   222,   223,   224,
     225,   212,   227,   228,    22,    25,    25,    25,   128,   220,
     221,   222,   223,   224,   225,    22,   227,   228,    25,    25,
     245,   246,   128,    78,     3,   145,   146,   147,   148,     4,
       5,    23,   152,    22,   245,   246,    25,    12,    25,   145,
     146,   147,   148,    98,    45,    22,   152,    25,    25,    24,
      25,    25,    25,    28,    29,    30,    31,    32,    25,    23,
      25,    28,    29,    30,    25,   290,   186,   187,   188,   189,
     190,   296,    25,   128,    25,    22,    77,    78,    25,   290,
     186,   187,   188,   189,   190,   296,    25,    25,    23,    28,
      29,    30,   212,   148,    22,    45,    23,    25,   323,   324,
     220,   221,   222,   223,   224,   225,   212,   227,   228,    45,
      23,    23,   323,   324,   220,   221,   222,   223,   224,   225,
      23,   227,   228,    24,    24,   245,   246,   128,    78,   354,
      23,    25,    24,    24,   189,    28,    29,    30,    25,   245,
     246,    23,    78,   354,   145,   146,   147,   148,    23,    45,
       3,   152,    25,    28,    29,    30,    23,   212,    23,    95,
      45,    23,    25,    99,    25,   220,   221,   222,   223,   224,
     290,    23,    23,   228,    45,    23,   296,     3,   128,    25,
      -1,    -1,    78,    -1,   290,   186,   187,   188,   189,   190,
     296,   246,   128,    78,    23,   158,    -1,    93,   148,    28,
      29,    30,    -1,   323,   324,    -1,    -1,    78,    23,    94,
      -1,   212,   148,    28,    29,    30,    -1,   323,   324,   220,
     221,   222,   223,   224,   225,    -1,   227,   228,    -1,    -1,
       4,     5,   128,    25,   354,   290,    28,    29,    30,   189,
      -1,   296,    -1,   128,   245,   246,    -1,    -1,   354,    23,
      -1,    -1,   148,   189,    28,    29,    30,   128,    32,    23,
      -1,    -1,   212,   148,    28,    29,    30,    -1,    -1,   324,
     220,   221,   222,    -1,   224,    -1,   212,   148,   228,    -1,
      -1,     4,     5,    -1,   220,   221,   222,    -1,   224,   290,
      -1,    -1,   228,   189,    -1,   296,   246,    -1,    -1,   354,
      23,    24,    -1,    -1,   189,    28,    29,    30,    31,    32,
     246,    -1,    -1,    -1,    -1,    -1,   212,    -1,   189,    -1,
      -1,    -1,   323,   324,   220,    25,    -1,   212,    28,    29,
      30,    -1,   228,    -1,    25,   220,   221,    28,    29,    30,
     290,   212,    -1,   228,     4,     5,   296,    -1,    -1,    -1,
     246,    -1,    -1,   354,   290,    -1,    -1,   228,    -1,    -1,
     296,   246,    -1,    23,     1,    -1,     3,    -1,    28,    29,
      30,    31,    32,    -1,   324,   246,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,   324,     4,
       5,    28,    29,    30,   290,    32,    -1,    -1,    25,    -1,
     296,    28,    29,    30,   354,   290,    -1,    -1,    23,    -1,
      -1,   296,    -1,    28,    29,    30,    31,    32,   354,   290,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,   324,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,   324,    -1,    24,    25,    -1,   354,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,   354,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    28,    29,    30,     1,
      32,     3,    -1,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,     1,    24,     3,    26,    -1,    28,    29,    30,    -1,
      32,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,     1,    24,     3,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,     1,    -1,     3,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,     1,    -1,     3,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    13,     4,     5,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      30,     1,    32,     3,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    13,     4,     5,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      30,     1,    32,     3,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      30,     1,    32,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,     1,    24,     3,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,     1,    24,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,     1,    24,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    32,     4,     5,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,     4,     5,
      24,    -1,    -1,    -1,    -1,    -1,    23,    -1,    32,     4,
       5,    28,    29,    30,    31,    32,    -1,    23,    -1,     4,
       5,    -1,    28,    29,    30,    31,    32,    -1,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,    23,     4,
       5,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      25,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      25,    -1,    -1,    28,    29,    30,    31,    32,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,     4,     5,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    32,     4,
       5,    25,    -1,    -1,    28,    29,    30,    31,    32,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,     4,     5,
      25,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    32,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,     4,     5,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    32,     4,
       5,    25,    -1,    -1,    28,    29,    30,    31,    32,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,     4,     5,
      25,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    32,    25,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    -1,    25,
      -1,    -1,    28,    29,    30,    -1,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    35,    36,    37,    38,    39,     3,    15,    33,
       0,    37,    23,    24,     3,    33,    23,     1,    14,    40,
      41,    23,    24,     3,    15,    25,    22,    40,     3,     1,
       3,     6,     7,     8,    10,    11,    12,    13,    14,    16,
      17,    18,    19,    20,    21,    24,    26,    28,    29,    30,
      32,    38,    42,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    14,    25,    12,    24,    24,    24,    24,    53,
      24,     3,    15,     3,    60,    60,    60,    53,    27,    44,
      45,    60,    23,    30,    29,    28,     4,     5,    32,    64,
      31,     3,    15,    45,    53,     3,    43,     3,    60,    53,
      23,    46,     3,    25,    27,    45,    55,    56,    57,    59,
      57,    60,     3,    22,    25,    25,    25,    25,    46,     3,
      23,    23,    45,    53,     9,    25,    45,    45,     1,     3,
      12,    13,    16,    17,    18,    19,    20,    21,    24,    28,
      29,    30,    32,    42,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,     6,     7,     8,    10,    11,    14,
      26,    38,    46,    47,    48,    49,    50,    51,    52,    53,
       1,     3,    13,    16,    17,    18,    19,    20,    21,    24,
      32,    42,    61,    62,    63,    53,     6,     7,     8,    10,
      11,    14,    26,    38,    46,    47,    48,    49,    50,    51,
      52,    53,    12,    24,     3,    60,    60,    60,    53,    60,
      30,    29,    28,    32,    64,    31,    24,    24,    24,    53,
      24,     3,    15,    33,    27,    44,    23,    24,    60,    60,
      60,    53,    60,    23,    24,    24,    24,    53,    24,     3,
      15,    33,    27,    44,    23,    53,    43,    25,    55,    56,
      57,    59,    57,    60,     3,    60,    53,    23,    46,    23,
       3,    33,    23,    27,    43,    25,     3,    60,    53,    23,
      46,    23,     3,    33,    23,    27,    25,    25,    25,    25,
      46,    23,    25,    25,    25,    25,    46,    23,    23,    23,
       6,     7,     8,    10,    11,    14,    26,    38,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    53,    23,    23,
      45,    53,    24,    24,    24,    53,    24,     3,    15,    33,
      27,    44,     9,    23,    25,     9,    25,     3,    60,    53,
      23,    46,    23,     3,    33,    23,    27,    45,    45,    45,
      45,    25,    25,    25,    46,    23,    23,    23,    45,    53,
       9,    25,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    38,    38,
      38,    39,    39,    40,    40,    40,    41,    41,    41,    41,
      42,    43,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    45,    45,    45,    46,    47,    47,    48,    48,    49,
      50,    51,    52,    53,    53,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    60,    60,    60,
      60,    61,    61,    61,    61,    62,    63,    63,    63,    63,
      64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     4,     3,     3,
       3,     6,     7,     1,     0,     1,     4,     5,     2,     3,
       4,     3,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     5,     7,     7,
       3,     5,     5,     3,     1,     2,     1,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: paramList  */
#line 101 "./src/syntax.y"
            {
    (yyval.producao) = aloca_no("program");
    (yyval.producao)->filhos[0] = (yyvsp[0].producao);
    raiz = (yyval.producao);
  }
#line 2220 "./src/syntax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 108 "./src/syntax.y"
                  {
    (yyval.producao) = aloca_no("paramList");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2230 "./src/syntax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 113 "./src/syntax.y"
          {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2238 "./src/syntax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 118 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2246 "./src/syntax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 121 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2254 "./src/syntax.tab.c"
    break;

  case 7: /* variableParam: TYPE LISTTYPE ID ';'  */
#line 126 "./src/syntax.y"
                       {
    Simbolo sim;
    
    char *tipo = (yyvsp[-3].terminal)->valor;
    strcat(tipo, (yyvsp[-2].terminal)->valor);
    sim.linha = (yyvsp[-1].terminal)->linha;
    sim.coluna = (yyvsp[-1].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = tipo;
    sim.value = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("variableParam");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-3].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-1].terminal));
  }
#line 2282 "./src/syntax.tab.c"
    break;

  case 8: /* variableParam: TYPE ID ';'  */
#line 149 "./src/syntax.y"
                {
    Simbolo sim;

    sim.linha = (yyvsp[-1].terminal)->linha;
    sim.coluna = (yyvsp[-1].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = (yyvsp[-2].terminal)->valor;
    sim.value = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("variableParam");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2306 "./src/syntax.tab.c"
    break;

  case 9: /* variableParam: TYPE LISTTYPE LEXICAL_ERROR  */
#line 168 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2315 "./src/syntax.tab.c"
    break;

  case 10: /* variableParam: TYPE LEXICAL_ERROR ';'  */
#line 172 "./src/syntax.y"
                           {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2324 "./src/syntax.tab.c"
    break;

  case 11: /* functionParam: TYPE ID '(' functionParams ')' stmt  */
#line 178 "./src/syntax.y"
                                      {
    Simbolo sim;

    sim.linha = (yyvsp[-4].terminal)->linha;
    sim.coluna = (yyvsp[-4].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = (yyvsp[-5].terminal)->valor;
    sim.value = (yyvsp[-4].terminal)->valor;
    sim.tipo_funcao = eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParam");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[3] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-5].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-4].terminal));
    
  }
#line 2351 "./src/syntax.tab.c"
    break;

  case 12: /* functionParam: TYPE LISTTYPE ID '(' functionParams ')' stmt  */
#line 200 "./src/syntax.y"
                                                 {
    Simbolo sim;

    char *tipo = (yyvsp[-6].terminal)->valor;
    strcat(tipo,(yyvsp[-5].terminal)->valor);
    sim.linha = (yyvsp[-4].terminal)->linha;
    sim.coluna = (yyvsp[-4].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = tipo;
    sim.tipo_funcao = eh;
    sim.value = (yyvsp[-4].terminal)->valor;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParam");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = aloca_no("");
    (yyval.producao)->filhos[3] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-5].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-4].terminal));

  }
#line 2382 "./src/syntax.tab.c"
    break;

  case 13: /* functionParams: functionParamsList  */
#line 228 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2390 "./src/syntax.tab.c"
    break;

  case 14: /* functionParams: %empty  */
#line 231 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2398 "./src/syntax.tab.c"
    break;

  case 15: /* functionParams: error  */
#line 234 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2407 "./src/syntax.tab.c"
    break;

  case 16: /* functionParamsList: functionParamsList ',' TYPE ID  */
#line 240 "./src/syntax.y"
                                 {
    Simbolo sim;

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.tipo = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParamsList");
    (yyval.producao)->filhos[0] = (yyvsp[-3].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));

  }
#line 2433 "./src/syntax.tab.c"
    break;

  case 17: /* functionParamsList: functionParamsList ',' TYPE LISTTYPE ID  */
#line 261 "./src/syntax.y"
                                            {
    Simbolo sim;

    char *tipo = (yyvsp[-2].terminal)->valor;
    strcat(tipo, (yyvsp[-1].terminal)->valor);
    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParamsList");
    (yyval.producao)->filhos[0] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = aloca_no("");
    (yyval.producao)->filhos[3] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[3], (yyvsp[0].terminal));

  }
#line 2463 "./src/syntax.tab.c"
    break;

  case 18: /* functionParamsList: TYPE ID  */
#line 286 "./src/syntax.y"
            {
    Simbolo sim;

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.tipo = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParamsList");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[0].terminal));

  }
#line 2488 "./src/syntax.tab.c"
    break;

  case 19: /* functionParamsList: TYPE LISTTYPE ID  */
#line 306 "./src/syntax.y"
                     {
    Simbolo sim;

    char* tipo = (yyvsp[-2].terminal)->valor;
    strcat(tipo, (yyvsp[-1].terminal)->valor); 
    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParamsList");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 2516 "./src/syntax.tab.c"
    break;

  case 20: /* call: ID '(' argList ')'  */
#line 331 "./src/syntax.y"
                     {    
    (yyval.producao) = aloca_no("call");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-3].terminal));
  }
#line 2528 "./src/syntax.tab.c"
    break;

  case 21: /* argList: argList ',' ID  */
#line 340 "./src/syntax.y"
                 {
    (yyval.producao) = aloca_no("argList");
  
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[0].terminal));
  }
#line 2541 "./src/syntax.tab.c"
    break;

  case 22: /* argList: ID  */
#line 348 "./src/syntax.y"
       {
    (yyval.producao) = aloca_no("argList");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2552 "./src/syntax.tab.c"
    break;

  case 23: /* argList: %empty  */
#line 354 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2560 "./src/syntax.tab.c"
    break;

  case 24: /* stmList: stmList stmt  */
#line 359 "./src/syntax.y"
               {
    (yyval.producao) = aloca_no("stmList");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2570 "./src/syntax.tab.c"
    break;

  case 25: /* stmList: stmt  */
#line 364 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2578 "./src/syntax.tab.c"
    break;

  case 26: /* stmt: expStatement  */
#line 369 "./src/syntax.y"
               {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2586 "./src/syntax.tab.c"
    break;

  case 27: /* stmt: compoundStatement  */
#line 372 "./src/syntax.y"
                      {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2594 "./src/syntax.tab.c"
    break;

  case 28: /* stmt: ifStatement  */
#line 375 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2602 "./src/syntax.tab.c"
    break;

  case 29: /* stmt: forStatement  */
#line 378 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2610 "./src/syntax.tab.c"
    break;

  case 30: /* stmt: returnStatement  */
#line 381 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2618 "./src/syntax.tab.c"
    break;

  case 31: /* stmt: inputStatement  */
#line 384 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2626 "./src/syntax.tab.c"
    break;

  case 32: /* stmt: outputStatement  */
#line 387 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2634 "./src/syntax.tab.c"
    break;

  case 33: /* stmt: variableParam  */
#line 390 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2642 "./src/syntax.tab.c"
    break;

  case 34: /* expStatement: expression ';'  */
#line 395 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 2650 "./src/syntax.tab.c"
    break;

  case 35: /* compoundStatement: '{' stmList '}'  */
#line 401 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 2658 "./src/syntax.tab.c"
    break;

  case 36: /* compoundStatement: '{' '}'  */
#line 404 "./src/syntax.y"
            {
    (yyval.producao) = NULL;
  }
#line 2666 "./src/syntax.tab.c"
    break;

  case 37: /* ifStatement: IF '(' expression ')' stmt  */
#line 410 "./src/syntax.y"
                             {
    (yyval.producao) = aloca_no("ifStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 2679 "./src/syntax.tab.c"
    break;

  case 38: /* ifStatement: IF '(' expression ')' stmt ELSE stmt  */
#line 418 "./src/syntax.y"
                                         {
    (yyval.producao) = aloca_no("ifStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[2] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[3] = aloca_no("");
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
    coloca_terminal((yyval.producao)->filhos[3], (yyvsp[-1].terminal));
  }
#line 2695 "./src/syntax.tab.c"
    break;

  case 39: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 431 "./src/syntax.y"
                                                        {
    (yyval.producao) = aloca_no("forStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[2] = (yyvsp[-3].producao);
    (yyval.producao)->filhos[3] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
  }
#line 2710 "./src/syntax.tab.c"
    break;

  case 40: /* returnStatement: RETURN expression ';'  */
#line 443 "./src/syntax.y"
                        {
    (yyval.producao) = aloca_no("returnStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
  }
#line 2720 "./src/syntax.tab.c"
    break;

  case 41: /* inputStatement: INPUT '(' ID ')' ';'  */
#line 450 "./src/syntax.y"
                       {
    (yyval.producao) = aloca_no("inputStatement");

    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
  }
#line 2734 "./src/syntax.tab.c"
    break;

  case 42: /* outputStatement: OUTPUT '(' term ')' ';'  */
#line 461 "./src/syntax.y"
                          {
    (yyval.producao) = aloca_no("outputStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] =  (yyvsp[-2].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 2746 "./src/syntax.tab.c"
    break;

  case 43: /* expression: ID ASSIGN expression  */
#line 470 "./src/syntax.y"
                        {
    (yyval.producao) = aloca_no("expression");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2760 "./src/syntax.tab.c"
    break;

  case 44: /* expression: orExpression  */
#line 479 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2768 "./src/syntax.tab.c"
    break;

  case 45: /* expression: ID ASSIGN  */
#line 482 "./src/syntax.y"
              {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression  missing one parameter !!");
    yyerrok;
  }
#line 2778 "./src/syntax.tab.c"
    break;

  case 46: /* expression: ASSIGN  */
#line 487 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression missing two parametes !!");
    yyerrok;
  }
#line 2788 "./src/syntax.tab.c"
    break;

  case 47: /* orExpression: orExpression OR andExpression  */
#line 494 "./src/syntax.y"
                                {
    (yyval.producao) = aloca_no("orExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));

  }
#line 2802 "./src/syntax.tab.c"
    break;

  case 48: /* orExpression: andExpression  */
#line 503 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2810 "./src/syntax.tab.c"
    break;

  case 49: /* orExpression: orExpression OR  */
#line 506 "./src/syntax.y"
                    {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing one parameter !!");
    yyerrok;
  }
#line 2820 "./src/syntax.tab.c"
    break;

  case 50: /* orExpression: OR  */
#line 511 "./src/syntax.y"
       {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing two parameters !!");
    yyerrok;
  }
#line 2830 "./src/syntax.tab.c"
    break;

  case 51: /* andExpression: andExpression AND relationalExpression  */
#line 518 "./src/syntax.y"
                                         {
    (yyval.producao) = aloca_no("andExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2843 "./src/syntax.tab.c"
    break;

  case 52: /* andExpression: relationalExpression  */
#line 526 "./src/syntax.y"
                         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2851 "./src/syntax.tab.c"
    break;

  case 53: /* andExpression: andExpression AND  */
#line 529 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing one parameter !!");
    yyerrok;
  }
#line 2861 "./src/syntax.tab.c"
    break;

  case 54: /* andExpression: AND  */
#line 534 "./src/syntax.y"
        {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing two parameters !!");
    yyerrok;
  }
#line 2871 "./src/syntax.tab.c"
    break;

  case 55: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 541 "./src/syntax.y"
                                             {
    (yyval.producao) = aloca_no("relationalExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2884 "./src/syntax.tab.c"
    break;

  case 56: /* relationalExpression: listExpression  */
#line 549 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2892 "./src/syntax.tab.c"
    break;

  case 57: /* relationalExpression: relationalExpression REL_OP  */
#line 552 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing one parameter !!");
    yyerrok;
  }
#line 2902 "./src/syntax.tab.c"
    break;

  case 58: /* relationalExpression: REL_OP  */
#line 557 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing two parameters !!");
    yyerrok;
  }
#line 2912 "./src/syntax.tab.c"
    break;

  case 59: /* listExpression: arithmExpression listOP listExpression  */
#line 564 "./src/syntax.y"
                                         {
    (yyval.producao) = aloca_no("listExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);
  }
#line 2923 "./src/syntax.tab.c"
    break;

  case 60: /* listExpression: arithmExpression  */
#line 570 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2931 "./src/syntax.tab.c"
    break;

  case 61: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 576 "./src/syntax.y"
                                                  {
    (yyval.producao) = aloca_no("arithmExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2944 "./src/syntax.tab.c"
    break;

  case 62: /* arithmExpression: arithmMulDivExpression  */
#line 584 "./src/syntax.y"
                           {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2952 "./src/syntax.tab.c"
    break;

  case 63: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 589 "./src/syntax.y"
                                      {
    (yyval.producao) = aloca_no("arithmMulDivExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2965 "./src/syntax.tab.c"
    break;

  case 64: /* arithmMulDivExpression: term  */
#line 597 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2973 "./src/syntax.tab.c"
    break;

  case 65: /* term: const  */
#line 603 "./src/syntax.y"
        {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2981 "./src/syntax.tab.c"
    break;

  case 66: /* term: call  */
#line 606 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2989 "./src/syntax.tab.c"
    break;

  case 67: /* term: ID  */
#line 609 "./src/syntax.y"
       {
    (yyval.producao) = aloca_no("");
    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 2998 "./src/syntax.tab.c"
    break;

  case 68: /* term: unaryTerm  */
#line 613 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3006 "./src/syntax.tab.c"
    break;

  case 69: /* term: immutable  */
#line 616 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3014 "./src/syntax.tab.c"
    break;

  case 70: /* term: error  */
#line 619 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 3023 "./src/syntax.tab.c"
    break;

  case 71: /* unaryTerm: '!' term  */
#line 625 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
    
    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3035 "./src/syntax.tab.c"
    break;

  case 72: /* unaryTerm: '%' term  */
#line 632 "./src/syntax.y"
             {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3047 "./src/syntax.tab.c"
    break;

  case 73: /* unaryTerm: '?' term  */
#line 639 "./src/syntax.y"
             {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3059 "./src/syntax.tab.c"
    break;

  case 74: /* unaryTerm: SUB_ADD term  */
#line 646 "./src/syntax.y"
                 {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3071 "./src/syntax.tab.c"
    break;

  case 75: /* immutable: '(' expression ')'  */
#line 656 "./src/syntax.y"
                     {
    (yyval.producao) = aloca_no("immutable");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 3085 "./src/syntax.tab.c"
    break;

  case 76: /* const: INT  */
#line 667 "./src/syntax.y"
      {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");
    
    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3096 "./src/syntax.tab.c"
    break;

  case 77: /* const: FLOAT  */
#line 673 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3107 "./src/syntax.tab.c"
    break;

  case 78: /* const: STRING  */
#line 679 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3118 "./src/syntax.tab.c"
    break;

  case 79: /* const: NIL  */
#line 685 "./src/syntax.y"
        {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3129 "./src/syntax.tab.c"
    break;

  case 80: /* listOP: FUNCTION  */
#line 693 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("listOp");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3140 "./src/syntax.tab.c"
    break;

  case 81: /* listOP: INFIX  */
#line 699 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("listOp");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3151 "./src/syntax.tab.c"
    break;


#line 3155 "./src/syntax.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 706 "./src/syntax.y"


void yyerror(const char *s){
  error++;
  printf(BHYEL "%s\n" RESET, s);
  printf(BHYEL "Syntax Erros: %d\n" RESET, error);
  printf(BHYEL "Linha: %d\n" RESET, yylval.terminal->linha);
  printf(BHYEL "Coluna: %d\n" RESET, yylval.terminal->coluna);
  printf(BHYEL "Valor: %s\n" RESET, yylval.terminal->valor);
}


int main(int argc, char **argv) {

  // #ifdef YYDEBUG
  // yydebug = 1;
  // #endif

  FILE *fp;

  bota_escopo(0);

  if(argc > 1){
    fp = fopen(argv[1], "r");
    yyin = fp;
  } else {
    yyin = stdin;
  }

  yyparse();

  mostra_tabela();

  libera_tabela();

  mostra_header();

  mostra_arvore(raiz, 0);

  mostra_footer();

  libera_arvore(raiz);

  libera_folhas();

  libera_escopos();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}

