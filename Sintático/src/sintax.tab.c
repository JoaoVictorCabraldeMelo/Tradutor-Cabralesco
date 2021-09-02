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
  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex(void);
  extern int yylex_destroy(void);
  int error = 0;


#line 82 "sintax.tab.c"

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
  YYSYMBOL_stmList = 44,                   /* stmList  */
  YYSYMBOL_stmt = 45,                      /* stmt  */
  YYSYMBOL_expStatement = 46,              /* expStatement  */
  YYSYMBOL_compoundStatement = 47,         /* compoundStatement  */
  YYSYMBOL_declaration = 48,               /* declaration  */
  YYSYMBOL_ifStatement = 49,               /* ifStatement  */
  YYSYMBOL_forStatement = 50,              /* forStatement  */
  YYSYMBOL_returnStatement = 51,           /* returnStatement  */
  YYSYMBOL_inputStatement = 52,            /* inputStatement  */
  YYSYMBOL_outputStatement = 53,           /* outputStatement  */
  YYSYMBOL_expression = 54,                /* expression  */
  YYSYMBOL_orExpression = 55,              /* orExpression  */
  YYSYMBOL_andExpression = 56,             /* andExpression  */
  YYSYMBOL_relationalExpression = 57,      /* relationalExpression  */
  YYSYMBOL_listExpression = 58,            /* listExpression  */
  YYSYMBOL_arithmExpression = 59,          /* arithmExpression  */
  YYSYMBOL_arithmMulDivExpression = 60,    /* arithmMulDivExpression  */
  YYSYMBOL_term = 61,                      /* term  */
  YYSYMBOL_unaryTerm = 62,                 /* unaryTerm  */
  YYSYMBOL_immutable = 63,                 /* immutable  */
  YYSYMBOL_const = 64,                     /* const  */
  YYSYMBOL_listOP = 65                     /* listOP  */
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
#define YYLAST   2558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  309

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
       0,    98,    98,   103,   106,   111,   114,   119,   124,   129,
     132,   137,   142,   145,   150,   153,   158,   163,   166,   171,
     174,   177,   180,   183,   186,   189,   194,   199,   205,   208,
     214,   217,   222,   227,   232,   237,   242,   245,   250,   253,
     258,   261,   266,   269,   274,   277,   282,   285,   290,   293,
     298,   301,   304,   307,   310,   315,   318,   321,   324,   330,
     335,   338,   341,   344,   349,   352
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
  "functionParamsList", "call", "stmList", "stmt", "expStatement",
  "compoundStatement", "declaration", "ifStatement", "forStatement",
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
     276,   277,   278
};
#endif

#define YYPACT_NINF (-201)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    26,    25,    10,    17,    36,     8,    62,    30,  -201,
      68,    55,    19,    -7,    98,    31,    15,    44,   260,  2018,
      -5,   635,    20,    37,    96,    35,   124,   370,   664,  2144,
    2157,   189,   189,   189,   352,   948,   189,  2173,   116,   129,
     137,   145,   147,   175,   177,   179,   130,    51,   305,    80,
     212,   246,  2186,  2202,  2215,  2231,  2244,   139,    35,    -7,
     154,   436,   352,   149,    35,    60,  2260,  2273,  2289,   151,
    1397,  2302,   181,   189,   189,   189,   526,   891,   189,   189,
     189,   288,   155,   176,   194,   220,   228,   232,   183,    35,
    2318,  1424,   171,  1451,  1478,   492,   359,   460,  2331,   474,
    2347,  2360,   157,   213,  2045,   352,   185,  1505,   211,   223,
       5,   239,  2018,  2018,   230,   234,   798,   732,  2368,  2376,
    2390,  2119,  2119,  2119,   352,  2119,  2398,    74,   421,   445,
     591,   652,  2406,  2420,  2428,  2436,  2450,    76,   245,   259,
     266,   273,   436,   436,   436,   352,   436,   280,   299,   302,
     304,   240,   180,   222,   307,    35,   320,   948,  1532,  1559,
    1586,  1613,  1640,  1667,  1694,   323,   324,   328,   354,   355,
     361,    35,   366,   948,    12,    13,    23,    49,    97,   118,
     119,   360,   352,    -7,   391,  2458,  2466,  2480,   372,  2488,
    2119,  2119,  2119,  2119,  2119,  2119,    -7,   380,   381,   382,
     389,   392,  2139,   154,   436,   352,   402,    35,  1397,  1721,
    1748,   154,   436,   352,   405,    35,  1397,   135,   410,   411,
    2496,   505,   613,   645,  2510,   704,  2518,   412,   413,   420,
     422,   423,  1775,    35,  1802,   433,   434,   446,   141,    35,
    1829,  2526,   451,   461,   462,  2072,   352,  1856,   463,   464,
    2045,   352,   173,  1883,  1910,   403,   471,   472,    35,   481,
     948,   581,   987,  1019,  1046,  1073,  1100,  1127,  1154,   483,
     482,   203,   215,   238,   491,   154,   436,   352,   485,    35,
    1397,  2099,  1181,  2099,  2045,  2045,   493,   494,   500,  1208,
      35,  1937,  1964,  1991,   377,   404,   503,   504,  2072,   352,
    1235,  1262,  1289,  1316,   511,  2072,  2072,  1343,  1370
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,   197,    57,   -57,   114,  -201,   -58,  -201,
     319,  -200,     9,   -17,    11,  -153,    27,    52,    54,    56,
      58,   -19,   221,   642,   735,   651,   693,   676,   287,   432,
     507,   600,   386
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    91,    12,    15,     7,    16,    17,
      37,    93,    94,   158,   159,    70,   160,   161,   162,   163,
     164,   165,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    83,    39,    85,   208,   -30,    63,     1,   234,     1,
      -2,    11,   -19,   -20,   112,    69,   240,    -4,   -13,   -30,
     216,   -19,   -20,   -21,     1,     9,   -19,   -20,    38,    -9,
      40,    -4,   -21,   -10,    18,   167,    -5,   -21,    21,    82,
      19,     8,    14,    87,    60,   151,    41,    89,    27,   -22,
      -5,    28,    29,    30,    31,    32,    33,     5,   -22,    34,
       5,    61,    -6,   -22,   -52,   -52,    20,    36,    -3,   -12,
     151,    42,   105,    43,   -37,    44,    -6,    45,    -8,    13,
     291,    73,    -3,   -52,    59,   181,   111,   174,   -52,   -52,
     -52,   -52,   -52,    46,    46,    39,    39,   -23,    -7,   -37,
     196,   -52,   107,   -41,   190,   188,   -23,   280,    75,   -41,
     -41,   -23,    -7,   110,     6,   175,   -11,     6,   -24,   -25,
      62,   114,   115,    40,    40,   219,   200,   -24,   -25,   -19,
     -11,   176,   -24,   -25,    57,   -26,   206,   -20,   227,    41,
      41,   -33,    81,   -19,   -26,   -21,   229,   -22,    64,   -26,
     -33,   -20,   214,    72,   235,   -33,   177,    84,   178,   -21,
     179,   -22,   180,   218,    42,    42,    43,    43,    44,    44,
      45,    45,    88,   -27,   166,   -23,    90,   -24,   -36,   -25,
     108,   -26,   -27,   -33,    92,   -27,   231,   -27,   151,   -23,
     233,   -24,    65,   -25,   237,   -26,   151,   -33,   239,   -27,
      10,   101,    27,   -34,   203,    28,    29,    30,    31,    32,
      33,   -34,   -34,    34,   151,   -35,   246,   -34,   286,    -8,
     151,    36,   251,   -35,   -35,   -34,   269,   270,   262,   -35,
     -31,   181,   274,   174,   -32,   -43,   109,   -35,   -30,   278,
     -43,   -43,   -43,   107,   -31,   102,   204,   284,   -32,   107,
      76,    77,   -30,   103,   261,   127,   263,   104,   288,   273,
     151,   175,   290,   202,   113,   181,   181,   174,   174,   -45,
     -63,   151,   264,   299,   -45,   -45,   -45,   176,    78,   269,
     304,   262,   -15,   127,   -60,   -15,   269,   269,   262,   262,
     292,   -61,   293,   294,   295,   175,   175,   265,   -62,   266,
     107,   267,   177,   268,   178,   -51,   179,   303,   180,   263,
     -14,   176,   176,   -14,   307,   308,   263,   263,    66,    67,
      68,   133,    92,    71,   -53,   264,   127,   -54,   -39,   -50,
      92,   205,   264,   264,    74,   -39,   177,   177,   178,   178,
     179,   179,   180,   180,   207,   127,   209,    -8,    86,   133,
     265,   210,   266,   126,   267,   116,   268,   265,   265,   266,
     266,   267,   267,   268,   268,   117,   127,   100,   118,   119,
     120,   121,   122,   123,   -63,   -63,   124,   -31,   211,   212,
     147,   126,   -40,   217,   125,   213,   -31,    75,   -40,   -40,
     215,   -31,   133,   -63,    92,   -52,   -52,   220,   -63,   -63,
     -63,   -63,   -63,   127,   -32,   -56,   -55,   -57,   185,   186,
     187,   133,   189,   -32,   228,   183,   -52,   -58,   -32,   -52,
     -52,   -52,   -52,   -52,   126,   232,   127,   275,   238,   197,
     198,   199,   133,   201,   127,   -36,   241,   242,   -59,   137,
     126,   126,   126,   126,   126,   243,   -39,   244,   245,   138,
     191,   -39,   139,   140,   141,   142,   143,   144,   248,   249,
     145,   147,   147,   147,   126,   147,   134,   127,   146,   133,
     -41,   250,   127,   192,   -41,   -41,   -16,   133,   133,   133,
     133,   133,   226,   -42,   253,   254,   271,   272,   -42,   -42,
     -42,   230,   133,   148,   134,   276,   277,   -44,   127,   236,
     133,   126,   -44,   -44,   -44,   279,   282,   283,   289,   126,
     126,   126,   126,   126,   126,   -38,   285,   194,   296,   297,
     127,    74,   -38,   147,   126,   298,   301,   302,     0,   -64,
     -38,   147,   126,   133,   191,   -38,   306,   134,   133,   -64,
       0,   135,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -64,     0,     0,   134,   134,   134,   134,   134,   -64,     0,
       0,     0,     0,   287,   133,   126,     0,     0,   149,   135,
     126,     0,     0,     0,   148,   148,   148,   134,   148,     0,
       0,     0,     0,     0,   -30,     0,   133,   -30,   -30,   -30,
     281,   -30,   -30,     0,   -30,   147,   126,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,     0,   -30,   -30,     0,
       0,     0,   135,   -30,   134,     0,   -43,     0,   126,   -43,
     -43,   -43,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   135,     0,   136,     0,   148,   134,   -40,   -52,
     -52,   192,   -40,   -40,   148,   134,     0,    58,     0,   149,
     149,   149,   135,   149,     0,     0,    76,    77,   -52,    59,
       0,   150,   136,   -52,   -52,   -52,   -52,   -52,   -60,   -60,
     -42,     0,     0,   -42,   -42,   -42,   128,   -45,   134,     0,
     -45,   -45,   -45,   134,   193,   130,     0,   -60,     0,   135,
       0,     0,   -60,   -60,   -60,   -60,   -60,   135,   135,   135,
     135,   135,   135,     0,   128,   136,     0,     0,   148,   134,
     132,   149,   135,   130,     0,    95,     0,     0,     0,   149,
     135,   136,   136,   136,   136,   136,    97,   131,     0,   -44,
      99,   134,   -44,   -44,   -44,     0,   -63,   -63,   132,     0,
       0,     0,   150,   150,   150,   136,   150,   128,     0,     0,
       0,     0,     0,   135,    98,   131,   130,   -63,   135,     0,
     -63,   -63,   -63,   -63,   -63,     0,   128,     0,     0,   129,
       0,     0,     0,     0,     0,   130,     0,     0,     0,     0,
       0,   132,   136,   149,   135,     0,     0,   128,     0,     0,
     136,   136,   136,   136,   136,   136,   130,   129,   131,     0,
     132,     0,   -52,   -52,   150,   136,   135,     0,     0,    96,
     182,     0,   150,   136,     0,     0,     0,   131,     0,     0,
       0,   132,   183,   -52,   128,     0,   -52,   -52,   -52,   -52,
     -52,     0,   221,   130,     0,     0,     0,     0,   131,     0,
     129,   130,   130,   223,     0,   225,   136,   128,     0,     0,
       0,   136,     0,     0,     0,   128,   130,     0,   132,   129,
       0,     0,     0,     0,   130,     0,   132,   132,   132,   224,
     132,     0,     0,     0,     0,   131,   150,   136,     0,     0,
     129,   132,     0,   131,   131,   131,     0,   131,   128,   132,
       0,     0,     0,   128,   -65,     0,     0,   130,   131,   136,
       0,     0,   130,     0,   -65,     0,   131,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,   -65,     0,   129,     0,   128,
       0,     0,   132,   -65,     0,   129,   222,   132,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     129,   128,     0,     0,   131,     0,     0,     0,   129,     0,
     130,   -29,     0,   132,   -29,   -29,   -29,     0,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     131,     0,   -29,     0,   -29,   132,     0,     0,     0,     0,
     -29,   129,     0,     0,     0,     0,   129,     0,     0,     0,
     -19,     0,   131,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     -19,     0,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,   129,   -19,   -19,     0,     0,     0,     0,   -19,
       0,     0,   -20,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,     0,   129,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,     0,   -20,   -20,     0,     0,   -21,
       0,   -20,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,   -21,   -21,     0,     0,   -22,     0,   -21,   -22,
     -22,   -22,   -22,   -22,   -22,     0,   -22,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,
     -22,     0,     0,   -23,     0,   -22,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,     0,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,   -23,     0,     0,
     -24,     0,   -23,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,     0,   -24,   -24,     0,     0,   -25,     0,   -24,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,
     -25,   -25,     0,     0,   -26,     0,   -25,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,   -26,   -26,     0,
       0,   -33,     0,   -26,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,   -33,   -33,     0,     0,   -27,     0,
     -33,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,   -27,   -27,     0,     0,   -34,     0,   -27,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,   -34,
       0,     0,   -35,     0,   -34,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,   -35,     0,   -35,   -35,     0,     0,   -30,
       0,   -35,   -30,   -30,   -30,   305,   -30,   -30,     0,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,   -30,   -30,     0,     0,   -31,     0,   -30,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,
     -31,     0,     0,   -32,     0,   -31,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,     0,   -32,   -32,     0,     0,
      21,     0,   -32,   152,   153,   154,     0,   155,   156,     0,
      27,     1,     0,    28,    29,    30,    31,    32,    33,     0,
       0,    34,     0,   157,     0,     0,     0,   -28,     0,    36,
     -28,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,
     -28,     0,     0,     0,    21,     0,   -28,   152,   153,   154,
       0,   155,   156,     0,    27,     0,     0,    28,    29,    30,
      31,    32,    33,     0,     0,    34,     0,   157,   106,     0,
       0,   -18,     0,    36,   -18,   -18,   -18,     0,   -18,   -18,
       0,   -18,     0,     0,   -18,   -18,   -18,   -18,   -18,   -18,
       0,     0,   -18,     0,   -18,   -18,     0,     0,   -17,     0,
     -18,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,
       0,   -17,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,
       0,   -17,   -17,     0,     0,   -19,     0,   -17,   -19,   -19,
     -19,     0,   -19,   -19,     0,   -19,     0,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,     0,   -19,     0,   -19,   -19,
       0,     0,   -20,     0,   -19,   -20,   -20,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,     0,   -20,   -20,     0,     0,   -21,
       0,   -20,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,   -21,   -21,     0,     0,   -22,     0,   -21,   -22,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,
     -22,     0,     0,   -23,     0,   -22,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,     0,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,   -23,     0,     0,
     -24,     0,   -23,   -24,   -24,   -24,     0,   -24,   -24,     0,
     -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,
       0,   -24,     0,   -24,   -24,     0,     0,   -25,     0,   -24,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,
     -25,   -25,     0,     0,   -26,     0,   -25,   -26,   -26,   -26,
       0,   -26,   -26,     0,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,   -26,   -26,     0,
       0,    -7,     0,   -26,    -7,    -7,    -7,     0,    -7,    -7,
       0,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,     0,    -7,     0,     0,     0,   -33,     0,
      -7,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,   -33,   -33,     0,     0,    21,     0,   -33,   152,   153,
     154,     0,   155,   156,     0,    27,     0,     0,    28,    29,
      30,    31,    32,    33,     0,     0,    34,     0,   157,   247,
       0,     0,    21,     0,    36,   152,   153,   154,     0,   155,
     156,     0,    27,     0,     0,    28,    29,    30,    31,    32,
      33,     0,     0,    34,     0,   157,   252,     0,     0,   -27,
       0,    36,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,     0,   -27,   -27,     0,     0,   -34,     0,   -27,   -34,
     -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,
     -34,     0,     0,   -35,     0,   -34,   -35,   -35,   -35,     0,
     -35,   -35,     0,   -35,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,     0,   -35,   -35,     0,     0,
      21,     0,   -35,   152,   153,   154,     0,   155,   156,     0,
      27,     0,     0,    28,    29,    30,    31,    32,    33,     0,
       0,    34,     0,   157,   300,     0,     0,   -31,     0,    36,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,
     -31,   -31,     0,     0,   -32,     0,   -31,   -32,   -32,   -32,
       0,   -32,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,     0,   -32,   -32,     0,
       0,    21,     0,   -32,    22,    23,    24,     0,    25,    26,
       0,    27,     0,     0,    28,    29,    30,    31,    32,    33,
       0,     0,    34,     0,    35,     0,     0,     0,    21,     0,
      36,   168,   169,   170,     0,   171,   172,     0,    27,     0,
       0,    28,    29,    30,    31,    32,    33,     0,     0,    34,
       0,   173,     0,     0,     0,    21,     0,    36,   255,   256,
     257,     0,   258,   259,     0,    27,     0,     0,    28,    29,
      30,    31,    32,    33,     0,     0,    34,     0,   260,     0,
       0,     0,    21,     0,    36,   152,   153,   154,     0,   155,
     156,     0,    27,     0,     0,    28,    29,    30,    31,    32,
      33,     0,   184,    34,     0,   157,     0,     0,     0,     0,
       0,    36,   117,     0,     0,   118,   119,   120,   121,   122,
     123,     0,   -26,   124,     0,     0,     0,     0,   -61,   -61,
       0,   125,   -26,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -62,   -62,   -26,     0,     0,     0,   -61,     0,     0,
       0,   -26,   -61,   -61,   -61,   -61,   -61,   -51,   -51,     0,
     -62,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -47,   -47,     0,     0,     0,     0,   -51,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -49,   -49,     0,   -47,
       0,     0,     0,     0,   -47,   -47,   -47,    80,   -47,   -53,
     -53,     0,     0,     0,     0,   -49,     0,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -54,   -54,     0,   -53,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -50,   -50,
       0,     0,     0,     0,   -54,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -56,   -56,     0,   -50,     0,     0,
       0,     0,   -50,   -50,   -50,   -50,   -50,   -55,   -55,     0,
       0,     0,     0,   -56,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -57,   -57,     0,   -55,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -58,   -58,     0,     0,
       0,     0,   -57,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -59,   -59,     0,   -58,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -46,   -46,     0,     0,     0,
       0,   -59,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -48,   -48,     0,   -46,     0,     0,     0,     0,   -46,
     -46,   -46,    80,   -46,   -16,   -16,     0,     0,     0,     0,
     -48,     0,   -60,   -60,     0,   -48,   -48,   -48,   -48,   -48,
     -61,   -61,     0,   -16,     0,     0,     0,     0,   -16,   -16,
     -16,   -16,   -16,   -60,   -62,   -62,   -60,   -60,   -60,   -60,
     -60,   -61,   -51,   -51,   -61,   -61,   -61,   -61,   -61,     0,
     -47,   -47,     0,     0,     0,   -62,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -51,   -49,   -49,   -51,   -51,   -51,   -51,
     -51,   -47,   -53,   -53,   -47,   -47,   -47,   195,   -47,     0,
     -54,   -54,     0,     0,     0,   -49,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -53,   -50,   -50,   -53,   -53,   -53,   -53,
     -53,   -54,   -56,   -56,   -54,   -54,   -54,   -54,   -54,     0,
     -55,   -55,     0,     0,     0,   -50,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -56,   -57,   -57,   -56,   -56,   -56,   -56,
     -56,   -55,   -58,   -58,   -55,   -55,   -55,   -55,   -55,     0,
     -59,   -59,     0,     0,     0,   -57,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -58,   -46,   -46,   -58,   -58,   -58,   -58,
     -58,   -59,   -48,   -48,   -59,   -59,   -59,   -59,   -59,     0,
     -16,   -16,     0,     0,     0,   -46,     0,     0,   -46,   -46,
     -46,   195,   -46,   -48,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -16,     0,     0,   -16,   -16,   -16,   -16,   -16
};

static const yytype_int16 yycheck[] =
{
      19,    59,    19,    60,   157,     0,    25,    14,   208,    14,
       0,     3,     0,     0,     9,    34,   216,     0,    25,    14,
     173,     9,     9,     0,    14,     0,    14,    14,    19,     3,
      19,    14,     9,     3,     3,    92,     0,    14,     3,    58,
      25,    15,    23,    62,    24,    64,    19,    64,    13,     0,
      14,    16,    17,    18,    19,    20,    21,     0,     9,    24,
       3,    24,     0,    14,     4,     5,    22,    32,     0,    25,
      89,    19,    89,    19,    23,    19,    14,    19,    23,    24,
     280,    30,    14,    23,    24,   104,   105,   104,    28,    29,
      30,    31,    32,   112,   113,   112,   113,     0,     0,    25,
      24,    25,    93,    23,    30,   124,     9,   260,    28,    29,
      30,    14,    14,   104,     0,   104,     0,     3,     0,     0,
      24,   112,   113,   112,   113,   183,   145,     9,     9,     0,
      14,   104,    14,    14,    20,     0,   155,     0,   196,   112,
     113,     0,     3,    14,     9,     0,   203,     0,    24,    14,
       9,    14,   171,    23,   211,    14,   104,     3,   104,    14,
     104,    14,   104,   182,   112,   113,   112,   113,   112,   113,
     112,   113,    23,     0,     3,     0,    25,     0,    23,     0,
      23,     0,     9,     0,    70,     0,   205,    14,   207,    14,
     207,    14,     3,    14,   213,    14,   215,    14,   215,    14,
       3,    25,    13,     0,    24,    16,    17,    18,    19,    20,
      21,     0,     9,    24,   233,     0,   233,    14,   275,    25,
     239,    32,   239,     0,     9,    14,   245,   246,   245,    14,
       0,   250,   251,   250,     0,    23,    23,    14,     0,   258,
      28,    29,    30,   234,    14,    25,    24,     9,    14,   240,
       4,     5,    14,    25,   245,    34,   245,    25,   277,   250,
     279,   250,   279,    23,    25,   284,   285,   284,   285,    23,
      25,   290,   245,   290,    28,    29,    30,   250,    32,   298,
     299,   298,    22,    62,    25,    25,   305,   306,   305,   306,
     281,    25,   283,   284,   285,   284,   285,   245,    25,   245,
     291,   245,   250,   245,   250,    25,   250,   298,   250,   298,
      22,   284,   285,    25,   305,   306,   305,   306,    31,    32,
      33,    34,   208,    36,    25,   298,   105,    25,    23,    25,
     216,    24,   305,   306,    29,    30,   284,   285,   284,   285,
     284,   285,   284,   285,    24,   124,    23,    23,    61,    62,
     298,    23,   298,    34,   298,     3,   298,   305,   306,   305,
     306,   305,   306,   305,   306,    13,   145,    80,    16,    17,
      18,    19,    20,    21,     4,     5,    24,     0,    24,    24,
      61,    62,    23,    23,    32,    24,     9,    28,    29,    30,
      24,    14,   105,    23,   280,     4,     5,    25,    28,    29,
      30,    31,    32,   182,     0,    25,    25,    25,   121,   122,
     123,   124,   125,     9,    25,    24,    25,    25,    14,    28,
      29,    30,    31,    32,   105,    23,   205,    24,    23,   142,
     143,   144,   145,   146,   213,    25,    25,    25,    25,     3,
     121,   122,   123,   124,   125,    25,    25,    25,    25,    13,
      29,    30,    16,    17,    18,    19,    20,    21,    25,    25,
      24,   142,   143,   144,   145,   146,    34,   246,    32,   182,
      25,    25,   251,    28,    29,    30,    25,   190,   191,   192,
     193,   194,   195,    23,    23,    23,    23,    23,    28,    29,
      30,   204,   205,    61,    62,    24,    24,    23,   277,   212,
     213,   182,    28,    29,    30,    24,    23,    25,    23,   190,
     191,   192,   193,   194,   195,    23,    25,   131,    25,    25,
     299,    29,    30,   204,   205,    25,    23,    23,    -1,     3,
      25,   212,   213,   246,    29,    30,    25,   105,   251,    13,
      -1,    34,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,   121,   122,   123,   124,   125,    32,    -1,
      -1,    -1,    -1,   276,   277,   246,    -1,    -1,    61,    62,
     251,    -1,    -1,    -1,   142,   143,   144,   145,   146,    -1,
      -1,    -1,    -1,    -1,     3,    -1,   299,     6,     7,     8,
       9,    10,    11,    -1,    13,   276,   277,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,    -1,   105,    32,   182,    -1,    25,    -1,   299,    28,
      29,    30,   190,   191,   192,   193,   194,   195,   121,   122,
     123,   124,   125,    -1,    34,    -1,   204,   205,    25,     4,
       5,    28,    29,    30,   212,   213,    -1,    12,    -1,   142,
     143,   144,   145,   146,    -1,    -1,     4,     5,    23,    24,
      -1,    61,    62,    28,    29,    30,    31,    32,     4,     5,
      25,    -1,    -1,    28,    29,    30,    34,    25,   246,    -1,
      28,    29,    30,   251,    32,    34,    -1,    23,    -1,   182,
      -1,    -1,    28,    29,    30,    31,    32,   190,   191,   192,
     193,   194,   195,    -1,    62,   105,    -1,    -1,   276,   277,
      34,   204,   205,    62,    -1,    73,    -1,    -1,    -1,   212,
     213,   121,   122,   123,   124,   125,    75,    34,    -1,    25,
      79,   299,    28,    29,    30,    -1,     4,     5,    62,    -1,
      -1,    -1,   142,   143,   144,   145,   146,   105,    -1,    -1,
      -1,    -1,    -1,   246,    78,    62,   105,    25,   251,    -1,
      28,    29,    30,    31,    32,    -1,   124,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,   105,   182,   276,   277,    -1,    -1,   145,    -1,    -1,
     190,   191,   192,   193,   194,   195,   145,    62,   105,    -1,
     124,    -1,     4,     5,   204,   205,   299,    -1,    -1,    74,
      12,    -1,   212,   213,    -1,    -1,    -1,   124,    -1,    -1,
      -1,   145,    24,    25,   182,    -1,    28,    29,    30,    31,
      32,    -1,   190,   182,    -1,    -1,    -1,    -1,   145,    -1,
     105,   190,   191,   192,    -1,   194,   246,   205,    -1,    -1,
      -1,   251,    -1,    -1,    -1,   213,   205,    -1,   182,   124,
      -1,    -1,    -1,    -1,   213,    -1,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,   182,   276,   277,    -1,    -1,
     145,   205,    -1,   190,   191,   192,    -1,   194,   246,   213,
      -1,    -1,    -1,   251,     3,    -1,    -1,   246,   205,   299,
      -1,    -1,   251,    -1,    13,    -1,   213,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,   182,    -1,   277,
      -1,    -1,   246,    32,    -1,   190,   191,   251,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     205,   299,    -1,    -1,   251,    -1,    -1,    -1,   213,    -1,
     299,     3,    -1,   277,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
     277,    -1,    24,    -1,    26,   299,    -1,    -1,    -1,    -1,
      32,   246,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
       3,    -1,   299,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,   277,    26,    27,    -1,    -1,    -1,    -1,    32,
      -1,    -1,     3,    -1,    -1,     6,     7,     8,     9,    10,
      11,    -1,    13,    -1,   299,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,     9,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,
       6,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    -1,    -1,     3,    -1,    32,     6,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,     3,    -1,    32,     6,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,
      32,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      -1,    -1,     3,    -1,    32,     6,     7,     8,     9,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    -1,    -1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    -1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,     3,
      -1,    32,     6,     7,     8,    -1,    10,    11,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,     6,
       7,     8,    -1,    10,    11,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,
      10,    11,    -1,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
       3,    -1,    32,     6,     7,     8,    -1,    10,    11,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    26,    27,    -1,    -1,     3,    -1,    32,
       6,     7,     8,    -1,    10,    11,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      26,    27,    -1,    -1,     3,    -1,    32,     6,     7,     8,
      -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    26,    27,    -1,
      -1,     3,    -1,    32,     6,     7,     8,    -1,    10,    11,
      -1,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,     3,    -1,
      32,     6,     7,     8,    -1,    10,    11,    -1,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    26,    -1,    -1,    -1,     3,    -1,    32,     6,     7,
       8,    -1,    10,    11,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,     3,    -1,    32,     6,     7,     8,    -1,    10,
      11,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,     3,    24,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    32,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,     3,    24,    -1,    -1,    -1,    -1,     4,     5,
      -1,    32,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,     4,     5,    24,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    32,    28,    29,    30,    31,    32,     4,     5,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
       4,     5,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,     4,     5,    -1,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,     4,
       5,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,     4,     5,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,     4,     5,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,     4,     5,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,     4,     5,    -1,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,     4,     5,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,     4,     5,    -1,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,     4,     5,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,     4,     5,    -1,    -1,    -1,    -1,
      23,    -1,     4,     5,    -1,    28,    29,    30,    31,    32,
       4,     5,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
       4,     5,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
       4,     5,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
       4,     5,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
       4,     5,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,     4,     5,    28,    29,    30,    31,
      32,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
       4,     5,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    25,    -1,    -1,    28,    29,    30,    31,
      32,    25,    -1,    -1,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    34,    35,    36,    37,    39,    40,    15,     0,
      36,     3,    38,    24,    23,    39,    41,    42,     3,    25,
      22,     3,     6,     7,     8,    10,    11,    13,    16,    17,
      18,    19,    20,    21,    24,    26,    32,    43,    45,    46,
      47,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    39,    12,    24,
      24,    24,    24,    54,    24,     3,    61,    61,    61,    54,
      48,    61,    23,    30,    29,    28,     4,     5,    32,    65,
      31,     3,    54,    41,     3,    38,    61,    54,    23,    46,
      25,    37,    39,    44,    45,    56,    57,    58,    60,    58,
      61,    25,    25,    25,    25,    46,    27,    45,    23,    23,
      45,    54,     9,    25,    45,    45,     3,    13,    16,    17,
      18,    19,    20,    21,    24,    32,    43,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     3,    13,    16,
      17,    18,    19,    20,    21,    24,    32,    43,    62,    63,
      64,    54,     6,     7,     8,    10,    11,    26,    46,    47,
      49,    50,    51,    52,    53,    54,     3,    38,     6,     7,
       8,    10,    11,    26,    46,    47,    49,    50,    51,    52,
      53,    54,    12,    24,     3,    61,    61,    61,    54,    61,
      30,    29,    28,    32,    65,    31,    24,    61,    61,    61,
      54,    61,    23,    24,    24,    24,    54,    24,    48,    23,
      23,    24,    24,    24,    54,    24,    48,    23,    54,    41,
      25,    56,    57,    58,    60,    58,    61,    41,    25,    38,
      61,    54,    23,    46,    44,    38,    61,    54,    23,    46,
      44,    25,    25,    25,    25,    25,    46,    27,    25,    25,
      25,    46,    27,    23,    23,     6,     7,     8,    10,    11,
      26,    45,    46,    47,    49,    50,    51,    52,    53,    54,
      54,    23,    23,    45,    54,    24,    24,    24,    54,    24,
      48,     9,    23,    25,     9,    25,    38,    61,    54,    23,
      46,    44,    45,    45,    45,    45,    25,    25,    25,    46,
      27,    23,    23,    45,    54,     9,    25,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    38,    39,
      39,    40,    41,    41,    42,    42,    43,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    46,    47,    48,    48,
      49,    49,    50,    51,    52,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    61,    61,    61,    62,    62,    62,    62,    63,
      64,    64,    64,    64,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       2,     6,     1,     0,     4,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     0,
       5,     7,     7,     3,     5,     5,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
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
    printf("program -> paramList\n");
  }
#line 2038 "sintax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 103 "./src/sintax.y"
                  {
    printf("paramList -> paramList param\n");
  }
#line 2046 "sintax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 106 "./src/sintax.y"
          {
    printf("paramList -> param\n");
  }
#line 2054 "sintax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 111 "./src/sintax.y"
                {
    printf("param -> variableParam \n");
  }
#line 2062 "sintax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 114 "./src/sintax.y"
                  {
    printf(" param -> functionParam \n");
  }
#line 2070 "sintax.tab.c"
    break;

  case 7: /* variableParam: typeSpec var ';'  */
#line 119 "./src/sintax.y"
                   {
    printf("variableParam -> typeSpec var ; \n");
  }
#line 2078 "sintax.tab.c"
    break;

  case 8: /* var: ID  */
#line 124 "./src/sintax.y"
     {
    printf("var -> ID\n");
  }
#line 2086 "sintax.tab.c"
    break;

  case 9: /* typeSpec: TYPE  */
#line 129 "./src/sintax.y"
       {
    printf("typeSpec -> TYPE \n");
  }
#line 2094 "sintax.tab.c"
    break;

  case 10: /* typeSpec: TYPE LISTTYPE  */
#line 132 "./src/sintax.y"
                  {
    printf("TYPE -> LISTTYPE\n");
  }
#line 2102 "sintax.tab.c"
    break;

  case 11: /* functionParam: typeSpec ID '(' functionParams ')' stmt  */
#line 137 "./src/sintax.y"
                                          {
    printf("functionParam -> typeSpec ID ( functionParams ) stmt \n");
  }
#line 2110 "sintax.tab.c"
    break;

  case 12: /* functionParams: functionParamsList  */
#line 142 "./src/sintax.y"
                     {
    printf("functionParams -> functionParamsList \n");
  }
#line 2118 "sintax.tab.c"
    break;

  case 13: /* functionParams: %empty  */
#line 145 "./src/sintax.y"
           {
    printf("functionParams -> empty \n");
  }
#line 2126 "sintax.tab.c"
    break;

  case 14: /* functionParamsList: functionParamsList ',' typeSpec ID  */
#line 150 "./src/sintax.y"
                                     {
    printf("functionParamsList -> functionParams , typeSpec ID \n");
  }
#line 2134 "sintax.tab.c"
    break;

  case 15: /* functionParamsList: typeSpec ID  */
#line 153 "./src/sintax.y"
                {
    printf("functionParamsList -> typeSpec ID \n");
  }
#line 2142 "sintax.tab.c"
    break;

  case 16: /* call: ID '(' functionParams ')'  */
#line 158 "./src/sintax.y"
                            {
    printf("call -> ID ( functionParams ) \n");
  }
#line 2150 "sintax.tab.c"
    break;

  case 17: /* stmList: stmList stmt  */
#line 163 "./src/sintax.y"
               {
    printf("stmList -> stmt \n");
  }
#line 2158 "sintax.tab.c"
    break;

  case 18: /* stmList: stmt  */
#line 166 "./src/sintax.y"
         {
    printf("stmList -> stmt \n");
  }
#line 2166 "sintax.tab.c"
    break;

  case 19: /* stmt: expStatement  */
#line 171 "./src/sintax.y"
               {
    printf("stmt -> expStatement \n");
  }
#line 2174 "sintax.tab.c"
    break;

  case 20: /* stmt: compoundStatement  */
#line 174 "./src/sintax.y"
                      {
    printf("stmt -> compoundStatement \n");
  }
#line 2182 "sintax.tab.c"
    break;

  case 21: /* stmt: ifStatement  */
#line 177 "./src/sintax.y"
                {
    printf("stmt -> ifStatement \n");
  }
#line 2190 "sintax.tab.c"
    break;

  case 22: /* stmt: forStatement  */
#line 180 "./src/sintax.y"
                 {
    printf("stmt -> forStatement \n");
  }
#line 2198 "sintax.tab.c"
    break;

  case 23: /* stmt: returnStatement  */
#line 183 "./src/sintax.y"
                    {
    printf("stmt -> returnStatement \n");
  }
#line 2206 "sintax.tab.c"
    break;

  case 24: /* stmt: inputStatement  */
#line 186 "./src/sintax.y"
                   {
    printf("stmt -> inputStatement \n");
  }
#line 2214 "sintax.tab.c"
    break;

  case 25: /* stmt: outputStatement  */
#line 189 "./src/sintax.y"
                    {
    printf("stmt -> outputStatement \n");
  }
#line 2222 "sintax.tab.c"
    break;

  case 26: /* expStatement: expression ';'  */
#line 194 "./src/sintax.y"
                 {
    printf("expStatement -> expression \n");
  }
#line 2230 "sintax.tab.c"
    break;

  case 27: /* compoundStatement: '{' declaration stmList '}'  */
#line 199 "./src/sintax.y"
                              {
    printf("compoundStatement -> { declaration stmList } \n");
  }
#line 2238 "sintax.tab.c"
    break;

  case 28: /* declaration: declaration variableParam  */
#line 205 "./src/sintax.y"
                            {
    printf("declaration -> variableParam \n");
  }
#line 2246 "sintax.tab.c"
    break;

  case 29: /* declaration: %empty  */
#line 208 "./src/sintax.y"
           {
    printf("declaration -> empty \n");
  }
#line 2254 "sintax.tab.c"
    break;

  case 30: /* ifStatement: IF '(' expression ')' stmt  */
#line 214 "./src/sintax.y"
                             {
    printf("ifStatement -> IF ( expression ) stmt");
  }
#line 2262 "sintax.tab.c"
    break;

  case 31: /* ifStatement: IF '(' expression ')' stmt ELSE stmt  */
#line 217 "./src/sintax.y"
                                         {
    printf("ifStatement -> IF ( expression ) stmt ELSE stmt");
  }
#line 2270 "sintax.tab.c"
    break;

  case 32: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 222 "./src/sintax.y"
                                                        {
    printf("forStatement -> FOR ( expStatement expStatement expression ) stmt \n");
  }
#line 2278 "sintax.tab.c"
    break;

  case 33: /* returnStatement: RETURN expression ';'  */
#line 227 "./src/sintax.y"
                        {
    printf("returnStatement -> RETURN expression ; \n");
  }
#line 2286 "sintax.tab.c"
    break;

  case 34: /* inputStatement: INPUT '(' var ')' ';'  */
#line 232 "./src/sintax.y"
                        {
    printf("inputStatement -> INPUT ( var ) ;\n");
  }
#line 2294 "sintax.tab.c"
    break;

  case 35: /* outputStatement: OUTPUT '(' term ')' ';'  */
#line 237 "./src/sintax.y"
                          {
    printf("outputStatement -> OUTPUT ( term ) ; \n ");
  }
#line 2302 "sintax.tab.c"
    break;

  case 36: /* expression: ID ASSIGN expression  */
#line 242 "./src/sintax.y"
                        {
    printf("expression -> ID ASSIGN expression \n");
  }
#line 2310 "sintax.tab.c"
    break;

  case 37: /* expression: orExpression  */
#line 245 "./src/sintax.y"
                 {
    printf("expression -> orExpression \n");
  }
#line 2318 "sintax.tab.c"
    break;

  case 38: /* orExpression: orExpression OR andExpression  */
#line 250 "./src/sintax.y"
                                {
    printf("orExpression -> orExpression OR andExpression \n");
  }
#line 2326 "sintax.tab.c"
    break;

  case 39: /* orExpression: andExpression  */
#line 253 "./src/sintax.y"
                  {
    printf("orExpression -> andExpression \n");
  }
#line 2334 "sintax.tab.c"
    break;

  case 40: /* andExpression: andExpression AND relationalExpression  */
#line 258 "./src/sintax.y"
                                         {
    printf("andExpression -> relationalExpression \n");
  }
#line 2342 "sintax.tab.c"
    break;

  case 41: /* andExpression: relationalExpression  */
#line 261 "./src/sintax.y"
                         {
    printf("andExpression -> relationalExpression \n");
  }
#line 2350 "sintax.tab.c"
    break;

  case 42: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 266 "./src/sintax.y"
                                             {
    printf("relationalExpression -> relationalExpression REL_OP listExpression \n");
  }
#line 2358 "sintax.tab.c"
    break;

  case 43: /* relationalExpression: listExpression  */
#line 269 "./src/sintax.y"
                   {
    printf("relationalExpression -> listExpression \n");
  }
#line 2366 "sintax.tab.c"
    break;

  case 44: /* listExpression: arithmExpression listOP listExpression  */
#line 274 "./src/sintax.y"
                                         {
    printf("listExpression -> arithmExpression listOP listExpression \n");
  }
#line 2374 "sintax.tab.c"
    break;

  case 45: /* listExpression: arithmExpression  */
#line 277 "./src/sintax.y"
                     {
    printf("listExpression -> arithmExpression \n");
  }
#line 2382 "sintax.tab.c"
    break;

  case 46: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 282 "./src/sintax.y"
                                                  {
    printf("arithmExpression -> arithmExpression SUB_ADD arithmMulDivExpression \n");
  }
#line 2390 "sintax.tab.c"
    break;

  case 47: /* arithmExpression: arithmMulDivExpression  */
#line 285 "./src/sintax.y"
                           {
    printf("arithmExpression -> arithmMulDivExpression \n");
  }
#line 2398 "sintax.tab.c"
    break;

  case 48: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 290 "./src/sintax.y"
                                      {
    printf("arithmMulDivExpression -> arithmMulDivExpression MUL_DIV term \n");
  }
#line 2406 "sintax.tab.c"
    break;

  case 49: /* arithmMulDivExpression: term  */
#line 293 "./src/sintax.y"
         {
    printf("arithmMulDivExpression -> term \n");
  }
#line 2414 "sintax.tab.c"
    break;

  case 50: /* term: const  */
#line 298 "./src/sintax.y"
        {
    printf("term -> const \n");
  }
#line 2422 "sintax.tab.c"
    break;

  case 51: /* term: call  */
#line 301 "./src/sintax.y"
         {
    printf("term -> call \n");
  }
#line 2430 "sintax.tab.c"
    break;

  case 52: /* term: ID  */
#line 304 "./src/sintax.y"
       {
    printf("term -> ID \n");
  }
#line 2438 "sintax.tab.c"
    break;

  case 53: /* term: unaryTerm  */
#line 307 "./src/sintax.y"
              {
    printf("term -> unaryTerm \n");
  }
#line 2446 "sintax.tab.c"
    break;

  case 54: /* term: immutable  */
#line 310 "./src/sintax.y"
              {
    printf("term -> immutable \n");
  }
#line 2454 "sintax.tab.c"
    break;

  case 55: /* unaryTerm: '!' term  */
#line 315 "./src/sintax.y"
           {
    printf("! term\n");
  }
#line 2462 "sintax.tab.c"
    break;

  case 56: /* unaryTerm: '%' term  */
#line 318 "./src/sintax.y"
             {
    printf("percent term \n");
  }
#line 2470 "sintax.tab.c"
    break;

  case 57: /* unaryTerm: '?' term  */
#line 321 "./src/sintax.y"
             {
    printf("? term \n");
  }
#line 2478 "sintax.tab.c"
    break;

  case 58: /* unaryTerm: SUB_ADD term  */
#line 324 "./src/sintax.y"
                 {
    printf("SUB_ADD term \n");
  }
#line 2486 "sintax.tab.c"
    break;

  case 59: /* immutable: '(' expression ')'  */
#line 330 "./src/sintax.y"
                     {
    printf("immutable -> ( expression ) \n");
  }
#line 2494 "sintax.tab.c"
    break;

  case 60: /* const: INT  */
#line 335 "./src/sintax.y"
      {
    printf("const -> INT\n");
  }
#line 2502 "sintax.tab.c"
    break;

  case 61: /* const: FLOAT  */
#line 338 "./src/sintax.y"
          {
    printf("const -> FLOAT\n");
  }
#line 2510 "sintax.tab.c"
    break;

  case 62: /* const: STRING  */
#line 341 "./src/sintax.y"
           {
    printf("const -> STRING\n");
  }
#line 2518 "sintax.tab.c"
    break;

  case 63: /* const: NIL  */
#line 344 "./src/sintax.y"
        {
    printf("const -> NIL\n");
  }
#line 2526 "sintax.tab.c"
    break;

  case 64: /* listOP: FUNCTION  */
#line 349 "./src/sintax.y"
           {
    printf("listOp -> FUNCTION\n");
  }
#line 2534 "sintax.tab.c"
    break;

  case 65: /* listOP: INFIX  */
#line 352 "./src/sintax.y"
          {
    printf("listOP -> INFIX");
  }
#line 2542 "sintax.tab.c"
    break;


#line 2546 "sintax.tab.c"

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

#line 356 "./src/sintax.y"


void yyerror(const char *s){
  fprintf(stderr, "%s\n", s);
  error++;
  printf("Erros: %d\n", error);
  printf("Linha: %d\n", yylval.terminal.linha);
  printf("Coluna: %d\n", yylval.terminal.coluna);
  printf("Valor: %s\n", yylval.terminal.valor);
}


int main(int argc, char **argv) {

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

