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
  YYSYMBOL_tESPER = 32,                    /* tESPER  */
  YYSYMBOL_tCONST = 33,                    /* tCONST  */
  YYSYMBOL_tNB = 34,                       /* tNB  */
  YYSYMBOL_tID = 35,                       /* tID  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_Programme = 37,                 /* Programme  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_TypeFonction = 40,              /* TypeFonction  */
  YYSYMBOL_Fonction = 41,                  /* Fonction  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_Variables = 43,                 /* Variables  */
  YYSYMBOL_VariablesNext = 44,             /* VariablesNext  */
  YYSYMBOL_Variable = 45,                  /* Variable  */
  YYSYMBOL_Bloc = 46,                      /* Bloc  */
  YYSYMBOL_Affectation = 47,               /* Affectation  */
  YYSYMBOL_Declaration = 48,               /* Declaration  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_TypeVariable = 50,              /* TypeVariable  */
  YYSYMBOL_VariableDeclaration = 51,       /* VariableDeclaration  */
  YYSYMBOL_52_5 = 52,                      /* $@5  */
  YYSYMBOL_VariableSuite = 53,             /* VariableSuite  */
  YYSYMBOL_54_6 = 54,                      /* $@6  */
  YYSYMBOL_55_7 = 55,                      /* $@7  */
  YYSYMBOL_If = 56,                        /* If  */
  YYSYMBOL_57_8 = 57,                      /* $@8  */
  YYSYMBOL_58_9 = 58,                      /* $@9  */
  YYSYMBOL_Else = 59,                      /* Else  */
  YYSYMBOL_60_10 = 60,                     /* $@10  */
  YYSYMBOL_61_11 = 61,                     /* $@11  */
  YYSYMBOL_While = 62,                     /* While  */
  YYSYMBOL_63_12 = 63,                     /* $@12  */
  YYSYMBOL_64_13 = 64,                     /* $@13  */
  YYSYMBOL_Print = 65,                     /* Print  */
  YYSYMBOL_Return = 66,                    /* Return  */
  YYSYMBOL_Expression = 67,                /* Expression  */
  YYSYMBOL_68_14 = 68,                     /* $@14  */
  YYSYMBOL_Argument = 69,                  /* Argument  */
  YYSYMBOL_ArgumentNext = 70,              /* ArgumentNext  */
  YYSYMBOL_Condition = 71,                 /* Condition  */
  YYSYMBOL_72_15 = 72,                     /* $@15  */
  YYSYMBOL_73_16 = 73,                     /* $@16  */
  YYSYMBOL_74_17 = 74,                     /* $@17  */
  YYSYMBOL_IDNB = 75,                      /* IDNB  */
  YYSYMBOL_ConditionSuite = 76             /* ConditionSuite  */
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
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  180

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    24,    25,    25,    29,    30,    34,    34,
      38,    39,    40,    44,    45,    49,    50,    51,    55,    56,
      57,    58,    59,    60,    61,    62,    66,    70,    70,    74,
      75,    76,    80,    81,    82,    82,    83,    87,    87,    88,
      88,    91,    91,    91,    95,    96,    96,    96,   100,   100,
     100,   104,   105,   108,   112,   113,   114,   114,   115,   116,
     117,   118,   119,   120,   124,   125,   126,   130,   131,   135,
     135,   136,   137,   137,   138,   138,   139,   140,   141,   142,
     143,   144,   145,   149,   150,   154,   155,   156
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
  "tNOT", "tSEMI", "tCOMMA", "tESPER", "tCONST", "tNB", "tID", "$accept",
  "Programme", "$@1", "$@2", "TypeFonction", "Fonction", "$@3",
  "Variables", "VariablesNext", "Variable", "Bloc", "Affectation",
  "Declaration", "$@4", "TypeVariable", "VariableDeclaration", "$@5",
  "VariableSuite", "$@6", "$@7", "If", "$@8", "$@9", "Else", "$@10",
  "$@11", "While", "$@12", "$@13", "Print", "Return", "Expression", "$@14",
  "Argument", "ArgumentNext", "Condition", "$@15", "$@16", "$@17", "IDNB",
  "ConditionSuite", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -82,   -82,    22,     4,   -82,   -82,   -82,   -82,   -82,
     -82,     5,    13,    10,   -82,    -9,   -82,    20,    21,    23,
      -2,   -82,    45,    73,    31,   -82,   -82,   -82,    16,    23,
      66,    81,    84,    97,     6,    99,     8,    94,    16,    16,
      98,    16,    16,    16,   -82,   -82,   -82,   108,   108,     2,
       6,   104,   -82,   121,    82,   -82,    18,     6,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     7,   -82,   -82,   129,   107,
     133,   134,   137,   106,   -82,   140,     6,     6,     6,     6,
     -82,   -82,   121,    75,   139,   116,    91,    85,   108,    38,
     141,    39,    39,    39,    39,    39,    39,    39,    39,   142,
     118,   119,   -82,    18,    77,    77,   -82,   -82,     6,   -82,
     122,   -82,   -82,     6,   -82,    -3,   -82,   146,   108,   108,
     -82,   -82,   -82,   -82,    38,   -82,    38,    38,    38,    38,
     -82,   -82,   -82,   147,    75,    16,   101,   120,   -82,   -82,
      38,   -82,   -82,    16,    38,    38,   -82,    38,   -82,   -82,
     -82,   -82,    16,   -82,   -82,   -82,    85,   -82,    85,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,    85,   -82,   148,   149,
     -82,   144,   -82,   151,   -82,   -82,    16,   -82,   152,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     7,     0,     0,     1,     2,     4,     8,     8,
       3,     0,     0,    10,     5,     0,    11,     0,     0,    13,
       0,    15,     0,     0,     0,    12,    16,    17,    18,    13,
      29,     0,     0,     0,     0,     0,     0,     0,    18,    18,
       0,    18,    18,    18,    24,    14,    30,     0,     0,     0,
       0,     0,    55,    54,     0,    31,    64,     0,     9,    20,
      19,    27,    21,    22,    23,     0,    84,    83,     0,    82,
       0,     0,     0,     0,    63,     0,     0,     0,     0,     0,
      53,    55,    54,    67,     0,    67,     0,    32,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    64,    58,    59,    60,    61,     0,    66,
       0,    65,    26,     0,    36,     0,    28,     0,     0,     0,
      80,    41,    72,    74,    85,    69,    85,    85,    85,    85,
      48,    52,    51,     0,    67,    18,    34,     0,    37,    33,
      85,    86,    87,    18,    85,    85,    71,    85,    76,    77,
      78,    79,    18,    57,    68,    25,    32,    39,    32,    81,
      42,    73,    75,    70,    49,    35,    32,    38,     0,     0,
      40,    44,    50,     0,    43,    45,    18,    46,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   145,   -82,   -82,   -82,   154,   -82,   -82,   132,   143,
     -38,   -82,   -82,   -82,   -82,   -81,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -32,   -82,    61,   -79,   -40,   -82,   -82,   -82,   -35,
     -57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     8,     9,     4,    10,    11,    18,    25,    19,
      37,    38,    39,    87,    40,   116,   156,   139,   158,   166,
      41,   143,   168,   174,   176,   178,    42,   152,   169,    43,
      44,    83,    75,    84,   109,    68,   147,   144,   145,    69,
     120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    60,    54,    62,    63,    64,   111,     6,    70,    20,
      13,    50,    88,    56,    15,   137,    16,     1,    73,     2,
      30,    85,     5,    50,    22,    86,    21,    31,    23,    32,
      33,    34,   138,    26,    57,    15,    71,    72,    51,     7,
      52,    53,    89,    17,   104,   105,   106,   107,   117,    35,
      51,    36,    81,    82,    24,   154,   122,   123,   124,   125,
     126,   127,   128,   129,    17,   118,   119,   146,    85,   148,
     149,   150,   151,    66,    67,   165,   134,   167,   141,   142,
      27,   136,    28,   159,    46,   170,    47,   161,   162,    48,
     163,    76,    77,    78,    79,    78,    79,   155,    76,    77,
      78,    79,    49,    55,    58,   160,   108,    76,    77,    78,
      79,   113,    80,   102,   164,   114,   115,    76,    77,    78,
      79,   112,    76,    77,    78,    79,   -56,    91,    92,    93,
      94,    95,    96,    61,    97,    98,    90,    65,   177,    74,
      99,   100,    66,    67,   101,   103,   110,   108,   131,   132,
     121,   130,   135,   140,   153,   157,   173,    14,   171,   172,
     175,    45,   179,    12,   133,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
      38,    39,    34,    41,    42,    43,    85,     3,    48,    18,
       5,     5,     5,     5,     4,    18,     6,     4,    50,     6,
       4,    56,     0,     5,     4,    57,    35,    11,     7,    13,
      14,    15,    35,    35,    26,     4,    34,    35,    32,    35,
      34,    35,    35,    33,    76,    77,    78,    79,    88,    33,
      32,    35,    34,    35,    31,   134,    91,    92,    93,    94,
      95,    96,    97,    98,    33,    27,    28,   124,   103,   126,
     127,   128,   129,    34,    35,   156,   108,   158,   118,   119,
      35,   113,     9,   140,    18,   166,     5,   144,   145,     5,
     147,    16,    17,    18,    19,    18,    19,   135,    16,    17,
      18,    19,     5,     4,    10,   143,    31,    16,    17,    18,
      19,    26,    30,     7,   152,    30,    31,    16,    17,    18,
      19,    30,    16,    17,    18,    19,     5,    20,    21,    22,
      23,    24,    25,    35,    27,    28,     7,    29,   176,    35,
       7,     7,    34,    35,     7,     5,     7,    31,    30,    30,
       9,     9,    30,     7,     7,    35,    12,    12,    10,    10,
       9,    29,    10,     9,   103,    -1,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,    37,    40,     0,     3,    35,    38,    39,
      41,    42,    41,     5,    37,     4,     6,    33,    43,    45,
      18,    35,     4,     7,    31,    44,    35,    35,     9,    45,
       4,    11,    13,    14,    15,    33,    35,    46,    47,    48,
      50,    56,    62,    65,    66,    44,    18,     5,     5,     5,
       5,    32,    34,    35,    67,     4,     5,    26,    10,    46,
      46,    35,    46,    46,    46,    29,    34,    35,    71,    75,
      71,    34,    35,    67,    35,    68,    16,    17,    18,    19,
      30,    34,    35,    67,    69,    75,    67,    49,     5,    35,
       7,    20,    21,    22,    23,    24,    25,    27,    28,     7,
       7,     7,     7,     5,    67,    67,    67,    67,    31,    70,
       7,    70,    30,    26,    30,    31,    51,    71,    27,    28,
      76,     9,    75,    75,    75,    75,    75,    75,    75,    75,
       9,    30,    30,    69,    67,    30,    67,    18,    35,    53,
       7,    71,    71,    57,    73,    74,    76,    72,    76,    76,
      76,    76,    63,     7,    70,    46,    52,    35,    54,    76,
      46,    76,    76,    76,    46,    51,    55,    51,    58,    64,
      51,    10,    10,    12,    59,     9,    60,    46,    61,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    38,    37,    39,    37,    40,    40,    42,    41,
      43,    43,    43,    44,    44,    45,    45,    45,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    49,    48,    50,
      50,    50,    51,    51,    52,    51,    51,    54,    53,    55,
      53,    57,    58,    56,    59,    60,    61,    59,    63,    64,
      62,    65,    65,    66,    67,    67,    68,    67,    67,    67,
      67,    67,    67,    67,    69,    69,    69,    70,    70,    72,
      71,    71,    73,    71,    74,    71,    71,    71,    71,    71,
      71,    71,    71,    75,    75,    76,    76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     5,     1,     1,     0,     7,
       0,     1,     2,     0,     3,     2,     3,     3,     0,     2,
       2,     2,     2,     2,     1,     6,     4,     0,     4,     1,
       2,     2,     0,     2,     0,     4,     1,     0,     3,     0,
       4,     0,     0,    10,     0,     0,     0,     6,     0,     0,
       9,     5,     5,     3,     1,     1,     0,     5,     3,     3,
       3,     3,     3,     2,     0,     2,     2,     0,     3,     0,
       5,     4,     0,     5,     0,     5,     4,     4,     4,     4,
       3,     5,     1,     1,     1,     0,     2,     2
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
#line 1257 "lex.tab.c"
    break;

  case 3: /* Programme: TypeFonction tMAIN $@1 Fonction  */
#line 24 "lex.y"
                                                                    {writeASM("NOP",0,0,0);writeASMfile();}
#line 1263 "lex.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 25 "lex.y"
                    {increaseDepth();addFonction((yyvsp[0].str));addReturnAddress("?");addReturnValue("?");}
#line 1269 "lex.tab.c"
    break;

  case 8: /* $@3: %empty  */
#line 34 "lex.y"
  {increaseDepth();}
#line 1275 "lex.tab.c"
    break;

  case 9: /* Fonction: $@3 tLPAR Variables tRPAR tLBRACE Bloc tRBRACE  */
#line 34 "lex.y"
                                                                {writeASM("RET",0,0,0);deleteSymbolScope();decreaseDepth();}
#line 1281 "lex.tab.c"
    break;

  case 15: /* Variable: tINT tID  */
#line 49 "lex.y"
           {addSymbol((yyvsp[0].str));}
#line 1287 "lex.tab.c"
    break;

  case 16: /* Variable: tINT tMUL tID  */
#line 50 "lex.y"
                 {addSymbol((yyvsp[0].str));}
#line 1293 "lex.tab.c"
    break;

  case 17: /* Variable: tCONST tINT tID  */
#line 51 "lex.y"
                   {addSymbol((yyvsp[0].str));}
#line 1299 "lex.tab.c"
    break;

  case 26: /* Affectation: tID tASSIGN Expression tSEMI  */
#line 66 "lex.y"
                               {writeASM("COP", getSymbol((yyvsp[-3].str)), getTopStack(),0); deleteTopStack();}
#line 1305 "lex.tab.c"
    break;

  case 27: /* $@4: %empty  */
#line 70 "lex.y"
                   {addSymbol((yyvsp[0].str));}
#line 1311 "lex.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 82 "lex.y"
                      {int tmpVar = getTopStack(); deleteTopStack(); writeASM("COP", getTopStack(), tmpVar,0);}
#line 1317 "lex.tab.c"
    break;

  case 37: /* $@6: %empty  */
#line 87 "lex.y"
      {addSymbol((yyvsp[0].str));}
#line 1323 "lex.tab.c"
    break;

  case 39: /* $@7: %empty  */
#line 88 "lex.y"
            {addSymbol((yyvsp[0].str));}
#line 1329 "lex.tab.c"
    break;

  case 41: /* $@8: %empty  */
#line 91 "lex.y"
                                    {increaseDepth();writeASM("JMF", getTopStack(), -1, 0); deleteTopStack();}
#line 1335 "lex.tab.c"
    break;

  case 42: /* $@9: %empty  */
#line 91 "lex.y"
                                                                                                                    {deleteSymbolScope();decreaseDepth();}
#line 1341 "lex.tab.c"
    break;

  case 44: /* Else: %empty  */
#line 95 "lex.y"
         {endJump("JMF");}
#line 1347 "lex.tab.c"
    break;

  case 45: /* $@10: %empty  */
#line 96 "lex.y"
                 {writeASM("JMP",-1,0,0);endJump("JMF");increaseDepth();}
#line 1353 "lex.tab.c"
    break;

  case 46: /* $@11: %empty  */
#line 96 "lex.y"
                                                                               {deleteSymbolScope();decreaseDepth();endJump("JMP");}
#line 1359 "lex.tab.c"
    break;

  case 48: /* $@12: %empty  */
#line 100 "lex.y"
                                       {increaseDepth();writeASM("JMF", getTopStack(),-1,0);}
#line 1365 "lex.tab.c"
    break;

  case 49: /* $@13: %empty  */
#line 100 "lex.y"
                                                                                                   {deleteSymbolScope();decreaseDepth();writeASM("JMP",getJumpEmpty()-1,0,0);endJump("JMF");}
#line 1371 "lex.tab.c"
    break;

  case 51: /* Print: tPRINT tLPAR tID tRPAR tSEMI  */
#line 104 "lex.y"
                               {writeASM("PRI",getSymbol((yyvsp[-2].str)),0,0);}
#line 1377 "lex.tab.c"
    break;

  case 52: /* Print: tPRINT tLPAR tNB tRPAR tSEMI  */
#line 105 "lex.y"
                                {writeASM("PRI",(yyvsp[-2].nb),0,0);}
#line 1383 "lex.tab.c"
    break;

  case 53: /* Return: tRETURN Expression tSEMI  */
#line 108 "lex.y"
                           {writeASM("COP", getSymbol("!VAL"),getTopStack(),0);deleteTopStack();writeASM("RET",0,0,0);}
#line 1389 "lex.tab.c"
    break;

  case 54: /* Expression: tID  */
#line 112 "lex.y"
      {addTmpSymbol(); writeASM("COP", getTopStack() ,getSymbol((yyvsp[0].str)), 0);}
#line 1395 "lex.tab.c"
    break;

  case 55: /* Expression: tNB  */
#line 113 "lex.y"
        {addTmpSymbol(); writeASM("AFC",getTopStack(),(yyvsp[0].nb),0);}
#line 1401 "lex.tab.c"
    break;

  case 56: /* $@14: %empty  */
#line 114 "lex.y"
       {addReturnAddress("!");addReturnValue("!");}
#line 1407 "lex.tab.c"
    break;

  case 57: /* Expression: tID $@14 tLPAR Argument tRPAR  */
#line 114 "lex.y"
                                                                         {int adr=getSymbol("!VAL"); deleteSymbolTmpScope(); deleteTopStack(); deleteTopStack();addTmpSymbol();writeASM("PUSH",getTopStack(),0,0);writeASM("CALL",getFonctionAddress((yyvsp[-4].str)),0,0);writeASM("POP",getTopStack(),0,0);writeASM("COP",getTopStack(),adr,0);}
#line 1413 "lex.tab.c"
    break;

  case 58: /* Expression: Expression tADD Expression  */
#line 115 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("ADD", getTopStack(), getTopStack(), top); }
#line 1419 "lex.tab.c"
    break;

  case 59: /* Expression: Expression tSUB Expression  */
#line 116 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("SUB", getTopStack(), getTopStack(), top); }
#line 1425 "lex.tab.c"
    break;

  case 60: /* Expression: Expression tMUL Expression  */
#line 117 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("MUL", getTopStack(), getTopStack(), top); }
#line 1431 "lex.tab.c"
    break;

  case 61: /* Expression: Expression tDIV Expression  */
#line 118 "lex.y"
                              { int top = getTopStack(); deleteTopStack();writeASM("DIV", getTopStack(), getTopStack(), top); }
#line 1437 "lex.tab.c"
    break;

  case 69: /* $@15: %empty  */
#line 135 "lex.y"
                {int var1=getTopStack(); int var2=getTopStack(); addTmpSymbol(); writeASM("EQU", getTopStack(), var1, var2);}
#line 1443 "lex.tab.c"
    break;

  case 72: /* $@16: %empty  */
#line 137 "lex.y"
                 {int var1=getTopStack(); int var2=getTopStack(); addTmpSymbol(); writeASM("INF", getTopStack(), var1, var2);}
#line 1449 "lex.tab.c"
    break;

  case 74: /* $@17: %empty  */
#line 138 "lex.y"
                 {int var1=getTopStack(); int var2=getTopStack(); addTmpSymbol(); writeASM("SUP", getTopStack(), var1, var2);}
#line 1455 "lex.tab.c"
    break;

  case 83: /* IDNB: tID  */
#line 149 "lex.y"
      {addTmpSymbol();writeASM("COP", getTopStack(), getSymbol((yyvsp[0].str)), 0);}
#line 1461 "lex.tab.c"
    break;

  case 84: /* IDNB: tNB  */
#line 150 "lex.y"
       {addTmpSymbol();writeASM("AFC", getTopStack(), (yyvsp[0].nb),0);}
#line 1467 "lex.tab.c"
    break;


#line 1471 "lex.tab.c"

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

#line 159 "lex.y"


void yyerror(const char *s) { fprintf(stderr, "%s\n", s); exit(1);}

int main(void) {
  yydebug = 1;
  printf("Gramatical analysis\n"); // yydebug=1;
  writeASM("JMP",-1,0,0);
  yyparse();
  return 0;
}
