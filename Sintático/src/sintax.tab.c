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
#line 5 "./src/sintax.y"

  #include <stdio.h>
  #include "../lib/arvore.h"
  #include "../lib/colors.h"
  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex(void);
  extern int yylex_destroy(void);
  int error = 0;


#line 83 "sintax.tab.c"

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

#include "sintax.tab.h"
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
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_paramList = 35,                 /* paramList  */
  YYSYMBOL_param = 36,                     /* param  */
  YYSYMBOL_variableParam = 37,             /* variableParam  */
  YYSYMBOL_var = 38,                       /* var  */
  YYSYMBOL_typeSpec = 39,                  /* typeSpec  */
  YYSYMBOL_functionParam = 40,             /* functionParam  */
  YYSYMBOL_functionParams = 41,            /* functionParams  */
  YYSYMBOL_functionParamsList = 42,        /* functionParamsList  */
  YYSYMBOL_call = 43,                      /* call  */
  YYSYMBOL_argList = 44,                   /* argList  */
  YYSYMBOL_stmList = 45,                   /* stmList  */
  YYSYMBOL_stmt = 46,                      /* stmt  */
  YYSYMBOL_expStatement = 47,              /* expStatement  */
  YYSYMBOL_compoundStatement = 48,         /* compoundStatement  */
  YYSYMBOL_ifStatement = 49,               /* ifStatement  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_forStatement = 51,              /* forStatement  */
  YYSYMBOL_returnStatement = 52,           /* returnStatement  */
  YYSYMBOL_inputStatement = 53,            /* inputStatement  */
  YYSYMBOL_outputStatement = 54,           /* outputStatement  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_orExpression = 56,              /* orExpression  */
  YYSYMBOL_andExpression = 57,             /* andExpression  */
  YYSYMBOL_relationalExpression = 58,      /* relationalExpression  */
  YYSYMBOL_listExpression = 59,            /* listExpression  */
  YYSYMBOL_arithmExpression = 60,          /* arithmExpression  */
  YYSYMBOL_arithmMulDivExpression = 61,    /* arithmMulDivExpression  */
  YYSYMBOL_term = 62,                      /* term  */
  YYSYMBOL_unaryTerm = 63,                 /* unaryTerm  */
  YYSYMBOL_immutable = 64,                 /* immutable  */
  YYSYMBOL_const = 65,                     /* const  */
  YYSYMBOL_listOP = 66                     /* listOP  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2625

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


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
      15,    16,    17,    18,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,   102,   104,   108,   110,   114,   116,   121,
     125,   127,   131,   135,   137,   141,   143,   147,   151,   152,
     153,   156,   158,   162,   164,   166,   168,   170,   172,   174,
     176,   180,   184,   186,   190,   190,   196,   200,   202,   206,
     210,   214,   216,   220,   222,   226,   228,   232,   234,   238,
     240,   244,   246,   250,   252,   256,   258,   260,   262,   264,
     268,   270,   272,   274,   279,   283,   285,   287,   289,   293,
     295
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
  "MUL_DIV", "SUB_ADD", "$accept", "program", "paramList", "param",
  "variableParam", "var", "typeSpec", "functionParam", "functionParams",
  "functionParamsList", "call", "argList", "stmList", "stmt",
  "expStatement", "compoundStatement", "ifStatement", "$@1",
  "forStatement", "returnStatement", "inputStatement", "outputStatement",
  "expression", "orExpression", "andExpression", "relationalExpression",
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
     276,   277,   278
};
#endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,     4,    17,    16,    18,    20,   212,    36,   290,  -216,
      58,     6,   286,    21,    74,    99,    75,    70,    86,   124,
     144,   908,    92,   641,   102,   115,   120,    22,   127,    87,
    1066,  1076,  1151,   162,   162,   162,   452,   211,   162,    80,
     297,  1203,    81,   107,   109,   114,   129,   131,   133,   136,
     175,   -19,   216,   243,   285,   273,  1277,  1336,  1366,  1398,
    1431,   159,   537,    34,   231,   693,   452,   217,   219,   537,
      73,  1452,  1462,  1538,   151,   153,  1520,  1575,  2383,   228,
     154,   162,   162,   162,   702,   740,   162,   162,   162,   152,
     246,   180,   186,   232,   237,   251,   173,   189,   537,  2394,
     193,  1609,   311,   289,   357,  2404,   371,  2414,   303,  2424,
     258,   300,  2311,   452,   234,   206,   209,   330,   317,   337,
     908,   322,   233,   452,   326,  2338,   349,   908,   236,     9,
    1021,   591,  2434,  2444,  2453,   773,   773,   773,   452,   773,
    2463,   -16,    41,   255,   299,    23,  2475,  2485,  2493,  2504,
    2515,   341,   351,   358,    44,   367,  1636,  1663,   354,  1690,
    1717,  1744,  1771,  1798,  1825,  1852,   338,   372,   307,   383,
     387,   391,   392,   693,   693,   693,   452,   693,   397,   403,
     404,   405,   410,   413,   418,   421,    66,   422,  1879,   426,
     401,   436,   441,   444,   445,   449,   450,   453,   439,   440,
     442,   443,   139,   461,  1906,   465,   420,   479,   480,   482,
     492,   496,   499,   501,   488,   509,   452,    34,   779,  2523,
    2533,  2545,   489,  2555,   773,   773,   773,   773,   773,   773,
     231,   693,   452,   490,   493,   537,  1933,  1960,   494,   495,
    1987,    34,   500,   503,   506,   507,   508,   824,   231,   693,
     452,   512,   514,   537,   528,  2014,   515,   518,   534,   231,
     693,   452,   521,   522,   537,   543,  2041,   536,   540,   555,
     541,   239,  2563,   224,   343,   385,  2574,   411,  2585,   542,
     546,   547,  2068,  2095,   537,  2122,  2149,  2176,   264,   548,
     556,   559,   560,   572,   578,   537,   579,   580,   582,   567,
     574,   575,   588,   593,   537,   594,   595,   596,  2593,   545,
     586,  2311,   452,   585,   589,   601,  2311,   452,   602,   604,
    2311,   452,  2203,  2230,   330,   603,   610,   621,   330,   608,
     626,   631,   330,   616,   634,  2365,   636,  2311,   639,  2338,
     491,  2257,   587,   646,   632,   648,   452,   452,   452,   630,
     633,   638,  2338,  2338,  2338,   650,   652,   657,  2365,  2311,
    2338,  2284,   659,   665
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,   676,    10,   -58,     0,  -216,  -216,  -216,
     642,  -215,  -155,   140,   143,   167,   170,  -128,   223,   254,
     278,   323,    72,  1263,  1208,  1156,   945,  1102,   662,   513,
     770,   899,  1027,   523
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   157,    13,   158,     7,    18,    19,
      41,    92,    76,    77,   159,   160,   161,   119,   162,   163,
     164,   165,   166,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   237,   271,     6,   -42,   -10,    93,   -10,     1,   -42,
       5,    81,   -10,     5,   224,    17,    -2,     9,    -4,     8,
      -5,    40,    61,    67,   215,    23,   288,    84,    85,    14,
       1,    39,    -4,   255,    -5,    29,    -6,    91,    30,    31,
      32,    33,    34,    35,    16,   233,    36,    23,   -50,   266,
      -6,   -50,   -50,   -50,    38,   227,   -20,    29,    -3,   -20,
      30,    31,    32,    33,    34,    35,   -44,   251,    36,    23,
     225,   -44,    -3,    20,    -8,    -7,    38,   -57,   -57,    29,
     -30,   -12,    30,    31,    32,    33,    34,    35,    -8,    -7,
      36,   -68,   -68,    50,   -30,   -12,   -57,    63,    38,    68,
     239,   -57,   -57,   -57,   -57,   -57,   129,   -23,    74,   -24,
     -68,    21,   190,   129,   -25,   -68,   -68,   -68,   -68,   -68,
      40,   -23,   189,   -24,   -14,   206,    64,    40,   -25,   -26,
      39,   -27,   257,   -28,    90,   205,   -29,    39,    95,    65,
     262,   182,    23,   -26,    66,   -27,    22,   -28,   268,   -13,
     -29,    69,    29,   -33,   -31,    30,    31,    32,    33,    34,
      35,    42,    89,    36,    43,    70,   -16,   -33,   -31,   -16,
     182,    38,   279,   -38,   -15,    29,    99,   -15,    30,    31,
      32,    33,    34,    35,   198,   118,    36,   -38,    44,   -37,
     290,    45,    50,   -32,    38,   124,   334,   214,    80,    50,
     336,   299,   -19,   -37,   338,   -19,   -39,   -32,   108,   -40,
     222,   109,    98,    11,    23,    12,   101,   151,   152,   153,
     -39,   154,   155,   -40,    29,     1,   234,    30,    31,    32,
      33,    34,    35,   -36,   167,    36,   -35,   156,    75,   -44,
      96,   113,    97,    38,    46,    82,   -44,   -36,   245,   -43,
     -35,    -9,   117,   225,   -43,   191,   -18,   110,   252,   -18,
     122,   108,   111,    43,   308,   126,   -46,   128,   207,   -41,
      43,    83,   -46,   -46,   263,    47,   112,    84,    85,   192,
     -46,   115,   193,   226,   -46,   -46,   108,    44,   270,   313,
      45,   -11,   208,   -11,    44,   209,   -50,    45,    11,    48,
      79,   -50,   -50,   -50,   281,    86,   114,   182,   -48,    -9,
      15,   190,   -45,   -48,   -48,   -48,   190,    83,   -45,   -45,
     190,   189,   292,   116,   -48,   182,   189,   -48,   -48,   -48,
     189,   241,   -57,   301,   -43,   194,   182,   190,   -34,   206,
      82,   -43,   120,    46,    49,   121,   123,   189,   210,   205,
      46,   125,   206,   206,   206,   238,   182,    79,   127,   190,
     206,   240,   205,   205,   205,   230,   195,   182,   -45,   189,
     205,   226,   -45,   -45,    47,   231,   182,   101,   284,   211,
     -47,    47,   232,   198,   325,   -47,   -47,   -47,   198,   329,
     196,   235,   198,   333,   -49,   101,   295,    -9,    48,   -49,
     -49,   -49,   256,   212,    79,    48,   101,   304,   -68,   198,
     -47,   214,   -65,   -47,   -47,   -47,   -66,   -67,   349,   350,
     351,   267,   -56,    79,   214,   214,   214,   312,   -58,   -59,
     -55,   198,   214,   247,   -30,   197,   -49,   248,   317,   -49,
     -49,   -49,   249,    49,   -23,   250,   253,   321,   213,   -24,
      49,   324,   -25,   -26,   191,   130,   328,   -27,   -28,   191,
     332,   -29,   258,   191,   259,   131,   260,   261,   132,   133,
     134,   135,   136,   137,   -30,   341,   138,   343,   192,   345,
     191,   193,   207,   192,   139,   264,   193,   192,   -23,   -24,
     193,   -25,   355,   356,   357,   207,   207,   207,   361,   362,
     363,   -26,   191,   207,   192,   -27,   208,   193,   -28,   209,
     -29,   269,   -11,   282,   272,   346,   283,   286,   287,   208,
     208,   208,   209,   209,   209,   -61,   192,   208,   -60,   193,
     209,   -62,   289,   -63,   194,   293,   -33,   294,   297,   194,
      23,   298,   -31,   194,   302,   303,    71,    72,    73,   147,
      29,    78,   -33,    30,    31,    32,    33,    34,    35,   306,
     194,    36,   210,   307,   -31,   195,   -41,   309,   322,    38,
     195,   310,   311,   -64,   195,   210,   210,   210,    94,   147,
     -38,   314,   194,   210,   315,   316,   -37,   -32,    -8,   196,
      -7,   195,   318,   211,   196,   -68,   -68,   -38,   196,   319,
     320,   107,   -37,   -32,    -8,    -7,   211,   211,   211,   323,
     -17,   347,   326,   195,   211,   196,   -68,   212,   -39,   -68,
     -68,   -68,   -68,   -68,   327,   330,   147,   331,   335,   -40,
     212,   212,   212,   337,   197,   -39,   147,   196,   212,   197,
     -40,   339,   340,   197,   342,   -57,   -57,   344,   219,   220,
     221,   147,   223,    62,   -36,   352,   348,   -36,   353,   358,
     197,   359,   213,   354,   -57,    63,   360,   -35,   228,   -57,
     -57,   -57,   -57,   -57,   -35,   213,   213,   213,   140,    10,
       0,     0,   197,   213,     0,     0,   242,   243,   244,   147,
     246,     0,     0,     0,     0,     0,   168,     0,   146,     0,
       0,     0,     0,     0,     0,   -69,   169,   178,   140,   170,
     171,   172,   173,   174,   175,   -69,     0,   176,   -69,   -69,
     -69,   -69,   -69,   -69,     0,   177,   -69,     0,   146,   147,
       0,     0,     0,     0,   -69,     0,     0,   147,   147,   147,
     147,   147,   278,   -70,   280,   147,     0,     0,   105,     0,
       0,     0,     0,   -70,     0,   140,   -70,   -70,   -70,   -70,
     -70,   -70,   291,   147,   -70,   140,     0,     0,     0,     0,
       0,     0,   -70,   300,   147,   146,   218,   140,   140,   140,
     140,   140,     0,   -57,   -57,   146,   131,     0,     0,   132,
     133,   134,   135,   136,   137,     0,     0,   138,     0,     0,
     146,     0,     0,   217,   -57,   139,   148,   -57,   -57,   -57,
     -57,   -57,     0,     0,     0,   178,   178,   178,   140,   178,
       0,     0,     0,     0,     0,   147,     0,   -31,     0,     0,
     147,     0,     0,     0,   147,   179,   148,   -31,   146,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,
       0,     0,     0,     0,     0,     0,   -31,     0,   140,   147,
     147,   147,     0,     0,     0,     0,   140,   140,   140,   140,
     140,   140,     0,   178,   140,     0,     0,     0,   146,     0,
       0,     0,     0,   148,     0,     0,   146,   146,   146,   276,
     146,   178,   140,   148,   146,     0,     0,     0,     0,     0,
       0,     0,   178,   140,     0,   148,   148,   148,   148,   148,
       0,    23,   146,     0,    24,    25,    26,     0,    27,    28,
       0,    29,     1,   146,    30,    31,    32,    33,    34,    35,
       0,     0,    36,     0,    37,   149,     0,     0,     0,     0,
      38,     0,     0,   179,   179,   179,   148,   179,     0,     0,
       0,     0,     0,     0,   140,     0,     0,     0,     0,   140,
       0,     0,     0,   140,   180,   149,     0,     0,     0,     0,
       0,     0,     0,     0,   146,     0,     0,     0,     0,   146,
       0,   144,     0,   146,     0,     0,   148,     0,   140,   140,
     140,     0,     0,     0,   148,   148,   148,   148,   148,   148,
       0,   179,   148,     0,     0,     0,     0,     0,   146,   146,
     146,   144,   149,     0,     0,     0,     0,     0,     0,   179,
     148,     0,   149,     0,     0,   -57,   -57,     0,   104,     0,
     179,   148,   106,   216,   149,   149,   149,   149,   149,     0,
       0,     0,     0,     0,     0,   217,   -57,     0,     0,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,   144,     0,
       0,     0,     0,   150,     0,     0,     0,     0,   144,     0,
     -65,   -65,   180,   180,   180,   149,   180,     0,     0,     0,
     -66,   -66,   148,   144,     0,     0,     0,   148,     0,   -65,
       0,   148,   181,   150,   -65,   -65,   -65,   -65,   -65,   -66,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,   149,   148,   148,   148,     0,
       0,   144,     0,   149,   149,   149,   149,   149,   149,     0,
     180,   149,     0,     0,     0,     0,     0,     0,   145,     0,
     150,     0,     0,     0,     0,     0,     0,     0,   180,   149,
     150,     0,     0,     0,     0,   -67,   -67,     0,     0,   180,
     149,   144,   150,   150,   150,   150,   150,     0,   145,   144,
     144,   275,     0,   277,   -67,     0,     0,   144,     0,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,   144,     0,     0,     0,     0,
     181,   181,   181,   150,   181,     0,   144,   -56,   -56,     0,
       0,   149,     0,     0,     0,   145,   149,     0,     0,     0,
     149,     0,   143,     0,     0,   145,   -56,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,     0,     0,   103,     0,
     145,     0,     0,   150,   142,   149,   149,   149,     0,     0,
       0,   150,   150,   150,   150,   150,   150,   144,   181,   150,
       0,     0,   144,     0,     0,     0,   144,     0,     0,   143,
       0,     0,     0,     0,   142,     0,   181,   150,   145,   143,
       0,   -52,   -52,     0,     0,     0,     0,   181,   150,   102,
       0,   144,   144,   144,   143,     0,     0,     0,     0,   141,
     -52,     0,     0,     0,     0,   -52,   -52,   -52,    88,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
       0,   142,     0,     0,     0,     0,   145,   145,   145,   141,
     145,   142,   143,     0,   145,     0,     0,     0,     0,   150,
     -54,   -54,     0,     0,   150,     0,   142,     0,   150,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,   -54,
       0,     0,     0,   145,   -54,   -54,   -54,   -54,   -54,     0,
     -58,   -58,   143,   150,   150,   150,   141,     0,     0,     0,
     143,   274,     0,     0,   142,     0,   141,     0,   143,   -58,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,     0,
       0,   141,   -59,   -59,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,   145,     0,     0,   143,     0,   145,
       0,   -59,     0,   145,   142,     0,   -59,   -59,   -59,   -59,
     -59,     0,   273,     0,     0,   -55,   -55,     0,     0,   141,
     142,     0,     0,     0,     0,     0,     0,     0,   145,   145,
     145,     0,     0,     0,   -55,     0,   -61,   -61,   142,   -55,
     -55,   -55,   -55,   -55,     0,     0,   -60,   -60,   143,   142,
       0,     0,     0,   143,     0,   -61,     0,   143,     0,   141,
     -61,   -61,   -61,   -61,   -61,   -60,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   141,     0,     0,     0,     0,
       0,     0,   143,   143,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,     0,     0,
     142,     0,     0,    23,   141,   142,   151,   152,   153,   142,
     154,   155,     0,    29,     1,     0,    30,    31,    32,    33,
      34,    35,   -62,   -62,    36,     0,   156,   100,     0,     0,
       0,     0,    38,     0,   142,   142,   142,     0,     0,     0,
       0,   -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,     0,     0,     0,     0,   141,     0,     0,   -22,     0,
     141,   -22,   -22,   -22,   141,   -22,   -22,     0,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,   -22,   -22,     0,     0,     0,     0,   -22,     0,   141,
     141,   141,   -21,     0,     0,   -21,   -21,   -21,     0,   -21,
     -21,     0,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,     0,     0,   -21,     0,   -21,   -21,     0,     0,    23,
       0,   -21,   151,   152,   153,     0,   154,   155,     0,    29,
       1,     0,    30,    31,    32,    33,    34,    35,     0,     0,
      36,     0,   156,   236,     0,     0,   -30,     0,    38,   -30,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,
     -30,     0,     0,   -23,     0,   -30,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,   -23,     0,     0,
     -24,     0,   -23,   -24,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,     0,   -24,   -24,     0,     0,   -25,     0,   -24,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,
     -25,   -25,     0,     0,   -26,     0,   -25,   -26,   -26,   -26,
       0,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,   -26,   -26,     0,
       0,   -27,     0,   -26,   -27,   -27,   -27,     0,   -27,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,   -27,   -27,     0,     0,   -28,     0,
     -27,   -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
       0,   -28,   -28,     0,     0,   -29,     0,   -28,   -29,   -29,
     -29,     0,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,   -29,
       0,     0,    23,     0,   -29,   151,   152,   153,     0,   154,
     155,     0,    29,     1,     0,    30,    31,    32,    33,    34,
      35,     0,     0,    36,     0,   156,   254,     0,     0,    23,
       0,    38,   151,   152,   153,     0,   154,   155,     0,    29,
       1,     0,    30,    31,    32,    33,    34,    35,     0,     0,
      36,     0,   156,   265,     0,     0,   -33,     0,    38,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,
     -33,     0,     0,    23,     0,   -33,   151,   152,   153,     0,
     154,   155,     0,    29,     1,     0,    30,    31,    32,    33,
      34,    35,     0,     0,    36,     0,   156,   285,     0,     0,
     -31,     0,    38,   -31,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,     0,   -31,   -31,     0,     0,    23,     0,   -31,
     151,   152,   153,     0,   154,   155,     0,    29,     1,     0,
      30,    31,    32,    33,    34,    35,     0,     0,    36,     0,
     156,   296,     0,     0,    23,     0,    38,   151,   152,   153,
       0,   154,   155,     0,    29,     1,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    36,     0,   156,   305,     0,
       0,   -38,     0,    38,   -38,   -38,   -38,     0,   -38,   -38,
       0,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,   -38,     0,     0,   -37,     0,
     -38,   -37,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,   -37,   -37,     0,     0,   -32,     0,   -37,   -32,   -32,
     -32,     0,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,   -32,
       0,     0,    -8,     0,   -32,    -8,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
      -8,     0,     0,    -8,     0,    -8,    -8,     0,     0,    -7,
       0,    -8,    -7,    -7,    -7,     0,    -7,    -7,     0,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,    -7,    -7,     0,     0,   -39,     0,    -7,   -39,
     -39,   -39,     0,   -39,   -39,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,
     -39,     0,     0,   -40,     0,   -39,   -40,   -40,   -40,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,     0,   -40,   -40,     0,     0,
     -36,     0,   -40,   -36,   -36,   -36,     0,   -36,   -36,     0,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,     0,   -36,   -36,     0,     0,   -35,     0,   -36,
     -35,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,
     -35,   -35,     0,     0,    23,     0,   -35,   183,   184,   185,
       0,   186,   187,     0,    29,     1,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    36,     0,   188,     0,     0,
       0,    23,     0,    38,   199,   200,   201,     0,   202,   203,
       0,    29,     1,     0,    30,    31,    32,    33,    34,    35,
       0,     0,    36,     0,   204,     0,     0,     0,    23,     0,
      38,   151,   152,   153,     0,   154,   155,     0,    29,     1,
       0,    30,    31,    32,    33,    34,    35,   -63,   -63,    36,
       0,   156,     0,     0,     0,     0,     0,    38,   -64,   -64,
       0,     0,     0,     0,     0,     0,   -63,     0,   -51,   -51,
       0,   -63,   -63,   -63,   -63,   -63,     0,   -64,   -53,   -53,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -51,   -17,   -17,
       0,     0,   -51,   -51,   -51,    88,   -51,   -53,   -65,   -65,
       0,     0,   -53,   -53,   -53,   -53,   -53,   -17,   -66,   -66,
       0,     0,   -17,   -17,   -17,   -17,   -17,   -67,   -67,   -65,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -56,   -56,   -66,
       0,     0,   -66,   -66,   -66,   -66,   -66,     0,   -67,   -52,
     -52,   -67,   -67,   -67,   -67,   -67,     0,     0,   -56,   -54,
     -54,   -56,   -56,   -56,   -56,   -56,     0,   -58,   -58,     0,
     -52,     0,     0,   -52,   -52,   -52,   229,   -52,   -59,   -59,
     -54,     0,     0,   -54,   -54,   -54,   -54,   -54,   -58,   -55,
     -55,   -58,   -58,   -58,   -58,   -58,     0,   -61,   -61,   -59,
       0,     0,   -59,   -59,   -59,   -59,   -59,   -60,   -60,     0,
     -55,     0,     0,   -55,   -55,   -55,   -55,   -55,   -61,   -62,
     -62,   -61,   -61,   -61,   -61,   -61,     0,     0,   -60,   -63,
     -63,   -60,   -60,   -60,   -60,   -60,     0,   -64,   -64,     0,
     -62,     0,     0,   -62,   -62,   -62,   -62,   -62,   -51,   -51,
     -63,     0,     0,   -63,   -63,   -63,   -63,   -63,   -64,   -53,
     -53,   -64,   -64,   -64,   -64,   -64,     0,   -17,   -17,   -51,
       0,     0,   -51,   -51,   -51,   229,   -51,     0,     0,     0,
     -53,     0,     0,   -53,   -53,   -53,   -53,   -53,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -17
};

static const yytype_int16 yycheck[] =
{
       0,   156,   217,     3,    23,     1,    64,     3,    14,    25,
       0,    30,     3,     3,    30,    15,     0,     0,     0,    15,
       0,    21,    22,     1,    15,     3,   241,     4,     5,    23,
      14,    21,    14,   188,    14,    13,     0,     3,    16,    17,
      18,    19,    20,    21,    23,     1,    24,     3,    25,   204,
      14,    28,    29,    30,    32,    32,    22,    13,     0,    25,
      16,    17,    18,    19,    20,    21,    25,     1,    24,     3,
      29,    30,    14,     3,     0,     0,    32,     4,     5,    13,
       0,     0,    16,    17,    18,    19,    20,    21,    14,    14,
      24,     4,     5,    21,    14,    14,    23,    24,    32,    27,
     158,    28,    29,    30,    31,    32,    14,     0,    36,     0,
      23,    25,   112,    14,     0,    28,    29,    30,    31,    32,
     120,    14,   112,    14,    25,   125,    24,   127,    14,     0,
     120,     0,   190,     0,    62,   125,     0,   127,    66,    24,
       1,    69,     3,    14,    24,    14,    22,    14,   206,    25,
      14,    24,    13,     0,     0,    16,    17,    18,    19,    20,
      21,    21,     3,    24,    21,     3,    22,    14,    14,    25,
      98,    32,   230,     0,    22,    13,    25,    25,    16,    17,
      18,    19,    20,    21,   112,   113,    24,    14,    21,     0,
     248,    21,   120,     0,    32,   123,   324,   125,    23,   127,
     328,   259,    22,    14,   332,    25,     0,    14,    22,     0,
     138,    25,    69,     1,     3,     3,    76,     6,     7,     8,
      14,    10,    11,    14,    13,    14,   154,    16,    17,    18,
      19,    20,    21,     0,     3,    24,     0,    26,    27,    23,
      23,    98,    23,    32,    21,    29,    30,    14,   176,    25,
      14,    23,   112,    29,    30,   112,    22,    25,   186,    25,
     120,    22,    25,   120,    25,   125,    23,   127,   125,    23,
     127,    28,    29,    30,   202,    21,    25,     4,     5,   112,
      25,    23,   112,    28,    29,    30,    22,   120,   216,    25,
     120,     1,   125,     3,   127,   125,    23,   127,     1,    21,
       3,    28,    29,    30,   232,    32,     3,   235,    23,    23,
      24,   311,    23,    28,    29,    30,   316,    28,    29,    30,
     320,   311,   250,    23,    25,   253,   316,    28,    29,    30,
     320,    24,    25,   261,    23,   112,   264,   337,     8,   339,
      29,    30,    25,   120,    21,     8,    24,   337,   125,   339,
     127,    25,   352,   353,   354,     1,   284,     3,     9,   359,
     360,    23,   352,   353,   354,    24,   112,   295,    25,   359,
     360,    28,    29,    30,   120,    24,   304,   237,   235,   125,
      23,   127,    24,   311,   312,    28,    29,    30,   316,   317,
     112,    24,   320,   321,    23,   255,   253,    25,   120,    28,
      29,    30,     1,   125,     3,   127,   266,   264,    25,   337,
      25,   339,    25,    28,    29,    30,    25,    25,   346,   347,
     348,     1,    25,     3,   352,   353,   354,   284,    25,    25,
      25,   359,   360,    23,     8,   112,    25,    24,   295,    28,
      29,    30,    24,   120,     8,    24,    24,   304,   125,     8,
     127,   311,     8,     8,   311,     3,   316,     8,     8,   316,
     320,     8,    23,   320,    24,    13,    24,    24,    16,    17,
      18,    19,    20,    21,     9,   335,    24,   337,   311,   339,
     337,   311,   339,   316,    32,    24,   316,   320,     9,     9,
     320,     9,   352,   353,   354,   352,   353,   354,   358,   359,
     360,     9,   359,   360,   337,     9,   339,   337,     9,   339,
       9,    23,     3,    23,    25,    24,    23,    23,    23,   352,
     353,   354,   352,   353,   354,    25,   359,   360,    25,   359,
     360,    25,    25,    25,   311,    23,     8,    23,    23,   316,
       3,    23,     8,   320,    23,    23,    33,    34,    35,    36,
      13,    38,     9,    16,    17,    18,    19,    20,    21,    23,
     337,    24,   339,    23,     9,   311,    25,    25,    23,    32,
     316,    25,    25,    25,   320,   352,   353,   354,    65,    66,
       8,    25,   359,   360,    25,    25,     8,     8,     8,   311,
       8,   337,    25,   339,   316,     4,     5,     9,   320,    25,
      25,    88,     9,     9,     9,     9,   352,   353,   354,    23,
      25,    24,    23,   359,   360,   337,    25,   339,     8,    28,
      29,    30,    31,    32,    23,    23,   113,    23,    25,     8,
     352,   353,   354,    25,   311,     9,   123,   359,   360,   316,
       9,    25,     8,   320,     8,     4,     5,     8,   135,   136,
     137,   138,   139,    12,     8,    25,    24,     9,    25,     9,
     337,     9,   339,    25,    23,    24,     9,     8,   145,    28,
      29,    30,    31,    32,     9,   352,   353,   354,    36,     3,
      -1,    -1,   359,   360,    -1,    -1,   173,   174,   175,   176,
     177,    -1,    -1,    -1,    -1,    -1,     3,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    13,    65,    66,    16,
      17,    18,    19,    20,    21,    13,    -1,    24,    16,    17,
      18,    19,    20,    21,    -1,    32,    24,    -1,    66,   216,
      -1,    -1,    -1,    -1,    32,    -1,    -1,   224,   225,   226,
     227,   228,   229,     3,   231,   232,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    13,    -1,   113,    16,    17,    18,    19,
      20,    21,   249,   250,    24,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    32,   260,   261,   113,     3,   135,   136,   137,
     138,   139,    -1,     4,     5,   123,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
     138,    -1,    -1,    24,    25,    32,    36,    28,    29,    30,
      31,    32,    -1,    -1,    -1,   173,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,    -1,   312,    -1,     3,    -1,    -1,
     317,    -1,    -1,    -1,   321,    65,    66,    13,   176,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,   216,   346,
     347,   348,    -1,    -1,    -1,    -1,   224,   225,   226,   227,
     228,   229,    -1,   231,   232,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   224,   225,   226,   227,
     228,   249,   250,   123,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   260,   261,    -1,   135,   136,   137,   138,   139,
      -1,     3,   250,    -1,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,   261,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    36,    -1,    -1,    -1,    -1,
      32,    -1,    -1,   173,   174,   175,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,   317,
      -1,    -1,    -1,   321,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,   317,
      -1,    36,    -1,   321,    -1,    -1,   216,    -1,   346,   347,
     348,    -1,    -1,    -1,   224,   225,   226,   227,   228,   229,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,   346,   347,
     348,    66,   113,    -1,    -1,    -1,    -1,    -1,    -1,   249,
     250,    -1,   123,    -1,    -1,     4,     5,    -1,    83,    -1,
     260,   261,    87,    12,   135,   136,   137,   138,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,   123,    -1,
       4,     5,   173,   174,   175,   176,   177,    -1,    -1,    -1,
       4,     5,   312,   138,    -1,    -1,    -1,   317,    -1,    23,
      -1,   321,    65,    66,    28,    29,    30,    31,    32,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,   216,   346,   347,   348,    -1,
      -1,   176,    -1,   224,   225,   226,   227,   228,   229,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,   250,
     123,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,   260,
     261,   216,   135,   136,   137,   138,   139,    -1,    66,   224,
     225,   226,    -1,   228,    23,    -1,    -1,   232,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,   250,    -1,    -1,    -1,    -1,
     173,   174,   175,   176,   177,    -1,   261,     4,     5,    -1,
      -1,   312,    -1,    -1,    -1,   113,   317,    -1,    -1,    -1,
     321,    -1,    66,    -1,    -1,   123,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    -1,    -1,    82,    -1,
     138,    -1,    -1,   216,    36,   346,   347,   348,    -1,    -1,
      -1,   224,   225,   226,   227,   228,   229,   312,   231,   232,
      -1,    -1,   317,    -1,    -1,    -1,   321,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    66,    -1,   249,   250,   176,   123,
      -1,     4,     5,    -1,    -1,    -1,    -1,   260,   261,    81,
      -1,   346,   347,   348,   138,    -1,    -1,    -1,    -1,    36,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,   113,    -1,    -1,    -1,    -1,   224,   225,   226,    66,
     228,   123,   176,    -1,   232,    -1,    -1,    -1,    -1,   312,
       4,     5,    -1,    -1,   317,    -1,   138,    -1,   321,    -1,
      -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,   261,    28,    29,    30,    31,    32,    -1,
       4,     5,   216,   346,   347,   348,   113,    -1,    -1,    -1,
     224,   225,    -1,    -1,   176,    -1,   123,    -1,   232,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    -1,
      -1,   138,     4,     5,    -1,    -1,   250,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,   261,    -1,   317,
      -1,    23,    -1,   321,   216,    -1,    28,    29,    30,    31,
      32,    -1,   224,    -1,    -1,     4,     5,    -1,    -1,   176,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,   347,
     348,    -1,    -1,    -1,    23,    -1,     4,     5,   250,    28,
      29,    30,    31,    32,    -1,    -1,     4,     5,   312,   261,
      -1,    -1,    -1,   317,    -1,    23,    -1,   321,    -1,   216,
      28,    29,    30,    31,    32,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,   232,    -1,    -1,    -1,    -1,
      -1,    -1,   346,   347,   348,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,     3,   261,   317,     6,     7,     8,   321,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,     4,     5,    24,    -1,    26,    27,    -1,    -1,
      -1,    -1,    32,    -1,   346,   347,   348,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,   312,    -1,    -1,     3,    -1,
     317,     6,     7,     8,   321,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,   346,
     347,   348,     3,    -1,    -1,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    -1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    -1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    -1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    -1,    -1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,     4,     5,    24,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    32,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,     4,     5,
      -1,    28,    29,    30,    31,    32,    -1,    23,     4,     5,
      -1,    -1,    28,    29,    30,    31,    32,    23,     4,     5,
      -1,    -1,    28,    29,    30,    31,    32,    23,     4,     5,
      -1,    -1,    28,    29,    30,    31,    32,    23,     4,     5,
      -1,    -1,    28,    29,    30,    31,    32,     4,     5,    25,
      -1,    -1,    28,    29,    30,    31,    32,     4,     5,    25,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,     4,     5,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      25,    -1,    -1,    28,    29,    30,    31,    32,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,     4,     5,    25,
      -1,    -1,    28,    29,    30,    31,    32,     4,     5,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,     4,     5,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      25,    -1,    -1,    28,    29,    30,    31,    32,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,     4,     5,    25,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,    25,    -1,
      -1,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    34,    35,    36,    37,    39,    40,    15,     0,
      36,     1,     3,    38,    23,    24,    23,    39,    41,    42,
       3,    25,    22,     3,     6,     7,     8,    10,    11,    13,
      16,    17,    18,    19,    20,    21,    24,    26,    32,    37,
      39,    43,    46,    47,    48,    49,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    39,    12,    24,    24,    24,    24,     1,    55,    24,
       3,    62,    62,    62,    55,    27,    45,    46,    62,     3,
      23,    30,    29,    28,     4,     5,    32,    66,    31,     3,
      55,     3,    44,    38,    62,    55,    23,    23,    47,    25,
      27,    46,    57,    58,    59,    61,    59,    62,    22,    25,
      25,    25,    25,    47,     3,    23,    23,    46,    55,    50,
      25,     8,    46,    24,    55,    25,    46,     9,    46,    14,
       3,    13,    16,    17,    18,    19,    20,    21,    24,    32,
      43,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     6,     7,     8,    10,    11,    26,    37,    39,    47,
      48,    49,    51,    52,    53,    54,    55,     3,     3,    13,
      16,    17,    18,    19,    20,    21,    24,    32,    43,    63,
      64,    65,    55,     6,     7,     8,    10,    11,    26,    37,
      39,    47,    48,    49,    51,    52,    53,    54,    55,     6,
       7,     8,    10,    11,    26,    37,    39,    47,    48,    49,
      51,    52,    53,    54,    55,    15,    12,    24,     3,    62,
      62,    62,    55,    62,    30,    29,    28,    32,    66,    31,
      24,    24,    24,     1,    55,    24,    27,    45,     1,    38,
      23,    24,    62,    62,    62,    55,    62,    23,    24,    24,
      24,     1,    55,    24,    27,    45,     1,    38,    23,    24,
      24,    24,     1,    55,    24,    27,    45,     1,    38,    23,
      55,    44,    25,    57,    58,    59,    61,    59,    62,    38,
      62,    55,    23,    23,    47,    27,    23,    23,    44,    25,
      38,    62,    55,    23,    23,    47,    27,    23,    23,    38,
      62,    55,    23,    23,    47,    27,    23,    23,    25,    25,
      25,    25,    47,    25,    25,    25,    25,    47,    25,    25,
      25,    47,    23,    23,    46,    55,    23,    23,    46,    55,
      23,    23,    46,    55,    50,    25,    50,    25,    50,    25,
       8,    46,     8,    46,     8,    46,    24,    24,    24,    55,
      55,    55,    25,    25,    25,    46,    46,    46,     9,     9,
       9,    46,    46,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    37,    38,
      39,    39,    40,    41,    41,    42,    42,    43,    44,    44,
      44,    45,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    47,    48,    48,    50,    49,    51,    52,    52,    53,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    64,    65,    65,    65,    65,    66,
      66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     3,     1,
       1,     2,     6,     1,     0,     4,     2,     4,     3,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     0,    13,     7,     3,     3,     5,
       5,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1
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
#line 98 "./src/sintax.y"
            {
  }
#line 2074 "sintax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 102 "./src/sintax.y"
                  {
  }
#line 2081 "sintax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 104 "./src/sintax.y"
          {
  }
#line 2088 "sintax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 108 "./src/sintax.y"
                {
  }
#line 2095 "sintax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 110 "./src/sintax.y"
                  {
  }
#line 2102 "sintax.tab.c"
    break;

  case 7: /* variableParam: typeSpec var ';'  */
#line 114 "./src/sintax.y"
                   {
  }
#line 2109 "sintax.tab.c"
    break;

  case 8: /* variableParam: typeSpec error ';'  */
#line 116 "./src/sintax.y"
                       {
    yyerrok;
  }
#line 2117 "sintax.tab.c"
    break;

  case 9: /* var: ID  */
#line 121 "./src/sintax.y"
     {
  }
#line 2124 "sintax.tab.c"
    break;

  case 10: /* typeSpec: TYPE  */
#line 125 "./src/sintax.y"
       {
  }
#line 2131 "sintax.tab.c"
    break;

  case 11: /* typeSpec: TYPE LISTTYPE  */
#line 127 "./src/sintax.y"
                  {
  }
#line 2138 "sintax.tab.c"
    break;

  case 12: /* functionParam: typeSpec ID '(' functionParams ')' stmt  */
#line 131 "./src/sintax.y"
                                          {
  }
#line 2145 "sintax.tab.c"
    break;

  case 13: /* functionParams: functionParamsList  */
#line 135 "./src/sintax.y"
                     {
  }
#line 2152 "sintax.tab.c"
    break;

  case 14: /* functionParams: %empty  */
#line 137 "./src/sintax.y"
           {
  }
#line 2159 "sintax.tab.c"
    break;

  case 15: /* functionParamsList: functionParamsList ',' typeSpec ID  */
#line 141 "./src/sintax.y"
                                     {
  }
#line 2166 "sintax.tab.c"
    break;

  case 16: /* functionParamsList: typeSpec ID  */
#line 143 "./src/sintax.y"
                {
  }
#line 2173 "sintax.tab.c"
    break;

  case 17: /* call: ID '(' argList ')'  */
#line 147 "./src/sintax.y"
                     {
  }
#line 2180 "sintax.tab.c"
    break;

  case 18: /* argList: argList ',' ID  */
#line 151 "./src/sintax.y"
                 {}
#line 2186 "sintax.tab.c"
    break;

  case 19: /* argList: ID  */
#line 152 "./src/sintax.y"
       {}
#line 2192 "sintax.tab.c"
    break;

  case 20: /* argList: %empty  */
#line 153 "./src/sintax.y"
           {}
#line 2198 "sintax.tab.c"
    break;

  case 21: /* stmList: stmList stmt  */
#line 156 "./src/sintax.y"
               {
  }
#line 2205 "sintax.tab.c"
    break;

  case 22: /* stmList: stmt  */
#line 158 "./src/sintax.y"
         {
  }
#line 2212 "sintax.tab.c"
    break;

  case 23: /* stmt: expStatement  */
#line 162 "./src/sintax.y"
               {
  }
#line 2219 "sintax.tab.c"
    break;

  case 24: /* stmt: compoundStatement  */
#line 164 "./src/sintax.y"
                      {
  }
#line 2226 "sintax.tab.c"
    break;

  case 25: /* stmt: ifStatement  */
#line 166 "./src/sintax.y"
                {
  }
#line 2233 "sintax.tab.c"
    break;

  case 26: /* stmt: forStatement  */
#line 168 "./src/sintax.y"
                 {
  }
#line 2240 "sintax.tab.c"
    break;

  case 27: /* stmt: returnStatement  */
#line 170 "./src/sintax.y"
                    {
  }
#line 2247 "sintax.tab.c"
    break;

  case 28: /* stmt: inputStatement  */
#line 172 "./src/sintax.y"
                   {
  }
#line 2254 "sintax.tab.c"
    break;

  case 29: /* stmt: outputStatement  */
#line 174 "./src/sintax.y"
                    {
  }
#line 2261 "sintax.tab.c"
    break;

  case 30: /* stmt: variableParam  */
#line 176 "./src/sintax.y"
                  {
  }
#line 2268 "sintax.tab.c"
    break;

  case 31: /* expStatement: expression ';'  */
#line 180 "./src/sintax.y"
                 {
  }
#line 2275 "sintax.tab.c"
    break;

  case 32: /* compoundStatement: '{' stmList '}'  */
#line 184 "./src/sintax.y"
                  {
  }
#line 2282 "sintax.tab.c"
    break;

  case 33: /* compoundStatement: '{' '}'  */
#line 186 "./src/sintax.y"
            {}
#line 2288 "sintax.tab.c"
    break;

  case 34: /* $@1: %empty  */
#line 190 "./src/sintax.y"
                             {
  }
#line 2295 "sintax.tab.c"
    break;

  case 35: /* ifStatement: IF '(' expression ')' stmt $@1 IF '(' expression ')' stmt ELSE stmt  */
#line 192 "./src/sintax.y"
                                       {
  }
#line 2302 "sintax.tab.c"
    break;

  case 36: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 196 "./src/sintax.y"
                                                        {
  }
#line 2309 "sintax.tab.c"
    break;

  case 37: /* returnStatement: RETURN expression ';'  */
#line 200 "./src/sintax.y"
                        {
  }
#line 2316 "sintax.tab.c"
    break;

  case 38: /* returnStatement: RETURN error ';'  */
#line 202 "./src/sintax.y"
                     {
  }
#line 2323 "sintax.tab.c"
    break;

  case 39: /* inputStatement: INPUT '(' var ')' ';'  */
#line 206 "./src/sintax.y"
                        {
  }
#line 2330 "sintax.tab.c"
    break;

  case 40: /* outputStatement: OUTPUT '(' term ')' ';'  */
#line 210 "./src/sintax.y"
                          {
  }
#line 2337 "sintax.tab.c"
    break;

  case 41: /* expression: ID ASSIGN expression  */
#line 214 "./src/sintax.y"
                        {
  }
#line 2344 "sintax.tab.c"
    break;

  case 42: /* expression: orExpression  */
#line 216 "./src/sintax.y"
                 {
  }
#line 2351 "sintax.tab.c"
    break;

  case 43: /* orExpression: orExpression OR andExpression  */
#line 220 "./src/sintax.y"
                                {
  }
#line 2358 "sintax.tab.c"
    break;

  case 44: /* orExpression: andExpression  */
#line 222 "./src/sintax.y"
                  {
  }
#line 2365 "sintax.tab.c"
    break;

  case 45: /* andExpression: andExpression AND relationalExpression  */
#line 226 "./src/sintax.y"
                                         {
  }
#line 2372 "sintax.tab.c"
    break;

  case 46: /* andExpression: relationalExpression  */
#line 228 "./src/sintax.y"
                         {
  }
#line 2379 "sintax.tab.c"
    break;

  case 47: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 232 "./src/sintax.y"
                                             {
  }
#line 2386 "sintax.tab.c"
    break;

  case 48: /* relationalExpression: listExpression  */
#line 234 "./src/sintax.y"
                   {
  }
#line 2393 "sintax.tab.c"
    break;

  case 49: /* listExpression: arithmExpression listOP listExpression  */
#line 238 "./src/sintax.y"
                                         {
  }
#line 2400 "sintax.tab.c"
    break;

  case 50: /* listExpression: arithmExpression  */
#line 240 "./src/sintax.y"
                     {
  }
#line 2407 "sintax.tab.c"
    break;

  case 51: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 244 "./src/sintax.y"
                                                  {
  }
#line 2414 "sintax.tab.c"
    break;

  case 52: /* arithmExpression: arithmMulDivExpression  */
#line 246 "./src/sintax.y"
                           {
  }
#line 2421 "sintax.tab.c"
    break;

  case 53: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 250 "./src/sintax.y"
                                      {
  }
#line 2428 "sintax.tab.c"
    break;

  case 54: /* arithmMulDivExpression: term  */
#line 252 "./src/sintax.y"
         {
  }
#line 2435 "sintax.tab.c"
    break;

  case 55: /* term: const  */
#line 256 "./src/sintax.y"
        {
  }
#line 2442 "sintax.tab.c"
    break;

  case 56: /* term: call  */
#line 258 "./src/sintax.y"
         {
  }
#line 2449 "sintax.tab.c"
    break;

  case 57: /* term: ID  */
#line 260 "./src/sintax.y"
       {
  }
#line 2456 "sintax.tab.c"
    break;

  case 58: /* term: unaryTerm  */
#line 262 "./src/sintax.y"
              {
  }
#line 2463 "sintax.tab.c"
    break;

  case 59: /* term: immutable  */
#line 264 "./src/sintax.y"
              {
  }
#line 2470 "sintax.tab.c"
    break;

  case 60: /* unaryTerm: '!' term  */
#line 268 "./src/sintax.y"
           {
  }
#line 2477 "sintax.tab.c"
    break;

  case 61: /* unaryTerm: '%' term  */
#line 270 "./src/sintax.y"
             {
  }
#line 2484 "sintax.tab.c"
    break;

  case 62: /* unaryTerm: '?' term  */
#line 272 "./src/sintax.y"
             {
  }
#line 2491 "sintax.tab.c"
    break;

  case 63: /* unaryTerm: SUB_ADD term  */
#line 274 "./src/sintax.y"
                 {
  }
#line 2498 "sintax.tab.c"
    break;

  case 64: /* immutable: '(' expression ')'  */
#line 279 "./src/sintax.y"
                     {
  }
#line 2505 "sintax.tab.c"
    break;

  case 65: /* const: INT  */
#line 283 "./src/sintax.y"
      {
  }
#line 2512 "sintax.tab.c"
    break;

  case 66: /* const: FLOAT  */
#line 285 "./src/sintax.y"
          {
  }
#line 2519 "sintax.tab.c"
    break;

  case 67: /* const: STRING  */
#line 287 "./src/sintax.y"
           {
  }
#line 2526 "sintax.tab.c"
    break;

  case 68: /* const: NIL  */
#line 289 "./src/sintax.y"
        {
  }
#line 2533 "sintax.tab.c"
    break;

  case 69: /* listOP: FUNCTION  */
#line 293 "./src/sintax.y"
           {
  }
#line 2540 "sintax.tab.c"
    break;

  case 70: /* listOP: INFIX  */
#line 295 "./src/sintax.y"
          {
  }
#line 2547 "sintax.tab.c"
    break;


#line 2551 "sintax.tab.c"

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

#line 298 "./src/sintax.y"


void yyerror(const char *s){
  error++;
  printf(BHYEL "%s\n", s);
  printf("Syntax Erros: %d\n", error);
  printf("Linha: %d\n", yylval.terminal.linha);
  printf("Coluna: %d\n", yylval.terminal.coluna);
  printf("Valor: %s\n" RESET, yylval.terminal.valor);
}


int main(int argc, char **argv) {

  // #ifdef YYDEBUG
  // yydebug = 1;
  // #endif

  FILE *fp;

  if(argc > 1){
    fp = fopen(argv[1], "r");
    yyin = fp;
  } else {
    yyin = stdin;
  }

  yyparse();

  if(argc > 1){
    fclose(fp);
  }

  yylex_destroy();

  return 0;
}

