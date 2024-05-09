/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lex.y"

#include <stdlib.h>
#include <stdio.h>
#include "lex.tab.h"
#include "ts.h"


#line 79 "lex.tab.c"

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

#include "lex.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tMAIN = 3,                      /* tMAIN  */
  YYSYMBOL_tINT = 4,                       /* tINT  */
  YYSYMBOL_tLPAR = 5,                      /* tLPAR  */
  YYSYMBOL_tVOID = 6,                      /* tVOID  */
  YYSYMBOL_tRPAR = 7,                      /* tRPAR  */
  YYSYMBOL_tERROR = 8,                     /* tERROR  */
  YYSYMBOL_tLBRACE = 9,                    /* tLBRACE  */
  YYSYMBOL_tRBRACE = 10,                   /* tRBRACE  */
  YYSYMBOL_tIF = 11,                       /* tIF  */
  YYSYMBOL_tELSE = 12,                     /* tELSE  */
  YYSYMBOL_tWHILE = 13,                    /* tWHILE  */
  YYSYMBOL_tPRINT = 14,                    /* tPRINT  */
  YYSYMBOL_tRETURN = 15,                   /* tRETURN  */
  YYSYMBOL_tADD = 16,                      /* tADD  */
  YYSYMBOL_tSUB = 17,                      /* tSUB  */
  YYSYMBOL_tMUL = 18,                      /* tMUL  */
  YYSYMBOL_tDIV = 19,                      /* tDIV  */
  YYSYMBOL_tLT = 20,                       /* tLT  */
  YYSYMBOL_tGT = 21,                       /* tGT  */
  YYSYMBOL_tNE = 22,                       /* tNE  */
  YYSYMBOL_tEQ = 23,                       /* tEQ  */
  YYSYMBOL_tLE = 24,                       /* tLE  */
  YYSYMBOL_tGE = 25,                       /* tGE  */
  YYSYMBOL_tASSIGN = 26,                   /* tASSIGN  */
  YYSYMBOL_tAND = 27,                      /* tAND  */
  YYSYMBOL_tOR = 28,                       /* tOR  */
  YYSYMBOL_tNOT = 29,                      /* tNOT  */
  YYSYMBOL_tSEMI = 30,                     /* tSEMI  */
  YYSYMBOL_tCOMMA = 31,                    /* tCOMMA  */
  YYSYMBOL_tNB = 32,                       /* tNB  */
  YYSYMBOL_tID = 33,                       /* tID  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_Programme = 35,                 /* Programme  */
  YYSYMBOL_36_1 = 36,                      /* $@1  */
  YYSYMBOL_37_2 = 37,                      /* $@2  */
  YYSYMBOL_TypeFonction = 38,              /* TypeFonction  */
  YYSYMBOL_Fonction = 39,                  /* Fonction  */
  YYSYMBOL_40_3 = 40,                      /* $@3  */
  YYSYMBOL_Variables = 41,                 /* Variables  */
  YYSYMBOL_VariablesNext = 42,             /* VariablesNext  */
  YYSYMBOL_Variable = 43,                  /* Variable  */
  YYSYMBOL_Bloc = 44,                      /* Bloc  */
  YYSYMBOL_Affectation = 45,               /* Affectation  */
  YYSYMBOL_Declaration = 46,               /* Declaration  */
  YYSYMBOL_VariableDeclaration = 47,       /* VariableDeclaration  */
  YYSYMBOL_48_4 = 48,                      /* $@4  */
  YYSYMBOL_If = 49,                        /* If  */
  YYSYMBOL_50_5 = 50,                      /* $@5  */
  YYSYMBOL_51_6 = 51,                      /* $@6  */
  YYSYMBOL_Else = 52,                      /* Else  */
  YYSYMBOL_53_7 = 53,                      /* $@7  */
  YYSYMBOL_54_8 = 54,                      /* $@8  */
  YYSYMBOL_While = 55,                     /* While  */
  YYSYMBOL_56_9 = 56,                      /* $@9  */
  YYSYMBOL_57_10 = 57,                     /* $@10  */
  YYSYMBOL_Print = 58,                     /* Print  */
  YYSYMBOL_Return = 59,                    /* Return  */
  YYSYMBOL_Expression = 60,                /* Expression  */
  YYSYMBOL_61_11 = 61,                     /* $@11  */
  YYSYMBOL_Argument = 62,                  /* Argument  */
  YYSYMBOL_ArgumentNext = 63,              /* ArgumentNext  */
  YYSYMBOL_Condition = 64,                 /* Condition  */
  YYSYMBOL_IDNB = 65,                      /* IDNB  */
  YYSYMBOL_ConditionSuite = 66             /* ConditionSuite  */
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
typedef yytype_uint8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    24,    25,    25,    29,    30,    34,    34,
      38,    39,    40,    44,    45,    49,    53,    54,    55,    56,
      57,    58,    59,    60,    64,    68,    69,    73,    74,    74,
      78,    78,    78,    82,    83,    83,    83,    87,    87,    87,
      91,    94,    98,    99,   100,   100,   101,   102,   103,   104,
     105,   109,   110,   111,   115,   116,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   134,   135,   139,
     140,   141
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tMAIN", "tINT",
  "tLPAR", "tVOID", "tRPAR", "tERROR", "tLBRACE", "tRBRACE", "tIF",
  "tELSE", "tWHILE", "tPRINT", "tRETURN", "tADD", "tSUB", "tMUL", "tDIV",
  "tLT", "tGT", "tNE", "tEQ", "tLE", "tGE", "tASSIGN", "tAND", "tOR",
  "tNOT", "tSEMI", "tCOMMA", "tNB", "tID", "$accept", "Programme", "$@1",
  "$@2", "TypeFonction", "Fonction", "$@3", "Variables", "VariablesNext",
  "Variable", "Bloc", "Affectation", "Declaration", "VariableDeclaration",
  "$@4", "If", "$@5", "$@6", "Else", "$@7", "$@8", "While", "$@9", "$@10",
  "Print", "Return", "Expression", "$@11", "Argument", "ArgumentNext",
  "Condition", "IDNB", "ConditionSuite", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-65)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -65,   -65,    17,     3,   -65,   -65,   -65,   -65,   -65,
     -65,    19,    12,    57,   -65,   -25,   -65,    53,    50,   -65,
      76,    85,   -65,     8,    50,    58,    88,    89,    90,     2,
       4,    80,     8,     8,     8,     8,     8,   -65,   -65,    77,
      13,    51,    51,    74,     2,   -65,   104,    10,     5,     2,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     2,   -65,     9,
     -65,   -65,   105,   100,   106,   107,    99,   121,     2,     2,
       2,     2,   -65,   -65,   104,    48,   122,   101,    52,    58,
      56,    51,    21,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   108,   -65,     5,    69,    69,   -65,   -65,
       2,   -65,   109,   -65,   -65,   -65,   -65,   123,    51,    51,
     -65,   -65,    21,    21,    21,    21,    21,    21,    21,    21,
     -65,   -65,   127,    48,     8,    21,   -65,   -65,     8,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     8,   -65,   -65,
     -65,   -65,   -65,   -65,   125,   126,   119,   -65,   128,   -65,
     -65,     8,   -65,   130,   -65
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     7,     0,     0,     1,     2,     4,     8,     8,
       3,     0,     0,    10,     5,     0,    11,     0,    13,    15,
       0,     0,    12,    16,    13,     0,     0,     0,     0,     0,
       0,     0,    16,    16,    16,    16,    16,    22,    14,    27,
       0,     0,     0,     0,     0,    43,    42,     0,    51,     0,
       9,    18,    17,    19,    20,    21,    28,     0,    25,     0,
      68,    67,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    43,    42,    54,     0,    54,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,    46,    47,    48,    49,
       0,    53,     0,    52,    24,    29,    26,     0,     0,     0,
      64,    30,    69,    69,    69,    69,    69,    69,    69,    69,
      37,    40,     0,    54,    16,    69,    70,    71,    16,    58,
      59,    57,    56,    60,    61,    62,    63,    16,    45,    55,
      23,    65,    31,    38,     0,     0,    33,    39,     0,    32,
      34,    16,    35,     0,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   129,   -65,   -65,   -65,   133,   -65,   -65,   120,   131,
     -32,   -65,   -65,    64,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -24,   -65,    54,   -64,
     -31,   -33,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     8,     9,     4,    10,    11,    17,    22,    18,
      31,    32,    33,    40,    79,    34,   128,   144,   149,   151,
     153,    35,   137,   145,    36,    37,    75,    67,    76,   101,
      62,    63,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    52,    53,    54,    55,    47,     6,    44,    19,    48,
      44,    64,    25,   103,    81,    77,     1,     5,     2,    26,
      66,    27,    28,    29,    13,    78,    68,    69,    70,    71,
      49,    60,    61,    80,    45,    46,     7,    73,    74,    57,
      72,    30,    82,    58,    96,    97,    98,    99,   108,   109,
     107,   112,   113,   114,   115,   116,   117,   118,   119,   139,
      20,    15,    77,    16,    68,    69,    70,    71,    68,    69,
      70,    71,    68,    69,    70,    71,   123,   126,   127,   100,
      59,    21,   104,    60,    61,    23,   106,    70,    71,    15,
      50,    39,   140,    41,    42,    43,   142,   129,   130,   131,
     132,   133,   134,   135,   136,   143,    94,    65,    56,   -44,
     141,   111,    83,    92,    93,    68,    69,    70,    71,   152,
      84,    85,    86,    87,    88,    89,    95,    90,    91,   102,
     125,   148,   100,   120,   138,   146,   147,   150,   121,   124,
     154,    14,    12,   105,    38,     0,     0,     0,     0,   122,
       0,     0,    24
};

static const yytype_int16 yycheck[] =
{
      32,    33,    34,    35,    36,    29,     3,     5,    33,     5,
       5,    42,     4,    77,     5,    48,     4,     0,     6,    11,
      44,    13,    14,    15,     5,    49,    16,    17,    18,    19,
      26,    32,    33,    57,    32,    33,    33,    32,    33,    26,
      30,    33,    33,    30,    68,    69,    70,    71,    27,    28,
      81,    84,    85,    86,    87,    88,    89,    90,    91,   123,
       7,     4,    95,     6,    16,    17,    18,    19,    16,    17,
      18,    19,    16,    17,    18,    19,   100,   108,   109,    31,
      29,    31,    30,    32,    33,     9,    30,    18,    19,     4,
      10,    33,   124,     5,     5,     5,   128,   112,   113,   114,
     115,   116,   117,   118,   119,   137,     7,    33,    31,     5,
     125,     9,     7,     7,     7,    16,    17,    18,    19,   151,
      20,    21,    22,    23,    24,    25,     5,    27,    28,     7,
       7,    12,    31,     9,     7,    10,    10,     9,    30,    30,
      10,    12,     9,    79,    24,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,    35,    38,     0,     3,    33,    36,    37,
      39,    40,    39,     5,    35,     4,     6,    41,    43,    33,
       7,    31,    42,     9,    43,     4,    11,    13,    14,    15,
      33,    44,    45,    46,    49,    55,    58,    59,    42,    33,
      47,     5,     5,     5,     5,    32,    33,    60,     5,    26,
      10,    44,    44,    44,    44,    44,    31,    26,    30,    29,
      32,    33,    64,    65,    64,    33,    60,    61,    16,    17,
      18,    19,    30,    32,    33,    60,    62,    65,    60,    48,
      60,     5,    33,     7,    20,    21,    22,    23,    24,    25,
      27,    28,     7,     7,     7,     5,    60,    60,    60,    60,
      31,    63,     7,    63,    30,    47,    30,    64,    27,    28,
      66,     9,    65,    65,    65,    65,    65,    65,    65,    65,
       9,    30,    62,    60,    30,     7,    64,    64,    50,    66,
      66,    66,    66,    66,    66,    66,    66,    56,     7,    63,
      44,    66,    44,    44,    51,    57,    10,    10,    12,    52,
       9,    53,    44,    54,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    36,    35,    37,    35,    38,    38,    40,    39,
      41,    41,    41,    42,    42,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    45,    46,    46,    47,    48,    47,
      50,    51,    49,    52,    53,    54,    52,    56,    57,    55,
      58,    59,    60,    60,    61,    60,    60,    60,    60,    60,
      60,    62,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     5,     1,     1,     0,     7,
       0,     1,     2,     0,     3,     2,     0,     2,     2,     2,
       2,     2,     1,     6,     4,     3,     5,     1,     0,     4,
       0,     0,    10,     0,     0,     0,     6,     0,     0,     9,
       5,     3,     1,     1,     0,     5,     3,     3,     3,     3,
       3,     0,     2,     2,     0,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     5,     1,     1,     1,     0,
       2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* $@1: %empty  */
#line 24 "lex.y"
                     {addFonction("main");endJump("JMP");}
#line 1231 "lex.tab.c"
    break;

  case 3: /* Programme: TypeFonction tMAIN $@1 Fonction  */
#line 24 "lex.y"
                                                                    {writeASM("NOP",0,0,0);writeASMfile();}
#line 1237 "lex.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 25 "lex.y"
                    {increaseDepth();addFonction((yyvsp[0].str));addReturnAddress("?");addReturnValue("?");}
#line 1243 "lex.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 34 "lex.y"
  {increaseDepth();}
#line 1249 "lex.tab.c"
    break;

  case 9: /* Fonction: $@3 tLPAR Variables tRPAR tLBRACE Bloc tRBRACE  */
#line 34 "lex.y"
                                                                {printTable();writeASM("RET",0,0,0);deleteSymbolScope();decreaseDepth();}
#line 1255 "lex.tab.c"
    break;

  case 15: /* Variable: tINT tID  */
#line 49 "lex.y"
           {addSymbol((yyvsp[0].str));}
#line 1261 "lex.tab.c"
    break;

  case 24: /* Affectation: tID tASSIGN Expression tSEMI  */
#line 64 "lex.y"
                               {writeASM("COP", getSymbol((yyvsp[-3].str)), getTopStack(),0); deleteTopStack();}
#line 1267 "lex.tab.c"
    break;

  case 26: /* Declaration: tINT VariableDeclaration tASSIGN Expression tSEMI  */
#line 69 "lex.y"
                                                     {int tmpVar = getTopStack(); deleteTopStack() ;writeASM("COP", getTopStack(), tmpVar,0);}
#line 1273 "lex.tab.c"
    break;

  case 27: /* VariableDeclaration: tID  */
#line 73 "lex.y"
      {addSymbol((yyvsp[0].str));}
#line 1279 "lex.tab.c"
    break;

  case 28: /* $@4: %empty  */
#line 74 "lex.y"
              {addSymbol((yyvsp[-1].str));}
#line 1285 "lex.tab.c"
    break;

  case 30: /* $@5: %empty  */
#line 78 "lex.y"
                                    {increaseDepth();writeASM("JMF", getTopStack(), -1, 0); deleteTopStack();}
#line 1291 "lex.tab.c"
    break;

  case 31: /* $@6: %empty  */
#line 78 "lex.y"
                                                                                                                    {deleteSymbolScope();decreaseDepth();}
#line 1297 "lex.tab.c"
    break;

  case 33: /* Else: %empty  */
#line 82 "lex.y"
         {endJump("JMF");}
#line 1303 "lex.tab.c"
    break;

  case 34: /* $@7: %empty  */
#line 83 "lex.y"
                 {writeASM("JMP",-1,0,0);endJump("JMF");increaseDepth();}
#line 1309 "lex.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 83 "lex.y"
                                                                               {deleteSymbolScope();decreaseDepth();endJump("JMP");}
#line 1315 "lex.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 87 "lex.y"
                                       {increaseDepth();writeASM("JMF", getTopStack(),-1,0);}
#line 1321 "lex.tab.c"
    break;

  case 38: /* $@10: %empty  */
#line 87 "lex.y"
                                                                                                   {deleteSymbolScope();decreaseDepth();writeASM("JMP",getJumpEmpty()-1,0,0);endJump("JMF");}
#line 1327 "lex.tab.c"
    break;

  case 41: /* Return: tRETURN Expression tSEMI  */
#line 94 "lex.y"
                           {writeASM("COP", getSymbol("?VAL"),getTopStack(),0);deleteTopStack();writeASM("RET",0,0,0);}
#line 1333 "lex.tab.c"
    break;

  case 42: /* Expression: tID  */
#line 98 "lex.y"
      {addTmpSymbol(); writeASM("COP", getTopStack() ,getSymbol((yyvsp[0].str)), 0);}
#line 1339 "lex.tab.c"
    break;

  case 43: /* Expression: tNB  */
#line 99 "lex.y"
        {addTmpSymbol(); writeASM("AFC",getTopStack(),(yyvsp[0].nb),0);}
#line 1345 "lex.tab.c"
    break;

  case 44: /* $@11: %empty  */
#line 100 "lex.y"
       {addReturnAddress("!");addReturnValue("!");}
#line 1351 "lex.tab.c"
    break;

  case 45: /* Expression: tID $@11 tLPAR Argument tRPAR  */
#line 100 "lex.y"
                                                                         {int adr=getSymbol("!VAL"); deleteSymbolTmpScope(); deleteTopStack(); deleteTopStack();addTmpSymbol();writeASM("PUSH",getTopStack(),0,0);writeASM("CALL",getFonctionAddress((yyvsp[-4].str)),0,0);writeASM("POP",getTopStack(),0,0);writeASM("COP",getTopStack(),adr,0);printTable();}
#line 1357 "lex.tab.c"
    break;

  case 46: /* Expression: Expression tADD Expression  */
#line 101 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("ADD", getTopStack(), getTopStack(), top); }
#line 1363 "lex.tab.c"
    break;

  case 47: /* Expression: Expression tSUB Expression  */
#line 102 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("SUB", getTopStack(), getTopStack(), top); }
#line 1369 "lex.tab.c"
    break;

  case 48: /* Expression: Expression tMUL Expression  */
#line 103 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("MUL", getTopStack(), getTopStack(), top); }
#line 1375 "lex.tab.c"
    break;

  case 49: /* Expression: Expression tDIV Expression  */
#line 104 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("DIV", getTopStack(), getTopStack(), top); }
#line 1381 "lex.tab.c"
    break;

  case 67: /* IDNB: tID  */
#line 134 "lex.y"
      {addTmpSymbol();writeASM("COP", getTopStack(), getSymbol((yyvsp[0].str)), 0);}
#line 1387 "lex.tab.c"
    break;

  case 68: /* IDNB: tNB  */
#line 135 "lex.y"
       {addTmpSymbol();writeASM("AFC", getTopStack(), (yyvsp[0].nb),0);}
#line 1393 "lex.tab.c"
    break;


#line 1397 "lex.tab.c"

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
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

  return yyresult;
}

#line 144 "lex.y"


/* LANG

a
a,a
a,a,a
...
*/

/*
e|a (,a)*
    ^^^^^
       B
*/

/*
A -> %empty
A -> a B
B -> %empty
B -> ,a B




Programme:
  Fonction tVOID tMAIN tLPAR Variables tRPAR tLBRACE Contenu tRBRACE 
  |Fonction tINT tMAIN tLPAR Variables tRPAR tLBRACE Contenu tRBRACE
;

Fonction:
  %empty
  |tVOID tID tLPAR Variables tRPAR tLBRACE Contenu tRBRACE Fonction
  |tINT tID tLPAR Variables tRPAR tLBRACE Contenu tRBRACE Fonction
  ;
*/

void yyerror(const char *s) { fprintf(stderr, "%s\n", s); exit(1);}

int main(void) {
  yydebug = 1;
  printf("Gramatical analysis\n"); // yydebug=1;
  writeASM("JMP",-1,0,0);
  yyparse();
  return 0;
}
