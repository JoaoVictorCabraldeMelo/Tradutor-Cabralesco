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
#define YYLAST   5031

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  465

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
       0,   110,   110,   117,   122,   127,   130,   135,   171,   201,
     205,   211,   247,   292,   295,   298,   304,   334,   373,   403,
     440,   467,   477,   486,   491,   496,   501,   504,   507,   510,
     513,   516,   519,   522,   527,   533,   536,   542,   552,   568,
     580,   585,   592,   601,   616,   638,   645,   669,   686,   689,
     694,   701,   722,   725,   731,   738,   758,   761,   767,   774,
     794,   797,   803,   810,   819,   825,   838,   843,   856,   862,
     865,   868,   879,   882,   885,   890,   902,   914,   926,   941,
     959,   967,   975,   983,   993,  1009
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

#define YYPACT_NINF (-254)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     3,    58,    98,   115,   138,   174,   156,     6,    45,
    -254,   192,   216,    64,   205,   236,   263,    52,    17,    78,
      -8,   266,    64,   147,   118,  1635,   125,   120,   302,  1349,
     814,   127,   143,   172,  4174,   200,   134,  1494,     4,  2105,
    4709,  4720,    63,    63,    63,  4196,   555,   412,   791,    11,
      63,   279,  4730,   309,   326,   355,   379,   402,   452,   460,
     487,   214,   133,  1126,   759,  1259,  1767,  4740,  4750,  4760,
    4770,  4780,   101,  1635,   783,   165,    23,  4196,  4196,   273,
     851,   314,     7,   360,  4790,  4800,  4810,   261,   488,  2982,
    3012,  4820,   495,  4218,  4242,  4266,   222,   315,    63,    63,
      63,   335,   287,   507,   327,   395,   445,   280,   354,   333,
     361,   616,   687,  4290,   382,  4830,   713,  3042,  1337,  1295,
    1583,  4840,  1594,  4850,   504,  4312,  4860,   389,   758,   413,
    1692,   982,   180,   512,   809,   810,    92,   827,   393,   836,
    1635,  1635,   888,   909,  1484,   937,   418,  1551,  1808,  4344,
    4374,   527,   527,   527,  4196,   709,   300,     8,   527,  4870,
      97,   622,   930,  1109,  2174,  4880,  4889,  4899,  4911,  4921,
     453,   454,   489,  4174,   525,     9,  3072,  3102,  3132,  3162,
    3192,  3222,  3252,  3282,  3312,   496,   468,   240,   532,   949,
    1015,  1137,  1149,  1878,  1878,  1878,  4196,   345,   826,    37,
    1878,  1215,   446,   860,   897,   993,   316,  1415,  1922,  1998,
    2048,  2227,   554,  1069,   737,   186,  1269,  4434,  4445,  4456,
    1942,  1942,  1942,  4196,   959,  1226,   230,  1942,  4467,   530,
    1426,  1001,  1159,  1333,  4478,  4489,  4500,  4511,  4522,   526,
     556,   584,  4174,   594,    13,  3342,   100,   111,   119,   135,
     146,   161,   162,   198,   565,  1051,  1182,   165,   694,  4929,
    4940,  4951,   553,  4959,  4334,  4364,  4394,   527,   527,   527,
      68,  4196,  4196,   604,  1251,   608,    12,   613,  3372,  3402,
    3432,   282,   165,   749,  4533,  4544,  4555,   652,  4566,  1382,
    1451,  1964,  1878,  1878,  1878,  4424,   625,   165,   869,  4577,
    4588,  4599,   660,  4610,  2137,  2194,  4024,  1942,  1942,  1942,
      69,  4196,  4196,   617,  1726,   670,    27,   679,   199,  3462,
     217,   684,   564,  4969,   979,  1457,  1472,  4981,  1509,  4991,
     690,   689,   715,   730,  3492,  3522,  4290,  3552,   733,  3582,
    3612,  3642,   573,   642,  4621,  1026,  1060,  1097,  4632,  1193,
    4643,   259,   675,  4654,  1610,  1201,  1359,  4665,  1401,  4676,
     732,   736,   738,   751,   218,   247,  4290,   267,   760,   278,
     308,   342,  4999,   762,  3672,   771,  3972,  4054,   357,  3702,
    4687,  4698,   775,   352,   805,  1692,  4084,   376,   397,  3732,
    3762,   806,   807,   816,  4174,   823,    20,  3792,   593,   662,
    2262,  2292,  2322,  2352,  2382,  2412,  2442,   830,  3822,   804,
    3852,   410,   494,   506,   518,   824,   524,    85,  4196,  4196,
     842,  4114,   855,    28,   863,  2472,  3882,  4002,  2502,  4002,
    1692,  1692,   862,   889,   890,   893,  2532,  2562,  4290,  2592,
     901,  2622,  2652,  2682,  3912,  3942,   615,   808,   911,  2712,
     914,  3972,  4144,   633,  2742,  2772,  2802,  2832,  2862,   913,
    2892,  3972,  3972,  2922,  2952
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -254,  -254,  -254,   910,     0,  -254,   917,  -254,   639,  -253,
    -175,    -4,   -17,     2,    18,    24,    61,    74,    80,   -23,
    1815,  1810,  1753,  1496,  1553,  1296,   439,   839,  1039,  1239,
    -159
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   177,     6,    19,    20,    52,   105,
      89,    90,   178,   179,   180,   181,   182,   183,   184,   185,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   279,    61,     5,   322,   268,     7,    81,    54,    14,
     114,    79,   275,     1,    26,   338,   315,   -13,     8,    82,
      23,    53,    87,   422,   276,    51,   107,    55,   316,   343,
     368,   440,    24,   -54,   -54,   423,     9,     9,   -54,    15,
      15,   -54,   277,    56,   352,   339,   317,   293,   108,    57,
      61,   104,   106,   424,   109,   110,    54,   212,    10,   -54,
     369,   441,   -54,   113,    29,    17,    83,   -54,    16,   103,
     319,   330,   360,    51,   308,    55,    37,   -15,    18,    39,
      40,    41,    42,    43,    44,   117,    58,    45,   432,   -14,
     132,    56,   -37,   331,   361,    50,   131,    57,    -2,    59,
     -33,   140,   133,    25,   101,    60,   -37,   254,   138,   -33,
     433,   -26,     1,   247,   -33,    -4,   102,    61,    61,   -27,
     -26,    28,   -48,    54,    54,   -26,   136,   264,   -27,    -4,
     246,   262,   248,   -27,    58,   -28,   142,   143,    -5,    72,
      51,    51,    55,    55,   -28,    73,   -29,    59,   249,   -28,
     273,    76,    -5,    60,   250,   -29,   -48,   -50,    56,    56,
     -29,   -30,   -31,    93,    57,    57,   186,    77,   187,   -18,
     -30,   -31,   -18,   287,    -6,   -30,   -31,   188,   189,    12,
      13,   190,   191,   192,   193,   194,   195,   -23,    -6,   196,
     -23,   251,    -3,   197,   198,   199,    78,   200,   -32,   -36,
     302,    58,    58,   255,   252,   139,    -3,   -32,   -36,   -50,
     253,   -50,   -32,   -36,    59,    59,    -8,   -34,   -43,   313,
      60,    60,   426,   -84,    80,   -84,   -34,   -43,    21,    22,
      -8,   -34,   -43,   321,   106,   -84,    -9,    92,   -84,   -84,
     -84,   -84,   -84,   -84,   -71,   -71,   -84,   -40,   332,   333,
      -9,   212,   281,   -54,   -84,   -54,   -40,   336,   342,   106,
     -54,   -40,   -71,   -10,   282,   -71,    -7,    -8,   -71,   -71,
     -71,   -71,   -71,   351,   106,   117,    -8,   -10,    -9,   -33,
      -7,    -8,   -47,   186,   -47,   187,   115,    -9,   362,   363,
     124,   212,    -9,   -33,   188,   189,   111,   366,   190,   191,
     192,   193,   194,   195,   -49,   127,   196,   -49,   -10,   -11,
     197,   198,   199,   378,   200,   117,   -85,   -10,   -85,   377,
      96,    97,   -10,   -11,   -19,   -58,   -26,   -19,   -85,   -58,
     -58,   -85,   -85,   -85,   -85,   -85,   -85,    12,   -64,   -85,
     -26,   -64,   -35,   387,   -64,   -64,   -64,   -85,   292,   386,
     -47,   -35,   -45,   407,   409,   -27,   -35,   -16,   129,   400,
     -16,   -45,   254,   415,   -71,   -71,   -45,   -62,   247,   -27,
     -62,   420,   399,   -62,   -62,   -62,   398,   128,   401,   -28,
     255,   413,   410,   -71,    75,   246,   130,   248,   -71,   -71,
     -71,   -71,   -71,   -28,   402,   434,   435,    -7,   212,   255,
     403,   416,   -29,   249,   438,    21,    -7,   254,   254,   250,
     -44,    -7,   134,   247,   247,   453,   -29,   125,   141,   -44,
     126,   452,   117,   444,   -44,   445,   446,   447,   407,   459,
     246,   246,   248,   248,   400,   -62,   135,   404,   407,   407,
     -62,   -62,   -62,   -50,   400,   400,   251,   457,   249,   249,
     405,   398,   -30,   401,   250,   250,   406,   463,   464,   252,
     -31,   398,   398,   401,   401,   253,   -30,   -22,   -48,   402,
     -22,   -48,   -74,   -74,   -31,   403,   289,   270,   271,   402,
     402,    84,    85,    86,   166,   403,   403,   -32,   -36,    91,
     -74,   251,   251,   -74,   -46,   -34,   -74,   -74,   -74,   -74,
     -74,   -32,   -36,   -46,   252,   252,   -37,   -12,   -46,   -34,
     253,   253,   404,   272,   208,   430,   166,   166,   -42,   280,
     -37,   -12,   404,   404,   -41,   405,   -17,   -42,   144,   -17,
     258,   406,   -42,   -41,   -21,   405,   405,   -21,   -41,   123,
     147,   406,   406,   148,   149,   150,   151,   152,   153,   274,
     310,   154,   235,   -48,   -50,   -48,    29,   -50,    30,   158,
     304,   170,   171,   172,   208,   173,   174,    36,    37,   175,
     166,    39,    40,    41,    42,    43,    44,   295,   323,    45,
     311,   176,    88,    47,    48,    49,   125,    50,   320,   372,
     259,   260,   261,   166,   -33,   -47,   -33,   263,   -47,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   312,   -33,
     -33,   -33,   -33,   -33,   -33,   -38,   -43,   -33,   314,   -33,
     -33,   -33,   -33,   -33,   -38,   -33,   213,   334,   214,   -38,
     -43,   337,   284,   285,   286,   166,   340,   215,   216,   288,
     364,   217,   218,   219,   220,   221,   222,   -52,   -49,   223,
     -49,   265,   -52,   224,   225,   226,   255,   227,   460,   299,
     300,   301,   166,   -37,   125,   -37,   303,   380,   -37,   -37,
     -37,   427,   -37,   -37,   -37,   -37,   -37,   344,   -37,   -37,
     -37,   -37,   -37,   -37,   159,   353,   -37,   -40,   -37,   -37,
     -37,   -37,   -37,   367,   -37,   166,   208,   125,   -71,   -71,
     381,   -40,   370,   166,   166,   166,   166,   166,   329,   -47,
     166,   166,   374,   -35,   201,   373,   159,   159,   257,   -71,
     208,   208,   -71,   -71,   -71,   -71,   -71,   -35,   208,   208,
     208,   208,   208,   350,   -62,   235,   208,   -62,   -62,   -62,
     375,   -71,   -71,   235,   235,   235,   235,   235,   359,   296,
     166,   166,   228,   -71,   -71,   376,   379,   382,   -45,   383,
     -71,   297,   -71,   384,   201,   -71,   -71,   -71,   -71,   -71,
     159,   -71,   -45,   282,   -71,   235,   385,   -71,   -71,   -71,
     -71,   -71,   -56,   388,    29,   389,    30,    95,   -56,   -56,
     159,   159,   159,   159,   390,    36,    37,   159,   411,    39,
      40,    41,    42,    43,    44,   235,   -49,    45,   -39,   -44,
     -46,    47,    48,    49,   -58,    50,   166,   -39,   -71,   -71,
     -58,   -58,   -39,   -44,   -46,   166,    74,   -42,   412,   429,
     417,   418,   201,   201,   201,   159,   -41,   -71,    75,   201,
     419,   -42,   -71,   -71,   -71,   -71,   -71,   421,   -58,   431,
     -41,   -58,    29,   428,    30,   -58,   -58,   166,   166,   228,
     228,   228,   159,    36,    37,   436,   228,    39,    40,    41,
      42,    43,    44,   -71,   -71,    45,   112,   235,   439,    47,
      48,    49,   -52,    50,   167,   -52,   442,   448,   -38,   290,
     -52,   166,   -71,   297,   -71,   159,   201,   -71,   -71,   -71,
     -71,   -71,   -38,   159,   159,   159,   159,   159,   159,   -39,
     159,   159,   449,    11,   209,   450,   167,   167,   451,   -56,
     201,   201,   -56,   -39,   454,   291,   -56,   -56,   201,   201,
     201,   201,   201,   201,   455,   228,   201,   456,   462,    27,
       0,   -71,   -71,   228,   228,   228,   228,   228,   228,   256,
     159,   159,   236,   -83,   -83,   -56,     0,     0,   266,   -56,
     -56,   257,   -71,     0,   209,   -71,   -71,   -71,   -71,   -71,
     167,   -83,     0,     0,   -83,   228,     0,   -83,   -83,   -83,
     -83,   -83,   -62,   144,   -62,   145,     0,   -62,   -62,   -62,
     167,   167,   167,   167,   146,   147,     0,   167,   148,   149,
     150,   151,   152,   153,   -51,   228,   154,   137,   265,   -51,
     155,   156,   157,     0,   158,   -60,   159,     0,   -60,   -80,
     -80,   -60,   -60,   -60,   -56,   159,   -56,     0,     0,   306,
     -56,   -56,   209,   209,   209,   167,     0,   -80,     0,   209,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   -51,     0,
       0,   -51,   -34,     0,   -34,   290,   -51,   159,   159,   236,
     236,   236,   167,   -34,   -34,     0,   236,   -34,   -34,   -34,
     -34,   -34,   -34,   -74,   -74,   -34,   -34,   228,     0,   -34,
     -34,   -34,   -55,   -34,   168,   -55,     0,     0,   291,   -55,
     -55,   159,   -74,     0,   -74,   167,   209,   -74,   -74,   -74,
     -74,   -74,     0,   167,   167,   167,   167,   167,   167,     0,
     167,   167,     0,     0,   210,     0,   168,   168,     0,   -59,
     209,   209,   -59,     0,     0,   -59,   -59,   -59,   209,   209,
     209,   209,   209,   209,   -60,   236,   209,   -60,   -60,   -60,
       0,   -81,   -81,   236,   236,   236,   236,   236,   236,   -52,
     167,   167,   237,   -82,   -82,    94,   -52,     0,     0,   -81,
       0,     0,   -81,     0,   210,   -81,   -81,   -81,   -81,   -81,
     168,   -82,     0,     0,   -82,   236,     0,   -82,   -82,   -82,
     -82,   -82,   -60,   144,   -60,   145,     0,   -60,   -60,   -60,
     168,   168,   168,   168,   146,   147,     0,   168,   148,   149,
     150,   151,   152,   153,     0,   236,   154,   -49,     0,     0,
     155,   156,   157,     0,   158,   -63,   167,     0,   -63,   -70,
     -70,   -63,   -63,   -63,   -55,   167,   -55,     0,     0,   306,
     -55,   -55,   210,   210,   210,   168,     0,   -70,     0,   210,
     -70,     0,     0,   -70,   -70,   -70,   -70,   -70,     0,   -58,
       0,   -58,    29,     0,    30,   -58,   -58,   167,   167,   237,
     237,   237,   168,    36,    37,     0,   237,    39,    40,    41,
      42,    43,    44,   -83,   -83,    45,   335,   236,     0,    47,
      48,    49,   -60,    50,   169,     0,     0,   -60,   -60,   -60,
       0,   167,   -83,     0,   -83,   168,   210,   -83,   -83,   -83,
     -83,   -83,     0,   168,   168,   168,   168,   168,   168,     0,
     168,   168,     0,     0,   211,     0,   169,   169,   -55,     0,
     210,   210,     0,    95,   -55,   -55,     0,     0,   210,   210,
     210,   210,   210,   210,     0,   237,   210,    96,    97,     0,
       0,   165,     0,   237,   237,   237,   237,   237,   237,     0,
     168,   168,   238,   -74,   -74,     0,   -64,     0,   -64,     0,
     -51,   -64,   -64,   -64,   211,   307,    94,   -51,     0,     0,
     169,   207,   -74,   165,   165,   237,     0,   -74,   -74,   -74,
     -74,   -74,   -59,   186,   -59,   283,     0,   -59,   -59,   -59,
     169,   169,   169,   169,   121,   189,     0,   169,   190,   191,
     192,   193,   194,   195,   -53,   237,   196,   -53,     0,   234,
     197,   198,   -53,     0,   200,     0,   168,     0,     0,   -66,
     -66,   207,     0,     0,   -63,   168,   -63,   165,     0,   -63,
     -63,   -63,   211,   211,   211,   169,     0,   -66,     0,   211,
     -66,     0,     0,   -66,   -66,   -66,   294,   -66,     0,   -52,
     165,   -52,   186,     0,   283,   305,   -52,   168,   168,   238,
     238,   238,   169,     0,   189,     0,   238,   190,   191,   192,
     193,   194,   195,   -57,     0,   196,   -57,   237,     0,   197,
     -57,   -57,   -55,   200,     0,   266,   -55,   -55,   -74,   -74,
       0,   168,   165,     0,     0,   169,   211,   -59,   -83,   -83,
     -59,   -59,   -59,   169,   169,   169,   169,   169,   169,   -74,
     169,   169,   -74,   -74,   -74,   -74,   -74,   -83,     0,   165,
     211,   211,   -83,   -83,   -83,   -83,   -83,     0,   211,   211,
     211,   211,   211,   211,   -63,   238,   211,   -63,   -63,   -63,
       0,   163,     0,   238,   238,   238,   238,   238,   238,     0,
     169,   169,   165,   207,     0,   -83,   -83,     0,     0,     0,
     165,   165,   165,   327,   165,     0,     0,   165,   165,     0,
       0,   205,     0,   163,   163,   238,   -83,   207,   207,   -83,
     -83,   -83,   -83,   -83,     0,   207,   207,   207,   348,   207,
       0,   120,   234,   207,     0,   122,     0,     0,   164,     0,
     234,   234,   234,   357,   234,   238,   -59,   165,   165,   232,
       0,   -59,   -59,   -59,     0,     0,   169,   -63,     0,     0,
       0,   205,   -63,   -63,   -63,   169,     0,   163,   206,     0,
     164,   164,   234,   -51,     0,   -51,    29,     0,    30,   305,
     -51,    31,    32,    33,     0,    34,    35,    36,    37,    38,
     163,    39,    40,    41,    42,    43,    44,   169,   169,    45,
       0,    46,   234,    47,    48,    49,   233,    50,     0,     0,
       0,     0,     0,   165,     0,     0,     0,   238,   206,     0,
       0,     0,   165,     0,   164,     0,     0,     0,     0,     0,
       0,   169,   163,    29,     0,    30,     0,     0,   239,   240,
     241,     0,   242,   243,    36,    37,   244,   164,    39,    40,
      41,    42,    43,    44,   165,   165,    45,     0,   245,   163,
      47,    48,    49,     0,    50,     0,     0,    29,     0,    30,
       0,     0,     0,     0,   234,     0,     0,     0,    36,    37,
       0,     0,    39,    40,    41,    42,    43,    44,   165,   164,
      45,   365,   163,   205,    47,    48,    49,     0,    50,     0,
     163,   163,   326,     0,   328,     0,     0,   163,   163,     0,
       0,    96,    97,     0,     0,     0,   164,   205,   205,     0,
       0,     0,     0,     0,     0,   205,   205,   347,     0,   349,
     -64,     0,   232,   205,     0,   -64,   -64,   -64,   162,    98,
     232,   232,   356,     0,   358,     0,     0,   163,   163,   164,
     206,     0,   -80,   -80,     0,     0,     0,   164,   164,   164,
       0,   164,     0,     0,   164,   164,     0,     0,   204,     0,
     162,   162,   232,   -80,   206,   206,   -80,   -80,   -80,   -80,
     -80,     0,   206,   206,   206,     0,   206,   119,     0,   233,
     206,     0,     0,     0,     0,   161,     0,   233,   233,   233,
     160,   233,   232,     0,   164,   164,   231,     0,     0,     0,
       0,     0,     0,   163,     0,     0,     0,     0,   204,   186,
       0,   283,   163,     0,   162,   203,     0,   161,   161,   233,
     202,   189,   160,   160,   190,   191,   192,   193,   194,   195,
       0,     0,   196,   118,     0,     0,     0,   162,     0,     0,
     200,     0,     0,     0,   163,   163,     0,     0,     0,   233,
       0,     0,     0,   230,     0,     0,   -68,   -68,   229,     0,
     164,     0,     0,     0,   232,   203,     0,     0,     0,   164,
     202,   161,     0,   213,   -68,   298,   160,   -68,   163,   162,
     -68,   -68,   -68,   -68,   -68,   216,     0,     0,   217,   218,
     219,   220,   221,   222,   161,   186,   223,   283,     0,   160,
       0,   164,   164,     0,   227,     0,   162,   189,     0,     0,
     190,   191,   192,   193,   194,   195,   -61,     0,   196,   -61,
       0,   233,   -61,   -61,   -61,     0,   200,     0,     0,     0,
       0,     0,   -72,   -72,     0,   164,   161,     0,     0,   162,
     204,   160,     0,     0,     0,     0,     0,   162,   325,     0,
     -72,     0,     0,   -72,   162,   162,   -72,   -72,   -72,   -72,
     -72,     0,     0,   161,   204,   204,     0,     0,   160,     0,
       0,     0,   204,   346,     0,     0,     0,     0,     0,   231,
     204,     0,   -73,   -73,     0,     0,     0,   231,   355,     0,
       0,     0,     0,     0,   162,   162,   161,   203,     0,     0,
     -73,   160,   202,   -73,   324,     0,   -73,   -73,   -73,   -73,
     -73,   161,   161,     0,     0,     0,   160,   160,     0,   231,
       0,   203,   203,     0,     0,     0,   202,   202,     0,   345,
       0,     0,     0,     0,     0,     0,   230,   203,     0,   -80,
     -80,   229,   202,     0,   354,     0,     0,     0,     0,   231,
       0,   161,   161,     0,     0,     0,   160,   160,   -80,     0,
     162,     0,     0,   -80,   -80,   -80,   -80,   -80,   213,   162,
     298,     0,     0,     0,     0,     0,   230,     0,     0,     0,
     216,   229,     0,   217,   218,   219,   220,   221,   222,     0,
     -53,   223,   -53,     0,     0,   224,   225,   -53,     0,   227,
       0,   162,   162,     0,     0,     0,   230,     0,    96,    97,
       0,   229,     0,     0,     0,     0,     0,   161,     0,     0,
       0,   231,   160,     0,     0,   213,   161,   298,     0,   -64,
       0,   160,   -64,   -64,   -64,   162,   267,   216,     0,     0,
     217,   218,   219,   220,   221,   222,     0,   -57,   223,   -57,
       0,     0,   224,   -57,   -57,     0,   227,     0,   161,   161,
       0,   -69,   -69,   160,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   230,   -69,
       0,     0,   -69,   229,     0,   -69,   -69,   -69,   -69,   -69,
       0,     0,   161,   -26,     0,   -26,     0,   160,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -27,   -26,   -27,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -28,   -27,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -29,   -28,   -29,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -30,   -29,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -31,   -30,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -32,   -31,   -32,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -36,   -32,   -36,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -34,   -36,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -43,   -34,   -43,     0,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -40,   -43,   -40,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,    -8,   -40,    -8,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -9,    -8,    -9,     0,     0,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    -9,     0,     0,    -9,     0,    -9,    -9,
      -9,    -9,    -9,   -10,    -9,   -10,     0,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,     0,     0,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -35,   -10,   -35,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -45,   -35,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -45,    -7,   -45,    -7,     0,     0,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,     0,     0,    -7,     0,    -7,    -7,
      -7,    -7,    -7,   -44,    -7,   -44,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -46,   -44,   -46,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -37,   -46,   -37,     0,     0,   -37,   -37,
     -37,   461,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -42,   -37,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -41,   -42,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -38,   -41,   -38,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -39,   -38,   -39,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,   -39,
     -39,   -39,   -39,    29,   -39,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   116,
      47,    48,    49,   -25,    50,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   -24,   -25,   -24,     0,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,   -24,     0,   -24,   -24,
     -24,   -24,   -24,    29,   -24,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   278,
      47,    48,    49,   -33,    50,   -33,     0,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -26,   -33,   -26,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -27,   -26,   -27,     0,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -28,   -27,   -28,     0,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -29,   -28,   -29,     0,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -30,   -29,   -30,     0,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -31,   -30,   -31,     0,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -32,   -31,   -32,     0,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -32,    29,   -32,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   318,
      47,    48,    49,   -36,    50,   -36,     0,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,     0,   -36,   -36,
     -36,   -36,   -36,    29,   -36,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   341,
      47,    48,    49,   -34,    50,   -34,     0,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,   -34,
     -34,   -34,   -34,    29,   -34,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   371,
      47,    48,    49,   -43,    50,   -43,     0,     0,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -40,   -43,   -40,     0,     0,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,   -40,
     -40,   -40,   -40,    -8,   -40,    -8,     0,     0,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -9,    -8,    -9,     0,     0,    -9,    -9,
      -9,     0,    -9,    -9,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    -9,     0,     0,    -9,     0,    -9,    -9,
      -9,    -9,    -9,   -10,    -9,   -10,     0,     0,   -10,   -10,
     -10,     0,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,     0,     0,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -35,   -10,   -35,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -45,   -35,   -45,     0,     0,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,   -45,
     -45,   -45,   -45,    -7,   -45,    -7,     0,     0,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,     0,     0,    -7,     0,    -7,    -7,
      -7,    -7,    -7,   -44,    -7,   -44,     0,     0,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -46,   -44,   -46,     0,     0,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,   -46,
     -46,   -46,   -46,    29,   -46,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   425,
      47,    48,    49,   -42,    50,   -42,     0,     0,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -41,   -42,   -41,     0,     0,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,   -41,
     -41,   -41,   -41,    29,   -41,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   176,   443,
      47,    48,    49,   -38,    50,   -38,     0,     0,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -39,   -38,   -39,     0,     0,   -39,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,   -39,
     -39,   -39,   -39,    29,   -39,    30,     0,     0,   391,   392,
     393,     0,   394,   395,    36,    37,   396,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,     0,   397,     0,
      47,    48,    49,    29,    50,    30,     0,     0,   170,   171,
     172,     0,   173,   174,    36,    37,   175,     0,    39,    40,
      41,    42,    43,    44,     0,   213,    45,   298,   176,     0,
      47,    48,    49,     0,    50,     0,     0,   216,     0,     0,
     217,   218,   219,   220,   221,   222,     0,   -61,   223,   -61,
       0,     0,   -61,   -61,   -61,   144,   227,   145,     0,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   408,
       0,     0,   155,   156,   157,   144,   158,   145,     0,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   414,
       0,     0,   155,   156,   157,    29,   158,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    37,     0,     0,
      39,    40,    41,    42,    43,    44,     0,     0,    45,   437,
       0,     0,    47,    48,    49,   144,    50,   145,     0,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,     0,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   458,
       0,     0,   155,   156,   157,    29,   158,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    37,     0,     0,
      39,    40,    41,    42,    43,    44,     0,   144,    45,   145,
       0,     0,    47,    48,    49,     0,    50,     0,   146,   147,
       0,     0,   148,   149,   150,   151,   152,   153,     0,    29,
     154,    83,     0,     0,   155,   156,   157,     0,   158,     0,
       0,    37,     0,     0,    39,    40,    41,    42,    43,    44,
       0,   -53,    45,    29,     0,    83,    47,    48,   -53,     0,
      50,     0,     0,     0,     0,    37,     0,     0,    39,    40,
      41,    42,    43,    44,     0,   -57,    45,    29,     0,    83,
      47,   -57,   -57,     0,    50,     0,     0,     0,     0,    37,
       0,     0,    39,    40,    41,    42,    43,    44,     0,   -61,
      45,   213,     0,   214,   -61,   -61,   -61,     0,    50,     0,
       0,     0,   215,   216,     0,     0,   217,   218,   219,   220,
     221,   222,     0,   186,   223,   187,     0,     0,   224,   225,
     226,     0,   227,     0,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,     0,   144,   196,   258,     0,     0,
     197,   198,   199,     0,   200,     0,     0,   147,   -81,   -81,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   -53,
       0,     0,   155,   156,   -53,   144,   158,   258,     0,   -81,
       0,     0,   -81,   -81,   -81,   -81,   -81,   147,   -82,   -82,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   -57,
       0,     0,   155,   -57,   -57,   144,   158,   258,     0,   -82,
       0,     0,   -82,   -82,   -82,   -82,   -82,   147,     0,     0,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   -61,
       0,     0,   -61,   -61,   -61,   -34,   158,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,   -80,   -80,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,   -81,
     -81,     0,   -34,   -34,   -34,     0,   -34,   -80,     0,   -80,
     -82,   -82,   -80,   -80,   -80,   -80,   -80,     0,   -81,     0,
     -81,   -70,   -70,   -81,   -81,   -81,   -81,   -81,     0,   -82,
       0,   -82,   -66,   -66,   -82,   -82,   -82,   -82,   -82,     0,
     -70,     0,   -70,   -68,   -68,   -70,   -70,   -70,   -70,   -70,
       0,   -66,     0,   -66,   -72,   -72,   -66,   -66,   -66,   309,
     -66,     0,   -68,     0,   -68,   -73,   -73,   -68,   -68,   -68,
     -68,   -68,     0,   -72,     0,   -72,   -69,   -69,   -72,   -72,
     -72,   -72,   -72,     0,   -73,     0,   -73,   -76,   -76,   -73,
     -73,   -73,   -73,   -73,     0,   -69,     0,   -69,   -75,   -75,
     -69,   -69,   -69,   -69,   -69,   -76,     0,     0,   -76,   -77,
     -77,   -76,   -76,   -76,   -76,   -76,   -75,     0,     0,   -75,
     -78,   -78,   -75,   -75,   -75,   -75,   -75,   -77,     0,     0,
     -77,   -76,   -76,   -77,   -77,   -77,   -77,   -77,   -78,     0,
       0,   -78,   -75,   -75,   -78,   -78,   -78,   -78,   -78,     0,
     -76,     0,   -76,   -77,   -77,   -76,   -76,   -76,   -76,   -76,
       0,   -75,     0,   -75,   -78,   -78,   -75,   -75,   -75,   -75,
     -75,     0,   -77,     0,   -77,   -79,   -79,   -77,   -77,   -77,
     -77,   -77,     0,   -78,     0,   -78,   -65,   -65,   -78,   -78,
     -78,   -78,   -78,   -79,     0,     0,   -79,   -67,   -67,   -79,
     -79,   -79,   -79,   -79,   -65,     0,     0,   -65,   -79,   -79,
     -65,   -65,   -65,   294,   -65,   -67,     0,     0,   -67,   -65,
     -65,   -67,   -67,   -67,   -67,   -67,     0,   -79,     0,   -79,
     -67,   -67,   -79,   -79,   -79,   -79,   -79,     0,   -65,     0,
     -65,   -20,   -20,   -65,   -65,   -65,   309,   -65,     0,   -67,
       0,   -67,   -20,   -20,   -67,   -67,   -67,   -67,   -67,   -20,
       0,     0,   -20,   -81,   -81,   -20,   -20,   -20,   -20,   -20,
       0,   -20,     0,   -20,   -82,   -82,   -20,   -20,   -20,   -20,
     -20,     0,   -81,     0,   -70,   -70,     0,   -81,   -81,   -81,
     -81,   -81,     0,   -82,   -66,   -66,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -70,   -68,   -68,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -66,   -72,   -72,     0,     0,   -66,   -66,
     -66,   100,   -66,   -68,   -73,   -73,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -72,   -69,   -69,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -73,   -76,   -76,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -69,   -75,   -75,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -76,   -77,   -77,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -75,   -78,   -78,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -77,   -79,   -79,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -78,   -65,   -65,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -79,   -67,   -67,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -65,   -20,   -20,     0,     0,   -65,   -65,
     -65,   100,   -65,   -67,   -70,   -70,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -20,   -66,   -66,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -68,   -68,   -70,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -72,   -72,   -66,     0,     0,   -66,   -66,
     -66,   269,   -66,     0,   -68,   -73,   -73,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -72,   -69,   -69,   -72,   -72,   -72,
     -72,   -72,     0,   -76,   -76,     0,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -75,   -75,   -69,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -76,   -77,   -77,   -76,   -76,   -76,
     -76,   -76,     0,   -78,   -78,   -75,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -79,   -79,     0,   -77,     0,     0,   -77,
     -77,   -77,   -77,   -77,   -78,   -65,   -65,   -78,   -78,   -78,
     -78,   -78,     0,     0,   -79,   -67,   -67,   -79,   -79,   -79,
     -79,   -79,     0,   -20,   -20,     0,   -65,     0,     0,   -65,
     -65,   -65,   269,   -65,     0,     0,   -67,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -20,     0,     0,   -20,   -20,   -20,
     -20,   -20
};

static const yytype_int16 yycheck[] =
{
       0,   176,    25,     3,   257,   164,     3,     3,    25,     3,
       3,    34,     3,    14,    22,     3,     3,    25,    15,    15,
       3,    25,    45,     3,    15,    25,     3,    25,    15,   282,
       3,     3,    15,    25,    23,    15,    33,    33,    30,    33,
      33,    30,    33,    25,   297,    33,    33,   206,    25,    25,
      73,    74,    75,    33,    77,    78,    73,    80,     0,    22,
      33,    33,    25,    80,     1,     1,     3,    30,    23,    73,
     245,     3,     3,    73,   233,    73,    13,    25,    14,    16,
      17,    18,    19,    20,    21,    89,    25,    24,     3,    25,
     113,    73,     0,    25,    25,    32,   113,    73,     0,    25,
       0,     9,   125,    25,     3,    25,    14,   130,   131,     9,
      25,     0,    14,   130,    14,     0,    15,   140,   141,     0,
       9,     3,    25,   140,   141,    14,   130,    30,     9,    14,
     130,   154,   130,    14,    73,     0,   140,   141,     0,    14,
     140,   141,   140,   141,     9,    25,     0,    73,   130,    14,
     173,    24,    14,    73,   130,     9,    23,    23,   140,   141,
      14,     0,     0,    30,   140,   141,     1,    24,     3,    22,
       9,     9,    25,   196,     0,    14,    14,    12,    13,    23,
      24,    16,    17,    18,    19,    20,    21,    22,    14,    24,
      25,   130,     0,    28,    29,    30,    24,    32,     0,     0,
     223,   140,   141,    23,   130,    25,    14,     9,     9,    23,
     130,    25,    14,    14,   140,   141,     0,     0,     0,   242,
     140,   141,   397,     1,    24,     3,     9,     9,    23,    24,
      14,    14,    14,   256,   257,    13,     0,    23,    16,    17,
      18,    19,    20,    21,     4,     5,    24,     0,   271,   272,
      14,   274,    12,    23,    32,    25,     9,   274,   281,   282,
      30,    14,    22,     0,    24,    25,     0,     0,    28,    29,
      30,    31,    32,   296,   297,   279,     9,    14,     0,     0,
      14,    14,    23,     1,    25,     3,    25,     9,   311,   312,
       3,   314,    14,    14,    12,    13,    23,   314,    16,    17,
      18,    19,    20,    21,    22,    25,    24,    25,     0,     0,
      28,    29,    30,   336,    32,   319,     1,     9,     3,   336,
       4,     5,    14,    14,    22,    25,     0,    25,    13,    29,
      30,    16,    17,    18,    19,    20,    21,    23,    22,    24,
      14,    25,     0,   366,    28,    29,    30,    32,    32,   366,
      23,     9,     0,   376,   377,     0,    14,    22,    25,   376,
      25,     9,   385,   386,     4,     5,    14,    22,   385,    14,
      25,   394,   376,    28,    29,    30,   376,    23,   376,     0,
      23,   385,    25,    23,    24,   385,    25,   385,    28,    29,
      30,    31,    32,    14,   376,   418,   419,     0,   421,    23,
     376,    25,     0,   385,   421,    23,     9,   430,   431,   385,
       0,    14,    23,   430,   431,   438,    14,    22,    25,     9,
      25,   438,   426,   427,    14,   429,   430,   431,   451,   452,
     430,   431,   430,   431,   451,    23,    23,   376,   461,   462,
      28,    29,    30,    25,   461,   462,   385,   451,   430,   431,
     376,   451,     0,   451,   430,   431,   376,   461,   462,   385,
       0,   461,   462,   461,   462,   385,    14,    22,    22,   451,
      25,    25,     4,     5,    14,   451,    30,    24,    24,   461,
     462,    42,    43,    44,    45,   461,   462,     0,     0,    50,
      22,   430,   431,    25,     0,     0,    28,    29,    30,    31,
      32,    14,    14,     9,   430,   431,     0,     0,    14,    14,
     430,   431,   451,    24,    75,     9,    77,    78,     0,    23,
      14,    14,   461,   462,     0,   451,    22,     9,     1,    25,
       3,   451,    14,     9,    22,   461,   462,    25,    14,   100,
      13,   461,   462,    16,    17,    18,    19,    20,    21,    24,
      24,    24,   113,    23,    22,    25,     1,    25,     3,    32,
      30,     6,     7,     8,   125,    10,    11,    12,    13,    14,
     131,    16,    17,    18,    19,    20,    21,    23,    25,    24,
      24,    26,    27,    28,    29,    30,    22,    32,    23,    25,
     151,   152,   153,   154,     1,    22,     3,   158,    25,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    24,    16,
      17,    18,    19,    20,    21,     0,     0,    24,    24,    26,
      27,    28,    29,    30,     9,    32,     1,    23,     3,    14,
      14,    23,   193,   194,   195,   196,    23,    12,    13,   200,
      23,    16,    17,    18,    19,    20,    21,    25,    23,    24,
      25,    29,    30,    28,    29,    30,    23,    32,    25,   220,
     221,   222,   223,     1,    22,     3,   227,    25,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    25,    16,    17,
      18,    19,    20,    21,    45,    25,    24,     0,    26,    27,
      28,    29,    30,    23,    32,   256,   257,    22,     4,     5,
      25,    14,    23,   264,   265,   266,   267,   268,   269,    25,
     271,   272,    23,     0,    75,    25,    77,    78,    24,    25,
     281,   282,    28,    29,    30,    31,    32,    14,   289,   290,
     291,   292,   293,   294,    25,   296,   297,    28,    29,    30,
      25,     4,     5,   304,   305,   306,   307,   308,   309,    12,
     311,   312,   113,     4,     5,    25,    23,    25,     0,    23,
      23,    24,    25,    25,   125,    28,    29,    30,    31,    32,
     131,    22,    14,    24,    25,   336,    25,    28,    29,    30,
      31,    32,    23,    23,     1,    23,     3,    28,    29,    30,
     151,   152,   153,   154,    23,    12,    13,   158,    23,    16,
      17,    18,    19,    20,    21,   366,    23,    24,     0,     0,
       0,    28,    29,    30,    23,    32,   377,     9,     4,     5,
      29,    30,    14,    14,    14,   386,    12,     0,    23,    25,
      24,    24,   193,   194,   195,   196,     0,    23,    24,   200,
      24,    14,    28,    29,    30,    31,    32,    24,    22,    25,
      14,    25,     1,    23,     3,    29,    30,   418,   419,   220,
     221,   222,   223,    12,    13,    23,   227,    16,    17,    18,
      19,    20,    21,     4,     5,    24,    25,   438,    23,    28,
      29,    30,    22,    32,    45,    25,    23,    25,     0,    29,
      30,   452,    23,    24,    25,   256,   257,    28,    29,    30,
      31,    32,    14,   264,   265,   266,   267,   268,   269,     0,
     271,   272,    23,     3,    75,    25,    77,    78,    25,    22,
     281,   282,    25,    14,    23,    28,    29,    30,   289,   290,
     291,   292,   293,   294,    23,   296,   297,    23,    25,    22,
      -1,     4,     5,   304,   305,   306,   307,   308,   309,    12,
     311,   312,   113,     4,     5,    25,    -1,    -1,    28,    29,
      30,    24,    25,    -1,   125,    28,    29,    30,    31,    32,
     131,    22,    -1,    -1,    25,   336,    -1,    28,    29,    30,
      31,    32,    23,     1,    25,     3,    -1,    28,    29,    30,
     151,   152,   153,   154,    12,    13,    -1,   158,    16,    17,
      18,    19,    20,    21,    25,   366,    24,    25,    29,    30,
      28,    29,    30,    -1,    32,    22,   377,    -1,    25,     4,
       5,    28,    29,    30,    23,   386,    25,    -1,    -1,    28,
      29,    30,   193,   194,   195,   196,    -1,    22,    -1,   200,
      25,    -1,    -1,    28,    29,    30,    31,    32,    22,    -1,
      -1,    25,     1,    -1,     3,    29,    30,   418,   419,   220,
     221,   222,   223,    12,    13,    -1,   227,    16,    17,    18,
      19,    20,    21,     4,     5,    24,    25,   438,    -1,    28,
      29,    30,    22,    32,    45,    25,    -1,    -1,    28,    29,
      30,   452,    23,    -1,    25,   256,   257,    28,    29,    30,
      31,    32,    -1,   264,   265,   266,   267,   268,   269,    -1,
     271,   272,    -1,    -1,    75,    -1,    77,    78,    -1,    22,
     281,   282,    25,    -1,    -1,    28,    29,    30,   289,   290,
     291,   292,   293,   294,    25,   296,   297,    28,    29,    30,
      -1,     4,     5,   304,   305,   306,   307,   308,   309,    23,
     311,   312,   113,     4,     5,    29,    30,    -1,    -1,    22,
      -1,    -1,    25,    -1,   125,    28,    29,    30,    31,    32,
     131,    22,    -1,    -1,    25,   336,    -1,    28,    29,    30,
      31,    32,    23,     1,    25,     3,    -1,    28,    29,    30,
     151,   152,   153,   154,    12,    13,    -1,   158,    16,    17,
      18,    19,    20,    21,    -1,   366,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    32,    22,   377,    -1,    25,     4,
       5,    28,    29,    30,    23,   386,    25,    -1,    -1,    28,
      29,    30,   193,   194,   195,   196,    -1,    22,    -1,   200,
      25,    -1,    -1,    28,    29,    30,    31,    32,    -1,    23,
      -1,    25,     1,    -1,     3,    29,    30,   418,   419,   220,
     221,   222,   223,    12,    13,    -1,   227,    16,    17,    18,
      19,    20,    21,     4,     5,    24,    25,   438,    -1,    28,
      29,    30,    23,    32,    45,    -1,    -1,    28,    29,    30,
      -1,   452,    23,    -1,    25,   256,   257,    28,    29,    30,
      31,    32,    -1,   264,   265,   266,   267,   268,   269,    -1,
     271,   272,    -1,    -1,    75,    -1,    77,    78,    23,    -1,
     281,   282,    -1,    28,    29,    30,    -1,    -1,   289,   290,
     291,   292,   293,   294,    -1,   296,   297,     4,     5,    -1,
      -1,    45,    -1,   304,   305,   306,   307,   308,   309,    -1,
     311,   312,   113,     4,     5,    -1,    23,    -1,    25,    -1,
      23,    28,    29,    30,   125,    32,    29,    30,    -1,    -1,
     131,    75,    23,    77,    78,   336,    -1,    28,    29,    30,
      31,    32,    23,     1,    25,     3,    -1,    28,    29,    30,
     151,   152,   153,   154,    98,    13,    -1,   158,    16,    17,
      18,    19,    20,    21,    22,   366,    24,    25,    -1,   113,
      28,    29,    30,    -1,    32,    -1,   377,    -1,    -1,     4,
       5,   125,    -1,    -1,    23,   386,    25,   131,    -1,    28,
      29,    30,   193,   194,   195,   196,    -1,    22,    -1,   200,
      25,    -1,    -1,    28,    29,    30,    31,    32,    -1,    23,
     154,    25,     1,    -1,     3,    29,    30,   418,   419,   220,
     221,   222,   223,    -1,    13,    -1,   227,    16,    17,    18,
      19,    20,    21,    22,    -1,    24,    25,   438,    -1,    28,
      29,    30,    25,    32,    -1,    28,    29,    30,     4,     5,
      -1,   452,   196,    -1,    -1,   256,   257,    25,     4,     5,
      28,    29,    30,   264,   265,   266,   267,   268,   269,    25,
     271,   272,    28,    29,    30,    31,    32,    23,    -1,   223,
     281,   282,    28,    29,    30,    31,    32,    -1,   289,   290,
     291,   292,   293,   294,    25,   296,   297,    28,    29,    30,
      -1,    45,    -1,   304,   305,   306,   307,   308,   309,    -1,
     311,   312,   256,   257,    -1,     4,     5,    -1,    -1,    -1,
     264,   265,   266,   267,   268,    -1,    -1,   271,   272,    -1,
      -1,    75,    -1,    77,    78,   336,    25,   281,   282,    28,
      29,    30,    31,    32,    -1,   289,   290,   291,   292,   293,
      -1,    95,   296,   297,    -1,    99,    -1,    -1,    45,    -1,
     304,   305,   306,   307,   308,   366,    23,   311,   312,   113,
      -1,    28,    29,    30,    -1,    -1,   377,    23,    -1,    -1,
      -1,   125,    28,    29,    30,   386,    -1,   131,    75,    -1,
      77,    78,   336,    23,    -1,    25,     1,    -1,     3,    29,
      30,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
     154,    16,    17,    18,    19,    20,    21,   418,   419,    24,
      -1,    26,   366,    28,    29,    30,   113,    32,    -1,    -1,
      -1,    -1,    -1,   377,    -1,    -1,    -1,   438,   125,    -1,
      -1,    -1,   386,    -1,   131,    -1,    -1,    -1,    -1,    -1,
      -1,   452,   196,     1,    -1,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,   154,    16,    17,
      18,    19,    20,    21,   418,   419,    24,    -1,    26,   223,
      28,    29,    30,    -1,    32,    -1,    -1,     1,    -1,     3,
      -1,    -1,    -1,    -1,   438,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,   452,   196,
      24,    25,   256,   257,    28,    29,    30,    -1,    32,    -1,
     264,   265,   266,    -1,   268,    -1,    -1,   271,   272,    -1,
      -1,     4,     5,    -1,    -1,    -1,   223,   281,   282,    -1,
      -1,    -1,    -1,    -1,    -1,   289,   290,   291,    -1,   293,
      23,    -1,   296,   297,    -1,    28,    29,    30,    45,    32,
     304,   305,   306,    -1,   308,    -1,    -1,   311,   312,   256,
     257,    -1,     4,     5,    -1,    -1,    -1,   264,   265,   266,
      -1,   268,    -1,    -1,   271,   272,    -1,    -1,    75,    -1,
      77,    78,   336,    25,   281,   282,    28,    29,    30,    31,
      32,    -1,   289,   290,   291,    -1,   293,    94,    -1,   296,
     297,    -1,    -1,    -1,    -1,    45,    -1,   304,   305,   306,
      45,   308,   366,    -1,   311,   312,   113,    -1,    -1,    -1,
      -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,   125,     1,
      -1,     3,   386,    -1,   131,    75,    -1,    77,    78,   336,
      75,    13,    77,    78,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    93,    -1,    -1,    -1,   154,    -1,    -1,
      32,    -1,    -1,    -1,   418,   419,    -1,    -1,    -1,   366,
      -1,    -1,    -1,   113,    -1,    -1,     4,     5,   113,    -1,
     377,    -1,    -1,    -1,   438,   125,    -1,    -1,    -1,   386,
     125,   131,    -1,     1,    22,     3,   131,    25,   452,   196,
      28,    29,    30,    31,    32,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,   154,     1,    24,     3,    -1,   154,
      -1,   418,   419,    -1,    32,    -1,   223,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      -1,   438,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,   452,   196,    -1,    -1,   256,
     257,   196,    -1,    -1,    -1,    -1,    -1,   264,   265,    -1,
      22,    -1,    -1,    25,   271,   272,    28,    29,    30,    31,
      32,    -1,    -1,   223,   281,   282,    -1,    -1,   223,    -1,
      -1,    -1,   289,   290,    -1,    -1,    -1,    -1,    -1,   296,
     297,    -1,     4,     5,    -1,    -1,    -1,   304,   305,    -1,
      -1,    -1,    -1,    -1,   311,   312,   256,   257,    -1,    -1,
      22,   256,   257,    25,   264,    -1,    28,    29,    30,    31,
      32,   271,   272,    -1,    -1,    -1,   271,   272,    -1,   336,
      -1,   281,   282,    -1,    -1,    -1,   281,   282,    -1,   289,
      -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,     4,
       5,   296,   297,    -1,   304,    -1,    -1,    -1,    -1,   366,
      -1,   311,   312,    -1,    -1,    -1,   311,   312,    23,    -1,
     377,    -1,    -1,    28,    29,    30,    31,    32,     1,   386,
       3,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,
      13,   336,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    30,    -1,    32,
      -1,   418,   419,    -1,    -1,    -1,   366,    -1,     4,     5,
      -1,   366,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,
      -1,   438,   377,    -1,    -1,     1,   386,     3,    -1,    25,
      -1,   386,    28,    29,    30,   452,    32,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    32,    -1,   418,   419,
      -1,     4,     5,   418,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   438,    22,
      -1,    -1,    25,   438,    -1,    28,    29,    30,    31,    32,
      -1,    -1,   452,     1,    -1,     3,    -1,   452,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    27,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    26,    -1,
      28,    29,    30,     1,    32,     3,    -1,    -1,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    -1,     1,    24,     3,    26,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,     1,    24,     3,
      -1,    -1,    28,    29,    30,    -1,    32,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,     1,
      24,     3,    -1,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,     1,    -1,     3,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,     1,    -1,     3,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,     1,    -1,     3,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,     1,    24,     3,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,     1,    24,     3,    -1,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    13,     4,     5,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    25,
      -1,    -1,    28,    29,    30,    31,    32,    13,     4,     5,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    25,
      -1,    -1,    28,    29,    30,    31,    32,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    28,    29,    30,     1,    32,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,     4,     5,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,     4,
       5,    -1,    28,    29,    30,    -1,    32,    23,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,    23,    -1,
      25,     4,     5,    28,    29,    30,    31,    32,    -1,    23,
      -1,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
      23,    -1,    25,     4,     5,    28,    29,    30,    31,    32,
      -1,    23,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    23,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    23,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    -1,    23,    -1,    25,     4,     5,    28,
      29,    30,    31,    32,    -1,    23,    -1,    25,     4,     5,
      28,    29,    30,    31,    32,    22,    -1,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    22,    -1,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    22,    -1,    -1,
      25,     4,     5,    28,    29,    30,    31,    32,    22,    -1,
      -1,    25,     4,     5,    28,    29,    30,    31,    32,    -1,
      23,    -1,    25,     4,     5,    28,    29,    30,    31,    32,
      -1,    23,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    23,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    23,    -1,    25,     4,     5,    28,    29,
      30,    31,    32,    22,    -1,    -1,    25,     4,     5,    28,
      29,    30,    31,    32,    22,    -1,    -1,    25,     4,     5,
      28,    29,    30,    31,    32,    22,    -1,    -1,    25,     4,
       5,    28,    29,    30,    31,    32,    -1,    23,    -1,    25,
       4,     5,    28,    29,    30,    31,    32,    -1,    23,    -1,
      25,     4,     5,    28,    29,    30,    31,    32,    -1,    23,
      -1,    25,     4,     5,    28,    29,    30,    31,    32,    22,
      -1,    -1,    25,     4,     5,    28,    29,    30,    31,    32,
      -1,    23,    -1,    25,     4,     5,    28,    29,    30,    31,
      32,    -1,    23,    -1,     4,     5,    -1,    28,    29,    30,
      31,    32,    -1,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,    23,     4,     5,    -1,    -1,    28,    29,
      30,    31,    32,     4,     5,    25,    -1,    -1,    28,    29,
      30,    31,    32,     4,     5,    25,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,     4,     5,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    32,     4,     5,    25,    -1,    -1,    28,
      29,    30,    31,    32,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,     4,     5,    25,    -1,    -1,    28,    29,
      30,    31,    32,     4,     5,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    32,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,    -1,    25,     4,     5,    28,    29,    30,
      31,    32,    -1,     4,     5,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    32,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    32,    25,    -1,    -1,    28,    29,    30,
      31,    32
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
      31,     3,    15,    45,    53,    43,    53,     3,    25,    53,
      53,    23,    25,    46,     3,    25,    27,    45,    55,    56,
      57,    59,    57,    60,     3,    22,    25,    25,    23,    25,
      25,    46,    53,    53,    23,    23,    45,    25,    53,    25,
       9,    25,    45,    45,     1,     3,    12,    13,    16,    17,
      18,    19,    20,    21,    24,    28,    29,    30,    32,    42,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       6,     7,     8,    10,    11,    14,    26,    38,    46,    47,
      48,    49,    50,    51,    52,    53,     1,     3,    12,    13,
      16,    17,    18,    19,    20,    21,    24,    28,    29,    30,
      32,    42,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    53,     1,     3,    12,    13,    16,    17,    18,
      19,    20,    21,    24,    28,    29,    30,    32,    42,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     6,
       7,     8,    10,    11,    14,    26,    38,    46,    47,    48,
      49,    50,    51,    52,    53,    23,    12,    24,     3,    60,
      60,    60,    53,    60,    30,    29,    28,    32,    64,    31,
      24,    24,    24,    53,    24,     3,    15,    33,    27,    44,
      23,    12,    24,     3,    60,    60,    60,    53,    60,    30,
      29,    28,    32,    64,    31,    23,    12,    24,     3,    60,
      60,    60,    53,    60,    30,    29,    28,    32,    64,    31,
      24,    24,    24,    53,    24,     3,    15,    33,    27,    44,
      23,    53,    43,    25,    55,    56,    57,    59,    57,    60,
       3,    25,    53,    53,    23,    25,    46,    23,     3,    33,
      23,    27,    53,    43,    25,    55,    56,    57,    59,    57,
      60,    53,    43,    25,    55,    56,    57,    59,    57,    60,
       3,    25,    53,    53,    23,    25,    46,    23,     3,    33,
      23,    27,    25,    25,    23,    25,    25,    46,    53,    23,
      25,    25,    25,    23,    25,    25,    46,    53,    23,    23,
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
#line 2338 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_paramList: /* paramList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2344 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_param: /* param  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2350 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_variableParam: /* variableParam  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2356 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_functionParam: /* functionParam  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2362 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_functionParams: /* functionParams  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2368 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_functionParamsList: /* functionParamsList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2374 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_call: /* call  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2380 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_argList: /* argList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2386 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_stmList: /* stmList  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2392 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_stmt: /* stmt  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2398 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_expStatement: /* expStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2404 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_compoundStatement: /* compoundStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2410 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_ifStatement: /* ifStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2416 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_forStatement: /* forStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2422 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_returnStatement: /* returnStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2428 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_inputStatement: /* inputStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2434 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_outputStatement: /* outputStatement  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2440 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_expression: /* expression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2446 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_orExpression: /* orExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2452 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_andExpression: /* andExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2458 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_relationalExpression: /* relationalExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2464 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_listExpression: /* listExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2470 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_arithmExpression: /* arithmExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2476 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_arithmMulDivExpression: /* arithmMulDivExpression  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2482 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_term: /* term  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2488 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_unaryTerm: /* unaryTerm  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2494 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_immutable: /* immutable  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2500 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_const: /* const  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2506 "./src/syntax.tab.c"
        break;

    case YYSYMBOL_listOP: /* listOP  */
#line 100 "./src/syntax.y"
            { libera_arvore(((*yyvaluep).producao)); }
#line 2512 "./src/syntax.tab.c"
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
#line 2787 "./src/syntax.tab.c"
    break;

  case 3: /* paramList: paramList param  */
#line 117 "./src/syntax.y"
                  {
    (yyval.producao) = aloca_no("paramList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 2797 "./src/syntax.tab.c"
    break;

  case 4: /* paramList: param  */
#line 122 "./src/syntax.y"
          {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2805 "./src/syntax.tab.c"
    break;

  case 5: /* param: variableParam  */
#line 127 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2813 "./src/syntax.tab.c"
    break;

  case 6: /* param: functionParam  */
#line 130 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 2821 "./src/syntax.tab.c"
    break;

  case 7: /* variableParam: TYPE LISTTYPE ID ';'  */
#line 135 "./src/syntax.y"
                       {
    Simbolo sim;
    char tipo[10];

    strcpy(tipo, (yyvsp[-3].terminal)->valor);
    strcat(tipo, (yyvsp[-2].terminal)->valor);

    verify_context((yyvsp[-1].terminal)->valor);
    verify_redeclaration((yyvsp[-1].terminal)->valor);

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
#line 2862 "./src/syntax.tab.c"
    break;

  case 8: /* variableParam: TYPE ID ';'  */
#line 171 "./src/syntax.y"
                {
    Simbolo sim;

    verify_context((yyvsp[-1].terminal)->valor);
    verify_redeclaration((yyvsp[-1].terminal)->valor);

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
#line 2897 "./src/syntax.tab.c"
    break;

  case 9: /* variableParam: TYPE LISTTYPE LEXICAL_ERROR  */
#line 201 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2906 "./src/syntax.tab.c"
    break;

  case 10: /* variableParam: TYPE LEXICAL_ERROR ';'  */
#line 205 "./src/syntax.y"
                           {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 2915 "./src/syntax.tab.c"
    break;

  case 11: /* functionParam: TYPE ID '(' functionParams ')' stmt  */
#line 211 "./src/syntax.y"
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
#line 2956 "./src/syntax.tab.c"
    break;

  case 12: /* functionParam: TYPE LISTTYPE ID '(' functionParams ')' stmt  */
#line 247 "./src/syntax.y"
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
#line 3004 "./src/syntax.tab.c"
    break;

  case 13: /* functionParams: functionParamsList  */
#line 292 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3012 "./src/syntax.tab.c"
    break;

  case 14: /* functionParams: %empty  */
#line 295 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 3020 "./src/syntax.tab.c"
    break;

  case 15: /* functionParams: error  */
#line 298 "./src/syntax.y"
          {
    (yyval.producao) = NULL;
    yyerrok;
  }
#line 3029 "./src/syntax.tab.c"
    break;

  case 16: /* functionParamsList: functionParamsList ',' TYPE ID  */
#line 304 "./src/syntax.y"
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
#line 3064 "./src/syntax.tab.c"
    break;

  case 17: /* functionParamsList: functionParamsList ',' TYPE LISTTYPE ID  */
#line 334 "./src/syntax.y"
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
#line 3108 "./src/syntax.tab.c"
    break;

  case 18: /* functionParamsList: TYPE ID  */
#line 373 "./src/syntax.y"
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
#line 3143 "./src/syntax.tab.c"
    break;

  case 19: /* functionParamsList: TYPE LISTTYPE ID  */
#line 403 "./src/syntax.y"
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
#line 3183 "./src/syntax.tab.c"
    break;

  case 20: /* call: ID '(' argList ')'  */
#line 440 "./src/syntax.y"
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
#line 3213 "./src/syntax.tab.c"
    break;

  case 21: /* argList: argList ',' expression  */
#line 467 "./src/syntax.y"
                         {
    (yyval.producao) = aloca_no("argList", "undefined");

    nro_argumentos++;

    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    put_arg_in_list(0, 0, (yyvsp[0].producao)->type, (yyvsp[0].producao));
  }
#line 3228 "./src/syntax.tab.c"
    break;

  case 22: /* argList: expression  */
#line 477 "./src/syntax.y"
               {
    (yyval.producao) = aloca_no("argList", "undefined");

    nro_argumentos++;

    (yyval.producao)->filhos[0] = (yyvsp[0].producao);

    put_arg_in_list(0, 0, (yyvsp[0].producao)->type, (yyvsp[0].producao));
  }
#line 3242 "./src/syntax.tab.c"
    break;

  case 23: /* argList: %empty  */
#line 486 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 3250 "./src/syntax.tab.c"
    break;

  case 24: /* stmList: stmList stmt  */
#line 491 "./src/syntax.y"
               {
    (yyval.producao) = aloca_no("stmList", "undefined");
    (yyval.producao)->filhos[0] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);
  }
#line 3260 "./src/syntax.tab.c"
    break;

  case 25: /* stmList: stmt  */
#line 496 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3268 "./src/syntax.tab.c"
    break;

  case 26: /* stmt: expStatement  */
#line 501 "./src/syntax.y"
               {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3276 "./src/syntax.tab.c"
    break;

  case 27: /* stmt: compoundStatement  */
#line 504 "./src/syntax.y"
                      {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3284 "./src/syntax.tab.c"
    break;

  case 28: /* stmt: ifStatement  */
#line 507 "./src/syntax.y"
                {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3292 "./src/syntax.tab.c"
    break;

  case 29: /* stmt: forStatement  */
#line 510 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3300 "./src/syntax.tab.c"
    break;

  case 30: /* stmt: returnStatement  */
#line 513 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3308 "./src/syntax.tab.c"
    break;

  case 31: /* stmt: inputStatement  */
#line 516 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3316 "./src/syntax.tab.c"
    break;

  case 32: /* stmt: outputStatement  */
#line 519 "./src/syntax.y"
                    {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3324 "./src/syntax.tab.c"
    break;

  case 33: /* stmt: variableParam  */
#line 522 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3332 "./src/syntax.tab.c"
    break;

  case 34: /* expStatement: expression ';'  */
#line 527 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 3340 "./src/syntax.tab.c"
    break;

  case 35: /* compoundStatement: '{' stmList '}'  */
#line 533 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[-1].producao);
  }
#line 3348 "./src/syntax.tab.c"
    break;

  case 36: /* compoundStatement: '{' '}'  */
#line 536 "./src/syntax.y"
            {
    (yyval.producao) = NULL;
  }
#line 3356 "./src/syntax.tab.c"
    break;

  case 37: /* ifStatement: IF '(' expression ')' stmt  */
#line 542 "./src/syntax.y"
                             {
    (yyval.producao) = aloca_no("ifStatement", "undefined");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-4].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-4].terminal));
  }
#line 3371 "./src/syntax.tab.c"
    break;

  case 38: /* ifStatement: IF '(' expression ')' stmt ELSE stmt  */
#line 552 "./src/syntax.y"
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
#line 3390 "./src/syntax.tab.c"
    break;

  case 39: /* forStatement: FOR '(' expStatement expStatement expression ')' stmt  */
#line 568 "./src/syntax.y"
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
#line 3407 "./src/syntax.tab.c"
    break;

  case 40: /* forStatement: FOR '(' ')'  */
#line 580 "./src/syntax.y"
                 {
    (yyval.producao) = NULL;
    yyerror("Error For Statement without expressions !!");
    yyerrok;
  }
#line 3417 "./src/syntax.tab.c"
    break;

  case 41: /* forStatement: FOR '(' expStatement expression ')'  */
#line 585 "./src/syntax.y"
                                         {
    (yyval.producao) = NULL;
    yyerror("Error For Statement missing one expression statement !!");
    libera_arvore((yyvsp[-2].producao));
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3429 "./src/syntax.tab.c"
    break;

  case 42: /* forStatement: FOR '(' expStatement expStatement ')'  */
#line 592 "./src/syntax.y"
                                          {
    (yyval.producao) = NULL;
    yyerror("Error For Statement missing the last expression !!");
    libera_arvore((yyvsp[-2].producao));
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3441 "./src/syntax.tab.c"
    break;

  case 43: /* returnStatement: RETURN expression ';'  */
#line 601 "./src/syntax.y"
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
#line 3459 "./src/syntax.tab.c"
    break;

  case 44: /* inputStatement: INPUT '(' ID ')' ';'  */
#line 616 "./src/syntax.y"
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
#line 3486 "./src/syntax.tab.c"
    break;

  case 45: /* inputStatement: INPUT '(' ')' ';'  */
#line 638 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error Input without parameter !!");
    yyerrok;
  }
#line 3496 "./src/syntax.tab.c"
    break;

  case 46: /* outputStatement: OUTPUT '(' expression ')' ';'  */
#line 645 "./src/syntax.y"
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
#line 3523 "./src/syntax.tab.c"
    break;

  case 47: /* expression: ID ASSIGN expression  */
#line 669 "./src/syntax.y"
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
#line 3545 "./src/syntax.tab.c"
    break;

  case 48: /* expression: orExpression  */
#line 686 "./src/syntax.y"
                 {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3553 "./src/syntax.tab.c"
    break;

  case 49: /* expression: ID ASSIGN  */
#line 689 "./src/syntax.y"
              {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression  missing one parameter !!");
    yyerrok;
  }
#line 3563 "./src/syntax.tab.c"
    break;

  case 50: /* expression: ASSIGN  */
#line 694 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Assign Expression missing two parametes !!");
    yyerrok;
  }
#line 3573 "./src/syntax.tab.c"
    break;

  case 51: /* orExpression: orExpression OR andExpression  */
#line 701 "./src/syntax.y"
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
#line 3599 "./src/syntax.tab.c"
    break;

  case 52: /* orExpression: andExpression  */
#line 722 "./src/syntax.y"
                  {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3607 "./src/syntax.tab.c"
    break;

  case 53: /* orExpression: orExpression OR  */
#line 725 "./src/syntax.y"
                    {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing one parameter !!");
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3618 "./src/syntax.tab.c"
    break;

  case 54: /* orExpression: OR  */
#line 731 "./src/syntax.y"
       {
    (yyval.producao) = NULL;
    yyerror("Error Or Expression missing two parameters !!");
    yyerrok;
  }
#line 3628 "./src/syntax.tab.c"
    break;

  case 55: /* andExpression: andExpression AND relationalExpression  */
#line 738 "./src/syntax.y"
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
#line 3653 "./src/syntax.tab.c"
    break;

  case 56: /* andExpression: relationalExpression  */
#line 758 "./src/syntax.y"
                         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3661 "./src/syntax.tab.c"
    break;

  case 57: /* andExpression: andExpression AND  */
#line 761 "./src/syntax.y"
                      {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing one parameter !!");
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3672 "./src/syntax.tab.c"
    break;

  case 58: /* andExpression: AND  */
#line 767 "./src/syntax.y"
        {
    (yyval.producao) = NULL;
    yyerror("Error And Expression missing two parameters !!");
    yyerrok;
  }
#line 3682 "./src/syntax.tab.c"
    break;

  case 59: /* relationalExpression: relationalExpression REL_OP listExpression  */
#line 774 "./src/syntax.y"
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
#line 3707 "./src/syntax.tab.c"
    break;

  case 60: /* relationalExpression: listExpression  */
#line 794 "./src/syntax.y"
                   {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3715 "./src/syntax.tab.c"
    break;

  case 61: /* relationalExpression: relationalExpression REL_OP  */
#line 797 "./src/syntax.y"
                                {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing one parameter !!");
    libera_arvore((yyvsp[-1].producao));
    yyerrok;
  }
#line 3726 "./src/syntax.tab.c"
    break;

  case 62: /* relationalExpression: REL_OP  */
#line 803 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
    yyerror("Error Relational Expression missing two parameters !!");
    yyerrok;
  }
#line 3736 "./src/syntax.tab.c"
    break;

  case 63: /* listExpression: arithmExpression listOP listExpression  */
#line 810 "./src/syntax.y"
                                         {

    char *type = list_type_check((yyvsp[-2].producao), (yyvsp[-1].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("listExpression", type);
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = (yyvsp[-1].producao);
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);
  }
#line 3750 "./src/syntax.tab.c"
    break;

  case 64: /* listExpression: arithmExpression  */
#line 819 "./src/syntax.y"
                     {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3758 "./src/syntax.tab.c"
    break;

  case 65: /* arithmExpression: arithmExpression SUB_ADD arithmMulDivExpression  */
#line 825 "./src/syntax.y"
                                                  {

    arithm_subadd_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("arithmExpression", what_type((yyvsp[-2].producao), (yyvsp[0].producao)));
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3776 "./src/syntax.tab.c"
    break;

  case 66: /* arithmExpression: arithmMulDivExpression  */
#line 838 "./src/syntax.y"
                           {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3784 "./src/syntax.tab.c"
    break;

  case 67: /* arithmMulDivExpression: arithmMulDivExpression MUL_DIV term  */
#line 843 "./src/syntax.y"
                                      {

    arithm_muldiv_type_check((yyvsp[-2].producao), (yyvsp[0].producao));

    (yyval.producao) = aloca_no("arithmMulDivExpression", what_type((yyvsp[-2].producao), (yyvsp[0].producao)));
    (yyval.producao)->filhos[0] = (yyvsp[-2].producao);
    (yyval.producao)->filhos[1] = aloca_no("", "undefined");
    (yyval.producao)->filhos[2] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[1], (yyvsp[-1].terminal));
  }
#line 3802 "./src/syntax.tab.c"
    break;

  case 68: /* arithmMulDivExpression: term  */
#line 856 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3810 "./src/syntax.tab.c"
    break;

  case 69: /* term: const  */
#line 862 "./src/syntax.y"
        {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3818 "./src/syntax.tab.c"
    break;

  case 70: /* term: call  */
#line 865 "./src/syntax.y"
         {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3826 "./src/syntax.tab.c"
    break;

  case 71: /* term: ID  */
#line 868 "./src/syntax.y"
       {
    strcpy((yyvsp[0].terminal)->tipo, get_type_id((yyvsp[0].terminal)->valor, (yyvsp[0].terminal)));

    (yyval.producao) = aloca_no("", (yyvsp[0].terminal)->tipo);

    (yyvsp[0].terminal)->escopo = get_escopo((yyvsp[0].terminal));

    // $1->escopo = escopo_atual->scope_size;

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3842 "./src/syntax.tab.c"
    break;

  case 72: /* term: unaryTerm  */
#line 879 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3850 "./src/syntax.tab.c"
    break;

  case 73: /* term: immutable  */
#line 882 "./src/syntax.y"
              {
    (yyval.producao) = (yyvsp[0].producao);
  }
#line 3858 "./src/syntax.tab.c"
    break;

  case 74: /* term: error  */
#line 885 "./src/syntax.y"
           {
    (yyval.producao) = NULL;
  }
#line 3866 "./src/syntax.tab.c"
    break;

  case 75: /* unaryTerm: '!' term  */
#line 890 "./src/syntax.y"
           {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3883 "./src/syntax.tab.c"
    break;

  case 76: /* unaryTerm: '%' term  */
#line 902 "./src/syntax.y"
             {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3900 "./src/syntax.tab.c"
    break;

  case 77: /* unaryTerm: '?' term  */
#line 914 "./src/syntax.y"
             {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3917 "./src/syntax.tab.c"
    break;

  case 78: /* unaryTerm: SUB_ADD term  */
#line 926 "./src/syntax.y"
                 {

    char *type = verify_unary_list((yyvsp[0].producao), (yyvsp[-1].terminal));

    (yyval.producao) = aloca_no("unaryTerm", type);
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");
    (yyval.producao)->filhos[1] = (yyvsp[0].producao);

    (yyvsp[-1].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[-1].terminal));
  }
#line 3934 "./src/syntax.tab.c"
    break;

  case 79: /* immutable: '(' expression ')'  */
#line 941 "./src/syntax.y"
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
#line 3955 "./src/syntax.tab.c"
    break;

  case 80: /* const: INT  */
#line 959 "./src/syntax.y"
      {
    (yyval.producao) = aloca_no("const", "int");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "int");
    
    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3968 "./src/syntax.tab.c"
    break;

  case 81: /* const: FLOAT  */
#line 967 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("const", "float");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "float");

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3981 "./src/syntax.tab.c"
    break;

  case 82: /* const: STRING  */
#line 975 "./src/syntax.y"
           {
    (yyval.producao) = aloca_no("const", "string");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "string");

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 3994 "./src/syntax.tab.c"
    break;

  case 83: /* const: NIL  */
#line 983 "./src/syntax.y"
        {
    (yyval.producao) = aloca_no("const", "list");

    (yyvsp[0].terminal)->escopo = -1;
    strcpy((yyvsp[0].terminal)->tipo, "list");

    coloca_terminal((yyval.producao), (yyvsp[0].terminal));
  }
#line 4007 "./src/syntax.tab.c"
    break;

  case 84: /* listOP: FUNCTION  */
#line 993 "./src/syntax.y"
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
#line 4028 "./src/syntax.tab.c"
    break;

  case 85: /* listOP: INFIX  */
#line 1009 "./src/syntax.y"
          {
    (yyval.producao) = aloca_no("listOp", "constructor");
    (yyval.producao)->filhos[0] = aloca_no("", "undefined");

    (yyvsp[0].terminal)->escopo = -1;

    coloca_terminal((yyval.producao)->filhos[0], (yyvsp[0].terminal));
  }
#line 4041 "./src/syntax.tab.c"
    break;


#line 4045 "./src/syntax.tab.c"

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

#line 1018 "./src/syntax.y"


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
