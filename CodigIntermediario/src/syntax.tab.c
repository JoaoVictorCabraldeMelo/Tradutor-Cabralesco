/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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
  #include <stdbool.h>

  #include "escopo.h"
  #include "arvore.h"
  #include "tabela.h"
  #include "colors.h"
  #include "semantic.h"
  #include "gci.h"

  #define eh "Eh funcao"
  #define nao_eh "Nao eh"


  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex();
  extern int yylex_destroy();

  int error = 0;
  int nro_argumentos = 0;

#line 96 "./src/syntax.tab.c"

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
#define YYLAST   4455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  415

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
       0,   110,   110,   117,   122,   127,   130,   135,   170,   199,
     203,   209,   245,   290,   293,   296,   302,   332,   371,   401,
     438,   465,   481,   496,   501,   506,   511,   514,   517,   520,
     523,   526,   529,   532,   537,   543,   546,   552,   562,   578,
     590,   595,   602,   611,   626,   648,   655,   679,   696,   699,
     704,   711,   732,   735,   741,   748,   768,   771,   777,   784,
     804,   807,   813,   820,   829,   835,   848,   853,   866,   872,
     875,   878,   889,   892,   895,   900,   912,   924,   936,   951,
     969,   977,   985,   993,  1003,  1019
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

#define YYPACT_NINF (-225)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,     2,    15,    38,   148,   163,   170,   308,     7,    49,
    -225,   173,   176,    44,   349,   224,   226,    51,    11,    59,
     164,   266,    44,   318,    31,   592,    74,    67,   381,   128,
      70,    92,    98,   104,  1306,   121,   132,  1597,     3,  4061,
    4072,  4082,   182,   182,   182,  3780,  2618,    81,   285,    -3,
     182,   277,  4092,   295,   297,   316,   336,   338,   355,   396,
     402,   155,    48,   486,   138,   482,  4423,  4102,  4112,  4122,
    4132,  4142,    65,   592,   675,    45,    36,  3780,  3780,   165,
     948,   174,    10,   258,  4152,  4162,  4172,   171,   427,  2648,
    2678,  4182,   458,  1253,  1818,  3802,   251,   649,   182,   182,
     182,   421,   206,   477,   205,   434,   514,   225,   222,   240,
     249,   490,   493,  3826,   261,  4192,   532,  2708,   708,   862,
     911,  4202,   924,  4212,   687,   300,  4222,   273,   538,   333,
    3638,  1128,    -4,   757,   623,   625,    77,   626,   335,   672,
     592,   592,   683,   718,  3858,   839,   352,  4232,  4242,  4251,
    4261,  1366,  1366,  1366,  3780,   731,   650,   183,  1366,  4273,
     319,   720,   956,  1026,   768,  4283,  4291,  4302,  4313,  4321,
     366,   373,   374,  1306,   384,     9,  2738,  2768,  2798,  2828,
    2858,  2888,  2918,  2948,  2978,   392,   407,   294,   456,   214,
     469,  1039,  1456,  1672,  1753,  1753,  1753,  3780,   613,   933,
      96,  1753,  1910,   424,   973,   746,   755,  4331,  3918,  3929,
    3940,  3951,  3962,   414,   446,   447,  1306,   454,    13,  3008,
     106,   125,   129,   135,   220,   221,   227,   244,   496,  1391,
    1504,    45,  1199,  4343,  4353,  4361,   502,  4372,   723,  3848,
    3878,  1366,  1366,  1366,    62,  3780,  3780,   521,  1534,   522,
      20,   528,  3038,  3068,  3098,  3908,   505,    45,   187,  3973,
    3984,  3995,   537,  4006,   829,  1009,  1189,  1753,  1753,  1753,
      78,  3780,  3780,   546,  1564,   558,    27,   565,   246,  3128,
     247,   545,   767,  4383,   799,  1091,  1136,  4391,  1148,  4401,
     572,   584,   576,   608,  3158,  3188,  3826,  3218,   594,  3248,
    3278,  3308,   253,   779,  4017,  1023,   793,   849,  4028,   859,
    4039,   619,   628,   624,   634,   292,   293,  3826,   320,   648,
     328,   353,   361,  4413,   654,  3338,   661,  3668,  1705,   403,
    3368,  4050,   685,   400,   690,  3638,  1852,   765,   448,  3398,
    3428,   705,   706,   710,  1306,   738,    26,  3458,   547,   903,
    1083,  1892,  1958,  1988,  2018,  2048,  2078,   744,  3488,   743,
    3518,   455,   578,   580,   582,   756,   701,    80,  3780,  3780,
     772,  3720,   790,    29,   794,  2108,  3548,  3698,  2138,  3698,
    3638,  3638,   777,   796,   806,   814,  2168,  2198,  3826,  2228,
     832,  2258,  2288,  2318,  3578,  3608,   702,   719,   833,  2348,
     837,  3668,  3750,   780,  2378,  2408,  2438,  2468,  2498,   841,
    2528,  3668,  3668,  2558,  2588
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,   870,     0,  -225,   853,  -225,   569,  -224,
    -175,     6,   -17,    12,    24,    39,    41,    64,   102,   -23,
     418,  1558,  1561,  1377,  1414,  1202,   389,   749,   929,  1109,
    -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   177,     6,    19,    20,    52,   106,
      89,    90,   178,   179,   180,   181,   182,   183,   184,   185,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   253,    61,     5,   242,     7,    81,   282,    54,     1,
      14,    79,   249,   114,    23,    10,   275,     8,    82,   229,
     -54,   139,    87,   298,   250,    51,    24,   -54,   276,   372,
     319,    53,   390,   303,    28,     9,     9,    55,    -2,   107,
      15,   373,   251,    15,   279,    17,   277,   268,   105,    56,
      61,   104,     1,   299,   109,   110,    54,   186,    18,   374,
     320,   108,   391,   113,    57,   290,    58,   -23,   101,   -14,
     -23,   -48,    16,    51,   -71,   -71,   -15,   -37,    93,   103,
     102,   311,    74,   382,    25,    55,   140,   291,    72,    59,
     132,   -37,    73,   -71,    75,   117,   131,    56,   -71,   -71,
     -71,   -71,   -71,   312,   -62,   383,   -33,   228,   138,   -62,
     -62,   -62,    57,   221,    58,   -33,    76,    61,    61,   -54,
     -33,   -54,    77,    54,    54,   -26,   -54,    60,    78,   -27,
     220,   236,   -74,   -74,   -26,   -28,   136,    59,   -27,   -26,
      51,    51,   222,   -27,   -28,    80,   142,   143,    -4,   -28,
     247,   -74,    55,    55,   223,   -50,   -74,   -74,   -74,   -74,
     -74,   -56,    -4,    -5,    56,    56,    95,   -56,   -56,   224,
      -6,   225,   376,    -3,   262,    60,    -8,    -5,    92,    57,
      57,    58,    58,    29,    -6,    83,    26,    -3,   111,   -13,
      -8,   -71,   -71,   273,   226,    37,   115,    12,    39,    40,
      41,    42,    43,    44,    59,    59,    45,   281,   -54,   124,
     -71,   257,   -71,   -54,    50,   -71,   -71,   -71,   -71,   -71,
     -29,   -30,   292,   293,    -9,   186,   -10,   -31,   -47,   -29,
     -30,   296,   227,   302,   -29,   -30,   -31,   -50,    -9,   -50,
     -10,   -31,    60,    60,   -32,   128,   -36,   -34,   313,   314,
     127,   186,   -84,   -32,   -84,   -36,   -34,   317,   -32,   117,
     -36,   -34,   -71,   -71,   -84,   129,    -7,   -84,   -84,   -84,
     -84,   -84,   -84,   329,   130,   -84,   -47,   -33,   -47,   328,
      -7,   -71,    75,   -84,    21,   117,   -71,   -71,   -71,   -71,
     -71,   -33,   -43,   -40,   337,   -11,   134,   -26,   -74,   -74,
     336,   -43,   -40,   133,   357,   359,   -43,   -40,   -58,   -11,
     350,   -26,   228,   365,   -58,   -58,   -27,   -74,   221,   -74,
      -8,   370,   -74,   -74,   -74,   -74,   -74,   348,    -9,    -8,
     -27,    12,    13,   349,    -8,   220,   -28,    -9,   -29,   351,
     -18,   363,    -9,   -18,   -48,   384,   385,   222,   186,   238,
     -28,   352,   -29,   -10,   388,   -30,   135,   228,   228,   223,
     141,   -35,   -10,   221,   221,   403,   353,   -10,   354,   -30,
     -35,   402,    21,    22,   224,   -35,   225,   -50,   357,   409,
     220,   220,   117,   394,   350,   395,   396,   397,   357,   357,
     244,   355,   222,   222,   350,   350,   -31,   245,   246,   226,
     -45,   348,   -32,   -19,   223,   223,   -19,   407,   248,   -45,
     -31,   348,   348,   351,   -45,   254,   -32,   413,   414,   224,
     224,   225,   225,   351,   351,   352,   229,   -36,   360,   356,
     255,    84,    85,    86,   166,   352,   352,   227,   270,    91,
     353,   -36,   354,   -16,   226,   226,   -16,   -48,    -7,   -48,
     353,   353,   354,   354,   264,   -44,   -22,    -7,   -34,   -22,
     -71,   -71,    -7,   160,   -44,   355,   166,   166,   256,   -44,
     271,   272,   -34,   -83,   -83,   355,   355,   -12,   274,   -71,
     257,   -71,   227,   227,   -71,   -71,   -71,   -71,   -71,   123,
     -43,   -12,   -83,   -40,   -83,   160,   160,   -83,   -83,   -83,
     -83,   -83,   209,   356,   -43,   -60,   187,   -40,   188,   -52,
     -60,   -60,   -60,   356,   356,    94,   -52,   189,   190,   280,
     166,   191,   192,   193,   194,   195,   196,   283,   -49,   197,
     -49,   203,   -35,   198,   199,   200,   125,   201,   -45,   126,
     233,   234,   235,   166,   294,   297,   -35,   237,   -33,   160,
     -33,   300,   -45,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   304,   -33,   -33,   -33,   -33,   -33,   -33,   315,
     -47,   -33,   160,   -33,   -33,   -33,   -33,   -33,   -46,   -33,
     -37,   318,   -42,   259,   260,   261,   166,   -46,   321,   380,
     263,   -42,   -46,    29,   -37,    30,   -42,   324,    31,    32,
      33,   326,    34,    35,    36,    37,    38,   325,    39,    40,
      41,    42,    43,    44,   159,   160,    45,   330,    46,   166,
      47,    48,    49,   -44,    50,   -46,   -42,   166,   166,   166,
     166,   166,   289,   327,   166,   166,   -62,   -44,   -62,   -46,
     -42,   -62,   -62,   -62,   332,   209,   159,   159,   160,   334,
     -85,   333,   -85,   209,   209,   209,   209,   209,   310,   335,
     166,   166,   -85,   160,   160,   -85,   -85,   -85,   -85,   -85,
     -85,   338,   -41,   -85,   203,   -58,    29,   339,    30,   -58,
     -58,   -85,   202,   -38,   340,   209,   -41,    36,    37,   160,
     160,    39,    40,    41,    42,    43,    44,   -38,   -49,    45,
     159,   -41,   -38,    47,    48,    49,   209,    50,   361,   -17,
     -41,   -38,   -17,   362,   203,   -41,   -38,   166,   -39,   -39,
     159,   159,   159,   159,   144,   166,   232,   159,   -39,   367,
     368,   -51,   -39,   -39,   369,   203,   147,    94,   -51,   148,
     149,   150,   151,   152,   153,   -52,   160,   154,   -53,   239,
     -52,   155,   156,   -53,   160,   158,   -62,   166,   166,   -62,
     -62,   -62,   371,   202,   202,   202,   159,   378,   379,   -56,
     202,   -56,    96,    97,   266,   -56,   -56,   209,   -60,   -21,
     -60,   381,   -21,   -60,   -60,   -60,   160,   160,   229,   125,
     366,   166,   323,   -64,   167,   386,   -64,   -64,   -64,   159,
     241,   125,   398,   229,   331,   410,   203,   159,   159,   159,
     159,   159,   159,   389,   159,   159,   -55,   392,   -55,   399,
     160,   266,   -55,   -55,   -51,   202,   167,   167,   239,   -51,
     187,   400,   258,   202,   202,   202,   202,   202,   202,   401,
     159,   159,   190,   -71,   -71,   191,   192,   193,   194,   195,
     196,   230,   -53,   197,   -53,   404,   405,   198,   199,   -53,
     406,   201,   210,   231,   -71,   202,   412,   -71,   -71,   -71,
     -71,   -71,   -59,    11,   -59,    27,     0,   -59,   -59,   -59,
     167,     0,   -63,     0,   -63,   -55,   202,   -63,   -63,   -63,
      95,   -55,   -55,     0,     0,     0,     0,   159,     0,     0,
     167,   167,   167,   167,   -37,   159,   -37,   167,     0,   -37,
     -37,   -37,   377,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -59,   -37,     0,   159,   159,   -59,
     -59,   -59,     0,   210,   210,   210,   167,   -63,     0,    29,
     210,    30,   -63,   -63,   -63,     0,   -58,   202,   -58,     0,
      36,    37,   -58,   -58,    39,    40,    41,    42,    43,    44,
       0,   159,    45,   112,   168,     0,    47,    48,    49,   167,
      50,   -56,     0,     0,   240,   -56,   -56,   167,   167,   167,
     167,   167,   167,     0,   167,   167,   -52,     0,   -52,     0,
       0,     0,   265,   -52,     0,   210,   168,   168,     0,     0,
     187,     0,   258,   210,   210,   210,   210,   210,   210,     0,
     167,   167,   190,     0,     0,   191,   192,   193,   194,   195,
     196,     0,   -57,   197,   -57,     0,     0,   198,   -57,   -57,
       0,   201,   211,   -80,   -80,   210,   -51,     0,   -51,     0,
       0,   -60,   265,   -51,   -60,   -60,   -60,     0,     0,     0,
     168,     0,   -80,     0,   -80,     0,   210,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,   167,     0,     0,
     168,   168,   168,   168,   -26,   167,   -26,   168,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -55,   167,   167,   240,
     -55,   -55,     0,   211,   211,   211,   168,     0,     0,   144,
     211,   145,     0,     0,     0,     0,     0,   210,     0,     0,
     146,   147,     0,     0,   148,   149,   150,   151,   152,   153,
       0,   167,   154,   137,   169,     0,   155,   156,   157,   168,
     158,   -59,     0,     0,   -59,   -59,   -59,   168,   168,   168,
     168,   168,   168,   -63,   168,   168,   -63,   -63,   -63,     0,
       0,     0,     0,     0,     0,   211,   169,   169,     0,     0,
     187,     0,   258,   211,   211,   211,   211,   211,   211,     0,
     168,   168,   190,   -71,   -71,   191,   192,   193,   194,   195,
     196,     0,   -61,   197,   -61,     0,     0,   -61,   -61,   -61,
       0,   201,   212,   231,   -71,   211,     0,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     169,     0,     0,     0,     0,     0,   211,   165,     0,     0,
       0,     0,     0,     0,    29,     0,    83,   168,     0,     0,
     169,   169,   169,   169,     0,   168,    37,   169,     0,    39,
      40,    41,    42,    43,    44,     0,   -53,    45,     0,   165,
     165,    47,    48,   -53,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   168,     0,
     121,     0,     0,   212,   212,   212,   169,    29,     0,    30,
     212,     0,     0,     0,     0,   208,     0,   211,    36,    37,
       0,     0,    39,    40,    41,    42,    43,    44,     0,     0,
      45,   168,     0,   165,    47,    48,    49,     0,    50,   169,
       0,     0,     0,     0,     0,     0,     0,   169,   169,   169,
     169,   169,   169,     0,   169,   169,   165,     0,     0,     0,
       0,     0,     0,     0,     0,   212,     0,   144,     0,   232,
       0,     0,     0,   212,   212,   212,   212,   212,   212,   147,
     169,   169,   148,   149,   150,   151,   152,   153,     0,     0,
     154,     0,   -34,     0,   -34,     0,     0,     0,   158,   165,
       0,     0,     0,   -34,   -34,   212,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,     0,     0,   -34,
     -34,   -34,   163,   -34,     0,     0,   212,     0,     0,     0,
       0,     0,   165,     0,     0,     0,     0,   169,     0,     0,
     165,   165,   165,   287,   165,   169,     0,   165,   165,     0,
       0,     0,     0,     0,   163,   163,     0,     0,   208,   164,
     -81,   -81,     0,     0,     0,     0,   208,   208,   208,   308,
     208,     0,   120,   165,   165,     0,   122,   169,   169,   -81,
       0,   -81,     0,     0,   -81,   -81,   -81,   -81,   -81,     0,
     206,   164,   164,     0,     0,     0,     0,   212,   208,     0,
       0,     0,     0,     0,     0,   144,     0,   145,   163,     0,
       0,   169,     0,     0,     0,     0,   146,   147,     0,   208,
     148,   149,   150,   151,   152,   153,     0,   207,   154,   -49,
     165,   163,   155,   156,   157,    29,   158,    30,   165,     0,
       0,     0,     0,     0,     0,   164,    36,    37,     0,     0,
      39,    40,    41,    42,    43,    44,     0,     0,    45,   295,
       0,     0,    47,    48,    49,    29,    50,    30,   164,     0,
     165,   165,     0,     0,   163,     0,    36,    37,     0,     0,
      39,    40,    41,    42,    43,    44,     0,     0,    45,   316,
     208,     0,    47,    48,    49,     0,    50,     0,     0,     0,
       0,   -83,   -83,   161,   165,     0,   162,   163,     0,     0,
       0,   164,     0,     0,     0,   163,   163,   286,     0,   288,
     -83,     0,   163,   163,     0,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,   206,     0,   161,   161,     0,   162,   162,
       0,   206,   206,   307,   164,   309,     0,     0,   163,   163,
       0,   118,   164,   164,   164,   119,   164,     0,     0,   164,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     207,   204,     0,   206,   205,     0,   -82,   -82,   207,   207,
     207,     0,   207,     0,     0,   164,   164,     0,     0,   161,
       0,     0,   162,     0,   206,   -82,     0,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -82,   163,   144,     0,   145,     0,
     207,     0,   161,   163,     0,   162,     0,   146,   147,     0,
       0,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     358,   207,     0,   155,   156,   157,     0,   158,     0,     0,
       0,     0,   164,     0,     0,   163,   163,     0,     0,     0,
     164,     0,     0,     0,   187,   161,   258,     0,   162,     0,
       0,     0,     0,     0,     0,   206,   190,     0,     0,   191,
     192,   193,   194,   195,   196,     0,     0,   197,     0,   163,
       0,     0,   164,   164,     0,   201,     0,     0,   161,     0,
       0,   162,     0,     0,     0,     0,   284,     0,     0,   162,
     285,     0,   207,   161,   161,     0,   162,   162,     0,     0,
       0,     0,     0,     0,   204,     0,   164,   205,     0,    29,
       0,    83,   305,     0,     0,   205,   306,     0,     0,   161,
     161,    37,   162,   162,    39,    40,    41,    42,    43,    44,
       0,   -57,    45,     0,     0,     0,    47,   -57,   -57,     0,
      50,     0,     0,   144,   204,   145,     0,   205,     0,     0,
       0,     0,     0,     0,   146,   147,     0,     0,   148,   149,
     150,   151,   152,   153,     0,   204,   154,   364,   205,     0,
     155,   156,   157,     0,   158,     0,   161,     0,     0,   162,
       0,     0,     0,   -27,   161,   -27,     0,   162,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -70,   -70,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   161,   161,     0,   162,
     162,     0,     0,   -70,     0,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,   204,     0,     0,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     161,   -28,     0,   162,   -28,   -28,   -28,   -28,   -28,   -28,
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
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -43,
     -34,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -40,
     -43,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
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
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -45,
     -35,   -45,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,    -7,
     -45,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -44,
      -7,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -46,
     -44,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -37,
     -46,   -37,     0,     0,   -37,   -37,   -37,   411,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -42,
     -37,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -41,
     -42,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -38,
     -41,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -39,
     -38,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,    29,
     -39,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,    88,    47,    48,    49,    29,
      50,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   116,    47,    48,    49,   -25,
      50,   -25,     0,     0,   -25,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -24,
     -25,   -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,    29,
     -24,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   252,    47,    48,    49,   -33,
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
     -32,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   278,    47,    48,    49,   -36,
      50,   -36,     0,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,    29,
     -36,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   301,    47,    48,    49,   -34,
      50,   -34,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,    29,
     -34,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   322,    47,    48,    49,   -43,
      50,   -43,     0,     0,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,   -40,
     -43,   -40,     0,     0,   -40,   -40,   -40,     0,   -40,   -40,
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
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -45,
     -35,   -45,     0,     0,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,    -7,
     -45,    -7,     0,     0,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -44,
      -7,   -44,     0,     0,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -46,
     -44,   -46,     0,     0,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,   -46,     0,   -46,   -46,   -46,   -46,   -46,    29,
     -46,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   375,    47,    48,    49,   -42,
      50,   -42,     0,     0,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -41,
     -42,   -41,     0,     0,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,    29,
     -41,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   176,   393,    47,    48,    49,   -38,
      50,   -38,     0,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -39,
     -38,   -39,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,     0,   -39,   -39,   -39,   -39,   -39,    29,
     -39,    30,     0,     0,   213,   214,   215,     0,   216,   217,
      36,    37,   218,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   219,     0,    47,    48,    49,    29,
      50,    30,     0,     0,   341,   342,   343,     0,   344,   345,
      36,    37,   346,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,     0,   347,     0,    47,    48,    49,    29,
      50,    30,     0,     0,   170,   171,   172,     0,   173,   174,
      36,    37,   175,     0,    39,    40,    41,    42,    43,    44,
       0,    29,    45,    30,   176,     0,    47,    48,    49,     0,
      50,     0,    36,    37,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,    45,   387,     0,     0,    47,    48,
      49,   144,    50,   145,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,     0,   148,   149,   150,   151,
     152,   153,     0,     0,   154,   408,     0,     0,   155,   156,
     157,   144,   158,   145,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,     0,   148,   149,   150,   151,
     152,   153,     0,    29,   154,    83,     0,     0,   155,   156,
     157,     0,   158,     0,     0,    37,     0,     0,    39,    40,
      41,    42,    43,    44,     0,   -61,    45,   187,     0,   188,
     -61,   -61,   -61,     0,    50,     0,     0,     0,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,     0,   144,
     197,   232,     0,     0,   198,   199,   200,     0,   201,     0,
       0,   147,   -74,   -74,   148,   149,   150,   151,   152,   153,
       0,     0,   154,   -57,     0,     0,   155,   -57,   -57,   144,
     158,   232,     0,   -74,     0,     0,   -74,   -74,   -74,   -74,
     -74,   147,     0,     0,   148,   149,   150,   151,   152,   153,
       0,     0,   154,   -61,     0,     0,   -61,   -61,   -61,   -34,
     158,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -66,   -66,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -68,   -68,     0,   -34,   -34,   -34,     0,
     -34,   -66,     0,   -66,   -72,   -72,   -66,   -66,   -66,   269,
     -66,     0,   -68,     0,   -68,   -73,   -73,   -68,   -68,   -68,
     -68,   -68,     0,   -72,     0,   -72,   -69,   -69,   -72,   -72,
     -72,   -72,   -72,     0,   -73,     0,   -73,   -76,   -76,   -73,
     -73,   -73,   -73,   -73,     0,   -69,     0,   -69,   -75,   -75,
     -69,   -69,   -69,   -69,   -69,     0,   -76,     0,   -76,   -77,
     -77,   -76,   -76,   -76,   -76,   -76,     0,   -75,     0,   -75,
     -78,   -78,   -75,   -75,   -75,   -75,   -75,     0,   -77,     0,
     -77,   -79,   -79,   -77,   -77,   -77,   -77,   -77,     0,   -78,
       0,   -78,   -65,   -65,   -78,   -78,   -78,   -78,   -78,     0,
     -79,     0,   -79,   -67,   -67,   -79,   -79,   -79,   -79,   -79,
       0,   -65,     0,   -65,   -20,   -20,   -65,   -65,   -65,   269,
     -65,     0,   -67,     0,   -67,   -80,   -80,   -67,   -67,   -67,
     -67,   -67,     0,   -20,     0,   -20,   -81,   -81,   -20,   -20,
     -20,   -20,   -20,     0,   -80,     0,   -82,   -82,     0,   -80,
     -80,   -80,   -80,   -80,     0,   -81,   -70,   -70,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -82,   -66,   -66,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -70,   -68,   -68,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -66,   -72,   -72,     0,     0,
     -66,   -66,   -66,   100,   -66,   -68,   -73,   -73,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -72,   -69,   -69,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -73,   -76,   -76,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -69,   -75,   -75,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -76,   -77,   -77,     0,     0,
     -76,   -76,   -76,   -76,   -76,   -75,   -78,   -78,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -77,   -79,   -79,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -78,   -65,   -65,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -79,   -67,   -67,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -65,   -20,   -20,     0,     0,
     -65,   -65,   -65,   100,   -65,   -67,   -83,   -83,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -20,   -80,   -80,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -81,   -81,   -83,     0,     0,
     -83,   -83,   -83,   -83,   -83,   -82,   -82,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,     0,   -81,   -70,   -70,   -81,
     -81,   -81,   -81,   -81,     0,     0,   -82,   -66,   -66,   -82,
     -82,   -82,   -82,   -82,     0,   -68,   -68,     0,   -70,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -72,   -72,   -66,     0,
       0,   -66,   -66,   -66,   243,   -66,   -68,   -73,   -73,   -68,
     -68,   -68,   -68,   -68,     0,   -69,   -69,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,    96,    97,     0,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -69,   -76,   -76,   -69,
     -69,   -69,   -69,   -69,   -64,     0,   -64,   -75,   -75,   -64,
     -64,   -64,     0,   267,     0,   -77,   -77,     0,   -76,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -78,   -78,   -75,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -77,   -79,   -79,   -77,
     -77,   -77,   -77,   -77,     0,   -65,   -65,   -78,     0,     0,
     -78,   -78,   -78,   -78,   -78,   -67,   -67,     0,   -79,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -65,   -20,   -20,   -65,
     -65,   -65,   243,   -65,     0,     0,   -67,    96,    97,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,   -20,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,     0,    98
};

static const yytype_int16 yycheck[] =
{
       0,   176,    25,     3,   164,     3,     3,   231,    25,    14,
       3,    34,     3,     3,     3,     0,     3,    15,    15,    23,
      23,    25,    45,     3,    15,    25,    15,    30,    15,     3,
       3,    25,     3,   257,     3,    33,    33,    25,     0,     3,
      33,    15,    33,    33,   219,     1,    33,   207,     3,    25,
      73,    74,    14,    33,    77,    78,    73,    80,    14,    33,
      33,    25,    33,    80,    25,     3,    25,    22,     3,    25,
      25,    23,    23,    73,     4,     5,    25,     0,    30,    73,
      15,     3,    12,     3,    25,    73,     9,    25,    14,    25,
     113,    14,    25,    23,    24,    89,   113,    73,    28,    29,
      30,    31,    32,    25,    23,    25,     0,   130,   131,    28,
      29,    30,    73,   130,    73,     9,    24,   140,   141,    23,
      14,    25,    24,   140,   141,     0,    30,    25,    24,     0,
     130,   154,     4,     5,     9,     0,   130,    73,     9,    14,
     140,   141,   130,    14,     9,    24,   140,   141,     0,    14,
     173,    23,   140,   141,   130,    23,    28,    29,    30,    31,
      32,    23,    14,     0,   140,   141,    28,    29,    30,   130,
       0,   130,   347,     0,   197,    73,     0,    14,    23,   140,
     141,   140,   141,     1,    14,     3,    22,    14,    23,    25,
      14,     4,     5,   216,   130,    13,    25,    23,    16,    17,
      18,    19,    20,    21,   140,   141,    24,   230,    25,     3,
      23,    24,    25,    30,    32,    28,    29,    30,    31,    32,
       0,     0,   245,   246,     0,   248,     0,     0,    23,     9,
       9,   248,   130,   256,    14,    14,     9,    23,    14,    25,
      14,    14,   140,   141,     0,    23,     0,     0,   271,   272,
      25,   274,     1,     9,     3,     9,     9,   274,    14,   253,
      14,    14,     4,     5,    13,    25,     0,    16,    17,    18,
      19,    20,    21,   296,    25,    24,    23,     0,    25,   296,
      14,    23,    24,    32,    23,   279,    28,    29,    30,    31,
      32,    14,     0,     0,   317,     0,    23,     0,     4,     5,
     317,     9,     9,     3,   327,   328,    14,    14,    23,    14,
     327,    14,   335,   336,    29,    30,     0,    23,   335,    25,
       0,   344,    28,    29,    30,    31,    32,   327,     0,     9,
      14,    23,    24,   327,    14,   335,     0,     9,     0,   327,
      22,   335,    14,    25,    25,   368,   369,   335,   371,    30,
      14,   327,    14,     0,   371,     0,    23,   380,   381,   335,
      25,     0,     9,   380,   381,   388,   327,    14,   327,    14,
       9,   388,    23,    24,   335,    14,   335,    25,   401,   402,
     380,   381,   376,   377,   401,   379,   380,   381,   411,   412,
      24,   327,   380,   381,   411,   412,     0,    24,    24,   335,
       0,   401,     0,    22,   380,   381,    25,   401,    24,     9,
      14,   411,   412,   401,    14,    23,    14,   411,   412,   380,
     381,   380,   381,   411,   412,   401,    23,     0,    25,   327,
      23,    42,    43,    44,    45,   411,   412,   335,    24,    50,
     401,    14,   401,    22,   380,   381,    25,    23,     0,    25,
     411,   412,   411,   412,    30,     0,    22,     9,     0,    25,
       4,     5,    14,    45,     9,   401,    77,    78,    12,    14,
      24,    24,    14,     4,     5,   411,   412,     0,    24,    23,
      24,    25,   380,   381,    28,    29,    30,    31,    32,   100,
       0,    14,    23,     0,    25,    77,    78,    28,    29,    30,
      31,    32,   113,   401,    14,    23,     1,    14,     3,    23,
      28,    29,    30,   411,   412,    29,    30,    12,    13,    23,
     131,    16,    17,    18,    19,    20,    21,    25,    23,    24,
      25,   113,     0,    28,    29,    30,    22,    32,     0,    25,
     151,   152,   153,   154,    23,    23,    14,   158,     1,   131,
       3,    23,    14,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    25,    16,    17,    18,    19,    20,    21,    23,
      25,    24,   154,    26,    27,    28,    29,    30,     0,    32,
       0,    23,     0,   194,   195,   196,   197,     9,    23,     9,
     201,     9,    14,     1,    14,     3,    14,    25,     6,     7,
       8,    25,    10,    11,    12,    13,    14,    23,    16,    17,
      18,    19,    20,    21,    45,   197,    24,    23,    26,   230,
      28,    29,    30,     0,    32,     0,     0,   238,   239,   240,
     241,   242,   243,    25,   245,   246,    23,    14,    25,    14,
      14,    28,    29,    30,    25,   256,    77,    78,   230,    25,
       1,    23,     3,   264,   265,   266,   267,   268,   269,    25,
     271,   272,    13,   245,   246,    16,    17,    18,    19,    20,
      21,    23,     0,    24,   256,    25,     1,    23,     3,    29,
      30,    32,   113,     0,    23,   296,    14,    12,    13,   271,
     272,    16,    17,    18,    19,    20,    21,    14,    23,    24,
     131,     0,     0,    28,    29,    30,   317,    32,    23,    22,
       9,     9,    25,    23,   296,    14,    14,   328,     0,     0,
     151,   152,   153,   154,     1,   336,     3,   158,     9,    24,
      24,    23,    14,    14,    24,   317,    13,    29,    30,    16,
      17,    18,    19,    20,    21,    25,   328,    24,    25,    29,
      30,    28,    29,    30,   336,    32,    25,   368,   369,    28,
      29,    30,    24,   194,   195,   196,   197,    23,    25,    23,
     201,    25,     4,     5,    28,    29,    30,   388,    23,    22,
      25,    25,    25,    28,    29,    30,   368,   369,    23,    22,
      25,   402,    25,    25,    45,    23,    28,    29,    30,   230,
      32,    22,    25,    23,    25,    25,   388,   238,   239,   240,
     241,   242,   243,    23,   245,   246,    23,    23,    25,    23,
     402,    28,    29,    30,    25,   256,    77,    78,    29,    30,
       1,    25,     3,   264,   265,   266,   267,   268,   269,    25,
     271,   272,    13,     4,     5,    16,    17,    18,    19,    20,
      21,    12,    23,    24,    25,    23,    23,    28,    29,    30,
      23,    32,   113,    24,    25,   296,    25,    28,    29,    30,
      31,    32,    23,     3,    25,    22,    -1,    28,    29,    30,
     131,    -1,    23,    -1,    25,    23,   317,    28,    29,    30,
      28,    29,    30,    -1,    -1,    -1,    -1,   328,    -1,    -1,
     151,   152,   153,   154,     1,   336,     3,   158,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,    23,    32,    -1,   368,   369,    28,
      29,    30,    -1,   194,   195,   196,   197,    23,    -1,     1,
     201,     3,    28,    29,    30,    -1,    23,   388,    25,    -1,
      12,    13,    29,    30,    16,    17,    18,    19,    20,    21,
      -1,   402,    24,    25,    45,    -1,    28,    29,    30,   230,
      32,    25,    -1,    -1,    28,    29,    30,   238,   239,   240,
     241,   242,   243,    -1,   245,   246,    23,    -1,    25,    -1,
      -1,    -1,    29,    30,    -1,   256,    77,    78,    -1,    -1,
       1,    -1,     3,   264,   265,   266,   267,   268,   269,    -1,
     271,   272,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    32,   113,     4,     5,   296,    23,    -1,    25,    -1,
      -1,    25,    29,    30,    28,    29,    30,    -1,    -1,    -1,
     131,    -1,    23,    -1,    25,    -1,   317,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,
     151,   152,   153,   154,     1,   336,     3,   158,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,    -1,    32,    25,   368,   369,    28,
      29,    30,    -1,   194,   195,   196,   197,    -1,    -1,     1,
     201,     3,    -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,   402,    24,    25,    45,    -1,    28,    29,    30,   230,
      32,    25,    -1,    -1,    28,    29,    30,   238,   239,   240,
     241,   242,   243,    25,   245,   246,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    77,    78,    -1,    -1,
       1,    -1,     3,   264,   265,   266,   267,   268,   269,    -1,
     271,   272,    13,     4,     5,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    32,   113,    24,    25,   296,    -1,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    -1,    -1,    -1,    -1,    -1,   317,    45,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,   328,    -1,    -1,
     151,   152,   153,   154,    -1,   336,    13,   158,    -1,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    77,
      78,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,   369,    -1,
      98,    -1,    -1,   194,   195,   196,   197,     1,    -1,     3,
     201,    -1,    -1,    -1,    -1,   113,    -1,   388,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,   402,    -1,   131,    28,    29,    30,    -1,    32,   230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,    -1,   245,   246,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,     1,    -1,     3,
      -1,    -1,    -1,   264,   265,   266,   267,   268,   269,    13,
     271,   272,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,     1,    -1,     3,    -1,    -1,    -1,    32,   197,
      -1,    -1,    -1,    12,    13,   296,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    45,    32,    -1,    -1,   317,    -1,    -1,    -1,
      -1,    -1,   230,    -1,    -1,    -1,    -1,   328,    -1,    -1,
     238,   239,   240,   241,   242,   336,    -1,   245,   246,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,   256,    45,
       4,     5,    -1,    -1,    -1,    -1,   264,   265,   266,   267,
     268,    -1,    95,   271,   272,    -1,    99,   368,   369,    23,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    32,    -1,
     113,    77,    78,    -1,    -1,    -1,    -1,   388,   296,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,   131,    -1,
      -1,   402,    -1,    -1,    -1,    -1,    12,    13,    -1,   317,
      16,    17,    18,    19,    20,    21,    -1,   113,    24,    25,
     328,   154,    28,    29,    30,     1,    32,     3,   336,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,   154,    -1,
     368,   369,    -1,    -1,   197,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
     388,    -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,     4,     5,    45,   402,    -1,    45,   230,    -1,    -1,
      -1,   197,    -1,    -1,    -1,   238,   239,   240,    -1,   242,
      23,    -1,   245,   246,    -1,    28,    29,    30,    31,    32,
      -1,    -1,    -1,   256,    -1,    77,    78,    -1,    77,    78,
      -1,   264,   265,   266,   230,   268,    -1,    -1,   271,   272,
      -1,    93,   238,   239,   240,    94,   242,    -1,    -1,   245,
     246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     256,   113,    -1,   296,   113,    -1,     4,     5,   264,   265,
     266,    -1,   268,    -1,    -1,   271,   272,    -1,    -1,   131,
      -1,    -1,   131,    -1,   317,    23,    -1,    25,    -1,    -1,
      28,    29,    30,    31,    32,   328,     1,    -1,     3,    -1,
     296,    -1,   154,   336,    -1,   154,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,   317,    -1,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,   328,    -1,    -1,   368,   369,    -1,    -1,    -1,
     336,    -1,    -1,    -1,     1,   197,     3,    -1,   197,    -1,
      -1,    -1,    -1,    -1,    -1,   388,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,   402,
      -1,    -1,   368,   369,    -1,    32,    -1,    -1,   230,    -1,
      -1,   230,    -1,    -1,    -1,    -1,   238,    -1,    -1,   238,
     239,    -1,   388,   245,   246,    -1,   245,   246,    -1,    -1,
      -1,    -1,    -1,    -1,   256,    -1,   402,   256,    -1,     1,
      -1,     3,   264,    -1,    -1,   264,   265,    -1,    -1,   271,
     272,    13,   271,   272,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,     1,   296,     3,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,   317,    24,    25,   317,    -1,
      28,    29,    30,    -1,    32,    -1,   328,    -1,    -1,   328,
      -1,    -1,    -1,     1,   336,     3,    -1,   336,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,     4,     5,    24,    -1,    26,    27,
      28,    29,    30,    -1,    32,    -1,   368,   369,    -1,   368,
     369,    -1,    -1,    23,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,   388,    -1,    -1,   388,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
     402,     3,    -1,   402,     6,     7,     8,     9,    10,    11,
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
      -1,     1,    24,     3,    26,    -1,    28,    29,    30,    -1,
      32,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      30,     1,    32,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    25,    -1,    -1,    28,    29,
      30,     1,    32,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,     1,    24,     3,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,     1,    -1,     3,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,     1,
      24,     3,    -1,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    13,     4,     5,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    30,     1,
      32,     3,    -1,    25,    -1,    -1,    28,    29,    30,    31,
      32,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    25,    -1,    -1,    28,    29,    30,     1,
      32,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,     4,     5,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,     4,     5,    -1,    28,    29,    30,    -1,
      32,    23,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    23,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    23,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,    23,    -1,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,    23,    -1,    25,     4,     5,
      28,    29,    30,    31,    32,    -1,    23,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,    23,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,    23,    -1,
      25,     4,     5,    28,    29,    30,    31,    32,    -1,    23,
      -1,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
      23,    -1,    25,     4,     5,    28,    29,    30,    31,    32,
      -1,    23,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    23,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    23,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,    23,    -1,     4,     5,    -1,    28,
      29,    30,    31,    32,    -1,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,    23,     4,     5,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    25,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    25,    -1,    -1,
      28,    29,    30,    31,    32,    -1,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,    -1,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,     4,     5,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,     4,     5,    25,    -1,
      -1,    28,    29,    30,    31,    32,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,     4,     5,    25,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,    25,     4,     5,    28,
      29,    30,    31,    32,    23,    -1,    25,     4,     5,    28,
      29,    30,    -1,    32,    -1,     4,     5,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,     4,     5,    25,    -1,
      -1,    28,    29,    30,    31,    32,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,     4,     5,    25,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,    -1,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    -1,    32
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
      31,     3,    15,    45,    53,     3,    43,     3,    25,    53,
      53,    23,    25,    46,     3,    25,    27,    45,    55,    56,
      57,    59,    57,    60,     3,    22,    25,    25,    23,    25,
      25,    46,    53,     3,    23,    23,    45,    25,    53,    25,
       9,    25,    45,    45,     1,     3,    12,    13,    16,    17,
      18,    19,    20,    21,    24,    28,    29,    30,    32,    42,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       6,     7,     8,    10,    11,    14,    26,    38,    46,    47,
      48,    49,    50,    51,    52,    53,    53,     1,     3,    12,
      13,    16,    17,    18,    19,    20,    21,    24,    28,    29,
      30,    32,    42,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     6,     7,     8,    10,    11,    14,    26,
      38,    46,    47,    48,    49,    50,    51,    52,    53,    23,
      12,    24,     3,    60,    60,    60,    53,    60,    30,    29,
      28,    32,    64,    31,    24,    24,    24,    53,    24,     3,
      15,    33,    27,    44,    23,    23,    12,    24,     3,    60,
      60,    60,    53,    60,    30,    29,    28,    32,    64,    31,
      24,    24,    24,    53,    24,     3,    15,    33,    27,    44,
      23,    53,    43,    25,    55,    56,    57,    59,    57,    60,
       3,    25,    53,    53,    23,    25,    46,    23,     3,    33,
      23,    27,    53,    43,    25,    55,    56,    57,    59,    57,
      60,     3,    25,    53,    53,    23,    25,    46,    23,     3,
      33,    23,    27,    25,    25,    23,    25,    25,    46,    53,
      23,    25,    25,    23,    25,    25,    46,    53,    23,    23,
      23,     6,     7,     8,    10,    11,    14,    26,    38,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    25,    53,
      25,    23,    23,    45,    25,    53,    25,    24,    24,    24,
      53,    24,     3,    15,    33,    27,    44,     9,    23,    25,
       9,    25,     3,    25,    53,    53,    23,    25,    46,    23,
       3,    33,    23,    27,    45,    45,    45,    45,    25,    23,
      25,    25,    46,    53,    23,    23,    23,    45,    25,    53,
      25,     9,    25,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    38,    38,
      38,    39,    39,    40,    40,    40,    41,    41,    41,    41,
      42,    43,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    45,    45,    45,    46,    47,    47,    48,    48,    49,
      49,    49,    49,    50,    51,    51,    52,    53,    53,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    61,    62,
      63,    63,    63,    63,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     4,     3,     3,
       3,     6,     7,     1,     0,     1,     4,     5,     2,     3,
       4,     3,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     5,     7,     7,
       3,     5,     5,     3,     5,     4,     5,     3,     1,     2,
       1,     3,     1,     2,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       1,     1,     1,     1,     1,     1
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
  switch (yykind)
    {
    case YYSYMBOL_program: /* program  */
#line 99 "./src/syntax.y"
            {  }
#line 2207 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_paramList: /* paramList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2213 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_param: /* param  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2219 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_variableParam: /* variableParam  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2225 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_functionParam: /* functionParam  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2231 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_functionParams: /* functionParams  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2237 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_functionParamsList: /* functionParamsList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2243 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_call: /* call  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2249 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_argList: /* argList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2255 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_stmList: /* stmList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2261 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_stmt: /* stmt  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2267 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_expStatement: /* expStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2273 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_compoundStatement: /* compoundStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2279 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_ifStatement: /* ifStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2285 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_forStatement: /* forStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2291 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_returnStatement: /* returnStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2297 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_inputStatement: /* inputStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2303 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_outputStatement: /* outputStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2309 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_expression: /* expression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2315 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_orExpression: /* orExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2321 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_andExpression: /* andExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2327 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_relationalExpression: /* relationalExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2333 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_listExpression: /* listExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2339 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_arithmExpression: /* arithmExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2345 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_arithmMulDivExpression: /* arithmMulDivExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2351 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_term: /* term  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2357 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_unaryTerm: /* unaryTerm  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2363 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_immutable: /* immutable  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2369 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_const: /* const  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2375 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_listOP: /* listOP  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2381 "./src/syntax.tab.c"
        break;

      default:
        break;
    }
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
#line 110 "./src/syntax.y"
            {
    (yyval.producao) = aloca_no("program", (yyvsp[0].producao)->type);
    (yyval.producao)->filhos[0] = (yyvsp[0].producao);
    raiz = (yyval.producao);
  }
#line 2656 "./src/syntax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 117 "./src/syntax.y"
                  {
    (yyval.producao) = aloca_no("paramList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2666 "./src/syntax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 122 "./src/syntax.y"
          {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2674 "./src/syntax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 127 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2682 "./src/syntax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 130 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2690 "./src/syntax.tab.c"
    break;

  case 7: /* variableParam: TYPE LISTTYPE ID ';'  */
#line 135 "./src/syntax.y"
                       {
    Simbolo sim;
    char tipo[10];

    strcpy(tipo, (yyvsp[-3].terminal)->valor);
    strcat(tipo, (yyvsp[-2].terminal)->valor);

    verify_context((yyvsp[-1].terminal)->valor);

    sim.linha = (yyvsp[-1].terminal)->linha;
    sim.coluna = (yyvsp[-1].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = tipo;
    sim.nro_parametros = 0;
    sim.eh_parametro = false;
    sim.value = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyvsp[-3].terminal)->escopo = -1;
    (yyvsp[-2].terminal)->escopo = -1;
    (yyvsp[-1].terminal)->escopo = escopo_atual->scope_size;
    strcpy((yyvsp[-1].terminal)->tipo, tipo);

    (yyval.producao) = aloca_no("variableParam", (yyvsp[-1].terminal)->tipo);

    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-1].terminal)->tipo);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-1].terminal)->tipo);
    (yyval.producao)->filhos[2] = aloca_no("", (yyvsp[-1].terminal)->tipo);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-3].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-1].terminal));
  }
#line 2730 "./src/syntax.tab.c"
    break;

  case 8: /* variableParam: TYPE ID ';'  */
#line 170 "./src/syntax.y"
                {
    Simbolo sim;

    verify_context((yyvsp[-1].terminal)->valor);

    sim.linha = (yyvsp[-1].terminal)->linha;
    sim.coluna = (yyvsp[-1].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.tipo = (yyvsp[-2].terminal)->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = false;
    sim.value = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyvsp[-1].terminal)->escopo = escopo_atual->scope_size;

    (yyval.producao) = aloca_no("variableParam", (yyvsp[-2].terminal)->valor);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-2].terminal)->valor);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-2].terminal)->valor);

    (yyvsp[-2].terminal)->escopo = -1;
    (yyvsp[-1].terminal)->escopo = escopo_atual->scope_size;
    strcpy((yyvsp[-1].terminal)->tipo, (yyvsp[-2].terminal)->valor);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2764 "./src/syntax.tab.c"
    break;

  case 9: /* variableParam: TYPE LISTTYPE LEXICAL_ERROR  */
#line 199 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2773 "./src/syntax.tab.c"
    break;

  case 10: /* variableParam: TYPE LEXICAL_ERROR ';'  */
#line 203 "./src/syntax.y"
                           {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2782 "./src/syntax.tab.c"
    break;

  case 11: /* functionParam: TYPE ID '(' functionParams ')' stmt  */
#line 209 "./src/syntax.y"
                                      {
    Simbolo sim;

    verify_context((yyvsp[-4].terminal)->valor);

    sim.linha = (yyvsp[-4].terminal)->linha;
    sim.coluna = (yyvsp[-4].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.nro_parametros = calcula_nro_parametros();
    sim.eh_parametro = false;
    sim.tipo = (yyvsp[-5].terminal)->valor;
    sim.value = (yyvsp[-4].terminal)->valor;
    sim.tipo_funcao = eh;

    Simbolo* function_symbol = coloca_simbolo(sim);

    seta_argumentos(function_symbol);

    verify_return_types((yyvsp[-5].terminal)->valor);

    (yyval.producao) = aloca_no("functionParam", (yyvsp[-5].terminal)->valor);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-5].terminal)->valor);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-5].terminal)->valor);
    (yyval.producao)->filhos[2] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[3] = (yyvsp[0].producao);

    (yyvsp[-5].terminal)->escopo = -1;
    (yyvsp[-4].terminal)->escopo = escopo_atual->scope_size;
    strcpy((yyvsp[-4].terminal)->tipo, (yyvsp[-5].terminal)->valor);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-5].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-4].terminal));

    clear_return_list();

  }
#line 2823 "./src/syntax.tab.c"
    break;

  case 12: /* functionParam: TYPE LISTTYPE ID '(' functionParams ')' stmt  */
#line 245 "./src/syntax.y"
                                                 {
    Simbolo sim;
    char tipo[10];

    verify_context((yyvsp[-4].terminal)->valor);

    strcpy(tipo, (yyvsp[-6].terminal)->valor);
    strcat(tipo,(yyvsp[-5].terminal)->valor);

    sim.linha = (yyvsp[-4].terminal)->linha;
    sim.coluna = (yyvsp[-4].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
    sim.nro_parametros = calcula_nro_parametros();
    sim.eh_parametro = false;
    sim.tipo = tipo;
    sim.tipo_funcao = eh;
    sim.value = (yyvsp[-4].terminal)->valor;

    Simbolo* function_symbol = coloca_simbolo(sim);

    seta_argumentos(function_symbol);

    verify_return_types(tipo);

    strcpy((yyvsp[-4].terminal)->tipo, tipo);

    (yyval.producao) = aloca_no("functionParam", (yyvsp[-4].terminal)->tipo);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-4].terminal)->tipo);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-4].terminal)->tipo);
    (yyval.producao)->filhos[2] = aloca_no("", (yyvsp[-4].terminal)->tipo);
    (yyval.producao)->filhos[3] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    (yyvsp[-6].terminal)->escopo = -1;
    (yyvsp[-5].terminal)->escopo = -1;
    (yyvsp[-4].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-5].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-4].terminal));

    clear_return_list();
  }
#line 2871 "./src/syntax.tab.c"
    break;

  case 13: /* functionParams: functionParamsList  */
#line 290 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2879 "./src/syntax.tab.c"
    break;

  case 14: /* functionParams: %empty  */
#line 293 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2887 "./src/syntax.tab.c"
    break;

  case 15: /* functionParams: error  */
#line 296 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2896 "./src/syntax.tab.c"
    break;

  case 16: /* functionParamsList: functionParamsList ',' TYPE ID  */
#line 302 "./src/syntax.y"
                                 {

    Simbolo sim;

    verify_context((yyvsp[0].terminal)->valor);

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = contador_escopo+1;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo = (yyvsp[-1].terminal)->valor;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParamsList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-3].producao);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-1].terminal)->valor);
    (yyval.producao)->filhos[2] = aloca_no("", (yyvsp[-1].terminal)->valor);

    (yyvsp[-1].terminal)->escopo = -1;
    (yyvsp[0].terminal)->escopo = contador_escopo+1;
    strcpy((yyvsp[0].terminal)->tipo, (yyvsp[-1].terminal)->valor);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));

  }
#line 2931 "./src/syntax.tab.c"
    break;

  case 17: /* functionParamsList: functionParamsList ',' TYPE LISTTYPE ID  */
#line 332 "./src/syntax.y"
                                            {


    Simbolo sim;
    char tipo[10];

    verify_context((yyvsp[0].terminal)->valor);

    strcpy(tipo, (yyvsp[-2].terminal)->valor);
    strcat(tipo, (yyvsp[-1].terminal)->valor);

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = contador_escopo+1;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    strcpy((yyvsp[0].terminal)->tipo, tipo);

    (yyval.producao) = aloca_no("functionParamsList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[2] = aloca_no("", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[3] = aloca_no("", (yyvsp[0].terminal)->tipo);

    (yyvsp[-2].terminal)->escopo = -1;
    (yyvsp[-1].terminal)->escopo = -1;
    (yyvsp[0].terminal)->escopo = contador_escopo+1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[3], (yyvsp[0].terminal));

  }
#line 2975 "./src/syntax.tab.c"
    break;

  case 18: /* functionParamsList: TYPE ID  */
#line 371 "./src/syntax.y"
            {


    Simbolo sim;

    verify_context((yyvsp[0].terminal)->valor);

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = contador_escopo+1;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.tipo = (yyvsp[-1].terminal)->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    (yyval.producao) = aloca_no("functionParamsList", (yyvsp[-1].terminal)->valor);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-1].terminal)->valor);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-1].terminal)->valor);

    (yyvsp[-1].terminal)->escopo = -1;
    (yyvsp[0].terminal)->escopo = contador_escopo+1;
    strcpy((yyvsp[0].terminal)->tipo, (yyvsp[-1].terminal)->valor);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[0].terminal));

  }
#line 3010 "./src/syntax.tab.c"
    break;

  case 19: /* functionParamsList: TYPE LISTTYPE ID  */
#line 401 "./src/syntax.y"
                     {
    Simbolo sim;
    char tipo[10];

    verify_context((yyvsp[0].terminal)->valor);

    strcpy(tipo, (yyvsp[-2].terminal)->valor);
    strcat(tipo, (yyvsp[-1].terminal)->valor);

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = contador_escopo+1;
    sim.value = (yyvsp[0].terminal)->valor;
    sim.nro_parametros = 0;
    sim.eh_parametro = true;
    sim.tipo = tipo;
    sim.tipo_funcao = nao_eh;

    coloca_simbolo(sim);

    strcpy((yyvsp[0].terminal)->tipo, tipo);

    (yyval.producao) = aloca_no("functionParamsList", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[2] = aloca_no("", (yyvsp[0].terminal)->tipo);

    (yyvsp[-2].terminal)->escopo = -1;
    (yyvsp[-1].terminal)->escopo= -1;
    (yyvsp[0].terminal)->escopo = contador_escopo+1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 3050 "./src/syntax.tab.c"
    break;

  case 20: /* call: ID '(' argList ')'  */
#line 438 "./src/syntax.y"
                     {

    strcpy((yyvsp[-3].terminal)->tipo, get_type_id((yyvsp[-3].terminal)->valor, (yyvsp[-3].terminal)));

    bool ok = verify_call(nro_argumentos, (yyvsp[-3].terminal));
    char* type;

    if(ok){
      type = (yyvsp[-3].terminal)->tipo;
      verify_arg_list((yyvsp[-3].terminal));
    }
    else
      type = "undefined";

    (yyval.producao) = aloca_no("call", type);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-3].terminal)->tipo);
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);

    (yyvsp[-3].terminal)->escopo = get_escopo((yyvsp[-3].terminal));

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-3].terminal));

    clear_arg_list();
    nro_argumentos = 0;
  }
#line 3080 "./src/syntax.tab.c"
    break;

  case 21: /* argList: argList ',' ID  */
#line 465 "./src/syntax.y"
                 {
    (yyval.producao) = aloca_no("argList", "undefined");

    nro_argumentos++;

    strcpy((yyvsp[0].terminal)->tipo, get_type_id((yyvsp[0].terminal)->valor, (yyvsp[0].terminal)));

    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[0].terminal)->tipo);

    put_arg_in_list((yyvsp[0].terminal)->linha, (yyvsp[0].terminal)->coluna, (yyvsp[0].terminal)->tipo, (yyval.producao)->filhos[1]);

    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[0].terminal));
  }
#line 3101 "./src/syntax.tab.c"
    break;

  case 22: /* argList: ID  */
#line 481 "./src/syntax.y"
       {

    nro_argumentos++;

    strcpy((yyvsp[0].terminal)->tipo, get_type_id((yyvsp[0].terminal)->valor, (yyvsp[0].terminal)));

    (yyval.producao) = aloca_no("argList", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[0].terminal)->tipo);

    put_arg_in_list((yyvsp[0].terminal)->linha, (yyvsp[0].terminal)->coluna, (yyvsp[0].terminal)->tipo, (yyval.producao)->filhos[0]);

    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3121 "./src/syntax.tab.c"
    break;

  case 23: /* argList: %empty  */
#line 496 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 3129 "./src/syntax.tab.c"
    break;

  case 24: /* stmList: stmList stmt  */
#line 501 "./src/syntax.y"
               {
    (yyval.producao) = aloca_no("stmList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 3139 "./src/syntax.tab.c"
    break;

  case 25: /* stmList: stmt  */
#line 506 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3147 "./src/syntax.tab.c"
    break;

  case 26: /* stmt: expStatement  */
#line 511 "./src/syntax.y"
               {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3155 "./src/syntax.tab.c"
    break;

  case 27: /* stmt: compoundStatement  */
#line 514 "./src/syntax.y"
                      {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3163 "./src/syntax.tab.c"
    break;

  case 28: /* stmt: ifStatement  */
#line 517 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3171 "./src/syntax.tab.c"
    break;

  case 29: /* stmt: forStatement  */
#line 520 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3179 "./src/syntax.tab.c"
    break;

  case 30: /* stmt: returnStatement  */
#line 523 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3187 "./src/syntax.tab.c"
    break;

  case 31: /* stmt: inputStatement  */
#line 526 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3195 "./src/syntax.tab.c"
    break;

  case 32: /* stmt: outputStatement  */
#line 529 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3203 "./src/syntax.tab.c"
    break;

  case 33: /* stmt: variableParam  */
#line 532 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3211 "./src/syntax.tab.c"
    break;

  case 34: /* expStatement: expression ';'  */
#line 537 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 3219 "./src/syntax.tab.c"
    break;

  case 35: /* compoundStatement: '{' stmList '}'  */
#line 543 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 3227 "./src/syntax.tab.c"
    break;

  case 36: /* compoundStatement: '{' '}'  */
#line 546 "./src/syntax.y"
            {
    (yyval.producao) = NULL;
  }
#line 3235 "./src/syntax.tab.c"
    break;

  case 37: /* ifStatement: IF '(' expression ')' stmt  */
#line 552 "./src/syntax.y"
                             {
    (yyval.producao) = aloca_no("ifStatement", "undefined");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-4].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 3250 "./src/syntax.tab.c"
    break;

  case 38: /* ifStatement: IF '(' expression ')' stmt ELSE stmt  */
#line 562 "./src/syntax.y"
                                         {
    (yyval.producao) = aloca_no("ifStatement", "undefined");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[2] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[3] = aloca_no("", "undefined");
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    (yyvsp[-6].terminal)->escopo = -1;
    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
    coloca_terminal((yyval.producao)->filhos[3], (yyvsp[-1].terminal));
  }
#line 3269 "./src/syntax.tab.c"
    break;

  case 39: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 578 "./src/syntax.y"
                                                        {
    (yyval.producao) = aloca_no("forStatement", "undefined");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[2] = (yyvsp[-3].producao);
    (yyval.producao)->filhos[3] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    (yyvsp[-6].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
  }
#line 3286 "./src/syntax.tab.c"
    break;

  case 40: /* forStatement: FOR '(' ')'  */
#line 590 "./src/syntax.y"
                 {
    (yyval.producao) = NULL;
    yyerror("Error For Statement without expressions !!");
    yyerrok;
  }
#line 3296 "./src/syntax.tab.c"
    break;

  case 41: /* forStatement: FOR '(' expStatement expression ')'  */
#line 595 "./src/syntax.y"
                                         {
    (yyval.producao) = NULL;
    yyerror("Error For Statement missing one expression statement !!");
    libera_arvore((yyvsp[-2].producao));
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3308 "./src/syntax.tab.c"
    break;

  case 42: /* forStatement: FOR '(' expStatement expStatement ')'  */
#line 602 "./src/syntax.y"
                                          {
    (yyval.producao) = NULL;
    yyerror("Error For Statement missing the last expression !!");
    libera_arvore((yyvsp[-2].producao));
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3320 "./src/syntax.tab.c"
    break;

  case 43: /* returnStatement: RETURN expression ';'  */
#line 611 "./src/syntax.y"
                        {
    if((yyvsp[-1].producao) != NULL){
      put_return_in_list((yyvsp[-2].terminal)->linha, (yyvsp[-2].terminal)->coluna, (yyvsp[-1].producao)->type, (yyvsp[-1].producao));
      (yyval.producao) = aloca_no("returnStatement", (yyvsp[-1].producao)->type);
      (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-1].producao)->type);
    }
    else{
      (yyval.producao)->filhos[0] = aloca_no("", "undefined");
      put_return_in_list((yyvsp[-2].terminal)->linha, (yyvsp[-2].terminal)->coluna, "undefined",(yyval.producao)->filhos[0]);
    }

    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
  }
#line 3338 "./src/syntax.tab.c"
    break;

  case 44: /* inputStatement: INPUT '(' ID ')' ';'  */
#line 626 "./src/syntax.y"
                       {
    strcpy((yyvsp[-2].terminal)->tipo, get_type_id((yyvsp[-2].terminal)->valor, (yyvsp[-2].terminal)));

    char *type = "undefined";

    bool ok = verify_input((yyvsp[-2].terminal));

    if(ok)
      (yyval.producao) = aloca_no("inputStatement", (yyvsp[-2].terminal)->tipo);
    else
      (yyval.producao) = aloca_no("inputStatement", type);


    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-2].terminal)->tipo);
    (yyval.producao)->filhos[1] = aloca_no("", (yyvsp[-2].terminal)->tipo);

    (yyvsp[-4].terminal)->escopo = -1;
    (yyvsp[-2].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
  }
#line 3365 "./src/syntax.tab.c"
    break;

  case 45: /* inputStatement: INPUT '(' ')' ';'  */
#line 648 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error Input without parameter !!");
    yyerrok;
  }
#line 3375 "./src/syntax.tab.c"
    break;

  case 46: /* outputStatement: OUTPUT '(' expression ')' ';'  */
#line 655 "./src/syntax.y"
                                {
    if((yyvsp[-2].producao) != NULL)
      (yyval.producao) = aloca_no("outputStatement", (yyvsp[-2].producao)->type);
    else
      (yyval.producao) = aloca_no("outputStatement", "undefined");

    char *type = "undefined";

    bool ok = verify_output((yyvsp[-2].producao));

    if(ok)
      (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-2].producao)->type);
    else
      (yyval.producao)->filhos[0] = aloca_no("", type);


    (yyval.producao)->filhos[1] =  (yyvsp[-2].producao);

    (yyvsp[-4].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 3402 "./src/syntax.tab.c"
    break;

  case 47: /* expression: ID ASSIGN expression  */
#line 679 "./src/syntax.y"
                        {
    strcpy((yyvsp[-2].terminal)->tipo,get_type_id((yyvsp[-2].terminal)->valor, (yyvsp[-2].terminal)));

    assign_expression_type_check((yyvsp[-2].terminal), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("expression", (yyvsp[-2].terminal)->tipo);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-2].terminal)->tipo);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-2].terminal)->escopo = get_escopo((yyvsp[-2].terminal));

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3424 "./src/syntax.tab.c"
    break;

  case 48: /* expression: orExpression  */
#line 696 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3432 "./src/syntax.tab.c"
    break;

  case 49: /* expression: ID ASSIGN  */
#line 699 "./src/syntax.y"
              {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression  missing one parameter !!");
    yyerrok;
  }
#line 3442 "./src/syntax.tab.c"
    break;

  case 50: /* expression: ASSIGN  */
#line 704 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression missing two parametes !!");
    yyerrok;
  }
#line 3452 "./src/syntax.tab.c"
    break;

  case 51: /* orExpression: orExpression OR andExpression  */
#line 711 "./src/syntax.y"
                                {

    char *type;

    bool ok = or_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    if(ok)
      type = "int";
    else
      type = "undefined";

    (yyval.producao) = aloca_no("orExpression", type);
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));

  }
#line 3478 "./src/syntax.tab.c"
    break;

  case 52: /* orExpression: andExpression  */
#line 732 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3486 "./src/syntax.tab.c"
    break;

  case 53: /* orExpression: orExpression OR  */
#line 735 "./src/syntax.y"
                    {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing one parameter !!");
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3497 "./src/syntax.tab.c"
    break;

  case 54: /* orExpression: OR  */
#line 741 "./src/syntax.y"
       {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing two parameters !!");
    yyerrok;
  }
#line 3507 "./src/syntax.tab.c"
    break;

  case 55: /* andExpression: andExpression AND relationalExpression  */
#line 748 "./src/syntax.y"
                                         {

    char *type;

    bool ok = and_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    if(ok)
      type = "int";
    else
      type = "undefined";

    (yyval.producao) = aloca_no("andExpression", type);
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3532 "./src/syntax.tab.c"
    break;

  case 56: /* andExpression: relationalExpression  */
#line 768 "./src/syntax.y"
                         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3540 "./src/syntax.tab.c"
    break;

  case 57: /* andExpression: andExpression AND  */
#line 771 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing one parameter !!");
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3551 "./src/syntax.tab.c"
    break;

  case 58: /* andExpression: AND  */
#line 777 "./src/syntax.y"
        {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing two parameters !!");
    yyerrok;
  }
#line 3561 "./src/syntax.tab.c"
    break;

  case 59: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 784 "./src/syntax.y"
                                             {

    char *type;

    bool ok = rel_type_check((yyvsp[-2].producao), (yyvsp[-1].terminal), (yyvsp[0].producao));

    if(ok)
      type = "int";
    else
      type = "undefined";

    (yyval.producao) = aloca_no("relationalExpression", type);
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3586 "./src/syntax.tab.c"
    break;

  case 60: /* relationalExpression: listExpression  */
#line 804 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3594 "./src/syntax.tab.c"
    break;

  case 61: /* relationalExpression: relationalExpression REL_OP  */
#line 807 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing one parameter !!");
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3605 "./src/syntax.tab.c"
    break;

  case 62: /* relationalExpression: REL_OP  */
#line 813 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing two parameters !!");
    yyerrok;
  }
#line 3615 "./src/syntax.tab.c"
    break;

  case 63: /* listExpression: arithmExpression listOP listExpression  */
#line 820 "./src/syntax.y"
                                         {

    char *type = list_type_check((yyvsp[-2].producao), (yyvsp[-1].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("listExpression", type);
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);
  }
#line 3629 "./src/syntax.tab.c"
    break;

  case 64: /* listExpression: arithmExpression  */
#line 829 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3637 "./src/syntax.tab.c"
    break;

  case 65: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 835 "./src/syntax.y"
                                                  {

    arithm_subadd_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("arithmExpression", what_type((yyvsp[-2].producao), (yyvsp[0].producao)));
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3655 "./src/syntax.tab.c"
    break;

  case 66: /* arithmExpression: arithmMulDivExpression  */
#line 848 "./src/syntax.y"
                           {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3663 "./src/syntax.tab.c"
    break;

  case 67: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 853 "./src/syntax.y"
                                      {

    arithm_muldiv_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("arithmMulDivExpression", what_type((yyvsp[-2].producao), (yyvsp[0].producao)));
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3681 "./src/syntax.tab.c"
    break;

  case 68: /* arithmMulDivExpression: term  */
#line 866 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3689 "./src/syntax.tab.c"
    break;

  case 69: /* term: const  */
#line 872 "./src/syntax.y"
        {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3697 "./src/syntax.tab.c"
    break;

  case 70: /* term: call  */
#line 875 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3705 "./src/syntax.tab.c"
    break;

  case 71: /* term: ID  */
#line 878 "./src/syntax.y"
       {
    strcpy((yyvsp[0].terminal)->tipo, get_type_id((yyvsp[0].terminal)->valor, (yyvsp[0].terminal)));

    (yyval.producao) = aloca_no("", (yyvsp[0].terminal)->tipo);

    (yyvsp[0].terminal)->escopo = get_escopo((yyvsp[0].terminal));

    // $1->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3721 "./src/syntax.tab.c"
    break;

  case 72: /* term: unaryTerm  */
#line 889 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3729 "./src/syntax.tab.c"
    break;

  case 73: /* term: immutable  */
#line 892 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3737 "./src/syntax.tab.c"
    break;

  case 74: /* term: error  */
#line 895 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 3745 "./src/syntax.tab.c"
    break;

  case 75: /* unaryTerm: '!' term  */
#line 900 "./src/syntax.y"
           {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3762 "./src/syntax.tab.c"
    break;

  case 76: /* unaryTerm: '%' term  */
#line 912 "./src/syntax.y"
             {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3779 "./src/syntax.tab.c"
    break;

  case 77: /* unaryTerm: '?' term  */
#line 924 "./src/syntax.y"
             {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3796 "./src/syntax.tab.c"
    break;

  case 78: /* unaryTerm: SUB_ADD term  */
#line 936 "./src/syntax.y"
                 {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3813 "./src/syntax.tab.c"
    break;

  case 79: /* immutable: '(' expression ')'  */
#line 951 "./src/syntax.y"
                     {
    if((yyvsp[-1].producao) != NULL)
      (yyval.producao) = aloca_no("immutable", (yyvsp[-1].producao)->type);
    else 
      (yyval.producao) = aloca_no("immutable", "undefined");
      
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = aloca_no("", "undefined");

    (yyvsp[-2].terminal)->escopo = -1;
    (yyvsp[0].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 3834 "./src/syntax.tab.c"
    break;

  case 80: /* const: INT  */
#line 969 "./src/syntax.y"
      {
    (yyval.producao) = aloca_no("const", "int");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "int");
    
    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3847 "./src/syntax.tab.c"
    break;

  case 81: /* const: FLOAT  */
#line 977 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("const", "float");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "float");

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3860 "./src/syntax.tab.c"
    break;

  case 82: /* const: STRING  */
#line 985 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("const", "string");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "string");

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3873 "./src/syntax.tab.c"
    break;

  case 83: /* const: NIL  */
#line 993 "./src/syntax.y"
        {
    (yyval.producao) = aloca_no("const", "list");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "list");

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3886 "./src/syntax.tab.c"
    break;

  case 84: /* listOP: FUNCTION  */
#line 1003 "./src/syntax.y"
           {
    char *type;

    if(strcmp((yyvsp[0].terminal)->valor, ">>") == 0)
      type = "map";
    else
      type = "filter";


    (yyval.producao) = aloca_no("listOp", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");

    (yyvsp[0].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3907 "./src/syntax.tab.c"
    break;

  case 85: /* listOP: INFIX  */
#line 1019 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("listOp", "constructor");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");

    (yyvsp[0].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3920 "./src/syntax.tab.c"
    break;


#line 3924 "./src/syntax.tab.c"

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

#line 1028 "./src/syntax.y"


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

  verify_main();

  mostra_tabela();

  mostra_header();

  mostra_arvore(raiz, 0);

  mostra_footer();

  if(verify_for_errors(errors_lex, error, erros_semanticos))
    show_message();
  else if(argc > 1) {
    FILE *tac_file = create_tac(argv[1]);
    write_table(tac_file);
    write_code(tac_file);
    fclose(tac_file);
  }

  libera_tabela();
  
  libera_arvore(raiz);

  libera_folhas();

  libera_escopos();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}
