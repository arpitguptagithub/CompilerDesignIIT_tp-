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
char* genOutLabel();
char* genBeginLabel();
char* OutLabel(int Ocount);
void add_symbol(char* name, char* type, int val , char* addr);


int t = 0;
int l = 0;
int w = 0;
int z = 0 ; 
int count = 1;
int stackCount = 1;
// stack for storing the labels
char* stack[1000] ;
int Ocount = 0;


typedef struct {
    char* name;
     char* type;
    union {
        int intval;
        double doubleval;
        float floatval;
        char charval;
    } val;
    char addr[200];
} Symbol;

Symbol* symtab[10000];
void HandleSymTble(char* identifier, char* number, char* symtype, int* symcount, int* addrCount, Symbol** symtab) ;
char* symtype;
void verify(char * id );
int addrCount= 0; 
int symcount = 0;
int symcount_stack[1000];
// char  *store = (char*)malloc(sizeof(char)*1000);

#line 125 "y.tab.c"

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
    COLON = 280,                   /* COLON  */
    SWITCH = 281,                  /* SWITCH  */
    BREAK = 282,                   /* BREAK  */
    CONTINUE = 283,                /* CONTINUE  */
    DEFAULT = 284,                 /* DEFAULT  */
    CASE = 285,                    /* CASE  */
    COMMA = 286,                   /* COMMA  */
    LBRACK = 287,                  /* LBRACK  */
    RBRACK = 288,                  /* RBRACK  */
    INT = 289,                     /* INT  */
    DOUBLE = 290,                  /* DOUBLE  */
    FLOAT = 291,                   /* FLOAT  */
    CHAR = 292,                    /* CHAR  */
    CHARCONST = 293,               /* CHARCONST  */
    NUMBER = 294,                  /* NUMBER  */
    IDENTIFIER = 295               /* IDENTIFIER  */
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
#define COLON 280
#define SWITCH 281
#define BREAK 282
#define CONTINUE 283
#define DEFAULT 284
#define CASE 285
#define COMMA 286
#define LBRACK 287
#define RBRACK 288
#define INT 289
#define DOUBLE 290
#define FLOAT 291
#define CHAR 292
#define CHARCONST 293
#define NUMBER 294
#define IDENTIFIER 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "prob1.y"

    char lexeme[100];
    char addr[200];
    char addCase[200];
    char* lab;
    int dval;
    char cval;

#line 267 "y.tab.c"

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
  YYSYMBOL_COLON = 25,                     /* COLON  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_LBRACK = 32,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 33,                    /* RBRACK  */
  YYSYMBOL_INT = 34,                       /* INT  */
  YYSYMBOL_DOUBLE = 35,                    /* DOUBLE  */
  YYSYMBOL_FLOAT = 36,                     /* FLOAT  */
  YYSYMBOL_CHAR = 37,                      /* CHAR  */
  YYSYMBOL_CHARCONST = 38,                 /* CHARCONST  */
  YYSYMBOL_NUMBER = 39,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 40,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_StatementList = 42,             /* StatementList  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_DeclarationList = 46,           /* DeclarationList  */
  YYSYMBOL_Declaration = 47,               /* Declaration  */
  YYSYMBOL_48_4 = 48,                      /* $@4  */
  YYSYMBOL_type = 49,                      /* type  */
  YYSYMBOL_variablelist = 50,              /* variablelist  */
  YYSYMBOL_Bracket = 51,                   /* Bracket  */
  YYSYMBOL_ConstIden = 52,                 /* ConstIden  */
  YYSYMBOL_SwitchStatement = 53,           /* SwitchStatement  */
  YYSYMBOL_54_5 = 54,                      /* $@5  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_CaseStatements = 56,            /* CaseStatements  */
  YYSYMBOL_57_7 = 57,                      /* $@7  */
  YYSYMBOL_58_8 = 58,                      /* $@8  */
  YYSYMBOL_BreakStmt = 59,                 /* BreakStmt  */
  YYSYMBOL_IfStatement = 60,               /* IfStatement  */
  YYSYMBOL_61_9 = 61,                      /* $@9  */
  YYSYMBOL_62_10 = 62,                     /* $@10  */
  YYSYMBOL_ElseStmt = 63,                  /* ElseStmt  */
  YYSYMBOL_dummyLabels = 64,               /* dummyLabels  */
  YYSYMBOL_begin = 65,                     /* begin  */
  YYSYMBOL_Statement = 66,                 /* Statement  */
  YYSYMBOL_ComRelExp = 67,                 /* ComRelExp  */
  YYSYMBOL_Relexp = 68,                    /* Relexp  */
  YYSYMBOL_Term = 69,                      /* Term  */
  YYSYMBOL_Factor = 70,                    /* Factor  */
  YYSYMBOL_SIGNVal = 71,                   /* SIGNVal  */
  YYSYMBOL_CaseVal = 72,                   /* CaseVal  */
  YYSYMBOL_Val = 73                        /* Val  */
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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   102,   102,   103,   104,   105,   106,   106,   105,   107,
     108,   113,   114,   118,   118,   119,   123,   128,   133,   137,
     143,   147,   151,   156,   161,   168,   170,   178,   185,   189,
     195,   206,   207,   206,   211,   212,   211,   213,   214,   218,
     221,   222,   221,   226,   227,   228,   232,   235,   239,   246,
     250,   259,   268,   272,   281,   290,   299,   308,   317,   326,
     336,   344,   348,   357,   366,   370,   380,   390,   394,   398,
     402,   407,   411,   420,   423,   429,   437,   445,   453,   461
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
  "WHILE", "COLON", "SWITCH", "BREAK", "CONTINUE", "DEFAULT", "CASE",
  "COMMA", "LBRACK", "RBRACK", "INT", "DOUBLE", "FLOAT", "CHAR",
  "CHARCONST", "NUMBER", "IDENTIFIER", "$accept", "StatementList", "$@1",
  "$@2", "$@3", "DeclarationList", "Declaration", "$@4", "type",
  "variablelist", "Bracket", "ConstIden", "SwitchStatement", "$@5", "$@6",
  "CaseStatements", "$@7", "$@8", "BreakStmt", "IfStatement", "$@9",
  "$@10", "ElseStmt", "dummyLabels", "begin", "Statement", "ComRelExp",
  "Relexp", "Term", "Factor", "SIGNVal", "CaseVal", "Val", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -10,    -2,    -2,   -28,   -26,    67,  -114,     1,    25,
    -114,  -114,  -114,  -114,  -114,    57,    18,    22,   -13,   -11,
      22,    22,    24,    65,    96,  -114,  -114,    73,    71,  -114,
    -114,  -114,  -114,    49,   -13,    73,    75,   112,  -114,  -114,
    -114,  -114,  -114,    33,    27,  -114,  -114,    22,    67,    67,
      67,    67,    73,    73,    78,  -114,   156,  -114,    31,    81,
    -114,  -114,  -114,  -114,   102,   -11,    21,    32,  -114,  -114,
      96,    96,  -114,  -114,  -114,    47,   144,    73,    73,  -114,
      86,    67,    67,    67,    67,    90,  -114,   113,   103,  -114,
     104,    71,   105,  -114,  -114,   106,   -11,  -114,  -114,  -114,
     116,    67,    65,    65,    65,    65,    67,  -114,   117,   -11,
     111,  -114,  -114,    65,    65,  -114,    97,  -114,  -114,    22,
    -114,   119,    75,   123,   124,    22,    22,   122,  -114,  -114,
     126,  -114,  -114,    22,   155,  -114,  -114,  -114,    10,    22,
    -114,    22,    22,  -114,  -114,    22,   133,   141,  -114,   148,
    -114,  -114,  -114,    97,  -114
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     0,    13,     0,     0,
      16,    17,    18,    19,    74,    73,     0,    10,    12,     0,
      10,    10,     0,    49,    64,    67,    70,    61,    73,    68,
      69,    75,    76,     0,     0,    61,     0,     0,    77,    78,
       1,     2,    11,    26,     0,     9,     4,    10,     0,     0,
       0,     0,    61,    61,     0,    52,     0,    79,     0,     0,
      72,    71,    31,    48,     0,     0,     0,    24,    15,     3,
      62,    63,    65,    66,    60,     0,     0,    61,    61,    46,
       0,     0,     0,     0,     0,     0,    14,     0,     0,    23,
      22,    30,     0,    29,    20,     0,     0,    59,    50,    51,
       0,     0,    53,    54,    55,    56,     0,    47,     0,     0,
      27,    21,    40,    57,    58,    46,    38,    25,    28,    10,
       5,     0,     0,     0,     0,    10,    10,     0,    32,    41,
       0,    37,    46,    10,    45,     6,    34,    33,     0,    10,
       7,    10,    10,    44,    42,    10,     0,     0,     8,     0,
      35,    43,    39,    38,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,   -17,  -114,  -114,  -114,    15,  -114,  -114,  -114,   -64,
      63,  -114,  -114,  -114,  -114,    19,  -114,  -114,  -114,    36,
    -114,  -114,  -114,  -113,  -114,   138,   142,   -42,    -1,    62,
      82,    54,     4
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    16,   125,   140,   145,    17,    18,    34,    19,    44,
      67,    92,    20,    88,   133,   123,   141,   153,   150,    21,
     119,   134,   139,   100,   115,    22,    54,    55,    23,    24,
      25,    62,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    94,   120,    45,    46,    33,    29,    30,     7,    27,
      74,    75,    31,     1,    32,     4,     5,     6,    40,   136,
      35,    10,    11,    12,    13,     1,    56,     2,     3,    43,
      69,   142,   111,    42,    56,    98,    99,    14,    28,     4,
       5,     6,    64,     7,    36,   117,     8,    47,     9,    58,
      68,    56,    76,    86,    48,    49,    10,    11,    12,    13,
      95,    14,    15,    96,    65,    66,    37,    97,    93,    57,
      48,    49,     2,     3,    38,    39,    56,    56,     2,     3,
     102,   103,   104,   105,     4,     5,     6,    52,    38,    39,
       4,     5,    53,    77,    78,   101,    77,    78,    79,   106,
     113,    87,   124,    50,    51,   114,    14,    28,   130,   131,
      70,    71,    14,    28,    60,    61,   137,     2,     3,     4,
       5,     6,   144,   108,   146,   147,   121,   122,   148,     4,
       5,     6,    72,    73,   107,   -74,   109,   112,   116,   110,
      89,    90,    91,    66,   126,   128,   129,   132,   135,    48,
      49,    14,    15,    80,    81,    82,    83,    84,    85,   138,
     149,    48,    49,   151,    57,    80,    81,    82,    83,    84,
      85,   152,   154,   118,   143,    63,   127,    59
};

static const yytype_uint8 yycheck[] =
{
      17,    65,   115,    20,    21,     6,     2,     3,    21,    19,
      52,    53,    40,     3,    40,    17,    18,    19,     0,   132,
      19,    34,    35,    36,    37,     3,    27,     5,     6,    40,
      47,    21,    96,    18,    35,    77,    78,    39,    40,    17,
      18,    19,     9,    21,    19,   109,    24,    23,    26,    34,
      23,    52,    53,    22,     5,     6,    34,    35,    36,    37,
      39,    39,    40,    31,    31,    32,     9,    20,    64,    20,
       5,     6,     5,     6,    17,    18,    77,    78,     5,     6,
      81,    82,    83,    84,    17,    18,    19,    14,    17,    18,
      17,    18,    19,    15,    16,     9,    15,    16,    20,     9,
     101,    20,   119,     7,     8,   106,    39,    40,   125,   126,
      48,    49,    39,    40,    39,    40,   133,     5,     6,    17,
      18,    19,   139,    20,   141,   142,    29,    30,   145,    17,
      18,    19,    50,    51,    21,    31,    31,    21,    21,    33,
      38,    39,    40,    32,    25,    22,    22,    25,    22,     5,
       6,    39,    40,     9,    10,    11,    12,    13,    14,     4,
      27,     5,     6,    22,    20,     9,    10,    11,    12,    13,
      14,    23,   153,   110,   138,    37,   122,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,    17,    18,    19,    21,    24,    26,
      34,    35,    36,    37,    39,    40,    42,    46,    47,    49,
      53,    60,    66,    69,    70,    71,    73,    19,    40,    73,
      73,    40,    40,    69,    48,    19,    19,     9,    17,    18,
       0,    42,    46,    40,    50,    42,    42,    23,     5,     6,
       7,     8,    14,    19,    67,    68,    69,    20,    46,    67,
      39,    40,    72,    66,     9,    31,    32,    51,    23,    42,
      70,    70,    71,    71,    68,    68,    69,    15,    16,    20,
       9,    10,    11,    12,    13,    14,    22,    20,    54,    38,
      39,    40,    52,    73,    50,    39,    31,    20,    68,    68,
      64,     9,    69,    69,    69,    69,     9,    21,    20,    31,
      33,    50,    21,    69,    69,    65,    21,    50,    51,    61,
      64,    29,    30,    56,    42,    43,    25,    72,    22,    22,
      42,    42,    25,    55,    62,    22,    64,    42,     4,    63,
      44,    57,    21,    60,    42,    45,    42,    42,    42,    27,
      59,    22,    23,    58,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    42,    43,    44,    45,    42,    42,
      42,    46,    46,    48,    47,    47,    49,    49,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    51,    51,    52,
      52,    54,    55,    53,    57,    58,    56,    56,    56,    59,
      61,    62,    60,    63,    63,    63,    64,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    69,    70,    70,    70,    71,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     2,     0,     0,     0,    13,     2,
       0,     2,     1,     0,     4,     3,     1,     1,     1,     1,
       3,     4,     3,     3,     2,     5,     1,     3,     4,     1,
       1,     0,     0,    10,     0,     0,     9,     3,     0,     2,
       0,     0,    12,     4,     2,     0,     0,     0,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     4,     4,     3,
       2,     0,     3,     3,     1,     3,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3
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
  case 2: /* StatementList: DeclarationList StatementList  */
#line 102 "prob1.y"
                                  { printf("\n"); }
#line 1424 "y.tab.c"
    break;

  case 3: /* StatementList: Statement SEMICOLON StatementList  */
#line 103 "prob1.y"
                                        { printf("\n"); }
#line 1430 "y.tab.c"
    break;

  case 4: /* StatementList: IfStatement StatementList  */
#line 104 "prob1.y"
                                { printf("\n"); }
#line 1436 "y.tab.c"
    break;

  case 5: /* $@1: %empty  */
#line 105 "prob1.y"
                                                            { printf("\nif %s goto %s:\ngoto %s:", (yyvsp[-4].addr), (yyvsp[-1].lab), (yyvsp[0].lab)); }
#line 1442 "y.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 106 "prob1.y"
                          { printf("\ngoto %s:", (yyvsp[-4].lab)); }
#line 1448 "y.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 106 "prob1.y"
                                                        { printf("\n%s:", (yyvsp[-4].lab)); }
#line 1454 "y.tab.c"
    break;

  case 8: /* StatementList: WHILE LPAREN ComRelExp RPAREN LCURL begin dummyLabels $@1 StatementList RCURL $@2 $@3 StatementList  */
#line 106 "prob1.y"
                                                                                               { printf("\n"); }
#line 1460 "y.tab.c"
    break;

  case 9: /* StatementList: SwitchStatement StatementList  */
#line 107 "prob1.y"
                                    { printf("\n"); }
#line 1466 "y.tab.c"
    break;

  case 10: /* StatementList: %empty  */
#line 108 "prob1.y"
     {}
#line 1472 "y.tab.c"
    break;

  case 11: /* DeclarationList: Declaration DeclarationList  */
#line 113 "prob1.y"
                                { printf("\n"); }
#line 1478 "y.tab.c"
    break;

  case 12: /* DeclarationList: Declaration  */
#line 114 "prob1.y"
                  {}
#line 1484 "y.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 118 "prob1.y"
          { /* save state */ symcount_stack[++stackCount] = addrCount; /* set base addr to 0 */ addrCount = 0; }
#line 1490 "y.tab.c"
    break;

  case 14: /* Declaration: LCURL $@4 DeclarationList RCURL  */
#line 118 "prob1.y"
                                                                                                                                       { /* restore state */ addrCount = symcount_stack[stackCount--]; }
#line 1496 "y.tab.c"
    break;

  case 16: /* type: INT  */
#line 123 "prob1.y"
        { 
       strcpy((yyval.addr), "INT"); 
       symtype = (char*)malloc(sizeof(char)*10);
       strcpy(symtype, "INT");
       }
#line 1506 "y.tab.c"
    break;

  case 17: /* type: DOUBLE  */
#line 128 "prob1.y"
             { printf("\n"); 
        strcpy((yyval.addr), "DOUBLE");
        symtype = (char*)malloc(sizeof(char)*10);
        strcpy(symtype, "DOUBLE");
         }
#line 1516 "y.tab.c"
    break;

  case 18: /* type: FLOAT  */
#line 133 "prob1.y"
            { printf("\n"); 
        strcpy((yyval.addr), "FLOAT"); 
        symtype = (char*)malloc(sizeof(char)*10);
        strcpy(symtype, "FLOAT");}
#line 1525 "y.tab.c"
    break;

  case 19: /* type: CHAR  */
#line 137 "prob1.y"
           { printf("\n"); 
        strcpy((yyval.addr), "CHAR"); 
        symtype = (char*)malloc(sizeof(char)*10);
        strcpy(symtype, "CHAR");}
#line 1534 "y.tab.c"
    break;

  case 20: /* variablelist: IDENTIFIER COMMA variablelist  */
#line 143 "prob1.y"
                                              { 
    HandleSymTble((yyvsp[-2].addr), "0" , symtype, &symcount, &addrCount, symtab);
    }
#line 1542 "y.tab.c"
    break;

  case 21: /* variablelist: IDENTIFIER Bracket COMMA variablelist  */
#line 148 "prob1.y"
        {  
        HandleSymTble((yyvsp[-3].addr), "0" , symtype, &symcount, &addrCount, symtab);
        }
#line 1550 "y.tab.c"
    break;

  case 22: /* variablelist: IDENTIFIER EQ NUMBER  */
#line 152 "prob1.y"
      {      
        HandleSymTble((yyvsp[-2].addr), (yyvsp[0].dval), symtype, &symcount, &addrCount, symtab);
      }
#line 1558 "y.tab.c"
    break;

  case 23: /* variablelist: IDENTIFIER EQ CHARCONST  */
#line 157 "prob1.y"
      {
        // printf("\n%s",$3);
         HandleSymTble((yyvsp[-2].addr), (yyvsp[0].cval), symtype, &symcount, &addrCount, symtab);
      }
#line 1567 "y.tab.c"
    break;

  case 24: /* variablelist: IDENTIFIER Bracket  */
#line 162 "prob1.y"
    {
        int i = atoi((yyvsp[0].addr));
        int result = i * addrCount;
        
        HandleSymTble((yyvsp[-1].addr), "0" , symtype, &symcount, &result, symtab);
    }
#line 1578 "y.tab.c"
    break;

  case 25: /* variablelist: IDENTIFIER EQ ConstIden COMMA variablelist  */
#line 169 "prob1.y"
    { printf("\n"); }
#line 1584 "y.tab.c"
    break;

  case 26: /* variablelist: IDENTIFIER  */
#line 171 "prob1.y"
    {
        HandleSymTble((yyvsp[0].addr), "0" , symtype, &symcount, &addrCount, symtab);
    }
#line 1592 "y.tab.c"
    break;

  case 27: /* Bracket: LBRACK NUMBER RBRACK  */
#line 179 "prob1.y"
       {
         char* buf = (char*)malloc(sizeof(char) * 1000);
             int dummyLabels = (yyvsp[-1].dval);
        sprintf(buf, "%d", dummyLabels);
        strcpy((yyval.addr), buf);
      }
#line 1603 "y.tab.c"
    break;

  case 28: /* Bracket: LBRACK NUMBER RBRACK Bracket  */
#line 185 "prob1.y"
                                   { printf("\n"); }
#line 1609 "y.tab.c"
    break;

  case 29: /* ConstIden: Val  */
#line 190 "prob1.y"
{  
    printf("\n");
    strcpy((yyval.addr), (yyvsp[0].addr));
}
#line 1618 "y.tab.c"
    break;

  case 30: /* ConstIden: IDENTIFIER  */
#line 195 "prob1.y"
             { 
    //$$ = (char*)malloc(100 * sizeof(char));
    printf("\n");
    strcpy((yyval.addr), (yyvsp[0].addr));

 }
#line 1629 "y.tab.c"
    break;

  case 31: /* $@5: %empty  */
#line 206 "prob1.y"
                           {count++; stack[count] = (char*)malloc(sizeof(char) * 1000); strcpy(stack[count], (yyvsp[0].addCase)); }
#line 1635 "y.tab.c"
    break;

  case 32: /* $@6: %empty  */
#line 207 "prob1.y"
                           {printf("\n%s:" , genOutLabel()); Ocount++ ;count --; }
#line 1641 "y.tab.c"
    break;

  case 33: /* SwitchStatement: SWITCH LPAREN CaseVal $@5 RPAREN LCURL CaseStatements RCURL $@6 StatementList  */
#line 207 "prob1.y"
                                                                                                 { printf("\n"); }
#line 1647 "y.tab.c"
    break;

  case 34: /* $@7: %empty  */
#line 211 "prob1.y"
                                   { printf("\nifFalse (%s == %s) goto %s", stack[count], (yyvsp[-2].addCase), (yyvsp[0].lab));}
#line 1653 "y.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 212 "prob1.y"
                             { printf("\n%s:",(yyvsp[-3].lab));}
#line 1659 "y.tab.c"
    break;

  case 37: /* CaseStatements: DEFAULT COLON StatementList  */
#line 213 "prob1.y"
                                  { printf("\n"); }
#line 1665 "y.tab.c"
    break;

  case 38: /* CaseStatements: %empty  */
#line 214 "prob1.y"
      {}
#line 1671 "y.tab.c"
    break;

  case 39: /* BreakStmt: BREAK SEMICOLON  */
#line 218 "prob1.y"
                    { printf("goto %s\n", OutLabel(Ocount)); }
#line 1677 "y.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 221 "prob1.y"
                                                 { printf("\nifFalse %s goto %s ", (yyvsp[-3].addr), (yyvsp[-1].lab)); }
#line 1683 "y.tab.c"
    break;

  case 41: /* $@10: %empty  */
#line 222 "prob1.y"
                        { printf("\n%s:", (yyvsp[-4].lab)); }
#line 1689 "y.tab.c"
    break;

  case 42: /* IfStatement: IF LPAREN ComRelExp RPAREN dummyLabels LCURL $@9 StatementList RCURL $@10 ElseStmt StatementList  */
#line 222 "prob1.y"
                                                                        { printf("\n"); }
#line 1695 "y.tab.c"
    break;

  case 43: /* ElseStmt: ELSE LCURL StatementList RCURL  */
#line 226 "prob1.y"
                                   {}
#line 1701 "y.tab.c"
    break;

  case 44: /* ElseStmt: ELSE IfStatement  */
#line 227 "prob1.y"
                       {}
#line 1707 "y.tab.c"
    break;

  case 45: /* ElseStmt: %empty  */
#line 228 "prob1.y"
      {}
#line 1713 "y.tab.c"
    break;

  case 46: /* dummyLabels: %empty  */
#line 232 "prob1.y"
    { (yyval.lab) = (char*)malloc(100 * sizeof(char)); (yyval.lab) = genBlockLabel(); }
#line 1719 "y.tab.c"
    break;

  case 47: /* begin: %empty  */
#line 235 "prob1.y"
    { (yyval.lab) = (char*)malloc(100 * sizeof(char)); (yyval.lab) = genBeginLabel(); }
#line 1725 "y.tab.c"
    break;

  case 48: /* Statement: IDENTIFIER EQ Statement  */
#line 239 "prob1.y"
                            {
        verify((yyvsp[-2].addr));
        strcpy((yyval.addr), (yyvsp[-2].addr));
        strcat((yyval.addr), "=");
        strcat((yyval.addr), (yyvsp[0].addr));
        printf("\n%s", (yyval.addr));
    }
#line 1737 "y.tab.c"
    break;

  case 49: /* Statement: Term  */
#line 246 "prob1.y"
           { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1743 "y.tab.c"
    break;

  case 50: /* ComRelExp: ComRelExp AND Relexp  */
#line 250 "prob1.y"
                         {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "&&");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1757 "y.tab.c"
    break;

  case 51: /* ComRelExp: ComRelExp OR Relexp  */
#line 259 "prob1.y"
                          {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "||");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1771 "y.tab.c"
    break;

  case 52: /* ComRelExp: Relexp  */
#line 268 "prob1.y"
             { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1777 "y.tab.c"
    break;

  case 53: /* Relexp: Term LT Term  */
#line 272 "prob1.y"
                 {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "<");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1791 "y.tab.c"
    break;

  case 54: /* Relexp: Term LTE Term  */
#line 281 "prob1.y"
                    {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "<=");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1805 "y.tab.c"
    break;

  case 55: /* Relexp: Term GT Term  */
#line 290 "prob1.y"
                   {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, ">");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1819 "y.tab.c"
    break;

  case 56: /* Relexp: Term GTE Term  */
#line 299 "prob1.y"
                    {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, ">=");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1833 "y.tab.c"
    break;

  case 57: /* Relexp: Term EQ EQ Term  */
#line 308 "prob1.y"
                      {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-3].addr));
        strcat(str, "==");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1847 "y.tab.c"
    break;

  case 58: /* Relexp: Term NOT EQ Term  */
#line 317 "prob1.y"
                       {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-3].addr));
        strcat(str, "!=");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1861 "y.tab.c"
    break;

  case 59: /* Relexp: LPAREN Relexp RPAREN  */
#line 326 "prob1.y"
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
#line 1876 "y.tab.c"
    break;

  case 60: /* Relexp: NOT Relexp  */
#line 336 "prob1.y"
                 {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, "!");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1889 "y.tab.c"
    break;

  case 61: /* Relexp: %empty  */
#line 344 "prob1.y"
      {}
#line 1895 "y.tab.c"
    break;

  case 62: /* Term: Term ADD Factor  */
#line 348 "prob1.y"
                    {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "+");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1909 "y.tab.c"
    break;

  case 63: /* Term: Term SUB Factor  */
#line 357 "prob1.y"
                      {
        strcpy((yyval.addr), genLabel());
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "-");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1923 "y.tab.c"
    break;

  case 64: /* Term: Factor  */
#line 366 "prob1.y"
             { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1929 "y.tab.c"
    break;

  case 65: /* Factor: Factor MUL SIGNVal  */
#line 370 "prob1.y"
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
#line 1944 "y.tab.c"
    break;

  case 66: /* Factor: Factor DIV SIGNVal  */
#line 380 "prob1.y"
                        {
        char* g = genLabel();
        strcpy((yyval.addr), g);
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-2].addr));
        strcat(str, "/");
        strcat(str, (yyvsp[0].addr));
        printf("\n%s", str);
    }
#line 1959 "y.tab.c"
    break;

  case 67: /* Factor: SIGNVal  */
#line 390 "prob1.y"
              { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1965 "y.tab.c"
    break;

  case 68: /* SIGNVal: ADD Val  */
#line 394 "prob1.y"
            {
        strcpy((yyval.addr), "+");
        strcat((yyval.addr), (yyvsp[0].addr));
    }
#line 1974 "y.tab.c"
    break;

  case 69: /* SIGNVal: SUB Val  */
#line 398 "prob1.y"
              {
        strcpy((yyval.addr), "-");
        strcat((yyval.addr), (yyvsp[0].addr));
    }
#line 1983 "y.tab.c"
    break;

  case 70: /* SIGNVal: Val  */
#line 402 "prob1.y"
          { strcpy((yyval.addr), (yyvsp[0].addr)); }
#line 1989 "y.tab.c"
    break;

  case 71: /* CaseVal: IDENTIFIER  */
#line 407 "prob1.y"
                {
        
        strcpy((yyval.addCase), (yyvsp[0].addr));
    }
#line 1998 "y.tab.c"
    break;

  case 72: /* CaseVal: NUMBER  */
#line 411 "prob1.y"
                {
        char* buf = (char*)malloc(sizeof(char) * 1000);
        int dummyLabels = (yyvsp[0].dval);
        sprintf(buf, "%d", dummyLabels);
        strcpy((yyval.addCase), buf);
    }
#line 2009 "y.tab.c"
    break;

  case 73: /* Val: IDENTIFIER  */
#line 420 "prob1.y"
               {
        strcpy((yyval.addr), (yyvsp[0].addr));
    }
#line 2017 "y.tab.c"
    break;

  case 74: /* Val: NUMBER  */
#line 423 "prob1.y"
             {
        char* buf = (char*)malloc(sizeof(char) * 1000);
        int dummyLabels = (yyvsp[0].dval);
        sprintf(buf, "%d", dummyLabels);
        strcpy((yyval.addr), buf);
    }
#line 2028 "y.tab.c"
    break;

  case 75: /* Val: PADD IDENTIFIER  */
#line 429 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[0].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[0].addr));
        strcat(str, "+1");
        printf("\n%s", str);
    }
#line 2041 "y.tab.c"
    break;

  case 76: /* Val: PSUB IDENTIFIER  */
#line 437 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[0].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[0].addr));
        strcat(str, "-1");
        printf("\n%s", str);
    }
#line 2054 "y.tab.c"
    break;

  case 77: /* Val: IDENTIFIER PADD  */
#line 445 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[-1].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-1].addr));
        strcat(str, "+1");
        printf("\n%s", str);
    }
#line 2067 "y.tab.c"
    break;

  case 78: /* Val: IDENTIFIER PSUB  */
#line 453 "prob1.y"
                      {
        strcpy((yyval.addr), (yyvsp[-1].addr));
        strcpy(str, (yyval.addr));
        strcat(str, "=");
        strcat(str, (yyvsp[-1].addr));
        strcat(str, "-1");
        printf("\n%s", str);
    }
#line 2080 "y.tab.c"
    break;

  case 79: /* Val: LPAREN Term RPAREN  */
#line 461 "prob1.y"
                         { strcpy((yyval.addr), (yyvsp[-1].addr)); }
#line 2086 "y.tab.c"
    break;


#line 2090 "y.tab.c"

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

#line 464 "prob1.y"


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

void verify (char *id )
{
    int i;
    for (i = 0; i < symcount; i++) {
        if (strcmp(symtab[i]->name, id) == 0) {
            return;
        }
    }
    printf("Error: Symbol %s not found\n", id);
    exit(1);
}

void HandleSymTble(char* identifier, char* number, char* symtype, int* symcount, int* addrCount, Symbol** symtab) {
    // Check if the identifier is already present in the symbol table
    if (*symcount > 1) {
        int i;
        for (i = 0; i < *symcount; i++) {
            if (strcmp(symtab[i]->name, identifier) == 0) {
                if (strcmp(symtab[i]->type, symtype) != 0) {
                    printf("Error: Symbol %s already defined with conflicting type\n", identifier);
                    exit(1);
                }
                printf("Error: Symbol %s already defined\n", identifier);
                exit(1);
            }
        }
    }

    char addrStr[10];
    sprintf(addrStr, "%X", *addrCount);

    if (strcmp(symtype,"INT") ==0) {
        add_symbol(identifier, "INT", number, addrStr);
        *addrCount = *addrCount + 4;
    }
    else if (strcmp (symtype,"DOUBLE") ==0) {
        add_symbol(identifier, "DOUBLE", number, addrStr );
        *addrCount = *addrCount + 8;
    }
    else if (strcmp (symtype ,"FLOAT") ==0) {
        add_symbol(identifier, "FLOAT", number, addrStr);
        *addrCount = *addrCount + 4;
    }
    else if (strcmp (symtype ,"CHAR") ==0) {
        add_symbol(identifier, "CHAR", number, addrStr);
        *addrCount = *addrCount + 1;

        //     if (strlen(number) != 3 || number[0] != '\'' || number[2] != '\'') {
        //     printf("Error: Invalid char constant %s\n", number);
        //     exit(1);
        // }
        // add_symbol(identifier, "CHAR", number, addrStr);
        // *addrCount = *addrCount + 1;
    }
    else {
        printf("Error: Symbol %s not found\n", identifier);
        exit(1);
    }
}


char* genBlockLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "L");
/*Out:
    { $$ = (char*)malloc(100 * sizeof(char)); $$ = genOutLabel(); }*/
    sprintf(label, "%d", l);
    strcat(s, label);
    l++;
    return s;
}

char* genBeginLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "BEGIN");
    sprintf(label, "%d", w);
    strcat(s, label);
    w++;
    free(label);
    return s;
}

char* genOutLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "OUT");
    sprintf(label, "%d", z);
    strcat(s, label);
    z++;
    return s;
}
char* OutLabel(int Ocount){
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "OUT");
    sprintf(label, "%d", Ocount);
    strcat(s, label);
    Ocount++;
    free(label);
    return s;
}

void add_symbol(char* name, char* type, int val, char* addr) {
    if (symcount >= 10000) {
        fprintf(stderr, "Error: Symbol table is full\n");
        exit(EXIT_FAILURE);
    }

    Symbol* sym = (Symbol*)malloc(sizeof(Symbol));
    if (sym == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for Symbol\n");
        exit(EXIT_FAILURE);
    }

    sym->name = strdup(name);
    if (sym->name == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for name\n");
        exit(EXIT_FAILURE);
    }

    sym->type = strdup(type);
    if (sym->type == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for type\n");
        exit(EXIT_FAILURE);
    }

    sym->val.intval = val;
    strncpy(sym->addr, addr, sizeof(sym->addr) - 1);
    sym->addr[sizeof(sym->addr) - 1] = '\0'; // Ensure null-termination

    symtab[symcount++] = sym;

    printf("Added symbol: name=%s, type=%s, val=%d, addr=%s\n", sym->name, sym->type, sym->val.intval, sym->addr);
}


int main(int argc, char* argv[]) {
    t =0;
    l = 0;
    w = 0;
    z = 0 ;
    count = 1;
    Ocount = 0;
    
    if (argc > 1) {
        FILE* fp = fopen(argv[1], "r");
        if (fp) yyin = fp;
    }
    yyparse();
    return 0;
}
