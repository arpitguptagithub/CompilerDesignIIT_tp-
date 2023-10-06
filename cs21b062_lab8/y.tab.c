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
#include <string.h>
int yylex();
int yyerror(char *);
int eflag=0;
extern FILE * yyin;


typedef struct Snode{
    struct Snode *left , *right;
    char token[20];
    char lexeme[20];
    int ival;
}Syn_node;


			  char *	varL =  "";
			  char *    varR = "";
			  char * 	op = "";
			  char * label ,label1; 
			  char* Temp ;

int LabelCount = 0 ;
int TempCount = 0; 
char *condt = "";
char *con = "";
int ifSelect = 0 ; 
int preselect = 0;

void postorder(Syn_node *root);
void inorder(Syn_node *root);
void preorder(Syn_node *root);
void printNode(Syn_node *root);
//void GOTO( ... );
char* LabelGen( int LC );
char* TempGen( int TC );
char* Slabel , Stemp ; 
char buffer[12]; // Assuming a maximum of 11 digits for LC (including null terminator)



#line 114 "y.tab.c"

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
    ADD = 258,                     /* ADD  */
    SUB = 259,                     /* SUB  */
    MUL = 260,                     /* MUL  */
    DIV = 261,                     /* DIV  */
    INC = 262,                     /* INC  */
    DEC = 263,                     /* DEC  */
    AND = 264,                     /* AND  */
    OR = 265,                      /* OR  */
    LT = 266,                      /* LT  */
    GT = 267,                      /* GT  */
    LTE = 268,                     /* LTE  */
    GTE = 269,                     /* GTE  */
    NEQ = 270,                     /* NEQ  */
    EQ = 271,                      /* EQ  */
    ASSIGN = 272,                  /* ASSIGN  */
    LPAREN = 273,                  /* LPAREN  */
    RPAREN = 274,                  /* RPAREN  */
    LBRACE = 275,                  /* LBRACE  */
    RBRACE = 276,                  /* RBRACE  */
    SEMICOLON = 277,               /* SEMICOLON  */
    IF = 278,                      /* IF  */
    ELSE = 279,                    /* ELSE  */
    INTEGER = 280,                 /* INTEGER  */
    IDENTIFIER = 281               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define INC 262
#define DEC 263
#define AND 264
#define OR 265
#define LT 266
#define GT 267
#define LTE 268
#define GTE 269
#define NEQ 270
#define EQ 271
#define ASSIGN 272
#define LPAREN 273
#define RPAREN 274
#define LBRACE 275
#define RBRACE 276
#define SEMICOLON 277
#define IF 278
#define ELSE 279
#define INTEGER 280
#define IDENTIFIER 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "prob1.y"

    int ival;
    char lexeme[20];
    struct Snode * node;

#line 225 "y.tab.c"

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
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_SUB = 4,                        /* SUB  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_INC = 7,                        /* INC  */
  YYSYMBOL_DEC = 8,                        /* DEC  */
  YYSYMBOL_AND = 9,                        /* AND  */
  YYSYMBOL_OR = 10,                        /* OR  */
  YYSYMBOL_LT = 11,                        /* LT  */
  YYSYMBOL_GT = 12,                        /* GT  */
  YYSYMBOL_LTE = 13,                       /* LTE  */
  YYSYMBOL_GTE = 14,                       /* GTE  */
  YYSYMBOL_NEQ = 15,                       /* NEQ  */
  YYSYMBOL_EQ = 16,                        /* EQ  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_LPAREN = 18,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 19,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 20,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_SEMICOLON = 22,                 /* SEMICOLON  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_IDENTIFIER = 26,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 27,                  /* $accept  */
  YYSYMBOL_S = 28,                         /* S  */
  YYSYMBOL_29_1 = 29,                      /* $@1  */
  YYSYMBOL_30_2 = 30,                      /* $@2  */
  YYSYMBOL_31_3 = 31,                      /* $@3  */
  YYSYMBOL_SL = 32,                        /* SL  */
  YYSYMBOL_IFsl = 33,                      /* IFsl  */
  YYSYMBOL_IFstmt = 34,                    /* IFstmt  */
  YYSYMBOL_CONDTBLOCK = 35,                /* CONDTBLOCK  */
  YYSYMBOL_STBLOCK = 36,                   /* STBLOCK  */
  YYSYMBOL_IFELSEstmt = 37,                /* IFELSEstmt  */
  YYSYMBOL_ELSEstmt = 38,                  /* ELSEstmt  */
  YYSYMBOL_CONDT = 39,                     /* CONDT  */
  YYSYMBOL_ANDEXP = 40,                    /* ANDEXP  */
  YYSYMBOL_OREXP = 41,                     /* OREXP  */
  YYSYMBOL_RELEXP = 42,                    /* RELEXP  */
  YYSYMBOL_RELOP = 43,                     /* RELOP  */
  YYSYMBOL_VARID = 44,                     /* VARID  */
  YYSYMBOL_ST = 45,                        /* ST  */
  YYSYMBOL_VAR = 46,                       /* VAR  */
  YYSYMBOL_ADDEXP = 47,                    /* ADDEXP  */
  YYSYMBOL_MULEXP = 48,                    /* MULEXP  */
  YYSYMBOL_UEXP = 49,                      /* UEXP  */
  YYSYMBOL_POEXP = 50,                     /* POEXP  */
  YYSYMBOL_PREXP = 51,                     /* PREXP  */
  YYSYMBOL_CONST = 52                      /* CONST  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   79

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

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
       0,    58,    58,    58,    58,    58,    58,    58,    58,    60,
      63,    63,    65,    81,    84,    86,    88,    90,    90,    90,
      92,    94,    96,   108,   118,   128,   138,   148,   158,   169,
     169,   175,   205,   233,   265,   275,   279,   282,   293,   305,
     308,   319,   331,   334,   345,   356,   359,   371,   374,   385,
     397,   400,   410,   414
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
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "SUB", "MUL",
  "DIV", "INC", "DEC", "AND", "OR", "LT", "GT", "LTE", "GTE", "NEQ", "EQ",
  "ASSIGN", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "SEMICOLON", "IF",
  "ELSE", "INTEGER", "IDENTIFIER", "$accept", "S", "$@1", "$@2", "$@3",
  "SL", "IFsl", "IFstmt", "CONDTBLOCK", "STBLOCK", "IFELSEstmt",
  "ELSEstmt", "CONDT", "ANDEXP", "OREXP", "RELEXP", "RELOP", "VARID", "ST",
  "VAR", "ADDEXP", "MULEXP", "UEXP", "POEXP", "PREXP", "CONST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,   -37,    35,    -7,   -37,    22,   -37,   -37,    -6,   -37,
      34,     0,     5,    39,    35,    53,   -37,     5,     5,    -7,
     -37,   -37,   -37,   -37,    44,   -37,   -37,    40,   -37,   -37,
       6,    52,    18,   -37,   -37,   -37,    53,    44,    44,    44,
      44,    44,   -37,   -37,    17,    19,   -37,    47,   -37,   -37,
     -37,    35,    35,   -37,   -37,   -37,   -37,   -37,   -37,    12,
      54,   -37,   -37,   -37,   -37,   -37,    10,    44,    44,    44,
      44,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
      19,    19,   -37,   -37
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     6,     0,     0,    34,     0,     4,     2,    10,    11,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
      15,     9,    32,    33,     0,     7,    35,     0,    18,    19,
      17,     0,     0,    12,     5,     3,     0,     0,     0,     0,
       0,     0,    53,    51,    31,    36,    39,    42,    47,    50,
      13,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,    16,    45,    46,    43,    44,     0,     0,     0,     0,
       0,    48,    49,    20,    21,    22,    29,    30,    14,    52,
      37,    38,    40,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -37,    28,   -37,   -37,   -37,   -37,   -37,   -37,    55,    41,
     -37,   -37,    -9,   -37,   -37,   -37,   -37,   -37,   -37,    -2,
      37,     4,   -36,   -37,   -37,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,    18,    17,    12,     6,     7,     8,    15,    33,
       9,    20,    27,    28,    29,    30,    59,    75,    10,    11,
      44,    45,    46,    47,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      13,    62,    63,    64,    65,    -8,     1,    22,    23,    -8,
       1,    14,    31,    67,    68,    51,    52,    24,    19,     1,
      67,    68,    16,     2,    69,    70,    -8,     2,     3,    79,
       2,     4,     3,    82,    83,     4,     2,    42,     4,    -8,
      25,     3,    73,    74,     4,    34,    35,    37,    38,    31,
      31,    39,    40,     2,    71,    72,    21,    76,    26,    50,
      60,     4,    41,    53,    54,    55,    56,    57,    58,    42,
      43,    80,    81,    32,    36,    78,     0,    61,    66,    77
};

static const yytype_int8 yycheck[] =
{
       2,    37,    38,    39,    40,     0,     1,     7,     8,     0,
       1,    18,    14,     3,     4,     9,    10,    17,    24,     1,
       3,     4,     0,    18,     5,     6,    21,    18,    23,    19,
      18,    26,    23,    69,    70,    26,    18,    25,    26,    21,
      12,    23,    51,    52,    26,    17,    18,     3,     4,    51,
      52,     7,     8,    18,     7,     8,    22,    59,    19,    19,
      32,    26,    18,    11,    12,    13,    14,    15,    16,    25,
      26,    67,    68,    20,    19,    21,    -1,    36,    41,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    18,    23,    26,    28,    32,    33,    34,    37,
      45,    46,    31,    46,    18,    35,     0,    30,    29,    24,
      38,    22,     7,     8,    17,    28,    19,    39,    40,    41,
      42,    46,    20,    36,    28,    28,    35,     3,     4,     7,
       8,    18,    25,    26,    47,    48,    49,    50,    51,    52,
      19,     9,    10,    11,    12,    13,    14,    15,    16,    43,
      28,    36,    49,    49,    49,    49,    47,     3,     4,     5,
       6,     7,     8,    39,    39,    44,    46,    52,    21,    19,
      48,    48,    49,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    27,    29,    28,    30,    28,    31,    28,    28,    32,
      33,    33,    34,    35,    36,    37,    38,    39,    39,    39,
      40,    41,    42,    43,    43,    43,    43,    43,    43,    44,
      44,    45,    45,    45,    46,    46,    47,    47,    47,    48,
      48,    48,    49,    49,    49,    49,    49,    50,    50,    50,
      51,    51,    51,    52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     3,     0,     3,     0,     2,
       1,     1,     3,     3,     3,     2,     3,     1,     1,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     1,     3,     1,     3,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     3,     1
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
#line 58 "prob1.y"
         {printf("\nAccepted EXPR\n");}
#line 1307 "y.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 58 "prob1.y"
                                               {printf("\nAccepted EXPR\n");}
#line 1313 "y.tab.c"
    break;

  case 6: /* $@3: %empty  */
#line 58 "prob1.y"
                                                                                        {printf ("REJECTED \n");}
#line 1319 "y.tab.c"
    break;

  case 8: /* S: %empty  */
#line 58 "prob1.y"
                                                                                                                      {printf("\n\nCompleted..!\n");}
#line 1325 "y.tab.c"
    break;

  case 10: /* IFsl: IFstmt  */
#line 63 "prob1.y"
              { ifSelect = 0 ; }
#line 1331 "y.tab.c"
    break;

  case 11: /* IFsl: IFELSEstmt  */
#line 63 "prob1.y"
                                              { ifSelect = 1; }
#line 1337 "y.tab.c"
    break;

  case 12: /* IFstmt: IF CONDTBLOCK STBLOCK  */
#line 65 "prob1.y"
                                {

	 label = LabelGen(LabelCount);
	label1 = LabelGen(LabelCount + 1);


	LabelCount ++;
	printf("if %s goto %s", condt, label);
	
	printf("goto %s", label1);

	free(label);
	free(label1);
	
}
#line 1357 "y.tab.c"
    break;

  case 22: /* RELEXP: VAR RELOP VARID  */
#line 98 "prob1.y"
           {
		  (yyval.node) = malloc(sizeof(Syn_node));
				if ((yyval.node) == NULL) {
					yyerror("Error");
				}
			con = strcat((yyvsp[-2].node)->lexeme , (yyvsp[-1].node)->lexeme);
		  condt = strcat(con , (yyvsp[0].node)->lexeme);
          strcpy((yyval.node)->lexeme ,condt);
	   }
#line 1371 "y.tab.c"
    break;

  case 23: /* RELOP: LT  */
#line 109 "prob1.y"
{
    (yyval.node) = malloc(sizeof(Syn_node));
    if ((yyval.node) == NULL) {
        yyerror("Error");
    }
    strcpy((yyval.node)->token, "LT");
    strcpy((yyval.node)->lexeme, "<");
}
#line 1384 "y.tab.c"
    break;

  case 24: /* RELOP: GT  */
#line 119 "prob1.y"
{
    (yyval.node) = malloc(sizeof(Syn_node));
    if ((yyval.node) == NULL) {
        yyerror("Error");
    }
    strcpy((yyval.node)->token, "GT");
    strcpy((yyval.node)->lexeme, ">");
}
#line 1397 "y.tab.c"
    break;

  case 25: /* RELOP: LTE  */
#line 129 "prob1.y"
{
    (yyval.node) = malloc(sizeof(Syn_node));
    if ((yyval.node) == NULL) {
        yyerror("Error");
    }
    strcpy((yyval.node)->token, "LTE");
    strcpy((yyval.node)->lexeme, "<=");
}
#line 1410 "y.tab.c"
    break;

  case 26: /* RELOP: GTE  */
#line 139 "prob1.y"
{
    (yyval.node) = malloc(sizeof(Syn_node));
    if ((yyval.node) == NULL) {
        yyerror("Error");
    }
    strcpy((yyval.node)->token, "GTE");
    strcpy((yyval.node)->lexeme, ">=");
}
#line 1423 "y.tab.c"
    break;

  case 27: /* RELOP: NEQ  */
#line 149 "prob1.y"
{
    (yyval.node) = malloc(sizeof(Syn_node));
    if ((yyval.node) == NULL) {
        yyerror("Error");
    }
    strcpy((yyval.node)->token, "NEQ");
    strcpy((yyval.node)->lexeme, "!=");
}
#line 1436 "y.tab.c"
    break;

  case 28: /* RELOP: EQ  */
#line 159 "prob1.y"
{
    (yyval.node) = malloc(sizeof(Syn_node));
    if ((yyval.node) == NULL) {
        yyerror("Error");
    }
    strcpy((yyval.node)->token, "EQ");
    strcpy((yyval.node)->lexeme, "==");
}
#line 1449 "y.tab.c"
    break;

  case 31: /* ST: VAR ASSIGN ADDEXP  */
#line 175 "prob1.y"
                                   {
				(yyval.node) = malloc(sizeof(Syn_node));
				if ((yyval.node) == NULL) {
					yyerror("Error");
				}

				 Temp = TempGen(TempCount);
				TempCount++;
			  	label = LabelGen(LabelCount);
				printf("%s : \t", label );


			  	varL = (yyvsp[-2].node);
			    varR = (yyvsp[0].node);
			   	op = "=";

				threeExp( Temp , varL , varR  , op ); 

				if ( ifSelect == 1)
				{
					ifSelect = 0; 
					printf ( "goto %s" ,label);
				}

			
				free(label);
				free(Temp);
				
			}
#line 1483 "y.tab.c"
    break;

  case 32: /* ST: VAR INC  */
#line 205 "prob1.y"
                                   {
				(yyval.node) = malloc(sizeof(Syn_node));
				if ((yyval.node) == NULL) {
					yyerror("Error");
				}

				 Temp = TempGen(TempCount);
				TempCount++;
			  	label = LabelGen(LabelCount);
				printf("%s : \t", label );

			  varL = (yyvsp[-1].node);
			  varR =  " ";
		    	op =  "+";
			  
			  threeExp( Temp , varL , varR  , op ); 

				if ( ifSelect == 1)
				{
					ifSelect = 0; 
					printf ( "goto %s",  label);
				}
				free(label);
				free(Temp);

				
			}
#line 1515 "y.tab.c"
    break;

  case 33: /* ST: VAR DEC  */
#line 233 "prob1.y"
                                  {
				(yyval.node) = malloc(sizeof(Syn_node));
				if ((yyval.node) == NULL) {
					yyerror("Error");
				}

				Temp = TempGen(TempCount);
				TempCount++;
			  	label = LabelGen(LabelCount);
				printf("%s : \t", label );
			

			  varL = (yyvsp[-1].node);
			  varR = "";
			  op = "-";
			  
			  threeExp( Temp , varL , varR  , op ); 

				if ( ifSelect == 1)
				{
					ifSelect = 0; 
					printf ( "goto %s" , label);
				}
				free(label);
				free(Temp);
			}
#line 1546 "y.tab.c"
    break;

  case 34: /* VAR: IDENTIFIER  */
#line 265 "prob1.y"
                   {
				(yyval.node) = malloc(sizeof(Syn_node));
				if ((yyval.node) == NULL) {
					yyerror("Error");
				}
				strcpy((yyval.node)->lexeme, (yyvsp[0].lexeme));
				strcpy((yyval.node)->token,"ID");
				(yyval.node)->left = NULL;
				(yyval.node)->right = NULL;
			}
#line 1561 "y.tab.c"
    break;

  case 35: /* VAR: LPAREN VAR RPAREN  */
#line 275 "prob1.y"
                                            {
				(yyval.node) = (yyvsp[-1].node);
			}
#line 1569 "y.tab.c"
    break;

  case 36: /* ADDEXP: MULEXP  */
#line 279 "prob1.y"
                       {
							(yyval.node) = (yyvsp[0].node);
						}
#line 1577 "y.tab.c"
    break;

  case 37: /* ADDEXP: ADDEXP ADD MULEXP  */
#line 282 "prob1.y"
                                                                    {
							(yyval.node) = malloc(sizeof(Syn_node));
							if ((yyval.node) == NULL) {
								yyerror("Error");
							}
							(yyval.node)->left = (yyvsp[-2].node);
							(yyval.node)->right = (yyvsp[0].node);
							(yyval.node)->ival = (yyvsp[-2].node)->ival + (yyvsp[0].node)->ival;
							strcpy((yyval.node)->token, "OP");
							strcpy((yyval.node)->lexeme, "+");
						}
#line 1593 "y.tab.c"
    break;

  case 38: /* ADDEXP: ADDEXP SUB MULEXP  */
#line 293 "prob1.y"
                                                                    {
							(yyval.node) = malloc(sizeof(Syn_node));
							if ((yyval.node) == NULL) {
								yyerror("Error");
							}
							(yyval.node)->left = (yyvsp[-2].node);
							(yyval.node)->right = (yyvsp[0].node);
							(yyval.node)->ival = (yyvsp[-2].node)->ival - (yyvsp[0].node)->ival;
							strcpy((yyval.node)->token, "OP");
							strcpy((yyval.node)->lexeme, "-");
						}
#line 1609 "y.tab.c"
    break;

  case 39: /* MULEXP: UEXP  */
#line 305 "prob1.y"
                     {
								(yyval.node) = (yyvsp[0].node);
							}
#line 1617 "y.tab.c"
    break;

  case 40: /* MULEXP: MULEXP MUL UEXP  */
#line 308 "prob1.y"
                                                                          {
								(yyval.node) = malloc(sizeof(Syn_node));
								if ((yyval.node) == NULL) {
									yyerror("Error");
								}
								(yyval.node)->left = (yyvsp[-2].node);
								(yyval.node)->right = (yyvsp[0].node);
								(yyval.node)->ival = (yyvsp[-2].node)->ival * (yyvsp[0].node)->ival;
								strcpy((yyval.node)->token, "OP");
								strcpy((yyval.node)->lexeme, "*");
							}
#line 1633 "y.tab.c"
    break;

  case 41: /* MULEXP: MULEXP DIV UEXP  */
#line 319 "prob1.y"
                                                                          {
								(yyval.node) = malloc(sizeof(Syn_node));
								if ((yyval.node) == NULL) {
									yyerror("Error");
								}
								(yyval.node)->left = (yyvsp[-2].node);
								(yyval.node)->right = (yyvsp[0].node);
								(yyval.node)->ival = (yyvsp[-2].node)->ival / (yyvsp[0].node)->ival;
								strcpy((yyval.node)->token, "OP");
								strcpy((yyval.node)->lexeme, "/");
							}
#line 1649 "y.tab.c"
    break;

  case 42: /* UEXP: POEXP  */
#line 331 "prob1.y"
              {
						(yyval.node) = (yyvsp[0].node);
					}
#line 1657 "y.tab.c"
    break;

  case 43: /* UEXP: INC UEXP  */
#line 334 "prob1.y"
                                                   {
						(yyval.node) = malloc(sizeof(Syn_node));
						if ((yyval.node) == NULL) {
							yyerror("Error");
						}
						(yyval.node)->left = NULL;
						(yyval.node)->right = (yyvsp[0].node);
						(yyval.node)->ival = (yyvsp[0].node)->ival + 1;
						strcpy((yyval.node)->token, "OP");
						strcpy((yyval.node)->lexeme, "++");
					}
#line 1673 "y.tab.c"
    break;

  case 44: /* UEXP: DEC UEXP  */
#line 345 "prob1.y"
                                                   {
						(yyval.node) = malloc(sizeof(Syn_node));
						if ((yyval.node) == NULL) {
							yyerror("Error");
						}
						(yyval.node)->left = NULL;
						(yyval.node)->right = (yyvsp[0].node);
						(yyval.node)->ival = (yyvsp[0].node)->ival - 1;
						strcpy((yyval.node)->token, "OP");
						strcpy((yyval.node)->lexeme, "--");
					}
#line 1689 "y.tab.c"
    break;

  case 45: /* UEXP: ADD UEXP  */
#line 356 "prob1.y"
                                                   {
						(yyval.node) = (yyvsp[0].node);
					}
#line 1697 "y.tab.c"
    break;

  case 46: /* UEXP: SUB UEXP  */
#line 359 "prob1.y"
                                                   {
						(yyval.node) = malloc(sizeof(Syn_node));
						if ((yyval.node) == NULL) {
							yyerror("Error");
						}
						(yyval.node)->left = (yyvsp[0].node);
						(yyval.node)->right = NULL;
						(yyval.node)->ival = -1 * (yyvsp[0].node)->ival;
						strcpy((yyval.node)->token, "OP");
						strcpy((yyval.node)->lexeme, "negative");
					}
#line 1713 "y.tab.c"
    break;

  case 47: /* POEXP: PREXP  */
#line 371 "prob1.y"
                      {
							(yyval.node) = (yyvsp[0].node);
						}
#line 1721 "y.tab.c"
    break;

  case 48: /* POEXP: POEXP INC  */
#line 374 "prob1.y"
                                                            {
							(yyval.node) = malloc(sizeof(Syn_node));
							if ((yyval.node) == NULL) {
								yyerror("Error");
							}
							(yyval.node)->left = (yyvsp[-1].node);
							(yyval.node)->right = NULL;
							(yyval.node)->ival = (yyvsp[-1].node)->ival + 1;
							strcpy((yyval.node)->token, "OP");
							strcpy((yyval.node)->lexeme, "++");
						}
#line 1737 "y.tab.c"
    break;

  case 49: /* POEXP: POEXP DEC  */
#line 385 "prob1.y"
                                                            {
							(yyval.node) = malloc(sizeof(Syn_node));
							if ((yyval.node) == NULL) {
								yyerror("Error");
							}
							(yyval.node)->left = (yyvsp[-1].node);
							(yyval.node)->right = NULL;
							(yyval.node)->ival = (yyvsp[-1].node)->ival - 1;
							strcpy((yyval.node)->token, "OP");
							strcpy((yyval.node)->lexeme, "--");
						}
#line 1753 "y.tab.c"
    break;

  case 50: /* PREXP: CONST  */
#line 397 "prob1.y"
                      {
							(yyval.node) = (yyvsp[0].node);
						}
#line 1761 "y.tab.c"
    break;

  case 51: /* PREXP: IDENTIFIER  */
#line 400 "prob1.y"
                                                           {
							(yyval.node) = malloc(sizeof(Syn_node));
							if ((yyval.node) == NULL) {
								yyerror("Error");
							}
							strcpy((yyval.node)->lexeme, (yyvsp[0].lexeme));
							(yyval.node)->left = NULL;
							(yyval.node)->right = NULL;
							strcpy((yyval.node)->token, "ID");
					}
#line 1776 "y.tab.c"
    break;

  case 52: /* PREXP: LPAREN ADDEXP RPAREN  */
#line 410 "prob1.y"
                                                                     {
							(yyval.node) = (yyvsp[-1].node);
					}
#line 1784 "y.tab.c"
    break;

  case 53: /* CONST: INTEGER  */
#line 414 "prob1.y"
                        {
				(yyval.node) = malloc(sizeof(Syn_node));
				if ((yyval.node) == NULL) {
					yyerror("Error");
				}
				(yyval.node)->ival = (yyvsp[0].ival);
				(yyval.node)->left = NULL;
				(yyval.node)->right = NULL;
				strcpy((yyval.node)->token, "CONST");
				strcpy((yyval.node)->lexeme, "INT");
			}
#line 1800 "y.tab.c"
    break;


#line 1804 "y.tab.c"

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

#line 429 "prob1.y"


int yyerror ( char *s)
{
    return 0;
}

int main( int argc , char* argv[])
{
    if( argc>1)
    {
        FILE *fp = fopen(argv[1],"r");
        if(fp)
         yyin =fp;
    }
    yyparse();
    return 0;
}



char* LabelGen(int LC) {
    snprintf(buffer, sizeof(buffer), "L%d", LC);
    
     Slabel = malloc(strlen(buffer) + 1); // +1 for the null terminator
    if (Slabel == NULL) {
        // Handle memory allocation error
        return NULL;
    }
    
    strcpy(Slabel, buffer);
	free(buffer);
    return Slabel;
}


char* TempGen(int TC) {
     // Assuming a maximum of 11 digits for LC (including null terminator)
    snprintf(buffer, sizeof(buffer), "t%d", TC);
    
    Stemp = malloc(strlen(buffer) + 1); // +1 for the null terminator
    if (Stemp == NULL) {
        // Handle memory allocation error
        return NULL;
    }
    
    strcpy(Stemp, buffer);
	free (buffer);
    return Stemp;
}


void threeExp(char *Temp, char *varL, char *varR, char *op) {
    if (strcmp(op, "--") == 0) {
        printf("%s = %s - 1\n", Temp, varL);
        printf ("%s = %s\n", varL , Temp);
    } 
    else if (strcmp(op, "++") == 0) {
        printf("%s = %s + 1\n", Temp, varL);
        printf ("%s = %s\n", varL , Temp);
    } 
    
    else if (strcmp(op, "=") == 0) {
        printf("%s = %s\n", Temp, varR);
        printf("%s = %s\n", varL, Temp);
    } else {
        // Handle other operations if needed
        printf("Unsupported operation: %s\n", op);
    }
}



