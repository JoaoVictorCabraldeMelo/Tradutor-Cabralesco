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
#define YYLAST   2910

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  355

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
     172,   178,   200,   228,   231,   236,   257,   282,   302,   327,
     336,   344,   350,   355,   360,   365,   368,   371,   374,   377,
     380,   383,   386,   391,   397,   400,   406,   414,   427,   439,
     446,   457,   466,   475,   480,   489,   494,   502,   507,   515,
     520,   526,   531,   539,   544,   552,   557,   560,   563,   567,
     570,   573,   579,   586,   593,   600,   610,   621,   627,   633,
     639,   647,   653
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

#define YYPACT_NINF (-182)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,     2,    16,    66,    84,   120,   223,   352,    23,   -11,
    -182,   300,   372,    -3,   610,   421,   434,    -1,    -7,   178,
     438,    -3,   263,    24,  2489,    45,    36,   295,   224,   396,
      52,    58,    81,    12,    87,   491,     4,   711,   759,   791,
      72,    72,    72,   173,  1679,    72,   449,   849,   467,   471,
     510,   512,   540,   567,   580,   583,    93,   131,    95,   130,
     527,   834,   869,  2588,  2599,  2609,  2619,   100,  2489,    12,
     111,    59,   440,   173,   105,    12,   143,    37,   446,  2629,
    2639,  2649,   101,   584,  1706,  1733,  2659,   585,    72,    72,
      72,   481,   665,    72,    72,    72,   325,   176,   588,   158,
     344,   388,   118,   162,   177,   642,    12,   184,  2669,   643,
    1760,   201,   664,   673,  2679,   690,  2689,   482,   219,  2699,
     211,   217,  2516,   173,   524,   644,   645,    49,   221,  2489,
    2489,   646,   653,   934,   513,  2709,  2719,  2728,  2738,   967,
     967,   967,   173,   967,  2750,    83,   522,   213,   458,   140,
    2760,  2768,  2779,  2790,  2798,   226,   238,   244,    12,   248,
       6,  1787,  1814,  1841,  1868,  1895,  1922,  1949,  1976,  2003,
     268,   283,   363,   293,   305,   313,   315,   440,   440,   440,
     173,   440,   317,   324,   332,   340,   371,   343,   374,   385,
      12,   394,    38,  2030,    60,   137,   138,   164,   195,   199,
     206,   212,   373,   173,   111,   596,  2808,  2820,  2830,   406,
    2838,   967,   967,   967,   967,   967,   967,   322,   440,   173,
     410,    12,   414,    61,   419,  2057,  2084,  2111,   111,   437,
     443,   455,   478,   486,  1073,   441,   440,   173,   423,    12,
     483,    62,   492,   235,  2138,   261,   514,   568,  2849,   593,
     681,   769,  2860,   860,  2868,   523,   533,   535,  2165,    12,
    2192,   559,  2219,  2246,  2273,   570,   566,   578,   613,   616,
     265,    12,   267,   587,   269,   273,   284,  2878,   612,   640,
    2543,   173,  2300,   651,   647,   648,  2516,   173,   301,  2327,
    2354,   655,   666,   667,    12,   674,    39,  2381,  1035,  1109,
    1139,  1166,  1193,  1220,  1247,  1274,  1301,   654,   675,   302,
     334,   364,   689,   696,   440,   173,   698,    12,   699,    64,
     701,  1328,  2408,  2570,  1355,  2570,  2516,  2516,   700,   702,
     708,  1382,    12,  1409,   712,  1436,  1463,  1490,  2435,  2462,
     402,   403,   714,   721,  2543,   173,  1517,  1544,  1571,  1598,
     720,  2543,  2543,  1625,  1652
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,   733,     0,  -182,   725,  -182,   393,  -181,
    -155,    33,   -20,    10,    19,    53,    55,    88,   103,   -23,
       8,   798,   794,   546,   742,   713,   350,   436,   589,   632,
     598
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   162,     6,    18,    19,    47,   101,
      84,    85,   163,   164,   165,   166,   167,   168,   169,   170,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    56,    22,     5,    49,     7,   226,    76,     1,   222,
      74,    17,    16,    28,    23,    29,    10,     8,    24,    77,
      82,   223,   -14,   247,    46,    35,    14,    27,    37,    38,
      39,    40,    41,    42,    50,     9,    43,     9,   244,   224,
     107,   240,   318,    51,    45,    56,    99,   265,    49,   -36,
     104,   145,   186,   241,   319,   106,    15,    48,   129,    67,
     -32,    68,   102,   -36,   261,   273,    -2,   334,    46,   -32,
      15,   242,   320,    28,   -32,    78,    71,    52,    50,    53,
       1,   145,    72,   186,    -4,    35,   123,    51,    37,    38,
      39,    40,    41,    42,   262,   274,    43,   335,    -4,   202,
     128,    98,   195,    96,    45,    73,    56,    56,   -43,    49,
      49,    75,    54,   211,   100,    97,    87,   110,   -45,   209,
      -5,    52,   194,    53,    89,   -45,   108,    55,   105,    46,
      46,   145,   196,   -22,    -5,   220,   -22,   -25,   -26,    50,
      50,   197,   322,   120,    91,    92,   -25,   -26,    51,    51,
     145,   -25,   -26,   -47,   -43,   127,    54,   232,    90,   -47,
     -47,    88,   131,   132,   -27,   -51,    12,   238,   -51,   -51,
     -51,    55,   214,   -27,   133,   198,   134,   199,   -27,   117,
     246,   -42,    52,    52,    53,    53,   135,   121,   145,   136,
     137,   138,   139,   140,   141,   -28,   257,   142,   186,   -29,
      25,   259,   122,   -13,   -28,   143,   -30,    20,   -29,   -28,
     200,   145,   -31,   -29,   269,   -30,   186,    54,    54,   271,
     -30,   -31,   124,    -6,   -44,   201,   -31,   145,   -61,   -61,
      89,   -44,    55,    55,   125,   -35,   186,    -6,   -47,   281,
     126,   213,   -47,   -47,   -35,   145,   130,   -61,   186,   -35,
     217,   287,   -61,   -61,   -61,   -61,   -61,   307,   308,   110,
     300,   -33,   218,   202,   312,   -39,   195,    -8,   219,    -9,
     -33,   316,   221,   -10,   -39,   -33,    -8,   110,    -9,   -39,
     298,    -8,   -10,    -9,   -34,   -17,   194,   -10,   -17,   145,
     301,   227,   330,   -34,   186,   145,   196,   332,   -34,   302,
      -3,    -7,   -40,   202,   202,   197,   195,   195,   -61,   186,
      -7,   -40,   345,   299,    -3,    -7,   -40,   -18,   -70,   311,
     -18,   307,   350,   145,   300,   255,   194,   194,   307,   307,
     -67,   300,   300,   303,   -41,   304,   196,   196,   -68,   198,
     -69,   199,   -57,   -41,   298,   197,   197,   -15,   -41,   -59,
     -15,   298,   298,   145,   301,   110,   338,   -60,   339,   340,
     341,   301,   301,   302,   -36,   -56,   -21,   235,   305,   -21,
     302,   302,    -8,   326,   200,    12,    13,   349,   -36,   198,
     198,   199,   199,   306,   353,   354,    -8,   228,   -58,   201,
      79,    80,    81,   151,   234,    86,   245,   303,   236,   304,
     -58,   -58,   -37,   -38,   303,   303,   304,   304,    69,   237,
     118,   -37,   -38,   119,   200,   200,   -37,   -38,   239,   -58,
      70,    -9,   103,   151,   -58,   -58,   -58,   -58,   -58,   201,
     201,   248,   305,   258,   -10,    -9,   144,   260,    -7,   305,
     305,   171,   263,   172,   267,   116,   270,   306,   -10,   -32,
     -58,   -58,    -7,   173,   306,   306,   174,   175,   176,   177,
     178,   179,   -63,   -32,   180,   182,   144,   -11,   -62,   -58,
      70,   -25,   181,   151,   -58,   -58,   -58,   -58,   -58,   152,
     -64,   -11,   -71,   -49,   -71,   -25,   -49,   -49,   -49,   206,
     207,   208,   151,   210,   -71,   -70,   -70,   -71,   -71,   -71,
     -71,   -71,   -71,   266,   -16,   -71,   272,   -16,   183,   152,
     -26,   -65,   -27,   -71,   -70,   275,   144,   -58,   -58,   -70,
     -70,   -70,   -70,   -70,   -26,   203,   -27,   229,   230,   231,
     151,   233,   144,   144,   144,   144,   144,   204,   -58,   -42,
     -28,   -58,   -58,   -58,   -58,   -58,   -20,   -45,   278,   -20,
     -49,   212,   -45,   151,   -28,   -49,   -49,   -49,   279,   152,
     280,   151,   151,   151,   151,   151,   254,   -29,   256,   151,
     182,   182,   182,   144,   182,   152,   152,   152,   152,   152,
     -30,   -29,   282,   -31,   -35,   -33,   268,   151,   -12,   148,
     118,   -66,   118,   277,   -30,   283,   144,   -31,   -35,   -33,
     -58,   -58,   -12,   284,   144,   144,   144,   144,   144,   144,
     288,   182,   144,   183,   183,   183,   152,   183,   -44,   148,
     204,   -58,   212,   -44,   -58,   -58,   -58,   -58,   -58,   182,
     144,   151,   153,    20,    21,   289,   113,   151,   285,   152,
     115,   286,   -39,   -34,   -40,   -41,   -37,   152,   152,   152,
     152,   152,   152,   -38,   183,   152,   -39,   -34,   -40,   -41,
     -37,   184,   153,   290,   329,   151,   -72,   -38,   -72,   148,
     309,   310,   183,   152,   144,   154,   -19,   324,   -72,   313,
     144,   -72,   -72,   -72,   -72,   -72,   -72,   -46,   148,   -72,
     314,   315,    90,   -46,   -46,   151,   -48,   -72,   317,   328,
     325,   -48,   -48,   -48,   185,   154,   -46,   182,   144,   213,
     -46,   -46,   153,   -50,   327,   -67,   -67,   152,   -50,   -50,
     -50,   331,   333,   152,   336,   342,   148,   343,   153,   153,
     153,   153,   153,   344,   -67,   346,    11,   347,   144,   -67,
     -67,   -67,   -67,   -67,   348,   352,    26,   215,     0,   148,
     183,   152,     0,     0,     0,   154,   150,   148,   148,   251,
       0,   253,     0,   -68,   -68,   148,   184,   184,   184,   153,
     184,   154,   154,   154,   154,   154,     0,     0,     0,     0,
       0,   152,   -68,   148,     0,   149,   150,   -68,   -68,   -68,
     -68,   -68,   153,     0,   -48,   -69,   -69,   -48,   -48,   -48,
     153,   153,   153,   153,   153,   153,   114,   184,   153,   185,
     185,   185,   154,   185,   -69,   149,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,     0,   184,   153,   148,     0,     0,
       0,     0,     0,   148,     0,   154,   150,   147,    91,    92,
       0,   146,     0,   154,   154,   154,   154,   154,   154,     0,
     185,   154,     0,   -57,   -57,   150,     0,   -51,     0,     0,
       0,   148,   -51,   -51,   -51,   149,    93,   147,   185,   154,
     153,   146,   -57,   -53,   -53,     0,   153,   -57,   -57,   -57,
     -57,   -57,     0,   112,   149,   -50,   111,     0,   -50,   -50,
     -50,   148,   -53,   150,     0,     0,     0,   -53,   -53,   -53,
      95,   -53,     0,   184,   153,     0,     0,     0,     0,     0,
       0,     0,     0,   154,     0,     0,   150,   147,     0,   154,
       0,   146,   149,     0,   150,   150,   150,   252,   150,     0,
       0,     0,   150,     0,   153,     0,   147,     0,   -61,   -61,
     146,     0,     0,     0,     0,   149,   185,   154,     0,     0,
     150,     0,     0,   149,   149,   149,     0,   149,     0,   -61,
       0,   149,   -61,   -61,   -61,   -61,   -61,     0,   133,     0,
     205,     0,     0,     0,   147,     0,     0,   154,   146,   149,
     135,     0,     0,   136,   137,   138,   139,   140,   141,     0,
       0,   142,     0,     0,   150,     0,     0,   147,     0,   143,
     150,   146,     0,     0,     0,   147,   250,     0,     0,   249,
       0,     0,     0,   147,     0,     0,     0,   146,     0,     0,
       0,     0,     0,   149,     0,     0,     0,     0,   150,   149,
       0,   147,     0,     0,     0,   146,   -32,     0,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   149,   150,   -32,
       0,   -32,   -32,     0,     0,     0,     0,   -32,     0,     0,
       0,     0,     0,     0,   -33,   147,   -33,     0,     0,   146,
       0,   147,     0,     0,     0,   146,   -33,   149,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,   -33,     0,     0,     0,   147,
     -36,     0,   -36,   146,     0,   -36,   -36,   -36,   323,   -36,
     -36,     0,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   -36,     0,   -36,   -36,     0,     0,   147,
     -25,   -36,   -25,   146,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,   -25,   -25,   -26,     0,   -26,
       0,   -25,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,     0,   -26,   -26,   -27,     0,   -27,     0,   -26,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,
     -27,   -28,     0,   -28,     0,   -27,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,     0,   -28,   -28,   -29,     0,
     -29,     0,   -28,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,     0,   -29,   -29,   -30,     0,   -30,     0,   -29,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
     -30,   -30,   -31,     0,   -31,     0,   -30,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,     0,   -31,   -31,   -35,
       0,   -35,     0,   -31,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,   -35,   -35,   -33,     0,   -33,     0,
     -35,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,   -33,   -33,   -39,     0,   -39,     0,   -33,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,   -39,
      -8,     0,    -8,     0,   -39,    -8,    -8,    -8,    -8,    -8,
      -8,     0,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,    -8,     0,    -8,    -8,    -9,     0,    -9,
       0,    -8,    -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,
      -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,     0,     0,
      -9,     0,    -9,    -9,   -10,     0,   -10,     0,    -9,   -10,
     -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,     0,   -10,
     -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,   -10,
     -10,   -34,     0,   -34,     0,   -10,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,   -34,   -34,    -7,     0,
      -7,     0,   -34,    -7,    -7,    -7,    -7,    -7,    -7,     0,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,
       0,    -7,     0,    -7,    -7,   -40,     0,   -40,     0,    -7,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,
     -40,   -40,   -41,     0,   -41,     0,   -40,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,   -41,     0,   -41,   -41,   -36,
       0,   -36,     0,   -41,   -36,   -36,   -36,   351,   -36,   -36,
       0,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,   -36,   -36,   -37,     0,   -37,     0,
     -36,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,   -37,   -37,   -38,     0,   -38,     0,   -37,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,   -38,
      28,     0,    29,     0,   -38,   155,   156,   157,     0,   158,
     159,     0,    35,   160,     0,    37,    38,    39,    40,    41,
      42,     0,     0,    43,     0,   161,    83,    28,     0,    29,
       0,    45,   155,   156,   157,     0,   158,   159,     0,    35,
     160,     0,    37,    38,    39,    40,    41,    42,     0,     0,
      43,     0,   161,   109,   -24,     0,   -24,     0,    45,   -24,
     -24,   -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,   -24,
     -24,   -23,     0,   -23,     0,   -24,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,   -23,    28,     0,
      29,     0,   -23,   155,   156,   157,     0,   158,   159,     0,
      35,   160,     0,    37,    38,    39,    40,    41,    42,     0,
       0,    43,     0,   161,   225,   -32,     0,   -32,     0,    45,
     -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
     -32,   -32,   -25,     0,   -25,     0,   -32,   -25,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -25,     0,     0,   -25,     0,   -25,   -25,   -26,
       0,   -26,     0,   -25,   -26,   -26,   -26,     0,   -26,   -26,
       0,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,   -26,   -26,   -27,     0,   -27,     0,
     -26,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,   -27,   -27,   -28,     0,   -28,     0,   -27,   -28,   -28,
     -28,     0,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,   -28,
     -29,     0,   -29,     0,   -28,   -29,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,     0,   -29,   -29,   -30,     0,   -30,
       0,   -29,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,   -30,   -30,   -31,     0,   -31,     0,   -30,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,
     -31,    28,     0,    29,     0,   -31,   155,   156,   157,     0,
     158,   159,     0,    35,   160,     0,    37,    38,    39,    40,
      41,    42,     0,     0,    43,     0,   161,   243,   -35,     0,
     -35,     0,    45,   -35,   -35,   -35,     0,   -35,   -35,     0,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,     0,   -35,   -35,    28,     0,    29,     0,   -35,
     155,   156,   157,     0,   158,   159,     0,    35,   160,     0,
      37,    38,    39,    40,    41,    42,     0,     0,    43,     0,
     161,   264,   -33,     0,   -33,     0,    45,   -33,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,     0,   -33,   -33,    28,
       0,    29,     0,   -33,   155,   156,   157,     0,   158,   159,
       0,    35,   160,     0,    37,    38,    39,    40,    41,    42,
       0,     0,    43,     0,   161,   276,   -39,     0,   -39,     0,
      45,   -39,   -39,   -39,     0,   -39,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,
       0,   -39,   -39,    -8,     0,    -8,     0,   -39,    -8,    -8,
      -8,     0,    -8,    -8,     0,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,    -8,
      -9,     0,    -9,     0,    -8,    -9,    -9,    -9,     0,    -9,
      -9,     0,    -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,
      -9,     0,     0,    -9,     0,    -9,    -9,   -10,     0,   -10,
       0,    -9,   -10,   -10,   -10,     0,   -10,   -10,     0,   -10,
     -10,     0,   -10,   -10,   -10,   -10,   -10,   -10,     0,     0,
     -10,     0,   -10,   -10,   -34,     0,   -34,     0,   -10,   -34,
     -34,   -34,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,
     -34,    -7,     0,    -7,     0,   -34,    -7,    -7,    -7,     0,
      -7,    -7,     0,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,    -7,     0,    -7,    -7,   -40,     0,
     -40,     0,    -7,   -40,   -40,   -40,     0,   -40,   -40,     0,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,     0,   -40,   -40,   -41,     0,   -41,     0,   -40,
     -41,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,
     -41,   -41,    28,     0,    29,     0,   -41,   155,   156,   157,
       0,   158,   159,     0,    35,   160,     0,    37,    38,    39,
      40,    41,    42,     0,     0,    43,     0,   161,   321,    28,
       0,    29,     0,    45,   155,   156,   157,     0,   158,   159,
       0,    35,   160,     0,    37,    38,    39,    40,    41,    42,
       0,     0,    43,     0,   161,   337,   -37,     0,   -37,     0,
      45,   -37,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,   -37,   -37,   -38,     0,   -38,     0,   -37,   -38,   -38,
     -38,     0,   -38,   -38,     0,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,   -38,
      28,     0,    29,     0,   -38,    30,    31,    32,     0,    33,
      34,     0,    35,    36,     0,    37,    38,    39,    40,    41,
      42,     0,     0,    43,     0,    44,     0,    28,     0,    29,
       0,    45,   187,   188,   189,     0,   190,   191,     0,    35,
     192,     0,    37,    38,    39,    40,    41,    42,     0,     0,
      43,     0,   193,     0,    28,     0,    29,     0,    45,   291,
     292,   293,     0,   294,   295,     0,    35,   296,     0,    37,
      38,    39,    40,    41,    42,     0,     0,    43,     0,   297,
       0,    28,     0,    29,     0,    45,   155,   156,   157,     0,
     158,   159,     0,    35,   160,     0,    37,    38,    39,    40,
      41,    42,   -55,   -55,    43,     0,   161,     0,     0,     0,
       0,     0,    45,   -59,   -59,     0,     0,     0,     0,     0,
       0,   -55,     0,   -60,   -60,     0,   -55,   -55,   -55,   -55,
     -55,     0,   -59,   -56,   -56,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -60,   -63,   -63,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -56,   -62,   -62,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -63,   -64,   -64,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -62,   -65,   -65,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -64,   -66,   -66,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -65,   -52,   -52,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -66,   -54,   -54,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -52,   -19,   -19,     0,     0,   -52,   -52,   -52,
      95,   -52,   -54,   -70,   -70,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -19,   -67,   -67,     0,     0,   -19,   -19,   -19,
     -19,   -19,   -68,   -68,   -70,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -69,   -69,   -67,     0,     0,   -67,   -67,   -67,
     -67,   -67,     0,   -68,   -57,   -57,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -69,   -53,   -53,   -69,   -69,   -69,   -69,
     -69,     0,   -55,   -55,     0,   -57,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -59,   -59,   -53,     0,     0,   -53,   -53,
     -53,   216,   -53,   -55,   -60,   -60,   -55,   -55,   -55,   -55,
     -55,     0,   -56,   -56,   -59,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -63,   -63,     0,   -60,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -56,   -62,   -62,   -56,   -56,   -56,   -56,
     -56,     0,     0,   -63,   -64,   -64,   -63,   -63,   -63,   -63,
     -63,     0,   -65,   -65,     0,   -62,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -66,   -66,   -64,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -65,   -52,   -52,   -65,   -65,   -65,   -65,
     -65,     0,   -54,   -54,   -66,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -19,   -19,     0,   -52,     0,     0,   -52,   -52,
     -52,   216,   -52,   -54,     0,     0,   -54,   -54,   -54,   -54,
     -54,     0,     0,   -19,     0,     0,   -19,   -19,   -19,   -19,
     -19
};

static const yytype_int16 yycheck[] =
{
       0,    24,     3,     3,    24,     3,   161,     3,    14,     3,
      33,    14,    23,     1,    15,     3,     0,    15,    25,    15,
      43,    15,    25,   204,    24,    13,     3,     3,    16,    17,
      18,    19,    20,    21,    24,    33,    24,    33,   193,    33,
       3,     3,     3,    24,    32,    68,    69,   228,    68,     0,
      73,    43,    75,    15,    15,    75,    33,    24,     9,    14,
       0,    25,     3,    14,     3,     3,     0,     3,    68,     9,
      33,    33,    33,     1,    14,     3,    24,    24,    68,    24,
      14,    73,    24,   106,     0,    13,   106,    68,    16,    17,
      18,    19,    20,    21,    33,    33,    24,    33,    14,   122,
     123,    68,   122,     3,    32,    24,   129,   130,    25,   129,
     130,    24,    24,    30,     3,    15,    23,    84,    23,   142,
       0,    68,   122,    68,    29,    30,    25,    24,    23,   129,
     130,   123,   122,    22,    14,   158,    25,     0,     0,   129,
     130,   122,   297,    25,     4,     5,     9,     9,   129,   130,
     142,    14,    14,    23,    23,   122,    68,   180,    28,    29,
      30,    30,   129,   130,     0,    25,    23,   190,    28,    29,
      30,    68,    32,     9,     1,   122,     3,   122,    14,     3,
     203,    23,   129,   130,   129,   130,    13,    25,   180,    16,
      17,    18,    19,    20,    21,     0,   219,    24,   221,     0,
      22,   221,    25,    25,     9,    32,     0,    23,     9,    14,
     122,   203,     0,    14,   237,     9,   239,   129,   130,   239,
      14,     9,     3,     0,    23,   122,    14,   219,     4,     5,
      29,    30,   129,   130,    23,     0,   259,    14,    25,   259,
      23,    28,    29,    30,     9,   237,    25,    23,   271,    14,
      24,   271,    28,    29,    30,    31,    32,   280,   281,   226,
     280,     0,    24,   286,   287,     0,   286,     0,    24,     0,
       9,   294,    24,     0,     9,    14,     9,   244,     9,    14,
     280,    14,     9,    14,     0,    22,   286,    14,    25,   281,
     280,    23,   315,     9,   317,   287,   286,   317,    14,   280,
       0,     0,     0,   326,   327,   286,   326,   327,    25,   332,
       9,     9,   332,   280,    14,    14,    14,    22,    25,   286,
      25,   344,   345,   315,   344,     3,   326,   327,   351,   352,
      25,   351,   352,   280,     0,   280,   326,   327,    25,   286,
      25,   286,    25,     9,   344,   326,   327,    22,    14,    25,
      25,   351,   352,   345,   344,   322,   323,    25,   325,   326,
     327,   351,   352,   344,     0,    25,    22,    24,   280,    25,
     351,   352,     0,     9,   286,    23,    24,   344,    14,   326,
     327,   326,   327,   280,   351,   352,    14,    24,    25,   286,
      40,    41,    42,    43,    23,    45,    23,   344,    24,   344,
       4,     5,     0,     0,   351,   352,   351,   352,    12,    24,
      22,     9,     9,    25,   326,   327,    14,    14,    24,    23,
      24,     0,    72,    73,    28,    29,    30,    31,    32,   326,
     327,    25,   344,    23,     0,    14,    43,    23,     0,   351,
     352,     1,    23,     3,     3,    95,    23,   344,    14,     0,
       4,     5,    14,    13,   351,   352,    16,    17,    18,    19,
      20,    21,    25,    14,    24,    72,    73,     0,    25,    23,
      24,     0,    32,   123,    28,    29,    30,    31,    32,    43,
      25,    14,     1,    25,     3,    14,    28,    29,    30,   139,
     140,   141,   142,   143,    13,     4,     5,    16,    17,    18,
      19,    20,    21,    25,    22,    24,    23,    25,    72,    73,
       0,    25,     0,    32,    23,    23,   123,     4,     5,    28,
      29,    30,    31,    32,    14,    12,    14,   177,   178,   179,
     180,   181,   139,   140,   141,   142,   143,    24,    25,    25,
       0,    28,    29,    30,    31,    32,    22,    25,    25,    25,
      23,    29,    30,   203,    14,    28,    29,    30,    25,   123,
      25,   211,   212,   213,   214,   215,   216,     0,   218,   219,
     177,   178,   179,   180,   181,   139,   140,   141,   142,   143,
       0,    14,    23,     0,     0,     0,   236,   237,     0,    43,
      22,    25,    22,    25,    14,    25,   203,    14,    14,    14,
       4,     5,    14,    25,   211,   212,   213,   214,   215,   216,
      23,   218,   219,   177,   178,   179,   180,   181,    25,    73,
      24,    25,    29,    30,    28,    29,    30,    31,    32,   236,
     237,   281,    43,    23,    24,    23,    90,   287,    25,   203,
      94,    25,     0,     0,     0,     0,     0,   211,   212,   213,
     214,   215,   216,     0,   218,   219,    14,    14,    14,    14,
      14,    72,    73,    23,   314,   315,     1,    14,     3,   123,
      23,    23,   236,   237,   281,    43,    25,    23,    13,    24,
     287,    16,    17,    18,    19,    20,    21,    23,   142,    24,
      24,    24,    28,    29,    30,   345,    23,    32,    24,     3,
      25,    28,    29,    30,    72,    73,    25,   314,   315,    28,
      29,    30,   123,    23,    25,     4,     5,   281,    28,    29,
      30,    23,    23,   287,    23,    25,   180,    25,   139,   140,
     141,   142,   143,    25,    23,    23,     3,    23,   345,    28,
      29,    30,    31,    32,    23,    25,    21,   149,    -1,   203,
     314,   315,    -1,    -1,    -1,   123,    43,   211,   212,   213,
      -1,   215,    -1,     4,     5,   219,   177,   178,   179,   180,
     181,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
      -1,   345,    23,   237,    -1,    43,    73,    28,    29,    30,
      31,    32,   203,    -1,    25,     4,     5,    28,    29,    30,
     211,   212,   213,   214,   215,   216,    93,   218,   219,   177,
     178,   179,   180,   181,    23,    73,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    -1,   236,   237,   281,    -1,    -1,
      -1,    -1,    -1,   287,    -1,   203,   123,    43,     4,     5,
      -1,    43,    -1,   211,   212,   213,   214,   215,   216,    -1,
     218,   219,    -1,     4,     5,   142,    -1,    23,    -1,    -1,
      -1,   315,    28,    29,    30,   123,    32,    73,   236,   237,
     281,    73,    23,     4,     5,    -1,   287,    28,    29,    30,
      31,    32,    -1,    89,   142,    25,    88,    -1,    28,    29,
      30,   345,    23,   180,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    -1,   314,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   281,    -1,    -1,   203,   123,    -1,   287,
      -1,   123,   180,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,    -1,   345,    -1,   142,    -1,     4,     5,
     142,    -1,    -1,    -1,    -1,   203,   314,   315,    -1,    -1,
     237,    -1,    -1,   211,   212,   213,    -1,   215,    -1,    25,
      -1,   219,    28,    29,    30,    31,    32,    -1,     1,    -1,
       3,    -1,    -1,    -1,   180,    -1,    -1,   345,   180,   237,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,   281,    -1,    -1,   203,    -1,    32,
     287,   203,    -1,    -1,    -1,   211,   212,    -1,    -1,   211,
      -1,    -1,    -1,   219,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,   315,   287,
      -1,   237,    -1,    -1,    -1,   237,     1,    -1,     3,    -1,
      -1,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,   315,   345,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   281,     3,    -1,    -1,   281,
      -1,   287,    -1,    -1,    -1,   287,    13,   345,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,   315,
       1,    -1,     3,   315,    -1,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,   345,
       1,    32,     3,   345,    -1,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
      -1,    32,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,    -1,    32,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,    -1,    32,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,    -1,    32,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,    32,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,    -1,    32,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,    -1,    32,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,
      32,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,    -1,    32,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,    -1,    32,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
      -1,    32,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,    -1,    32,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,    -1,    32,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,    -1,    32,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,    32,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,    -1,    32,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,    -1,    32,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,
      32,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,    -1,    32,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,     1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,     1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,     1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,     1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,     1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,     1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,     1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
       1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    -1,     1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    -1,     1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      -1,     1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,     4,     5,    24,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    32,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,     4,     5,    -1,    28,    29,    30,    31,
      32,    -1,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,    23,     4,     5,    -1,    -1,    28,    29,    30,
      31,    32,     4,     5,    25,    -1,    -1,    28,    29,    30,
      31,    32,     4,     5,    25,    -1,    -1,    28,    29,    30,
      31,    32,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,     4,     5,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,     4,     5,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,     4,     5,    25,    -1,    -1,    28,    29,    30,
      31,    32,     4,     5,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,     4,     5,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,     4,     5,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,     4,     5,    25,    -1,    -1,    28,    29,    30,
      31,    32,     4,     5,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,    -1,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    25,    -1,    -1,    28,    29,    30,    31,
      32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    35,    36,    37,    38,    39,     3,    15,    33,
       0,    37,    23,    24,     3,    33,    23,    14,    40,    41,
      23,    24,     3,    15,    25,    22,    40,     3,     1,     3,
       6,     7,     8,    10,    11,    13,    14,    16,    17,    18,
      19,    20,    21,    24,    26,    32,    38,    42,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    14,    25,    12,
      24,    24,    24,    24,    53,    24,     3,    15,     3,    60,
      60,    60,    53,    27,    44,    45,    60,    23,    30,    29,
      28,     4,     5,    32,    64,    31,     3,    15,    45,    53,
       3,    43,     3,    60,    53,    23,    46,     3,    25,    27,
      45,    55,    56,    57,    59,    57,    60,     3,    22,    25,
      25,    25,    25,    46,     3,    23,    23,    45,    53,     9,
      25,    45,    45,     1,     3,    13,    16,    17,    18,    19,
      20,    21,    24,    32,    42,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     6,     7,     8,    10,    11,
      14,    26,    38,    46,    47,    48,    49,    50,    51,    52,
      53,     1,     3,    13,    16,    17,    18,    19,    20,    21,
      24,    32,    42,    61,    62,    63,    53,     6,     7,     8,
      10,    11,    14,    26,    38,    46,    47,    48,    49,    50,
      51,    52,    53,    12,    24,     3,    60,    60,    60,    53,
      60,    30,    29,    28,    32,    64,    31,    24,    24,    24,
      53,    24,     3,    15,    33,    27,    44,    23,    24,    60,
      60,    60,    53,    60,    23,    24,    24,    24,    53,    24,
       3,    15,    33,    27,    44,    23,    53,    43,    25,    55,
      56,    57,    59,    57,    60,     3,    60,    53,    23,    46,
      23,     3,    33,    23,    27,    43,    25,     3,    60,    53,
      23,    46,    23,     3,    33,    23,    27,    25,    25,    25,
      25,    46,    23,    25,    25,    25,    25,    46,    23,    23,
      23,     6,     7,     8,    10,    11,    14,    26,    38,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    53,    23,
      23,    45,    53,    24,    24,    24,    53,    24,     3,    15,
      33,    27,    44,     9,    23,    25,     9,    25,     3,    60,
      53,    23,    46,    23,     3,    33,    23,    27,    45,    45,
      45,    45,    25,    25,    25,    46,    23,    23,    23,    45,
      53,     9,    25,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    38,    38,
      38,    39,    39,    40,    40,    41,    41,    41,    41,    42,
      43,    43,    43,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    46,    47,    47,    48,    48,    49,    50,
      51,    52,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    63,    63,    63,
      63,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     4,     3,     3,
       3,     6,     7,     1,     0,     4,     5,     2,     3,     4,
       3,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     5,     7,     7,     3,
       5,     5,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     1,     1,     1,
       1,     1,     1
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
#line 2138 "./src/syntax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 108 "./src/syntax.y"
                  {
    (yyval.producao) = aloca_no("paramList");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2148 "./src/syntax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 113 "./src/syntax.y"
          {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2156 "./src/syntax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 118 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2164 "./src/syntax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 121 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2172 "./src/syntax.tab.c"
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
#line 2200 "./src/syntax.tab.c"
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
#line 2224 "./src/syntax.tab.c"
    break;

  case 9: /* variableParam: TYPE LISTTYPE LEXICAL_ERROR  */
#line 168 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2233 "./src/syntax.tab.c"
    break;

  case 10: /* variableParam: TYPE LEXICAL_ERROR ';'  */
#line 172 "./src/syntax.y"
                           {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2242 "./src/syntax.tab.c"
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
#line 2269 "./src/syntax.tab.c"
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
#line 2300 "./src/syntax.tab.c"
    break;

  case 13: /* functionParams: functionParamsList  */
#line 228 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2308 "./src/syntax.tab.c"
    break;

  case 14: /* functionParams: %empty  */
#line 231 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2316 "./src/syntax.tab.c"
    break;

  case 15: /* functionParamsList: functionParamsList ',' TYPE ID  */
#line 236 "./src/syntax.y"
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
#line 2342 "./src/syntax.tab.c"
    break;

  case 16: /* functionParamsList: functionParamsList ',' TYPE LISTTYPE ID  */
#line 257 "./src/syntax.y"
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
#line 2372 "./src/syntax.tab.c"
    break;

  case 17: /* functionParamsList: TYPE ID  */
#line 282 "./src/syntax.y"
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
#line 2397 "./src/syntax.tab.c"
    break;

  case 18: /* functionParamsList: TYPE LISTTYPE ID  */
#line 302 "./src/syntax.y"
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
#line 2425 "./src/syntax.tab.c"
    break;

  case 19: /* call: ID '(' argList ')'  */
#line 327 "./src/syntax.y"
                     {    
    (yyval.producao) = aloca_no("call");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-3].terminal));
  }
#line 2437 "./src/syntax.tab.c"
    break;

  case 20: /* argList: argList ',' ID  */
#line 336 "./src/syntax.y"
                 {
    (yyval.producao) = aloca_no("argList");
  
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[0].terminal));
  }
#line 2450 "./src/syntax.tab.c"
    break;

  case 21: /* argList: ID  */
#line 344 "./src/syntax.y"
       {
    (yyval.producao) = aloca_no("argList");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2461 "./src/syntax.tab.c"
    break;

  case 22: /* argList: %empty  */
#line 350 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2469 "./src/syntax.tab.c"
    break;

  case 23: /* stmList: stmList stmt  */
#line 355 "./src/syntax.y"
               {
    (yyval.producao) = aloca_no("stmList");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2479 "./src/syntax.tab.c"
    break;

  case 24: /* stmList: stmt  */
#line 360 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2487 "./src/syntax.tab.c"
    break;

  case 25: /* stmt: expStatement  */
#line 365 "./src/syntax.y"
               {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2495 "./src/syntax.tab.c"
    break;

  case 26: /* stmt: compoundStatement  */
#line 368 "./src/syntax.y"
                      {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2503 "./src/syntax.tab.c"
    break;

  case 27: /* stmt: ifStatement  */
#line 371 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2511 "./src/syntax.tab.c"
    break;

  case 28: /* stmt: forStatement  */
#line 374 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2519 "./src/syntax.tab.c"
    break;

  case 29: /* stmt: returnStatement  */
#line 377 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2527 "./src/syntax.tab.c"
    break;

  case 30: /* stmt: inputStatement  */
#line 380 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2535 "./src/syntax.tab.c"
    break;

  case 31: /* stmt: outputStatement  */
#line 383 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2543 "./src/syntax.tab.c"
    break;

  case 32: /* stmt: variableParam  */
#line 386 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2551 "./src/syntax.tab.c"
    break;

  case 33: /* expStatement: expression ';'  */
#line 391 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 2559 "./src/syntax.tab.c"
    break;

  case 34: /* compoundStatement: '{' stmList '}'  */
#line 397 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 2567 "./src/syntax.tab.c"
    break;

  case 35: /* compoundStatement: '{' '}'  */
#line 400 "./src/syntax.y"
            {
    (yyval.producao) = NULL;
  }
#line 2575 "./src/syntax.tab.c"
    break;

  case 36: /* ifStatement: IF '(' expression ')' stmt  */
#line 406 "./src/syntax.y"
                             {
    (yyval.producao) = aloca_no("ifStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 2588 "./src/syntax.tab.c"
    break;

  case 37: /* ifStatement: IF '(' expression ')' stmt ELSE stmt  */
#line 414 "./src/syntax.y"
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
#line 2604 "./src/syntax.tab.c"
    break;

  case 38: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 427 "./src/syntax.y"
                                                        {
    (yyval.producao) = aloca_no("forStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-4].producao);
    (yyval.producao)->filhos[2] = (yyvsp[-3].producao);
    (yyval.producao)->filhos[3] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[4] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-6].terminal));
  }
#line 2619 "./src/syntax.tab.c"
    break;

  case 39: /* returnStatement: RETURN expression ';'  */
#line 439 "./src/syntax.y"
                        {
    (yyval.producao) = aloca_no("returnStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
  }
#line 2629 "./src/syntax.tab.c"
    break;

  case 40: /* inputStatement: INPUT '(' ID ')' ';'  */
#line 446 "./src/syntax.y"
                       {
    (yyval.producao) = aloca_no("inputStatement");

    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
  }
#line 2643 "./src/syntax.tab.c"
    break;

  case 41: /* outputStatement: OUTPUT '(' term ')' ';'  */
#line 457 "./src/syntax.y"
                          {
    (yyval.producao) = aloca_no("outputStatement");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] =  (yyvsp[-2].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 2655 "./src/syntax.tab.c"
    break;

  case 42: /* expression: ID ASSIGN expression  */
#line 466 "./src/syntax.y"
                        {
    (yyval.producao) = aloca_no("expression");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2669 "./src/syntax.tab.c"
    break;

  case 43: /* expression: orExpression  */
#line 475 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2677 "./src/syntax.tab.c"
    break;

  case 44: /* orExpression: orExpression OR andExpression  */
#line 480 "./src/syntax.y"
                                {
    (yyval.producao) = aloca_no("orExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));

  }
#line 2691 "./src/syntax.tab.c"
    break;

  case 45: /* orExpression: andExpression  */
#line 489 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2699 "./src/syntax.tab.c"
    break;

  case 46: /* andExpression: andExpression AND relationalExpression  */
#line 494 "./src/syntax.y"
                                         {
    (yyval.producao) = aloca_no("andExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2712 "./src/syntax.tab.c"
    break;

  case 47: /* andExpression: relationalExpression  */
#line 502 "./src/syntax.y"
                         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2720 "./src/syntax.tab.c"
    break;

  case 48: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 507 "./src/syntax.y"
                                             {
    (yyval.producao) = aloca_no("relationalExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2733 "./src/syntax.tab.c"
    break;

  case 49: /* relationalExpression: listExpression  */
#line 515 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2741 "./src/syntax.tab.c"
    break;

  case 50: /* listExpression: arithmExpression listOP listExpression  */
#line 520 "./src/syntax.y"
                                         {
    (yyval.producao) = aloca_no("listExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);
  }
#line 2752 "./src/syntax.tab.c"
    break;

  case 51: /* listExpression: arithmExpression  */
#line 526 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2760 "./src/syntax.tab.c"
    break;

  case 52: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 531 "./src/syntax.y"
                                                  {
    (yyval.producao) = aloca_no("arithmExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2773 "./src/syntax.tab.c"
    break;

  case 53: /* arithmExpression: arithmMulDivExpression  */
#line 539 "./src/syntax.y"
                           {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2781 "./src/syntax.tab.c"
    break;

  case 54: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 544 "./src/syntax.y"
                                      {
    (yyval.producao) = aloca_no("arithmMulDivExpression");
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 2794 "./src/syntax.tab.c"
    break;

  case 55: /* arithmMulDivExpression: term  */
#line 552 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2802 "./src/syntax.tab.c"
    break;

  case 56: /* term: const  */
#line 557 "./src/syntax.y"
        {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2810 "./src/syntax.tab.c"
    break;

  case 57: /* term: call  */
#line 560 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2818 "./src/syntax.tab.c"
    break;

  case 58: /* term: ID  */
#line 563 "./src/syntax.y"
       {
    (yyval.producao) = aloca_no("");
    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 2827 "./src/syntax.tab.c"
    break;

  case 59: /* term: unaryTerm  */
#line 567 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2835 "./src/syntax.tab.c"
    break;

  case 60: /* term: immutable  */
#line 570 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2843 "./src/syntax.tab.c"
    break;

  case 61: /* term: error  */
#line 573 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2852 "./src/syntax.tab.c"
    break;

  case 62: /* unaryTerm: '!' term  */
#line 579 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
    
    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 2864 "./src/syntax.tab.c"
    break;

  case 63: /* unaryTerm: '%' term  */
#line 586 "./src/syntax.y"
             {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 2876 "./src/syntax.tab.c"
    break;

  case 64: /* unaryTerm: '?' term  */
#line 593 "./src/syntax.y"
             {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 2888 "./src/syntax.tab.c"
    break;

  case 65: /* unaryTerm: SUB_ADD term  */
#line 600 "./src/syntax.y"
                 {
    (yyval.producao) = aloca_no("unaryTerm");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 2900 "./src/syntax.tab.c"
    break;

  case 66: /* immutable: '(' expression ')'  */
#line 610 "./src/syntax.y"
                     {
    (yyval.producao) = aloca_no("immutable");
    (yyval.producao)->filhos[0] = aloca_no("");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 2914 "./src/syntax.tab.c"
    break;

  case 67: /* const: INT  */
#line 621 "./src/syntax.y"
      {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");
    
    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2925 "./src/syntax.tab.c"
    break;

  case 68: /* const: FLOAT  */
#line 627 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2936 "./src/syntax.tab.c"
    break;

  case 69: /* const: STRING  */
#line 633 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2947 "./src/syntax.tab.c"
    break;

  case 70: /* const: NIL  */
#line 639 "./src/syntax.y"
        {
    (yyval.producao) = aloca_no("const");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2958 "./src/syntax.tab.c"
    break;

  case 71: /* listOP: FUNCTION  */
#line 647 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("listOp");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2969 "./src/syntax.tab.c"
    break;

  case 72: /* listOP: INFIX  */
#line 653 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("listOp");
    (yyval.producao)->filhos[0] = aloca_no("");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2980 "./src/syntax.tab.c"
    break;


#line 2984 "./src/syntax.tab.c"

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

#line 660 "./src/syntax.y"


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

