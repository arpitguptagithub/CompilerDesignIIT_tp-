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
#line 1 "prob1.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char*);
int yylex();
extern FILE* yyin;

char str[1000];
char* genLabel();
char* genBlockLabel();
char* genBeginLabel();
int t = 0;
int l = 0;
int w = 0;

#line 89 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    ADD = 260,                     /* ADD  */
    SUB = 261,                     /* SUB  */
    MUL = 262,                     /* MUL  */
    DIV = 263,                     /* DIV  */
    EQ = 264,                      /* EQ  */
    LT = 265,                      /* LT  */
    LTE = 266,                     /* LTE  */
    GT = 267,                      /* GT  */
    GTE = 268,                     /* GTE  */
    NOT = 269,                     /* NOT  */
    AND = 270,                     /* AND  */
    OR = 271,                      /* OR  */
    PADD = 272,                    /* PADD  */
    PSUB = 273,                    /* PSUB  */
    LPAREN = 274,                  /* LPAREN  */
    RPAREN = 275,                  /* RPAREN  */
    LCURL = 276,                   /* LCURL  */
    RCURL = 277,                   /* RCURL  */
    SEMICOLON = 278,               /* SEMICOLON  */
    WHILE = 279,                   /* WHILE  */
    NUMBER = 280,                  /* NUMBER  */
    IDENTIFIER = 281               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define ADD 260
#define SUB 261
#define MUL 262
#define DIV 263
#define EQ 264
#define LT 265
#define LTE 266
#define GT 267
#define GTE 268
#define NOT 269
#define AND 270
#define OR 271
#define PADD 272
#define PSUB 273
#define LPAREN 274
#define RPAREN 275
#define LCURL 276
#define RCURL 277
#define SEMICOLON 278
#define WHILE 279
#define NUMBER 280
#define IDENTIFIER 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "prob1.y"

    char lexeme[100];
    char addr[200];
    char* lab;
    int dval;

#line 201 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_ADD = 5,                        /* ADD  */
  YYSYMBOL_SUB = 6,                        /* SUB  */
  YYSYMBOL_MUL = 7,                        /* MUL  */
  YYSYMBOL_DIV = 8,                        /* DIV  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_LT = 10,                        /* LT  */
  YYSYMBOL_LTE = 11,                       /* LTE  */
  YYSYMBOL_GT = 12,                        /* GT  */
  YYSYMBOL_GTE = 13,                       /* GTE  */
  YYSYMBOL_NOT = 14,                       /* NOT  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_PADD = 17,                      /* PADD  */
  YYSYMBOL_PSUB = 18,                      /* PSUB  */
  YYSYMBOL_LPAREN = 19,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 20,                    /* RPAREN  */
  YYSYMBOL_LCURL = 21,                     /* LCURL  */
  YYSYMBOL_RCURL = 22,                     /* RCURL  */
  YYSYMBOL_SEMICOLON = 23,                 /* SEMICOLON  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_NUMBER = 25,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 27,                  /* $accept  */
  YYSYMBOL_StatementList = 28,             /* StatementList  */
  YYSYMBOL_29_1 = 29,                      /* $@1  */
  YYSYMBOL_30_2 = 30,                      /* $@2  */
  YYSYMBOL_31_3 = 31,                      /* $@3  */
  YYSYMBOL_IfStatement = 32,               /* IfStatement  */
  YYSYMBOL_33_4 = 33,                      /* $@4  */
  YYSYMBOL_34_5 = 34,                      /* $@5  */
  YYSYMBOL_dummyLabels = 35,               /* dummyLabels  */
  YYSYMBOL_begin = 36,                     /* begin  */
  YYSYMBOL_Statement = 37,                 /* Statement  */
  YYSYMBOL_ComRelExp = 38,                 /* ComRelExp  */
  YYSYMBOL_Relexp = 39,                    /* Relexp  */
  YYSYMBOL_Term = 40,                      /* Term  */
  YYSYMBOL_Factor = 41,                    /* Factor  */
  YYSYMBOL_SIGNVal = 42,                   /* SIGNVal  */
  YYSYMBOL_Val = 43                        /* Val  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   116

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  88

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
      25,    26
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    56,    57,    58,    58,    57,    59,    63,
      64,    63,    73,    76,    79,    85,    89,    98,   107,   111,
     120,   129,   138,   147,   156,   165,   175,   183,   187,   196,
     205,   209,   219,   228,   232,   236,   240,   244,   247,   253,
     261,   269,   277,   285
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "ADD",
  "SUB", "MUL", "DIV", "EQ", "LT", "LTE", "GT", "GTE", "NOT", "AND", "OR",
  "PADD", "PSUB", "LPAREN", "RPAREN", "LCURL", "RCURL", "SEMICOLON",
  "WHILE", "NUMBER", "IDENTIFIER", "$accept", "StatementList", "$@1",
  "$@2", "$@3", "IfStatement", "$@4", "$@5", "dummyLabels", "begin",
  "Statement", "ComRelExp", "Relexp", "Term", "Factor", "SIGNVal", "Val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-25)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -2,   -14,    38,    38,   -18,    -8,    24,    14,   -25,    67,
      40,    -2,    21,    30,    51,   -25,   -25,    20,    61,   -25,
     -25,   -25,   -25,     1,    20,    64,   -25,   -25,   -25,   -25,
      -2,    24,    24,    24,    24,    20,    20,    -6,   -25,    94,
     -25,    57,   -25,   -25,    51,    51,   -25,   -25,   -25,    42,
      82,    20,    20,    39,    58,    24,    24,    24,    24,    65,
      59,   -25,   -25,   -25,   -25,    24,    30,    30,    30,    30,
      24,   -25,   -25,    30,    30,   -25,    -2,   -25,    79,    -2,
     -25,    91,    -2,   -25,   -25,   -25,    -2,   -25
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     0,     0,     0,     0,     0,    38,    37,
       0,     8,     0,    15,    30,    33,    36,    27,    37,    34,
      35,    39,    40,     0,    27,     0,    41,    42,     1,     3,
       8,     0,     0,     0,     0,    27,    27,     0,    18,     0,
      43,     0,    14,     2,    28,    29,    31,    32,    26,     0,
       0,    27,    27,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    16,    17,     9,     0,    19,    20,    21,    22,
       0,    13,    12,    23,    24,    12,     8,     4,     0,     8,
      10,     0,     8,     5,    11,     6,     8,     7
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -11,   -25,   -25,   -25,   -25,   -25,   -25,    11,   -25,
      89,    92,   -24,    -4,    66,    76,   109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    79,    85,    86,    11,    72,    82,    76,    75,
      12,    37,    38,    13,    14,    15,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      29,     1,    23,     2,     3,    17,    31,    32,    21,    51,
      52,    48,    49,    39,    53,     4,     5,     6,    22,    43,
      39,    40,     7,     8,     9,     2,     3,    62,    63,     2,
       3,    39,    50,    24,    35,    31,    32,     4,     5,    36,
      28,     4,     5,     6,    30,     8,    18,    39,    39,     8,
      18,    66,    67,    68,    69,     4,     5,     6,    33,    34,
      64,    73,    61,     8,    18,    78,    74,    65,    81,     2,
       3,    84,    51,    52,    70,    87,    25,    60,    26,    27,
      71,     4,     5,     6,    26,    27,    77,    31,    32,     8,
       9,    54,    55,    56,    57,    58,    59,    44,    45,    31,
      32,    80,    40,    54,    55,    56,    57,    58,    59,    46,
      47,    19,    20,    83,    42,     0,    41
};

static const yytype_int8 yycheck[] =
{
      11,     3,     6,     5,     6,    19,     5,     6,    26,    15,
      16,    35,    36,    17,    20,    17,    18,    19,    26,    30,
      24,    20,    24,    25,    26,     5,     6,    51,    52,     5,
       6,    35,    36,    19,    14,     5,     6,    17,    18,    19,
       0,    17,    18,    19,    23,    25,    26,    51,    52,    25,
      26,    55,    56,    57,    58,    17,    18,    19,     7,     8,
      21,    65,    20,    25,    26,    76,    70,     9,    79,     5,
       6,    82,    15,    16,     9,    86,     9,    20,    17,    18,
      21,    17,    18,    19,    17,    18,    75,     5,     6,    25,
      26,     9,    10,    11,    12,    13,    14,    31,    32,     5,
       6,    22,    20,     9,    10,    11,    12,    13,    14,    33,
      34,     2,     3,    22,    25,    -1,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,    17,    18,    19,    24,    25,    26,
      28,    32,    37,    40,    41,    42,    43,    19,    26,    43,
      43,    26,    26,    40,    19,     9,    17,    18,     0,    28,
      23,     5,     6,     7,     8,    14,    19,    38,    39,    40,
      20,    38,    37,    28,    41,    41,    42,    42,    39,    39,
      40,    15,    16,    20,     9,    10,    11,    12,    13,    14,
      20,    20,    39,    39,    21,     9,    40,    40,    40,    40,
       9,    21,    33,    40,    40,    36,    35,    35,    28,    29,
      22,    28,    34,    22,    28,    30,    31,    28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    27,    28,    28,    29,    30,    31,    28,    28,    33,
      34,    32,    35,    36,    37,    37,    38,    38,    38,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    40,    40,
      40,    41,    41,    41,    42,    42,    42,    43,    43,    43,
      43,    43,    43,    43
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     0,     0,     0,    13,     0,     0,
       0,    11,     0,     0,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     4,     4,     3,     2,     0,     3,     3,
       1,     3,     3,     1,     2,     2,     1,     1,     1,     2,
       2,     2,     2,     3
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
  case 2: /* StatementList: Statement SEMICOLON StatementList  */
#line 55 "prob1.y"
                                      { printf("\n"); }
#line 1276 "y.tab.c"
    break;

  case 3: /* StatementList: IfStatement StatementList  */
#line 56 "prob1.y"
                                { printf("\n"); }
#line 1282 "y.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 57 "prob1.y"
                                                            { printf("\nif %s goto %s:\ngoto %s:", (yyvsp[-4].addr), (yyvsp[-1].lab), (yyvsp[0].lab)); }
#line 1288 "y.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 58 "prob1.y"
                          { printf("\ngoto %s:", (yyvsp[-4].lab)); }
#line 1294 "y.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 58 "prob1.y"
                                                        { printf("\n%s:", (yyvsp[-4].lab)); }
#line 1300 "y.tab.c"
    break;

  case 7: /* StatementList: WHILE LPAREN ComRelExp RPAREN LCURL begin dummyLabels $@1 StatementList RCURL $@2 $@3 StatementList  */
#line 58 "prob1.y"
                                                                                               { printf("\n"); }
#line 1306 "y.tab.c"
    break;

  case 8: /* StatementList: %empty  */
#line 59 "prob1.y"
      {}
#line 1312 "y.tab.c"
    break;

  case 9: /* $@4: %empty  */
#line 63 "prob1.y"
                                     { printf("\nif %s goto ", (yyvsp[-2].addr)); }
#line 1318 "y.tab.c"
    break;

  case 10: /* $@5: %empty  */
#line 64 "prob1.y"
                                    { printf("\n%s:", genBlockLabel()); }
#line 1324 "y.tab.c"
    break;

  case 11: /* IfStatement: IF LPAREN ComRelExp RPAREN LCURL $@4 dummyLabels StatementList RCURL $@5 StatementList  */
#line 64 "prob1.y"
                                                                                        { printf("\n"); }
#line 1330 "y.tab.c"
    break;

  case 12: /* dummyLabels: %empty  */
#line 73 "prob1.y"
    { (yyval.lab) = (char*)malloc(100 * sizeof(char)); (yyval.lab) = genBlockLabel(); }
#line 1336 "y.tab.c"
    break;

  case 13: /* begin: %empty  */
#line 76 "prob1.y"
    { (yyval.lab) = (char*)malloc(100 * sizeof(char)); (yyval.lab) = genBeginLabel(); }
#line 1342 "y.tab.c"
    break;

  case 14: /* Statement: IDENTIFIER EQ Statement  */
#line 79 "prob1.y"
                            {
        strcpy((yyval.addr), (yyvsp[-2].addr));
        strcat((yyval.addr), "=");
        strcat((yyval.addr), (yyvsp[0].addr));
        printf("\n%s", (yyval.addr));
    }
#line 1353 "y.tab.c"
    break;

  case 15: /* Statement: Term  */
#line 85 "prob1.y"
           { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1359 "y.tab.c"
    break;

  case 16: /* ComRelExp: ComRelExp AND Relexp  */
#line 89 "prob1.y"
                         {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "&&");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1373 "y.tab.c"
    break;

  case 17: /* ComRelExp: ComRelExp OR Relexp  */
#line 98 "prob1.y"
                          {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "||");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1387 "y.tab.c"
    break;

  case 18: /* ComRelExp: Relexp  */
#line 107 "prob1.y"
             { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1393 "y.tab.c"
    break;

  case 19: /* Relexp: Term LT Term  */
#line 111 "prob1.y"
                 {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "<");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1407 "y.tab.c"
    break;

  case 20: /* Relexp: Term LTE Term  */
#line 120 "prob1.y"
                    {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "<=");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1421 "y.tab.c"
    break;

  case 21: /* Relexp: Term GT Term  */
#line 129 "prob1.y"
                   {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, ">");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1435 "y.tab.c"
    break;

  case 22: /* Relexp: Term GTE Term  */
#line 138 "prob1.y"
                    {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, ">=");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1449 "y.tab.c"
    break;

  case 23: /* Relexp: Term EQ EQ Term  */
#line 147 "prob1.y"
                      {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-3].addr));
        strcat(str, "==");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1463 "y.tab.c"
    break;

  case 24: /* Relexp: Term NOT EQ Term  */
#line 156 "prob1.y"
                       {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-3].addr));
        strcat(str, "!=");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1477 "y.tab.c"
    break;

  case 25: /* Relexp: LPAREN Relexp RPAREN  */
#line 165 "prob1.y"
                           {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, "!");
        strcat(str, "(");
        strcat(str, (yyvsp[-1].addr));
        strcat(str, ")");
        printf("\n%s", str);
    }
#line 1492 "y.tab.c"
    break;

  case 26: /* Relexp: NOT Relexp  */
#line 175 "prob1.y"
                 {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, "!");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1505 "y.tab.c"
    break;

  case 27: /* Relexp: %empty  */
#line 183 "prob1.y"
      {}
#line 1511 "y.tab.c"
    break;

  case 28: /* Term: Term ADD Factor  */
#line 187 "prob1.y"
                    {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "+");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1525 "y.tab.c"
    break;

  case 29: /* Term: Term SUB Factor  */
#line 196 "prob1.y"
                      {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "-");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1539 "y.tab.c"
    break;

  case 30: /* Term: Factor  */
#line 205 "prob1.y"
             { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1545 "y.tab.c"
    break;

  case 31: /* Factor: Factor MUL SIGNVal  */
#line 209 "prob1.y"
                       {
        char* g = genLabel();
        strcpy((yyval.addr), g);
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "*");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1560 "y.tab.c"
    break;

  case 32: /* Factor: Factor DIV SIGNVal  */
#line 219 "prob1.y"
                         {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "/");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1574 "y.tab.c"
    break;

  case 33: /* Factor: SIGNVal  */
#line 228 "prob1.y"
              { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1580 "y.tab.c"
    break;

  case 34: /* SIGNVal: ADD Val  */
#line 232 "prob1.y"
            {
        strcpy((yyval.addr), "+");
        strcat((yyval.addr), (yyvsp[0].addr));
    }
#line 1589 "y.tab.c"
    break;

  case 35: /* SIGNVal: SUB Val  */
#line 236 "prob1.y"
              {
        strcpy((yyval.addr), "-");
        strcat((yyval.addr), (yyvsp[0].addr));
    }
#line 1598 "y.tab.c"
    break;

  case 36: /* SIGNVal: Val  */
#line 240 "prob1.y"
          { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1604 "y.tab.c"
    break;

  case 37: /* Val: IDENTIFIER  */
#line 244 "prob1.y"
               {
        strcpy((yyval.addr), (yyvsp[0].addr));
    }
#line 1612 "y.tab.c"
    break;

  case 38: /* Val: NUMBER  */
#line 247 "prob1.y"
             {
        char* buf = (char*)malloc(sizeof(char) * 1000);
        int dummyLabels = (yyvsp[0].dval);
        sprintf(buf, "%d", dummyLabels);
        strcpy((yyval.addr), buf);
    }
#line 1623 "y.tab.c"
    break;

  case 39: /* Val: PADD IDENTIFIER  */
#line 253 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[0].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[0].addr));
        strcat(str, "+1");
        printf("\n%s", str);
    }
#line 1636 "y.tab.c"
    break;

  case 40: /* Val: PSUB IDENTIFIER  */
#line 261 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[0].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[0].addr));
        strcat(str, "-1");
        printf("\n%s", str);
    }
#line 1649 "y.tab.c"
    break;

  case 41: /* Val: IDENTIFIER PADD  */
#line 269 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[-1].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-1].addr));
        strcat(str, "+1");
        printf("\n%s", str);
    }
#line 1662 "y.tab.c"
    break;

  case 42: /* Val: IDENTIFIER PSUB  */
#line 277 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[-1].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-1].addr));
        strcat(str, "-1");
        printf("\n%s", str);
    }
#line 1675 "y.tab.c"
    break;

  case 43: /* Val: LPAREN Term RPAREN  */
#line 285 "prob1.y"
                         { strcpy((yyval.addr), (yyvsp[-1].addr)); }
#line 1681 "y.tab.c"
    break;


#line 1685 "y.tab.c"

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

#line 288 "prob1.y"


void yyerror(char* s) {
    while (yylex() != SEMICOLON && yylex() != EOF);
    printf("Rejected EXPR\n");
    yyparse();
}

char* genLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "t");
    sprintf(label, "%d", t);
    strcat(s, label);
    t++;
    return s;
}

char* genBlockLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "L");
    sprintf(label, "%d", l);
    strcat(s, label);
    l++;
    return s;
}

char* genBeginLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "BEGIN");
    sprintf(label, "%d", l);
    strcat(s, label);
    w++;
    return s;
}

int main(int argc, char* argv[]) {
    if (argc > 1) {
        FILE* fp = fopen(argv[1], "r");
        if (fp) yyin = fp;
    }
    yyparse();
    return 0;
}
