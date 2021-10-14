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

  #define eh "Eh funcao"
  #define nao_eh "Nao eh"


  extern FILE *yyin;
  void yyerror(char const *s);
  extern int yylex();
  extern int yylex_destroy();

  int error = 0;
  int nro_argumentos = 0;

#line 95 "./src/syntax.tab.c"

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
#define YYLAST   4363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  439

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
       0,   105,   105,   112,   117,   122,   125,   130,   163,   190,
     194,   200,   234,   277,   280,   283,   289,   317,   354,   382,
     417,   444,   460,   475,   480,   485,   490,   493,   496,   499,
     502,   505,   508,   511,   516,   522,   525,   531,   541,   557,
     569,   574,   579,   586,   601,   623,   630,   654,   671,   674,
     679,   686,   707,   710,   715,   722,   742,   745,   750,   757,
     777,   780,   785,   792,   801,   807,   820,   825,   838,   844,
     847,   850,   859,   862,   865,   871,   883,   895,   907,   922,
     936,   945,   954,   963,   974,   990
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

#define YYPACT_NINF (-242)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,     9,    10,   102,   115,   119,   135,   162,     6,    73,
    -242,   138,   237,    87,   264,   263,   329,    40,     4,    47,
     191,   353,    87,   326,    64,   294,    86,    89,   420,   139,
     195,    96,   121,   133,  3745,   181,   143,   334,    11,   472,
     545,  1522,    14,    14,    14,  3767,  2433,   239,   164,   -10,
      14,   378,  1552,   380,   384,   395,   426,   427,   438,   450,
     469,   175,   152,   458,   772,   964,  4331,  4060,  4071,  4081,
    4091,  4101,   124,   294,   229,    67,    49,    63,  3767,   186,
     618,   205,    42,   251,  4111,  4121,  4131,   208,   492,  2463,
    2493,  4141,   493,  3789,  3813,  3837,   160,   795,    14,    14,
      14,   486,   236,   548,   220,   558,   639,   235,   248,   253,
     274,   555,   596,  3861,   280,  4151,   626,  2523,   824,  1031,
    1190,  4161,  1298,  4171,   694,   306,  4181,   296,   627,   318,
    3453,   847,   309,   760,   649,   651,   142,   704,   327,   725,
     294,   294,   726,   770,   894,   703,   333,  1172,  1268,  3893,
    3923,  1073,  1073,  1073,  3767,  1260,   385,    79,  1073,  4191,
     165,   656,  1359,  1492,  1653,  4201,  4210,  4220,  4232,  4242,
     330,   336,   355,  3745,   383,    25,  2553,  2583,  2613,  2643,
    2673,  2703,  2733,  2763,  2793,   411,   419,   366,   436,   445,
     457,   473,    63,    63,    63,  3767,    63,   538,   559,   566,
     570,   439,   719,   261,   346,   805,   886,   981,   997,  1263,
    1263,  1263,  3767,   206,  1103,    -7,  1263,  1083,   973,  1113,
    1050,  1294,  1423,  1164,  1212,  1381,  1435,  1565,   512,   576,
     591,  3745,   609,    38,  2823,   146,   174,   197,   203,   316,
     335,   347,   437,   597,  1128,  3535,    67,   443,  4250,  4261,
    4272,   619,  4280,  3883,  3913,  3943,  1073,  1073,  1073,   100,
      63,  3767,   605,  3565,   622,    44,   633,  2853,  2883,  2913,
      67,   632,   667,   684,   689,   696,  3973,   569,    67,   529,
    1600,  3983,  3994,   712,  4005,   659,   937,  1647,  1263,  1263,
    1263,   103,    63,  3767,   718,  3595,   722,    60,   737,   480,
    2943,   542,   727,   798,  4290,   844,  1506,  1543,  4302,  1581,
    4312,   746,   776,   778,   782,  2973,  3003,  3861,  3033,   823,
    3063,  3093,  3123,   807,   796,   350,   833,  4016,  1329,  1340,
    1406,  4027,  1466,  4038,   826,   839,   845,   853,   602,   603,
    3861,   604,   857,   729,   763,   765,  4320,   858,  3153,   859,
    3483,  3625,   522,  3183,   863,  4049,   866,   766,   872,  3453,
    3655,   697,   767,  3213,  3243,   873,   880,   881,  3745,   882,
      45,  3273,   511,  1683,  1713,  1743,  1773,  1803,  1833,  1863,
    1893,   885,  3303,   871,  3333,   783,   817,   920,  1007,   887,
    1041,   107,    63,  3767,   898,  3685,   905,    65,   912,  1923,
    3363,  3513,  1953,  3513,  3453,  3453,   914,   918,   917,   934,
    1983,  2013,  3861,  2043,   940,  2073,  2103,  2133,  3393,  3423,
    1043,  1044,   941,  2163,   947,  3483,  3715,   815,  2193,  2223,
    2253,  2283,  2313,   957,  2343,  3483,  3483,  2373,  2403
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,  -242,   994,     0,  -242,   921,  -242,   501,  -241,
    -175,    -4,   -19,   -17,    18,    24,    61,    74,    80,   -23,
    1226,  1262,  1247,  1137,  1225,  1057,   413,   691,   779,   969,
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
       5,   268,    61,     5,   257,   303,    54,    23,    55,    14,
      10,    79,     7,   -54,    81,    29,   -54,    83,   -54,    24,
     -54,    53,    87,   -54,     8,    51,    82,    37,   264,   323,
      39,    40,    41,    42,    43,    44,     1,   326,    45,    15,
     265,   296,     9,    56,     9,   114,    50,   319,   396,    57,
      61,   104,   107,   297,    54,   110,    55,   201,   266,   300,
     397,   113,   289,   342,   186,   -15,   187,    28,   414,   103,
     105,   298,    25,    51,   108,    15,   188,   320,   398,   189,
     190,   191,   192,   193,   194,   117,    58,   195,    17,   -23,
     132,    56,   -23,   343,   131,   196,    16,    57,   415,    59,
      72,    18,    -2,   311,   -54,    60,   334,   243,   138,   -54,
     406,   236,   -14,   237,    73,    -4,     1,    61,    61,    -5,
      76,    54,    54,    55,    55,   312,   136,   101,   335,    -4,
     235,   251,   407,    -5,    58,    -6,   142,   143,    -3,   102,
      51,    51,   -37,   -74,   -74,    77,   -33,    59,   238,    -6,
     262,   140,    -3,    60,   239,   -33,   -37,    78,    56,    56,
     -33,   -84,   -74,   -84,    57,    57,   -50,   -74,   -74,   -74,
     -74,   -74,   274,   -84,   -26,   -48,   -84,   -84,   -84,   -84,
     -84,   -84,    93,   -26,   -84,    12,    13,   -58,   -26,   283,
     -48,   240,   -84,   -58,   -58,   253,   400,   -27,    92,   -71,
     -71,    58,    58,   -28,   241,    80,   -27,    74,   294,   111,
     242,   -27,   -28,    26,    59,    59,   -13,   -28,   -71,    75,
      60,    60,   302,   -71,   -71,   -71,   -71,   -71,    12,   -62,
      29,   -62,    30,   115,   -62,   -62,   -62,    -8,   314,   124,
     201,    36,    37,   -47,   317,    39,    40,    41,    42,    43,
      44,    -8,   -49,    45,   325,   -71,   -71,    47,    48,    49,
     127,    50,   -62,    -9,   117,   -71,   -71,   -62,   -62,   -62,
     337,   128,   201,   277,   -71,    75,   340,    -9,   129,   -71,
     -71,   -71,   -71,   -71,   -71,   278,   -71,    21,    22,   -71,
     -71,   -71,   -71,   -71,   352,    29,   117,    30,   351,   130,
      31,    32,    33,    21,    34,    35,    36,    37,    38,   133,
      39,    40,    41,    42,    43,    44,   -29,   361,    45,   134,
      46,   360,    47,    48,    49,   -29,    50,   381,   383,   -10,
     -29,   374,   244,   375,   139,   -30,   243,   389,   -83,   -83,
     236,   135,   237,   -10,   -30,   394,   373,   -31,   -18,   -30,
     372,   -18,   141,    -7,   259,   387,   -31,   -83,   -50,   235,
     260,   -31,   -83,   -83,   -83,   -83,   -83,    -7,   376,   -50,
     409,   -50,   201,   -47,   377,   -47,   412,   238,   -33,   261,
     -11,   243,   243,   239,   -26,   236,   236,   237,   237,   427,
     270,   -71,   -33,   426,   -11,   -27,   117,   418,   -26,   419,
     420,   421,   381,   433,   235,   235,   374,   263,   375,   -27,
     -58,   378,   381,   381,   -58,   -58,   374,   374,   375,   375,
     240,   431,   238,   238,   379,   372,   -28,   -29,   239,   239,
     380,   437,   438,   241,   269,   372,   372,   -32,   -30,   242,
     -28,   -29,   -19,   376,   -74,   -19,   -32,   -71,   -71,   377,
     -31,   -32,   -30,   376,   376,    84,    85,    86,   166,   377,
     377,   -83,   276,    91,   -31,   240,   240,   246,   -71,   -32,
     -80,   -71,   -71,   -71,   -71,   -71,   -80,   -80,   241,   241,
     -36,   -52,   -81,   -32,   242,   242,   378,    94,   -52,   -36,
     109,   166,   -36,   -34,   -36,   -80,   378,   378,   -82,   379,
     -80,   -80,   -80,   -80,   -80,   380,   -36,   -34,   -16,   379,
     379,   -16,   -33,   123,   -33,   380,   380,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   224,   -33,   -33,   -33,
     -33,   -33,   -33,   -71,   -71,   -33,   291,   -33,   -33,   -33,
     -33,   -33,   -34,   -33,   166,   244,   159,   384,   -12,   -81,
     -81,   -34,   -71,   278,   -71,   -43,   -34,   -71,   -71,   -71,
     -71,   -71,   -12,   -70,   248,   249,   250,   166,   -81,   -43,
     202,   252,   203,   -81,   -81,   -81,   -81,   -81,   197,   159,
     -22,   204,   205,   -22,   -72,   206,   207,   208,   209,   210,
     211,   -73,   -49,   212,   -49,   -69,   -40,   213,   214,   215,
     292,   216,   -43,   -40,    -8,   271,   272,   273,   166,   275,
     -40,   -43,   -40,    -8,   217,   293,   -43,   -40,    -8,    29,
     301,    30,   280,   281,   282,   166,   -35,   -45,   315,   284,
      36,    37,   159,   295,    39,    40,    41,    42,    43,    44,
     -35,   -45,    45,   112,   304,   318,    47,    48,    49,   -44,
      50,   -46,   159,   159,   159,   159,   321,   -76,   166,   159,
     202,   125,   279,   -44,   126,   -46,   166,   166,   166,   166,
     166,   310,   205,   313,   166,   206,   207,   208,   209,   210,
     211,   -52,   -53,   212,   -53,   254,   -52,   213,   214,   -53,
     224,   216,   -75,   197,   197,   197,   159,   197,   224,   224,
     224,   224,   224,   333,   -42,   336,   166,   -71,   -71,   -77,
     217,   217,   217,   159,   324,   245,   -17,   217,   -42,   -17,
     244,   -78,   390,   -74,   -74,   -41,   -38,   246,   -71,    -9,
     224,   -71,   -71,   -71,   -71,   -71,   167,   327,    -9,   -41,
     -38,   338,   -74,    -9,   -74,   341,   159,   -74,   -74,   -74,
     -74,   -74,   -47,   224,   159,   159,   159,   159,   159,   159,
     344,   197,   159,   -10,   166,   -35,   -45,    -7,   198,   167,
     -39,   347,   -10,   166,   -35,   -45,    -7,   -10,   217,   -35,
     -45,    -7,   -21,   -44,   -39,   -21,   217,   217,   217,   217,
     217,   217,   -44,   197,   159,   -56,   -85,   -44,   -85,   348,
      95,   -56,   -56,   349,   225,   408,   166,   350,   -85,   -83,
     -83,   -85,   -85,   -85,   -85,   -85,   -85,   -46,   217,   -85,
     125,   -79,   167,   346,   168,   224,   -46,   -85,   -83,   125,
     -83,   -46,   354,   -83,   -83,   -83,   -83,   -83,   244,   166,
     434,   217,   167,   167,   167,   167,   353,   -51,   144,   167,
     145,   356,   159,    94,   -51,   125,   199,   168,   355,   146,
     147,   159,   357,   148,   149,   150,   151,   152,   153,   -51,
     358,   154,   137,   254,   -51,   155,   156,   157,   359,   158,
     362,   363,   364,   198,   198,   198,   167,   198,   -20,   385,
     -80,   -80,   226,   197,   159,   386,   403,   391,   -74,   -74,
     225,   225,   225,   167,   392,   393,   395,   225,   402,   -80,
     168,   -80,   405,   217,   -80,   -80,   -80,   -80,   -80,   -74,
     -37,   410,   -74,   -74,   -74,   -74,   -74,   159,   413,   404,
     168,   168,   168,   168,   -37,   416,   167,   168,   202,   422,
     279,   423,   424,    27,   167,   167,   167,   167,   167,   167,
     205,   198,   167,   206,   207,   208,   209,   210,   211,   425,
     -57,   212,   -57,   428,   429,   213,   -57,   -57,   225,   216,
     430,   199,   199,   199,   168,   199,   225,   225,   225,   225,
     225,   225,   436,   198,   167,   -81,   -81,   -60,   226,   226,
     226,   168,   -60,   -60,   -60,   226,   -48,    11,   -48,     0,
       0,   -82,   -82,   285,   -81,     0,   -81,   -42,   225,   -81,
     -81,   -81,   -81,   -81,   169,     0,   -42,     0,     0,     0,
     -82,   -42,   -82,     0,   168,   -82,   -82,   -82,   -82,   -82,
       0,   225,   168,   168,   168,   168,   168,   168,     0,   199,
     168,   -41,   167,   -38,   -39,     0,   200,   169,     0,     0,
     -41,   167,   -38,   -39,   -55,   -41,   226,   -38,   -39,    95,
     -55,   -55,     0,     0,   226,   226,   226,   226,   226,   226,
       0,   199,   168,   -56,   144,   -56,   247,     0,   287,   -56,
     -56,     0,   227,   198,   167,     0,   147,   -70,   -70,   148,
     149,   150,   151,   152,   153,     0,   226,   154,     0,     0,
     169,     0,   165,   225,     0,   158,   -70,     0,   -70,     0,
       0,   -70,   -70,   -70,   -70,   -70,     0,   167,     0,   226,
     169,   169,   169,   169,     0,     0,   -58,   169,   -58,   -34,
     168,   -34,   -58,   -58,     0,   165,   -52,     0,   -52,   168,
     -34,   -34,   286,   -52,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,   -34,     0,   121,   -34,   -34,   -34,     0,
     -34,   200,   200,   200,   169,   200,     0,     0,   -66,   -66,
     223,   199,   168,     0,     0,     0,   -83,   -83,   227,   227,
     227,   169,   163,     0,     0,   227,     0,   -66,   165,   -66,
       0,   226,   -66,   -66,   -66,   290,   -66,   -83,     0,     0,
     -83,   -83,   -83,   -83,   -83,   168,     0,     0,     0,     0,
       0,   165,     0,   -59,   169,   163,   -68,   -68,   -59,   -59,
     -59,     0,   169,   169,   169,   169,   169,   169,     0,   200,
     169,     0,   120,     0,     0,   -68,   122,   -68,     0,     0,
     -68,   -68,   -68,   -68,   -68,     0,   227,     0,     0,     0,
     221,     0,   165,     0,   227,   227,   227,   227,   227,   227,
       0,   200,   169,     0,   202,     0,   279,     0,   163,   165,
     164,   160,   -80,   -80,     0,     0,   205,     0,     0,   206,
     207,   208,   209,   210,   211,   -62,   227,   212,   -62,   -62,
     -62,   163,   162,   -80,     0,   216,   -80,   -80,   -80,   -80,
     -80,     0,   165,   164,   160,     0,     0,   161,     0,   227,
     165,   165,   165,   308,   165,     0,     0,   -60,   165,   -60,
     169,   -63,   -60,   -60,   -60,   162,   -63,   -63,   -63,   169,
       0,     0,   163,     0,   223,     0,     0,     0,   222,   218,
     161,   119,   223,   223,   223,   331,   223,     0,     0,   163,
     165,     0,   -51,     0,   -51,   118,   164,   160,   286,   -51,
     220,   200,   169,   -55,     0,   -55,     0,     0,   287,   -55,
     -55,     0,     0,     0,   223,   219,     0,     0,   162,   164,
     160,   227,   163,     0,   -56,   -72,   -72,   255,   -56,   -56,
     163,   163,   307,   161,   309,   169,     0,   223,   163,     0,
       0,   162,     0,     0,   -72,     0,   -72,     0,   165,   -72,
     -72,   -72,   -72,   -72,   221,     0,   161,   165,     0,     0,
     164,   160,   221,   221,   330,     0,   332,    96,    97,   -59,
     163,   -59,     0,     0,   -59,   -59,   -59,   164,   160,   -73,
     -73,     0,   162,     0,     0,     0,   -64,     0,   -64,     0,
     165,   -64,   -64,   -64,   221,   288,     0,   161,   -73,   162,
     -73,     0,     0,   -73,   -73,   -73,   -73,   -73,     0,   223,
     164,   160,     0,     0,   161,     0,     0,   221,   164,   164,
     164,     0,   164,   165,     0,     0,   164,   160,   163,   -63,
       0,   -63,   162,     0,   -63,   -63,   -63,   163,     0,     0,
     162,   306,   222,   218,     0,     0,     0,   161,   162,     0,
     222,   222,   222,     0,   222,   305,     0,   -60,   164,   160,
     -60,   -60,   -60,   161,   220,     0,   -82,   -82,     0,     0,
     163,   -55,   220,   329,   255,   -55,   -55,     0,     0,   219,
     162,     0,   222,   218,     0,   -82,     0,   328,     0,   221,
     -82,   -82,   -82,   -82,   -82,   161,   -70,   -70,     0,     0,
       0,     0,     0,   163,   220,   222,   218,     0,   -59,   -69,
     -69,   -59,   -59,   -59,     0,   -70,   164,   160,     0,   219,
     -70,   -70,   -70,   -70,   -70,   164,   160,   220,   -69,     0,
     -69,     0,     0,   -69,   -69,   -69,   -69,   -69,   162,     0,
       0,     0,   219,     0,   -76,   -76,   -63,   162,     0,   -63,
     -63,   -63,     0,   161,     0,     0,     0,     0,   164,   160,
       0,     0,   161,   -76,     0,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,   222,   218,     0,
     162,     0,     0,     0,     0,     0,     0,     0,   202,     0,
     279,   164,   160,     0,     0,   161,     0,    96,    97,   220,
     205,     0,     0,   206,   207,   208,   209,   210,   211,     0,
     -61,   212,   -61,   162,   219,   -61,   -61,   -61,   -64,   216,
       0,   -64,   -64,   -64,   -37,   256,   -37,     0,   161,   -37,
     -37,   -37,   401,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -26,   -37,   -26,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -27,   -26,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -28,   -27,   -28,     0,     0,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -29,   -28,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -30,   -29,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -31,   -30,   -31,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -32,   -31,   -32,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -36,   -32,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -34,   -36,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -43,   -34,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -40,   -43,   -40,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -40,    -8,   -40,    -8,     0,     0,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -9,    -8,    -9,     0,     0,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,    -9,     0,    -9,
      -9,    -9,    -9,    -9,   -10,    -9,   -10,     0,     0,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,
     -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,   -10,
     -10,   -10,   -10,   -10,   -35,   -10,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -45,   -35,   -45,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,
     -45,   -45,   -45,   -45,    -7,   -45,    -7,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,    -7,
      -7,    -7,    -7,    -7,   -44,    -7,   -44,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -46,   -44,   -46,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -37,   -46,   -37,     0,     0,   -37,
     -37,   -37,   435,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -42,   -37,   -42,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -41,   -42,   -41,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -38,   -41,   -38,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -39,   -38,   -39,     0,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,
     -39,   -39,   -39,   -39,    29,   -39,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
      88,    47,    48,    49,    29,    50,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     116,    47,    48,    49,   -25,    50,   -25,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -24,   -25,   -24,     0,     0,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,   -24,
     -24,   -24,   -24,   -24,    29,   -24,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     267,    47,    48,    49,   -33,    50,   -33,     0,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -26,   -33,   -26,     0,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -27,   -26,   -27,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -28,   -27,   -28,     0,     0,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -29,   -28,   -29,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   -30,   -29,   -30,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -31,   -30,   -31,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -32,   -31,   -32,     0,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,
     -32,   -32,   -32,   -32,    29,   -32,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     299,    47,    48,    49,   -36,    50,   -36,     0,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,    29,   -36,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     322,    47,    48,    49,   -34,    50,   -34,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,    29,   -34,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     345,    47,    48,    49,   -43,    50,   -43,     0,     0,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -40,   -43,   -40,     0,     0,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -40,    -8,   -40,    -8,     0,     0,    -8,
      -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -9,    -8,    -9,     0,     0,    -9,
      -9,    -9,     0,    -9,    -9,    -9,    -9,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,    -9,     0,    -9,
      -9,    -9,    -9,    -9,   -10,    -9,   -10,     0,     0,   -10,
     -10,   -10,     0,   -10,   -10,   -10,   -10,   -10,     0,   -10,
     -10,   -10,   -10,   -10,   -10,     0,     0,   -10,     0,   -10,
     -10,   -10,   -10,   -10,   -35,   -10,   -35,     0,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -45,   -35,   -45,     0,     0,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,
     -45,   -45,   -45,   -45,    -7,   -45,    -7,     0,     0,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,    -7,
      -7,    -7,    -7,    -7,   -44,    -7,   -44,     0,     0,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -46,   -44,   -46,     0,     0,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,
     -46,   -46,   -46,   -46,    29,   -46,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     399,    47,    48,    49,   -42,    50,   -42,     0,     0,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -41,   -42,   -41,     0,     0,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,
     -41,   -41,   -41,   -41,    29,   -41,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   176,
     417,    47,    48,    49,   -38,    50,   -38,     0,     0,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -39,   -38,   -39,     0,     0,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,
     -39,   -39,   -39,   -39,    29,   -39,    30,     0,     0,   228,
     229,   230,     0,   231,   232,    36,    37,   233,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   234,
       0,    47,    48,    49,    29,    50,    30,     0,     0,   365,
     366,   367,     0,   368,   369,    36,    37,   370,     0,    39,
      40,    41,    42,    43,    44,     0,     0,    45,     0,   371,
       0,    47,    48,    49,    29,    50,    30,     0,     0,   170,
     171,   172,     0,   173,   174,    36,    37,   175,     0,    39,
      40,    41,    42,    43,    44,     0,   144,    45,   145,   176,
       0,    47,    48,    49,     0,    50,     0,   146,   147,     0,
       0,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     -49,     0,     0,   155,   156,   157,    29,   158,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
     316,     0,     0,    47,    48,    49,    29,    50,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
     339,     0,     0,    47,    48,    49,   144,    50,   145,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,     0,
       0,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     382,     0,     0,   155,   156,   157,   144,   158,   145,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,     0,
       0,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     388,     0,     0,   155,   156,   157,    29,   158,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
     411,     0,     0,    47,    48,    49,   144,    50,   145,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,     0,
       0,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     432,     0,     0,   155,   156,   157,    29,   158,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    39,    40,    41,    42,    43,    44,     0,   144,    45,
     145,     0,     0,    47,    48,    49,     0,    50,     0,   146,
     147,     0,     0,   148,   149,   150,   151,   152,   153,     0,
      29,   154,    83,     0,     0,   155,   156,   157,     0,   158,
       0,     0,    37,     0,     0,    39,    40,    41,    42,    43,
      44,     0,   -53,    45,    29,     0,    83,    47,    48,   -53,
       0,    50,     0,     0,     0,     0,    37,     0,     0,    39,
      40,    41,    42,    43,    44,     0,   -57,    45,    29,     0,
      83,    47,   -57,   -57,     0,    50,     0,     0,     0,     0,
      37,     0,     0,    39,    40,    41,    42,    43,    44,     0,
     -61,    45,   202,     0,   203,   -61,   -61,   -61,     0,    50,
       0,     0,     0,   204,   205,     0,     0,   206,   207,   208,
     209,   210,   211,     0,   144,   212,   247,     0,     0,   213,
     214,   215,     0,   216,     0,     0,   147,   -81,   -81,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   -53,     0,
       0,   155,   156,   -53,   144,   158,   247,     0,   -81,     0,
       0,   -81,   -81,   -81,   -81,   -81,   147,   -82,   -82,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   -57,     0,
       0,   155,   -57,   -57,   144,   158,   247,     0,   -82,     0,
       0,   -82,   -82,   -82,   -82,   -82,   147,     0,     0,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   -61,     0,
       0,   -61,   -61,   -61,   -34,   158,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,   -75,   -75,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,   -77,   -77,
       0,   -34,   -34,   -34,     0,   -34,   -75,     0,   -75,   -78,
     -78,   -75,   -75,   -75,   -75,   -75,     0,   -77,     0,   -77,
     -79,   -79,   -77,   -77,   -77,   -77,   -77,     0,   -78,     0,
     -78,   -65,   -65,   -78,   -78,   -78,   -78,   -78,     0,   -79,
       0,   -79,   -67,   -67,   -79,   -79,   -79,   -79,   -79,     0,
     -65,     0,   -65,   -20,   -20,   -65,   -65,   -65,   290,   -65,
       0,   -67,     0,   -67,   -66,   -66,   -67,   -67,   -67,   -67,
     -67,     0,   -20,     0,   -20,   -68,   -68,   -20,   -20,   -20,
     -20,   -20,     0,   -66,     0,   -72,   -72,     0,   -66,   -66,
     -66,   100,   -66,     0,   -68,   -73,   -73,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -72,   -69,   -69,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -73,   -76,   -76,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -69,   -75,   -75,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -76,   -77,   -77,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -75,   -78,   -78,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -77,   -79,   -79,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -78,   -65,   -65,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -79,   -67,   -67,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -65,   -20,   -20,     0,     0,   -65,
     -65,   -65,   100,   -65,   -67,   -70,   -70,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -20,   -66,   -66,     0,     0,   -20,
     -20,   -20,   -20,   -20,   -68,   -68,   -70,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -66,     0,     0,   -66,
     -66,   -66,   258,   -66,     0,   -68,   -73,   -73,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -72,   -69,   -69,   -72,   -72,
     -72,   -72,   -72,     0,   -76,   -76,     0,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -75,   -75,   -69,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -76,   -77,   -77,   -76,   -76,
     -76,   -76,   -76,     0,   -78,   -78,   -75,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -79,   -79,     0,   -77,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -78,   -65,   -65,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -79,   -67,   -67,   -79,   -79,
     -79,   -79,   -79,     0,   -20,   -20,     0,   -65,     0,     0,
     -65,   -65,   -65,   258,   -65,    96,    97,   -67,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -20,     0,     0,   -20,   -20,
     -20,   -20,   -20,     0,   -64,     0,     0,     0,     0,   -64,
     -64,   -64,     0,    98
};

static const yytype_int16 yycheck[] =
{
       0,   176,    25,     3,   164,   246,    25,     3,    25,     3,
       0,    34,     3,    23,     3,     1,    23,     3,    25,    15,
      30,    25,    45,    30,    15,    25,    15,    13,     3,   270,
      16,    17,    18,    19,    20,    21,    14,   278,    24,    33,
      15,     3,    33,    25,    33,     3,    32,     3,     3,    25,
      73,    74,     3,    15,    73,    78,    73,    80,    33,   234,
      15,    80,   222,     3,     1,    25,     3,     3,     3,    73,
       3,    33,    25,    73,    25,    33,    13,    33,    33,    16,
      17,    18,    19,    20,    21,    89,    25,    24,     1,    22,
     113,    73,    25,    33,   113,    32,    23,    73,    33,    25,
      14,    14,     0,     3,    25,    25,     3,   130,   131,    30,
       3,   130,    25,   130,    25,     0,    14,   140,   141,     0,
      24,   140,   141,   140,   141,    25,   130,     3,    25,    14,
     130,   154,    25,    14,    73,     0,   140,   141,     0,    15,
     140,   141,     0,     4,     5,    24,     0,    73,   130,    14,
     173,     9,    14,    73,   130,     9,    14,    24,   140,   141,
      14,     1,    23,     3,   140,   141,    23,    28,    29,    30,
      31,    32,   195,    13,     0,    23,    16,    17,    18,    19,
      20,    21,    30,     9,    24,    23,    24,    23,    14,   212,
      25,   130,    32,    29,    30,    30,   371,     0,    23,     4,
       5,   140,   141,     0,   130,    24,     9,    12,   231,    23,
     130,    14,     9,    22,   140,   141,    25,    14,    23,    24,
     140,   141,   245,    28,    29,    30,    31,    32,    23,    23,
       1,    25,     3,    25,    28,    29,    30,     0,   261,     3,
     263,    12,    13,    23,   263,    16,    17,    18,    19,    20,
      21,    14,    23,    24,   277,     4,     5,    28,    29,    30,
      25,    32,    23,     0,   268,     4,     5,    28,    29,    30,
     293,    23,   295,    12,    23,    24,   295,    14,    25,    28,
      29,    30,    31,    32,    23,    24,    25,    23,    24,    28,
      29,    30,    31,    32,   317,     1,   300,     3,   317,    25,
       6,     7,     8,    23,    10,    11,    12,    13,    14,     3,
      16,    17,    18,    19,    20,    21,     0,   340,    24,    23,
      26,   340,    28,    29,    30,     9,    32,   350,   351,     0,
      14,   350,    23,   350,    25,     0,   359,   360,     4,     5,
     359,    23,   359,    14,     9,   368,   350,     0,    22,    14,
     350,    25,    25,     0,    24,   359,     9,    23,    25,   359,
      24,    14,    28,    29,    30,    31,    32,    14,   350,    23,
     393,    25,   395,    23,   350,    25,   395,   359,     0,    24,
       0,   404,   405,   359,     0,   404,   405,   404,   405,   412,
      24,    25,    14,   412,    14,     0,   400,   401,    14,   403,
     404,   405,   425,   426,   404,   405,   425,    24,   425,    14,
      25,   350,   435,   436,    29,    30,   435,   436,   435,   436,
     359,   425,   404,   405,   350,   425,     0,     0,   404,   405,
     350,   435,   436,   359,    23,   435,   436,     0,     0,   359,
      14,    14,    22,   425,    25,    25,     9,     4,     5,   425,
       0,    14,    14,   435,   436,    42,    43,    44,    45,   435,
     436,    25,    23,    50,    14,   404,   405,    24,    25,     0,
      25,    28,    29,    30,    31,    32,     4,     5,   404,   405,
       0,    23,    25,    14,   404,   405,   425,    29,    30,     9,
      77,    78,     0,     0,    14,    23,   435,   436,    25,   425,
      28,    29,    30,    31,    32,   425,    14,    14,    22,   435,
     436,    25,     1,   100,     3,   435,   436,     6,     7,     8,
       9,    10,    11,    12,    13,    14,   113,    16,    17,    18,
      19,    20,    21,     4,     5,    24,    24,    26,    27,    28,
      29,    30,     0,    32,   131,    23,    45,    25,     0,     4,
       5,     9,    23,    24,    25,     0,    14,    28,    29,    30,
      31,    32,    14,    25,   151,   152,   153,   154,    23,    14,
       1,   158,     3,    28,    29,    30,    31,    32,    77,    78,
      22,    12,    13,    25,    25,    16,    17,    18,    19,    20,
      21,    25,    23,    24,    25,    25,     0,    28,    29,    30,
      24,    32,     0,     0,     0,   192,   193,   194,   195,   196,
      14,     9,     9,     9,   113,    24,    14,    14,    14,     1,
      23,     3,   209,   210,   211,   212,     0,     0,    23,   216,
      12,    13,   131,    24,    16,    17,    18,    19,    20,    21,
      14,    14,    24,    25,    25,    23,    28,    29,    30,     0,
      32,     0,   151,   152,   153,   154,    23,    25,   245,   158,
       1,    22,     3,    14,    25,    14,   253,   254,   255,   256,
     257,   258,    13,   260,   261,    16,    17,    18,    19,    20,
      21,    25,    23,    24,    25,    29,    30,    28,    29,    30,
     277,    32,    25,   192,   193,   194,   195,   196,   285,   286,
     287,   288,   289,   290,     0,   292,   293,     4,     5,    25,
     209,   210,   211,   212,    25,    12,    22,   216,    14,    25,
      23,    25,    25,     4,     5,     0,     0,    24,    25,     0,
     317,    28,    29,    30,    31,    32,    45,    25,     9,    14,
      14,    23,    23,    14,    25,    23,   245,    28,    29,    30,
      31,    32,    25,   340,   253,   254,   255,   256,   257,   258,
      23,   260,   261,     0,   351,     0,     0,     0,    77,    78,
       0,    25,     9,   360,     9,     9,     9,    14,   277,    14,
      14,    14,    22,     0,    14,    25,   285,   286,   287,   288,
     289,   290,     9,   292,   293,    23,     1,    14,     3,    23,
      28,    29,    30,    25,   113,   392,   393,    25,    13,     4,
       5,    16,    17,    18,    19,    20,    21,     0,   317,    24,
      22,    25,   131,    25,    45,   412,     9,    32,    23,    22,
      25,    14,    25,    28,    29,    30,    31,    32,    23,   426,
      25,   340,   151,   152,   153,   154,    23,    23,     1,   158,
       3,    25,   351,    29,    30,    22,    77,    78,    25,    12,
      13,   360,    23,    16,    17,    18,    19,    20,    21,    25,
      25,    24,    25,    29,    30,    28,    29,    30,    25,    32,
      23,    23,    23,   192,   193,   194,   195,   196,    25,    23,
       4,     5,   113,   392,   393,    23,    25,    24,     4,     5,
     209,   210,   211,   212,    24,    24,    24,   216,    23,    23,
     131,    25,    25,   412,    28,    29,    30,    31,    32,    25,
       0,    23,    28,    29,    30,    31,    32,   426,    23,     9,
     151,   152,   153,   154,    14,    23,   245,   158,     1,    25,
       3,    23,    25,    22,   253,   254,   255,   256,   257,   258,
      13,   260,   261,    16,    17,    18,    19,    20,    21,    25,
      23,    24,    25,    23,    23,    28,    29,    30,   277,    32,
      23,   192,   193,   194,   195,   196,   285,   286,   287,   288,
     289,   290,    25,   292,   293,     4,     5,    23,   209,   210,
     211,   212,    28,    29,    30,   216,    23,     3,    25,    -1,
      -1,     4,     5,    30,    23,    -1,    25,     0,   317,    28,
      29,    30,    31,    32,    45,    -1,     9,    -1,    -1,    -1,
      23,    14,    25,    -1,   245,    28,    29,    30,    31,    32,
      -1,   340,   253,   254,   255,   256,   257,   258,    -1,   260,
     261,     0,   351,     0,     0,    -1,    77,    78,    -1,    -1,
       9,   360,     9,     9,    23,    14,   277,    14,    14,    28,
      29,    30,    -1,    -1,   285,   286,   287,   288,   289,   290,
      -1,   292,   293,    23,     1,    25,     3,    -1,    28,    29,
      30,    -1,   113,   392,   393,    -1,    13,     4,     5,    16,
      17,    18,    19,    20,    21,    -1,   317,    24,    -1,    -1,
     131,    -1,    45,   412,    -1,    32,    23,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,    -1,   426,    -1,   340,
     151,   152,   153,   154,    -1,    -1,    23,   158,    25,     1,
     351,     3,    29,    30,    -1,    78,    23,    -1,    25,   360,
      12,    13,    29,    30,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    25,    -1,    98,    28,    29,    30,    -1,
      32,   192,   193,   194,   195,   196,    -1,    -1,     4,     5,
     113,   392,   393,    -1,    -1,    -1,     4,     5,   209,   210,
     211,   212,    45,    -1,    -1,   216,    -1,    23,   131,    25,
      -1,   412,    28,    29,    30,    31,    32,    25,    -1,    -1,
      28,    29,    30,    31,    32,   426,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    23,   245,    78,     4,     5,    28,    29,
      30,    -1,   253,   254,   255,   256,   257,   258,    -1,   260,
     261,    -1,    95,    -1,    -1,    23,    99,    25,    -1,    -1,
      28,    29,    30,    31,    32,    -1,   277,    -1,    -1,    -1,
     113,    -1,   195,    -1,   285,   286,   287,   288,   289,   290,
      -1,   292,   293,    -1,     1,    -1,     3,    -1,   131,   212,
      45,    45,     4,     5,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    25,   317,    24,    28,    29,
      30,   154,    45,    25,    -1,    32,    28,    29,    30,    31,
      32,    -1,   245,    78,    78,    -1,    -1,    45,    -1,   340,
     253,   254,   255,   256,   257,    -1,    -1,    23,   261,    25,
     351,    23,    28,    29,    30,    78,    28,    29,    30,   360,
      -1,    -1,   195,    -1,   277,    -1,    -1,    -1,   113,   113,
      78,    94,   285,   286,   287,   288,   289,    -1,    -1,   212,
     293,    -1,    23,    -1,    25,    93,   131,   131,    29,    30,
     113,   392,   393,    23,    -1,    25,    -1,    -1,    28,    29,
      30,    -1,    -1,    -1,   317,   113,    -1,    -1,   131,   154,
     154,   412,   245,    -1,    25,     4,     5,    28,    29,    30,
     253,   254,   255,   131,   257,   426,    -1,   340,   261,    -1,
      -1,   154,    -1,    -1,    23,    -1,    25,    -1,   351,    28,
      29,    30,    31,    32,   277,    -1,   154,   360,    -1,    -1,
     195,   195,   285,   286,   287,    -1,   289,     4,     5,    23,
     293,    25,    -1,    -1,    28,    29,    30,   212,   212,     4,
       5,    -1,   195,    -1,    -1,    -1,    23,    -1,    25,    -1,
     393,    28,    29,    30,   317,    32,    -1,   195,    23,   212,
      25,    -1,    -1,    28,    29,    30,    31,    32,    -1,   412,
     245,   245,    -1,    -1,   212,    -1,    -1,   340,   253,   254,
     255,    -1,   257,   426,    -1,    -1,   261,   261,   351,    23,
      -1,    25,   245,    -1,    28,    29,    30,   360,    -1,    -1,
     253,   254,   277,   277,    -1,    -1,    -1,   245,   261,    -1,
     285,   286,   287,    -1,   289,   253,    -1,    25,   293,   293,
      28,    29,    30,   261,   277,    -1,     4,     5,    -1,    -1,
     393,    25,   285,   286,    28,    29,    30,    -1,    -1,   277,
     293,    -1,   317,   317,    -1,    23,    -1,   285,    -1,   412,
      28,    29,    30,    31,    32,   293,     4,     5,    -1,    -1,
      -1,    -1,    -1,   426,   317,   340,   340,    -1,    25,     4,
       5,    28,    29,    30,    -1,    23,   351,   351,    -1,   317,
      28,    29,    30,    31,    32,   360,   360,   340,    23,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    32,   351,    -1,
      -1,    -1,   340,    -1,     4,     5,    25,   360,    -1,    28,
      29,    30,    -1,   351,    -1,    -1,    -1,    -1,   393,   393,
      -1,    -1,   360,    23,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,   412,   412,    -1,
     393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,   426,   426,    -1,    -1,   393,    -1,     4,     5,   412,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,   426,   412,    28,    29,    30,    25,    32,
      -1,    28,    29,    30,     1,    32,     3,    -1,   426,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      27,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      -1,    28,    29,    30,     1,    32,     3,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,     1,    24,     3,    26,
      -1,    28,    29,    30,    -1,    32,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    -1,    28,    29,    30,     1,    32,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,     1,    24,
       3,    -1,    -1,    28,    29,    30,    -1,    32,    -1,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
       1,    24,     3,    -1,    -1,    28,    29,    30,    -1,    32,
      -1,    -1,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,     1,    -1,     3,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,     1,    -1,
       3,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,     1,    -1,     3,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,     1,    24,     3,    -1,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    13,     4,     5,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    30,     1,    32,     3,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,    13,     4,     5,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    30,     1,    32,     3,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    32,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    28,    29,    30,     1,    32,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    13,     4,     5,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,     4,     5,
      -1,    28,    29,    30,    -1,    32,    23,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,    23,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,    23,    -1,
      25,     4,     5,    28,    29,    30,    31,    32,    -1,    23,
      -1,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
      23,    -1,    25,     4,     5,    28,    29,    30,    31,    32,
      -1,    23,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    23,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    23,    -1,     4,     5,    -1,    28,    29,
      30,    31,    32,    -1,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,    23,     4,     5,    -1,    -1,    28,
      29,    30,    31,    32,     4,     5,    25,    -1,    -1,    28,
      29,    30,    31,    32,     4,     5,    25,    -1,    -1,    28,
      29,    30,    31,    32,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,     4,     5,    -1,    25,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    25,    -1,    -1,
      28,    29,    30,    31,    32,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,     4,     5,    25,    -1,    -1,    28,
      29,    30,    31,    32,     4,     5,    -1,    25,    -1,    -1,
      28,    29,    30,    31,    32,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,     4,     5,    -1,    25,    -1,    -1,
      28,    29,    30,    31,    32,     4,     5,    25,    -1,    -1,
      28,    29,    30,    31,    32,    25,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,    -1,    32
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
      31,     3,    15,    45,    53,     3,    43,     3,    25,    60,
      53,    23,    25,    46,     3,    25,    27,    45,    55,    56,
      57,    59,    57,    60,     3,    22,    25,    25,    23,    25,
      25,    46,    53,     3,    23,    23,    45,    25,    53,    25,
       9,    25,    45,    45,     1,     3,    12,    13,    16,    17,
      18,    19,    20,    21,    24,    28,    29,    30,    32,    42,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       6,     7,     8,    10,    11,    14,    26,    38,    46,    47,
      48,    49,    50,    51,    52,    53,     1,     3,    13,    16,
      17,    18,    19,    20,    21,    24,    32,    42,    61,    62,
      63,    53,     1,     3,    12,    13,    16,    17,    18,    19,
      20,    21,    24,    28,    29,    30,    32,    42,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,     6,     7,
       8,    10,    11,    14,    26,    38,    46,    47,    48,    49,
      50,    51,    52,    53,    23,    12,    24,     3,    60,    60,
      60,    53,    60,    30,    29,    28,    32,    64,    31,    24,
      24,    24,    53,    24,     3,    15,    33,    27,    44,    23,
      24,    60,    60,    60,    53,    60,    23,    12,    24,     3,
      60,    60,    60,    53,    60,    30,    29,    28,    32,    64,
      31,    24,    24,    24,    53,    24,     3,    15,    33,    27,
      44,    23,    53,    43,    25,    55,    56,    57,    59,    57,
      60,     3,    25,    60,    53,    23,    25,    46,    23,     3,
      33,    23,    27,    43,    25,    53,    43,    25,    55,    56,
      57,    59,    57,    60,     3,    25,    60,    53,    23,    25,
      46,    23,     3,    33,    23,    27,    25,    25,    23,    25,
      25,    46,    53,    23,    25,    25,    25,    23,    25,    25,
      46,    53,    23,    23,    23,     6,     7,     8,    10,    11,
      14,    26,    38,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    25,    53,    25,    23,    23,    45,    25,    53,
      25,    24,    24,    24,    53,    24,     3,    15,    33,    27,
      44,     9,    23,    25,     9,    25,     3,    25,    60,    53,
      23,    25,    46,    23,     3,    33,    23,    27,    45,    45,
      45,    45,    25,    23,    25,    25,    46,    53,    23,    23,
      23,    45,    25,    53,    25,     9,    25,    45,    45
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
#line 105 "./src/syntax.y"
            {
    (yyval.producao) = aloca_no("program", (yyvsp[0].producao)->type);
    (yyval.producao)->filhos[0] = (yyvsp[0].producao);
    raiz = (yyval.producao);
  }
#line 2459 "./src/syntax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 112 "./src/syntax.y"
                  {
    (yyval.producao) = aloca_no("paramList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2469 "./src/syntax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 117 "./src/syntax.y"
          {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2477 "./src/syntax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 122 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2485 "./src/syntax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 125 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2493 "./src/syntax.tab.c"
    break;

  case 7: /* variableParam: TYPE LISTTYPE ID ';'  */
#line 130 "./src/syntax.y"
                       {
    Simbolo sim;
    char tipo[10];

    strcpy(tipo, (yyvsp[-3].terminal)->valor);
    strcat(tipo, (yyvsp[-2].terminal)->valor);

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
#line 2531 "./src/syntax.tab.c"
    break;

  case 8: /* variableParam: TYPE ID ';'  */
#line 163 "./src/syntax.y"
                {
    Simbolo sim;

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
#line 2563 "./src/syntax.tab.c"
    break;

  case 9: /* variableParam: TYPE LISTTYPE LEXICAL_ERROR  */
#line 190 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2572 "./src/syntax.tab.c"
    break;

  case 10: /* variableParam: TYPE LEXICAL_ERROR ';'  */
#line 194 "./src/syntax.y"
                           {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2581 "./src/syntax.tab.c"
    break;

  case 11: /* functionParam: TYPE ID '(' functionParams ')' stmt  */
#line 200 "./src/syntax.y"
                                      {
    Simbolo sim;

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
#line 2620 "./src/syntax.tab.c"
    break;

  case 12: /* functionParam: TYPE LISTTYPE ID '(' functionParams ')' stmt  */
#line 234 "./src/syntax.y"
                                                 {
    Simbolo sim;
    char tipo[10];

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
#line 2666 "./src/syntax.tab.c"
    break;

  case 13: /* functionParams: functionParamsList  */
#line 277 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2674 "./src/syntax.tab.c"
    break;

  case 14: /* functionParams: %empty  */
#line 280 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2682 "./src/syntax.tab.c"
    break;

  case 15: /* functionParams: error  */
#line 283 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2691 "./src/syntax.tab.c"
    break;

  case 16: /* functionParamsList: functionParamsList ',' TYPE ID  */
#line 289 "./src/syntax.y"
                                 {

    Simbolo sim;

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
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
    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;
    strcpy((yyvsp[0].terminal)->tipo, (yyvsp[-1].terminal)->valor);

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));

  }
#line 2724 "./src/syntax.tab.c"
    break;

  case 17: /* functionParamsList: functionParamsList ',' TYPE LISTTYPE ID  */
#line 317 "./src/syntax.y"
                                            {


    Simbolo sim;
    char tipo[10];

    strcpy(tipo, (yyvsp[-2].terminal)->valor);
    strcat(tipo, (yyvsp[-1].terminal)->valor);

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
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
    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[3], (yyvsp[0].terminal));

  }
#line 2766 "./src/syntax.tab.c"
    break;

  case 18: /* functionParamsList: TYPE ID  */
#line 354 "./src/syntax.y"
            {


    Simbolo sim;

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
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
    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;
    strcpy((yyvsp[0].terminal)->tipo, (yyvsp[-1].terminal)->valor);

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[0].terminal));

  }
#line 2799 "./src/syntax.tab.c"
    break;

  case 19: /* functionParamsList: TYPE LISTTYPE ID  */
#line 382 "./src/syntax.y"
                     {
    Simbolo sim;
    char tipo[10];

    strcpy(tipo, (yyvsp[-2].terminal)->valor);
    strcat(tipo, (yyvsp[-1].terminal)->valor);

    sim.linha = (yyvsp[0].terminal)->linha;
    sim.coluna = (yyvsp[0].terminal)->coluna;
    sim.escopo = escopo_atual->scope_size;
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
    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 2837 "./src/syntax.tab.c"
    break;

  case 20: /* call: ID '(' argList ')'  */
#line 417 "./src/syntax.y"
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

    (yyvsp[-3].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-3].terminal));

    clear_arg_list();
    nro_argumentos = 0;
  }
#line 2867 "./src/syntax.tab.c"
    break;

  case 21: /* argList: argList ',' ID  */
#line 444 "./src/syntax.y"
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
#line 2888 "./src/syntax.tab.c"
    break;

  case 22: /* argList: ID  */
#line 460 "./src/syntax.y"
       {

    nro_argumentos++;

    strcpy((yyvsp[0].terminal)->tipo, get_type_id((yyvsp[0].terminal)->valor, (yyvsp[0].terminal)));

    (yyval.producao) = aloca_no("argList", (yyvsp[0].terminal)->tipo);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[0].terminal)->tipo);

    put_arg_in_list((yyvsp[0].terminal)->linha, (yyvsp[0].terminal)->coluna, (yyvsp[0].terminal)->tipo, (yyval.producao)->filhos[0]);

    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 2908 "./src/syntax.tab.c"
    break;

  case 23: /* argList: %empty  */
#line 475 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 2916 "./src/syntax.tab.c"
    break;

  case 24: /* stmList: stmList stmt  */
#line 480 "./src/syntax.y"
               {
    (yyval.producao) = aloca_no("stmList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2926 "./src/syntax.tab.c"
    break;

  case 25: /* stmList: stmt  */
#line 485 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2934 "./src/syntax.tab.c"
    break;

  case 26: /* stmt: expStatement  */
#line 490 "./src/syntax.y"
               {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2942 "./src/syntax.tab.c"
    break;

  case 27: /* stmt: compoundStatement  */
#line 493 "./src/syntax.y"
                      {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2950 "./src/syntax.tab.c"
    break;

  case 28: /* stmt: ifStatement  */
#line 496 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2958 "./src/syntax.tab.c"
    break;

  case 29: /* stmt: forStatement  */
#line 499 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2966 "./src/syntax.tab.c"
    break;

  case 30: /* stmt: returnStatement  */
#line 502 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2974 "./src/syntax.tab.c"
    break;

  case 31: /* stmt: inputStatement  */
#line 505 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2982 "./src/syntax.tab.c"
    break;

  case 32: /* stmt: outputStatement  */
#line 508 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2990 "./src/syntax.tab.c"
    break;

  case 33: /* stmt: variableParam  */
#line 511 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2998 "./src/syntax.tab.c"
    break;

  case 34: /* expStatement: expression ';'  */
#line 516 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 3006 "./src/syntax.tab.c"
    break;

  case 35: /* compoundStatement: '{' stmList '}'  */
#line 522 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 3014 "./src/syntax.tab.c"
    break;

  case 36: /* compoundStatement: '{' '}'  */
#line 525 "./src/syntax.y"
            {
    (yyval.producao) = NULL;
  }
#line 3022 "./src/syntax.tab.c"
    break;

  case 37: /* ifStatement: IF '(' expression ')' stmt  */
#line 531 "./src/syntax.y"
                             {
    (yyval.producao) = aloca_no("ifStatement", "undefined");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-4].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 3037 "./src/syntax.tab.c"
    break;

  case 38: /* ifStatement: IF '(' expression ')' stmt ELSE stmt  */
#line 541 "./src/syntax.y"
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
#line 3056 "./src/syntax.tab.c"
    break;

  case 39: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 557 "./src/syntax.y"
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
#line 3073 "./src/syntax.tab.c"
    break;

  case 40: /* forStatement: FOR '(' ')'  */
#line 569 "./src/syntax.y"
                 {
    (yyval.producao) = NULL;
    yyerror("Error For Statement without expressions !!");
    yyerrok;
  }
#line 3083 "./src/syntax.tab.c"
    break;

  case 41: /* forStatement: FOR '(' expStatement expression ')'  */
#line 574 "./src/syntax.y"
                                         {
    (yyval.producao) = NULL;
    yyerror("Error For Statement missing one expression statement !!");
    yyerrok;
  }
#line 3093 "./src/syntax.tab.c"
    break;

  case 42: /* forStatement: FOR '(' expStatement expStatement ')'  */
#line 579 "./src/syntax.y"
                                          {
    (yyval.producao) = NULL;
    yyerror("Error For Statement missing the last expression !!");
    yyerrok;
  }
#line 3103 "./src/syntax.tab.c"
    break;

  case 43: /* returnStatement: RETURN expression ';'  */
#line 586 "./src/syntax.y"
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
#line 3121 "./src/syntax.tab.c"
    break;

  case 44: /* inputStatement: INPUT '(' ID ')' ';'  */
#line 601 "./src/syntax.y"
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
#line 3148 "./src/syntax.tab.c"
    break;

  case 45: /* inputStatement: INPUT '(' ')' ';'  */
#line 623 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error Input without parameter !!");
    yyerrok;
  }
#line 3158 "./src/syntax.tab.c"
    break;

  case 46: /* outputStatement: OUTPUT '(' term ')' ';'  */
#line 630 "./src/syntax.y"
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
#line 3185 "./src/syntax.tab.c"
    break;

  case 47: /* expression: ID ASSIGN expression  */
#line 654 "./src/syntax.y"
                        {
    strcpy((yyvsp[-2].terminal)->tipo,get_type_id((yyvsp[-2].terminal)->valor, (yyvsp[-2].terminal)));

    assign_expression_type_check((yyvsp[-2].terminal), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("expression", (yyvsp[-2].terminal)->tipo);
    (yyval.producao)->filhos[0] = aloca_no("", (yyvsp[-2].terminal)->tipo);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-2].terminal)->escopo = escopo_atual->scope_size;

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3207 "./src/syntax.tab.c"
    break;

  case 48: /* expression: orExpression  */
#line 671 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3215 "./src/syntax.tab.c"
    break;

  case 49: /* expression: ID ASSIGN  */
#line 674 "./src/syntax.y"
              {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression  missing one parameter !!");
    yyerrok;
  }
#line 3225 "./src/syntax.tab.c"
    break;

  case 50: /* expression: ASSIGN  */
#line 679 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression missing two parametes !!");
    yyerrok;
  }
#line 3235 "./src/syntax.tab.c"
    break;

  case 51: /* orExpression: orExpression OR andExpression  */
#line 686 "./src/syntax.y"
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
#line 3261 "./src/syntax.tab.c"
    break;

  case 52: /* orExpression: andExpression  */
#line 707 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3269 "./src/syntax.tab.c"
    break;

  case 53: /* orExpression: orExpression OR  */
#line 710 "./src/syntax.y"
                    {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing one parameter !!");
    yyerrok;
  }
#line 3279 "./src/syntax.tab.c"
    break;

  case 54: /* orExpression: OR  */
#line 715 "./src/syntax.y"
       {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing two parameters !!");
    yyerrok;
  }
#line 3289 "./src/syntax.tab.c"
    break;

  case 55: /* andExpression: andExpression AND relationalExpression  */
#line 722 "./src/syntax.y"
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
#line 3314 "./src/syntax.tab.c"
    break;

  case 56: /* andExpression: relationalExpression  */
#line 742 "./src/syntax.y"
                         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3322 "./src/syntax.tab.c"
    break;

  case 57: /* andExpression: andExpression AND  */
#line 745 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing one parameter !!");
    yyerrok;
  }
#line 3332 "./src/syntax.tab.c"
    break;

  case 58: /* andExpression: AND  */
#line 750 "./src/syntax.y"
        {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing two parameters !!");
    yyerrok;
  }
#line 3342 "./src/syntax.tab.c"
    break;

  case 59: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 757 "./src/syntax.y"
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
#line 3367 "./src/syntax.tab.c"
    break;

  case 60: /* relationalExpression: listExpression  */
#line 777 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3375 "./src/syntax.tab.c"
    break;

  case 61: /* relationalExpression: relationalExpression REL_OP  */
#line 780 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing one parameter !!");
    yyerrok;
  }
#line 3385 "./src/syntax.tab.c"
    break;

  case 62: /* relationalExpression: REL_OP  */
#line 785 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing two parameters !!");
    yyerrok;
  }
#line 3395 "./src/syntax.tab.c"
    break;

  case 63: /* listExpression: arithmExpression listOP listExpression  */
#line 792 "./src/syntax.y"
                                         {

    char *type = list_type_check((yyvsp[-2].producao), (yyvsp[-1].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("listExpression", type);
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);
  }
#line 3409 "./src/syntax.tab.c"
    break;

  case 64: /* listExpression: arithmExpression  */
#line 801 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3417 "./src/syntax.tab.c"
    break;

  case 65: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 807 "./src/syntax.y"
                                                  {

    arithm_subadd_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("arithmExpression", what_type((yyvsp[-2].producao), (yyvsp[0].producao)));
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3435 "./src/syntax.tab.c"
    break;

  case 66: /* arithmExpression: arithmMulDivExpression  */
#line 820 "./src/syntax.y"
                           {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3443 "./src/syntax.tab.c"
    break;

  case 67: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 825 "./src/syntax.y"
                                      {

    arithm_muldiv_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("arithmMulDivExpression", what_type((yyvsp[-2].producao), (yyvsp[0].producao)));
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3461 "./src/syntax.tab.c"
    break;

  case 68: /* arithmMulDivExpression: term  */
#line 838 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3469 "./src/syntax.tab.c"
    break;

  case 69: /* term: const  */
#line 844 "./src/syntax.y"
        {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3477 "./src/syntax.tab.c"
    break;

  case 70: /* term: call  */
#line 847 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3485 "./src/syntax.tab.c"
    break;

  case 71: /* term: ID  */
#line 850 "./src/syntax.y"
       {
    strcpy((yyvsp[0].terminal)->tipo, get_type_id((yyvsp[0].terminal)->valor, (yyvsp[0].terminal)));

    (yyval.producao) = aloca_no("", (yyvsp[0].terminal)->tipo);

    (yyvsp[0].terminal)->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3499 "./src/syntax.tab.c"
    break;

  case 72: /* term: unaryTerm  */
#line 859 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3507 "./src/syntax.tab.c"
    break;

  case 73: /* term: immutable  */
#line 862 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3515 "./src/syntax.tab.c"
    break;

  case 74: /* term: error  */
#line 865 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 3524 "./src/syntax.tab.c"
    break;

  case 75: /* unaryTerm: '!' term  */
#line 871 "./src/syntax.y"
           {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3541 "./src/syntax.tab.c"
    break;

  case 76: /* unaryTerm: '%' term  */
#line 883 "./src/syntax.y"
             {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3558 "./src/syntax.tab.c"
    break;

  case 77: /* unaryTerm: '?' term  */
#line 895 "./src/syntax.y"
             {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3575 "./src/syntax.tab.c"
    break;

  case 78: /* unaryTerm: SUB_ADD term  */
#line 907 "./src/syntax.y"
                 {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3592 "./src/syntax.tab.c"
    break;

  case 79: /* immutable: '(' expression ')'  */
#line 922 "./src/syntax.y"
                     {
    (yyval.producao) = aloca_no("immutable", (yyvsp[-1].producao)->type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = aloca_no("", "undefined");

    (yyvsp[-2].terminal)->escopo = -1;
    (yyvsp[0].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-2].terminal));
    coloca_terminal((yyval.producao)->filhos[2], (yyvsp[0].terminal));
  }
#line 3609 "./src/syntax.tab.c"
    break;

  case 80: /* const: INT  */
#line 936 "./src/syntax.y"
      {
    (yyval.producao) = aloca_no("int", "int");
    (yyval.producao)->filhos[0] = aloca_no("", "int");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "int");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3623 "./src/syntax.tab.c"
    break;

  case 81: /* const: FLOAT  */
#line 945 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("float", "float");
    (yyval.producao)->filhos[0] = aloca_no("", "float");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "float");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3637 "./src/syntax.tab.c"
    break;

  case 82: /* const: STRING  */
#line 954 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("string", "string");
    (yyval.producao)->filhos[0] = aloca_no("", "string");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "string");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3651 "./src/syntax.tab.c"
    break;

  case 83: /* const: NIL  */
#line 963 "./src/syntax.y"
        {
    (yyval.producao) = aloca_no("list", "list");
    (yyval.producao)->filhos[0] = aloca_no("", "list");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "list");

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3665 "./src/syntax.tab.c"
    break;

  case 84: /* listOP: FUNCTION  */
#line 974 "./src/syntax.y"
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
#line 3686 "./src/syntax.tab.c"
    break;

  case 85: /* listOP: INFIX  */
#line 990 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("listOp", "constructor");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");

    (yyvsp[0].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 3699 "./src/syntax.tab.c"
    break;


#line 3703 "./src/syntax.tab.c"

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

#line 999 "./src/syntax.y"


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
