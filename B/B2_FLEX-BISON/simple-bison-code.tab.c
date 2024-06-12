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
#line 1 "simple-bison-code.y"

/* Ορισμοί και δηλώσεις γλώσσας C. Οτιδήποτε έχει να κάνει με ορισμό ή αρχικοποίηση
   μεταβλητών & συναρτήσεων, αρχεία header και δηλώσεις #define μπαίνει σε αυτό το σημείο */
        
        #include <stdio.h>
        #include <string.h>
	#include <stdlib.h>
        #define YYDEBUG 1
	
	int line = 1;
	int errflag = 0;

	extern char *yytext;
	
	void yyerror(char *);
        int yylex(void);

        /* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

        extern FILE *yyin;
        extern FILE *yyout;

#line 95 "simple-bison-code.tab.c"

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

#include "simple-bison-code.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_SBREAK = 7,                     /* SBREAK  */
  YYSYMBOL_SDO = 8,                        /* SDO  */
  YYSYMBOL_SIF = 9,                        /* SIF  */
  YYSYMBOL_SSIZEOF = 10,                   /* SSIZEOF  */
  YYSYMBOL_SCASE = 11,                     /* SCASE  */
  YYSYMBOL_SDOUBLE = 12,                   /* SDOUBLE  */
  YYSYMBOL_SINT = 13,                      /* SINT  */
  YYSYMBOL_SSTRUCT = 14,                   /* SSTRUCT  */
  YYSYMBOL_SFUNC = 15,                     /* SFUNC  */
  YYSYMBOL_SELSE = 16,                     /* SELSE  */
  YYSYMBOL_SLONG = 17,                     /* SLONG  */
  YYSYMBOL_SSWITCH = 18,                   /* SSWITCH  */
  YYSYMBOL_SCONST = 19,                    /* SCONST  */
  YYSYMBOL_SFLOAT = 20,                    /* SFLOAT  */
  YYSYMBOL_SRETURN = 21,                   /* SRETURN  */
  YYSYMBOL_SVOID = 22,                     /* SVOID  */
  YYSYMBOL_SCONTINUE = 23,                 /* SCONTINUE  */
  YYSYMBOL_SFOR = 24,                      /* SFOR  */
  YYSYMBOL_SSHORT = 25,                    /* SSHORT  */
  YYSYMBOL_SWHILE = 26,                    /* SWHILE  */
  YYSYMBOL_PLUS = 27,                      /* "+"  */
  YYSYMBOL_MULEQ = 28,                     /* "*="  */
  YYSYMBOL_PMINEQ = 29,                    /* "--"  */
  YYSYMBOL_MINUS = 30,                     /* "-"  */
  YYSYMBOL_DIVEQ = 31,                     /* "/="  */
  YYSYMBOL_LT = 32,                        /* "<"  */
  YYSYMBOL_MUL = 33,                       /* "*"  */
  YYSYMBOL_NOT = 34,                       /* "!"  */
  YYSYMBOL_GT = 35,                        /* ">"  */
  YYSYMBOL_DIV = 36,                       /* "/"  */
  YYSYMBOL_AND = 37,                       /* "&&"  */
  YYSYMBOL_LEQ = 38,                       /* "<="  */
  YYSYMBOL_MOD = 39,                       /* "%"  */
  YYSYMBOL_OR = 40,                        /* "||"  */
  YYSYMBOL_GREQ = 41,                      /* ">="  */
  YYSYMBOL_ASSIGN = 42,                    /* "="  */
  YYSYMBOL_EQUAL = 43,                     /* "=="  */
  YYSYMBOL_ADDR = 44,                      /* "&"  */
  YYSYMBOL_PLUSEQ = 45,                    /* "+="  */
  YYSYMBOL_NOTEQ = 46,                     /* "!="  */
  YYSYMBOL_MINEQ = 47,                     /* "-="  */
  YYSYMBOL_PPLUSEQ = 48,                   /* "++"  */
  YYSYMBOL_OPENPAR = 49,                   /* "("  */
  YYSYMBOL_CLOSEPAR = 50,                  /* ")"  */
  YYSYMBOL_OPENSQBRA = 51,                 /* "["  */
  YYSYMBOL_CLOSESQBRA = 52,                /* "]"  */
  YYSYMBOL_OPENCURBRA = 53,                /* "{"  */
  YYSYMBOL_CLOSECURBRA = 54,               /* "}"  */
  YYSYMBOL_COMMA = 55,                     /* ","  */
  YYSYMBOL_BACKSLASH = 56,                 /* "\\"  */
  YYSYMBOL_DELIMITER = 57,                 /* ";"  */
  YYSYMBOL_SSCAN = 58,                     /* SSCAN  */
  YYSYMBOL_SPRINT = 59,                    /* SPRINT  */
  YYSYMBOL_SLEN = 60,                      /* SLEN  */
  YYSYMBOL_SCMP = 61,                      /* SCMP  */
  YYSYMBOL_NEWLINE = 62,                   /* NEWLINE  */
  YYSYMBOL_UNKNOWN = 63,                   /* UNKNOWN  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_decl_var = 66,                  /* decl_var  */
  YYSYMBOL_type = 67,                      /* type  */
  YYSYMBOL_var = 68,                       /* var  */
  YYSYMBOL_pos_elem = 69,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 70,              /* arr_elements  */
  YYSYMBOL_integ = 71,                     /* integ  */
  YYSYMBOL_fl = 72,                        /* fl  */
  YYSYMBOL_str = 73,                       /* str  */
  YYSYMBOL_build_func = 74,                /* build_func  */
  YYSYMBOL_func = 75,                      /* func  */
  YYSYMBOL_scan_params = 76,               /* scan_params  */
  YYSYMBOL_len_params = 77,                /* len_params  */
  YYSYMBOL_cmp_params = 78,                /* cmp_params  */
  YYSYMBOL_print_params = 79,              /* print_params  */
  YYSYMBOL_decl_func = 80,                 /* decl_func  */
  YYSYMBOL_name_func = 81,                 /* name_func  */
  YYSYMBOL_params = 82,                    /* params  */
  YYSYMBOL_type_params = 83,               /* type_params  */
  YYSYMBOL_code = 84,                      /* code  */
  YYSYMBOL_decl_ops = 85,                  /* decl_ops  */
  YYSYMBOL_sign = 86,                      /* sign  */
  YYSYMBOL_arithm_expr = 87,               /* arithm_expr  */
  YYSYMBOL_number = 88,                    /* number  */
  YYSYMBOL_changing_val = 89,              /* changing_val  */
  YYSYMBOL_assign = 90,                    /* assign  */
  YYSYMBOL_val = 91,                       /* val  */
  YYSYMBOL_cmp_expr = 92,                  /* cmp_expr  */
  YYSYMBOL_merge_arr = 93,                 /* merge_arr  */
  YYSYMBOL_decl_statements = 94,           /* decl_statements  */
  YYSYMBOL_decl_statement = 95,            /* decl_statement  */
  YYSYMBOL_if_statement = 96,              /* if_statement  */
  YYSYMBOL_condition = 97,                 /* condition  */
  YYSYMBOL_block_statement = 98,           /* block_statement  */
  YYSYMBOL_while_statement = 99,           /* while_statement  */
  YYSYMBOL_for_statement = 100             /* for_statement  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   327

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    97,    97,    99,   101,   103,   105,   107,   109,   116,
     120,   121,   122,   123,   124,   128,   129,   134,   137,   138,
     139,   140,   144,   145,   149,   150,   154,   155,   160,   164,
     165,   166,   167,   171,   175,   176,   177,   181,   182,   183,
     187,   188,   189,   190,   191,   192,   193,   198,   202,   206,
     207,   211,   212,   216,   217,   218,   219,   224,   225,   226,
     227,   232,   233,   234,   235,   239,   240,   241,   242,   243,
     244,   248,   249,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   266,   267,   268,   269,   273,   274,   275,   276,
     277,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     295,   300,   301,   305,   306,   307,   308,   309,   314,   318,
     319,   323,   328,   333
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "INTEGER", "FLOAT", "SBREAK", "SDO", "SIF", "SSIZEOF", "SCASE",
  "SDOUBLE", "SINT", "SSTRUCT", "SFUNC", "SELSE", "SLONG", "SSWITCH",
  "SCONST", "SFLOAT", "SRETURN", "SVOID", "SCONTINUE", "SFOR", "SSHORT",
  "SWHILE", "\"+\"", "\"*=\"", "\"--\"", "\"-\"", "\"/=\"", "\"<\"",
  "\"*\"", "\"!\"", "\">\"", "\"/\"", "\"&&\"", "\"<=\"", "\"%\"",
  "\"||\"", "\">=\"", "\"=\"", "\"==\"", "\"&\"", "\"+=\"", "\"!=\"",
  "\"-=\"", "\"++\"", "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"",
  "\",\"", "\"\\\\\"", "\";\"", "SSCAN", "SPRINT", "SLEN", "SCMP",
  "NEWLINE", "UNKNOWN", "$accept", "program", "decl_var", "type", "var",
  "pos_elem", "arr_elements", "integ", "fl", "str", "build_func", "func",
  "scan_params", "len_params", "cmp_params", "print_params", "decl_func",
  "name_func", "params", "type_params", "code", "decl_ops", "sign",
  "arithm_expr", "number", "changing_val", "assign", "val", "cmp_expr",
  "merge_arr", "decl_statements", "decl_statement", "if_statement",
  "condition", "block_statement", "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -124,    20,  -124,   255,   144,   212,    25,  -124,  -124,    18,
    -124,  -124,   -15,  -124,    25,   139,   139,    50,   148,    -1,
      26,    28,    54,  -124,    48,   124,    -6,   103,    73,    83,
      94,   148,  -124,    97,  -124,   276,  -124,   270,  -124,   208,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,    25,   270,
     148,   114,   124,   148,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,   -28,     7,    52,  -124,  -124,  -124,  -124,    88,
     140,    61,    10,   113,  -124,  -124,     3,    12,   124,   101,
    -124,  -124,  -124,  -124,  -124,   128,   128,   128,   128,   221,
     221,   221,   221,   221,   221,  -124,  -124,   117,  -124,   112,
     115,   221,  -124,  -124,   188,  -124,   190,  -124,   200,  -124,
    -124,   179,   164,  -124,  -124,  -124,  -124,  -124,   -44,  -124,
    -124,  -124,   180,  -124,  -124,    40,  -124,   162,  -124,   161,
     216,   103,   215,    81,   242,   174,  -124,  -124,  -124,    90,
      90,  -124,  -124,  -124,  -124,  -124,  -124,   285,   285,  -124,
    -124,   209,    56,  -124,   243,  -124,  -124,  -124,  -124,   231,
    -124,    61,  -124,  -124,   113,  -124,    47,  -124,  -124,  -124,
    -124,  -124,   302,    80,   185,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,    80,    80,   155,  -124,  -124,  -124,   165,
    -124,   165,   165,   165,  -124,   148,  -124,  -124,  -124,  -124,
    -124,  -124,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     1,    66,    61,    62,     0,    12,    10,     0,
      14,    11,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,    53,     0,     0,     0,    54,     0,
       0,     0,   106,    55,    65,    57,    58,    59,    60,     0,
     101,   103,   107,   104,   105,    93,    91,    92,     0,   109,
       0,     0,     0,     0,    61,    62,    63,    64,    26,    22,
      24,    18,     0,     0,     0,    56,    53,    54,    55,     0,
       0,     0,     0,     0,     2,    15,     0,     0,     0,     0,
       3,    28,     4,    47,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,   102,     0,   108,     0,
       0,     0,   112,    19,     0,    20,     0,    21,     0,   111,
      33,     0,    41,    40,    42,    43,    45,    44,     0,    36,
      35,    34,     0,    38,    37,     0,     9,    93,    88,    91,
      92,    89,     0,     0,     0,     0,    16,   100,    66,    67,
      68,    69,    70,    95,    94,    96,    97,    98,    99,   110,
      49,     0,     0,    48,     0,    23,    25,    27,    29,     0,
      32,     0,    30,    31,     0,    84,     0,    82,    83,    85,
      51,    50,     0,     0,     0,    46,    39,    86,    87,    89,
      90,    52,    73,     0,     0,     0,    17,    77,    76,     0,
      75,     0,     0,     0,    74,     0,    71,    72,    80,    81,
      78,    79,   113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   238,   -96,   -21,  -124,   -67,   136,   135,   149,
     259,   -69,  -124,  -124,    92,   118,  -124,  -124,  -124,   104,
    -124,   281,   207,   177,  -123,    -3,   239,   126,    -5,   217,
     277,   -31,  -124,    -7,  -124,  -124,  -124
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    66,    25,    26,   116,    27,    62,    63,    64,
      67,    29,   111,   122,   125,   118,    30,    31,   100,   152,
      32,    68,    34,    35,   198,   185,    36,   133,    37,    38,
      39,    40,    41,    50,    42,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      83,    49,   117,   151,    76,   121,   160,    53,    96,    49,
     131,   161,   137,   119,   120,   127,   128,   129,   130,    98,
       2,    51,   102,     3,   103,     4,     5,   104,    45,     6,
      46,    47,     7,     8,    52,     9,    77,    10,    96,    15,
      11,    97,    16,    49,    12,    13,    14,    15,    70,    78,
      16,   128,   177,   178,    58,    59,    60,   136,    78,   105,
     126,    17,   106,    17,   112,   113,   114,   115,   199,   200,
     201,    17,   134,    18,    48,    71,   151,    72,    19,    20,
      21,    22,    23,   182,   143,   144,   145,   146,   147,   148,
     163,     3,   117,     4,     5,   164,   154,     6,    17,   179,
       7,     8,    61,    73,   107,    10,   171,   108,    11,   183,
      74,   172,    12,    13,    14,    15,   123,   124,    16,    19,
      20,    21,    22,    87,     7,     8,    88,    75,   184,    10,
      79,   138,    11,    54,    55,    80,   166,    13,   167,    17,
      81,    18,   109,   110,    54,    55,    19,    20,    21,    22,
      65,     3,    17,     4,     5,    15,    82,     6,    16,    84,
       7,     8,   150,    99,   202,    10,    15,   149,    11,    16,
     196,   197,    12,    13,    14,    15,   -91,   153,    16,   -91,
     187,   188,   -91,   189,   190,   -91,   191,   -91,   -61,   -66,
     -91,   -61,   -66,    59,   -61,   -66,    60,   -61,   -66,    17,
     192,    18,   193,   194,    58,   195,    19,    20,    21,    22,
      65,     3,   170,     4,     5,   159,   -86,     6,   -61,   -66,
       7,     8,    56,    57,    45,    10,    46,    47,    11,   158,
     162,   169,    12,    13,    14,    15,   174,   186,    16,    24,
     155,   156,    85,   -62,   -92,    86,   -62,   -92,    87,   -62,
     -92,    88,   -62,   -92,   132,   -92,   176,   157,   -92,    17,
      28,    18,   139,   140,   141,   142,    19,    20,    21,    22,
      95,   -87,   165,   -62,    89,    89,   181,    90,    90,   175,
      91,    91,    33,    92,    92,    93,    93,   -93,    94,    94,
     -93,   101,   180,   -93,   135,    69,   -93,   -15,   -93,   168,
     173,   -93,    89,    85,     0,    90,    86,     0,    91,    87,
     -15,    92,    88,    93,     7,     8,    94,    89,     0,    10,
      90,     0,    11,    91,     0,     0,    92,    13
};

static const yytype_int16 yycheck[] =
{
      31,     6,    71,    99,    25,    72,    50,    14,    39,    14,
      77,    55,    79,     3,     4,     3,     4,     5,     6,    50,
       0,     3,    53,     3,    52,     5,     6,    55,     3,     9,
       5,     6,    12,    13,    49,    15,    42,    17,    69,    27,
      20,    48,    30,    48,    24,    25,    26,    27,    49,    55,
      30,     4,     5,     6,     4,     5,     6,    78,    55,    52,
      57,    51,    55,    51,     3,     4,     5,     6,   191,   192,
     193,    51,    77,    53,    49,    49,   172,    49,    58,    59,
      60,    61,    62,     3,    89,    90,    91,    92,    93,    94,
      50,     3,   161,     5,     6,    55,   101,     9,    51,   166,
      12,    13,    52,    49,    52,    17,    50,    55,    20,    29,
      62,    55,    24,    25,    26,    27,     3,     4,    30,    58,
      59,    60,    61,    33,    12,    13,    36,     3,    48,    17,
      27,     3,    20,     5,     6,    62,    55,    25,    57,    51,
      57,    53,    54,     3,     5,     6,    58,    59,    60,    61,
      62,     3,    51,     5,     6,    27,    62,     9,    30,    62,
      12,    13,    50,    49,   195,    17,    27,    50,    20,    30,
       5,     6,    24,    25,    26,    27,    32,    62,    30,    35,
     183,   184,    38,    28,    29,    41,    31,    43,    27,    27,
      46,    30,    30,     5,    33,    33,     6,    36,    36,    51,
      45,    53,    47,    48,     4,    50,    58,    59,    60,    61,
      62,     3,     3,     5,     6,    51,    55,     9,    57,    57,
      12,    13,    15,    16,     3,    17,     5,     6,    20,    50,
      50,    57,    24,    25,    26,    27,     5,    52,    30,     1,
     104,   106,    27,    27,    32,    30,    30,    35,    33,    33,
      38,    36,    36,    41,    77,    43,   164,   108,    46,    51,
       1,    53,    85,    86,    87,    88,    58,    59,    60,    61,
      62,    55,    57,    57,    32,    32,   172,    35,    35,   161,
      38,    38,     1,    41,    41,    43,    43,    32,    46,    46,
      35,    52,   166,    38,    77,    18,    41,    42,    43,    57,
      57,    46,    32,    27,    -1,    35,    30,    -1,    38,    33,
      55,    41,    36,    43,    12,    13,    46,    32,    -1,    17,
      35,    -1,    20,    38,    -1,    -1,    41,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,     0,     3,     5,     6,     9,    12,    13,    15,
      17,    20,    24,    25,    26,    27,    30,    51,    53,    58,
      59,    60,    61,    62,    66,    67,    68,    70,    74,    75,
      80,    81,    84,    85,    86,    87,    90,    92,    93,    94,
      95,    96,    98,    99,   100,     3,     5,     6,    49,    92,
      97,     3,    49,    97,     5,     6,    86,    86,     4,     5,
       6,    52,    71,    72,    73,    62,    66,    74,    85,    94,
      49,    49,    49,    49,    62,     3,    68,    42,    55,    27,
      62,    57,    62,    95,    62,    27,    30,    33,    36,    32,
      35,    38,    41,    43,    46,    62,    95,    97,    95,    49,
      82,    90,    95,    52,    55,    52,    55,    52,    55,    54,
       3,    76,     3,     4,     5,     6,    69,    75,    79,     3,
       4,    70,    77,     3,     4,    78,    57,     3,     4,     5,
       6,    70,    87,    91,    92,    93,    68,    70,     3,    87,
      87,    87,    87,    92,    92,    92,    92,    92,    92,    50,
      50,    67,    83,    62,    92,    71,    72,    73,    50,    51,
      50,    55,    50,    50,    55,    57,    55,    57,    57,    57,
       3,    50,    55,    57,     5,    79,    78,     5,     6,    70,
      91,    83,     3,    29,    48,    89,    52,    89,    89,    28,
      29,    31,    45,    47,    48,    50,     5,     6,    88,    88,
      88,    88,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    65,    65,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    75,    75,    76,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    80,    81,    82,
      82,    83,    83,    84,    84,    84,    84,    85,    85,    85,
      85,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    94,    94,    95,    95,    95,    95,    95,    96,    97,
      97,    98,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     3,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     2,     3,
       3,     3,     1,     3,     1,     3,     1,     3,     2,     4,
       4,     4,     4,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     2,     4,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     3,     3,     3,
       3,     1,     1,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     4,     4,     4,     4,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     8
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
  case 2: /* program: program decl_var NEWLINE  */
#line 97 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1351 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program build_func NEWLINE  */
#line 99 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1357 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program decl_func NEWLINE  */
#line 101 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1363 "simple-bison-code.tab.c"
    break;

  case 5: /* program: program decl_ops NEWLINE  */
#line 103 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1369 "simple-bison-code.tab.c"
    break;

  case 6: /* program: program decl_statements NEWLINE  */
#line 105 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1375 "simple-bison-code.tab.c"
    break;

  case 7: /* program: program NEWLINE  */
#line 107 "simple-bison-code.y"
                                                { }
#line 1381 "simple-bison-code.tab.c"
    break;

  case 8: /* program: %empty  */
#line 109 "simple-bison-code.y"
                                                { }
#line 1387 "simple-bison-code.tab.c"
    break;

  case 9: /* decl_var: type var ";"  */
#line 116 "simple-bison-code.y"
                     { (yyval.sval) = "\"Δήλωση Μεταβλητής\""; }
#line 1393 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SINT  */
#line 120 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1399 "simple-bison-code.tab.c"
    break;

  case 11: /* type: SFLOAT  */
#line 121 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1405 "simple-bison-code.tab.c"
    break;

  case 12: /* type: SDOUBLE  */
#line 122 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1411 "simple-bison-code.tab.c"
    break;

  case 13: /* type: SSHORT  */
#line 123 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1417 "simple-bison-code.tab.c"
    break;

  case 14: /* type: SLONG  */
#line 124 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1423 "simple-bison-code.tab.c"
    break;

  case 15: /* var: IDENTIFIER  */
#line 128 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1429 "simple-bison-code.tab.c"
    break;

  case 16: /* var: var "," var  */
#line 129 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1435 "simple-bison-code.tab.c"
    break;

  case 17: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 134 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1441 "simple-bison-code.tab.c"
    break;

  case 18: /* arr_elements: "[" "]"  */
#line 137 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1447 "simple-bison-code.tab.c"
    break;

  case 19: /* arr_elements: "[" integ "]"  */
#line 138 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1453 "simple-bison-code.tab.c"
    break;

  case 20: /* arr_elements: "[" fl "]"  */
#line 139 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1459 "simple-bison-code.tab.c"
    break;

  case 21: /* arr_elements: "[" str "]"  */
#line 140 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1465 "simple-bison-code.tab.c"
    break;

  case 22: /* integ: INTEGER  */
#line 144 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1471 "simple-bison-code.tab.c"
    break;

  case 23: /* integ: integ "," integ  */
#line 145 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1477 "simple-bison-code.tab.c"
    break;

  case 24: /* fl: FLOAT  */
#line 149 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1483 "simple-bison-code.tab.c"
    break;

  case 25: /* fl: fl "," fl  */
#line 150 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1489 "simple-bison-code.tab.c"
    break;

  case 26: /* str: STRING  */
#line 154 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1495 "simple-bison-code.tab.c"
    break;

  case 27: /* str: str "," str  */
#line 155 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1501 "simple-bison-code.tab.c"
    break;

  case 28: /* build_func: func ";"  */
#line 160 "simple-bison-code.y"
                 { (yyval.sval) = "\"Ενσωματωμένη απλή συνάρτηση\""; }
#line 1507 "simple-bison-code.tab.c"
    break;

  case 29: /* func: SSCAN "(" scan_params ")"  */
#line 164 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1513 "simple-bison-code.tab.c"
    break;

  case 30: /* func: SLEN "(" len_params ")"  */
#line 165 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1519 "simple-bison-code.tab.c"
    break;

  case 31: /* func: SCMP "(" cmp_params ")"  */
#line 166 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1525 "simple-bison-code.tab.c"
    break;

  case 32: /* func: SPRINT "(" print_params ")"  */
#line 167 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1531 "simple-bison-code.tab.c"
    break;

  case 33: /* scan_params: IDENTIFIER  */
#line 171 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1537 "simple-bison-code.tab.c"
    break;

  case 34: /* len_params: arr_elements  */
#line 175 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1543 "simple-bison-code.tab.c"
    break;

  case 35: /* len_params: STRING  */
#line 176 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1549 "simple-bison-code.tab.c"
    break;

  case 36: /* len_params: IDENTIFIER  */
#line 177 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1555 "simple-bison-code.tab.c"
    break;

  case 37: /* cmp_params: STRING  */
#line 181 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1561 "simple-bison-code.tab.c"
    break;

  case 38: /* cmp_params: IDENTIFIER  */
#line 182 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1567 "simple-bison-code.tab.c"
    break;

  case 39: /* cmp_params: cmp_params "," cmp_params  */
#line 183 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1573 "simple-bison-code.tab.c"
    break;

  case 40: /* print_params: STRING  */
#line 187 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1579 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: IDENTIFIER  */
#line 188 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1585 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: INTEGER  */
#line 189 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1591 "simple-bison-code.tab.c"
    break;

  case 43: /* print_params: FLOAT  */
#line 190 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1597 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: func  */
#line 191 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1603 "simple-bison-code.tab.c"
    break;

  case 45: /* print_params: pos_elem  */
#line 192 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1609 "simple-bison-code.tab.c"
    break;

  case 46: /* print_params: print_params "," print_params  */
#line 193 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1615 "simple-bison-code.tab.c"
    break;

  case 47: /* decl_func: name_func decl_statement  */
#line 198 "simple-bison-code.y"
                                 { (yyval.sval) = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 1621 "simple-bison-code.tab.c"
    break;

  case 48: /* name_func: SFUNC IDENTIFIER params NEWLINE  */
#line 202 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1627 "simple-bison-code.tab.c"
    break;

  case 49: /* params: "(" ")"  */
#line 206 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1633 "simple-bison-code.tab.c"
    break;

  case 50: /* params: "(" type_params ")"  */
#line 207 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1639 "simple-bison-code.tab.c"
    break;

  case 51: /* type_params: type IDENTIFIER  */
#line 211 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1645 "simple-bison-code.tab.c"
    break;

  case 52: /* type_params: type_params "," type_params  */
#line 212 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1651 "simple-bison-code.tab.c"
    break;

  case 53: /* code: decl_var  */
#line 216 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1657 "simple-bison-code.tab.c"
    break;

  case 54: /* code: build_func  */
#line 217 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1663 "simple-bison-code.tab.c"
    break;

  case 55: /* code: decl_ops  */
#line 218 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1669 "simple-bison-code.tab.c"
    break;

  case 56: /* code: NEWLINE  */
#line 219 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1675 "simple-bison-code.tab.c"
    break;

  case 57: /* decl_ops: arithm_expr  */
#line 224 "simple-bison-code.y"
                                { (yyval.sval) = "\"Αριθμητική έκφραση\""; }
#line 1681 "simple-bison-code.tab.c"
    break;

  case 58: /* decl_ops: assign  */
#line 225 "simple-bison-code.y"
                                { (yyval.sval) = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 1687 "simple-bison-code.tab.c"
    break;

  case 59: /* decl_ops: cmp_expr  */
#line 226 "simple-bison-code.y"
                                { (yyval.sval) = "\"Σύγκριση\""; }
#line 1693 "simple-bison-code.tab.c"
    break;

  case 60: /* decl_ops: merge_arr  */
#line 227 "simple-bison-code.y"
                                { (yyval.sval) = "\"Συνένωση Πινάκων\""; }
#line 1699 "simple-bison-code.tab.c"
    break;

  case 61: /* sign: INTEGER  */
#line 232 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1705 "simple-bison-code.tab.c"
    break;

  case 62: /* sign: FLOAT  */
#line 233 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1711 "simple-bison-code.tab.c"
    break;

  case 63: /* sign: "+" sign  */
#line 234 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1717 "simple-bison-code.tab.c"
    break;

  case 64: /* sign: "-" sign  */
#line 235 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1723 "simple-bison-code.tab.c"
    break;

  case 65: /* arithm_expr: sign  */
#line 239 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1729 "simple-bison-code.tab.c"
    break;

  case 66: /* arithm_expr: IDENTIFIER  */
#line 240 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1735 "simple-bison-code.tab.c"
    break;

  case 67: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 241 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1741 "simple-bison-code.tab.c"
    break;

  case 68: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 242 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1747 "simple-bison-code.tab.c"
    break;

  case 69: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 243 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1753 "simple-bison-code.tab.c"
    break;

  case 70: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 244 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1759 "simple-bison-code.tab.c"
    break;

  case 71: /* number: INTEGER  */
#line 248 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1765 "simple-bison-code.tab.c"
    break;

  case 72: /* number: FLOAT  */
#line 249 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1771 "simple-bison-code.tab.c"
    break;

  case 74: /* changing_val: changing_val "++"  */
#line 254 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1777 "simple-bison-code.tab.c"
    break;

  case 75: /* changing_val: changing_val "--"  */
#line 255 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1783 "simple-bison-code.tab.c"
    break;

  case 76: /* changing_val: "++" changing_val  */
#line 256 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1789 "simple-bison-code.tab.c"
    break;

  case 77: /* changing_val: "--" changing_val  */
#line 257 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1795 "simple-bison-code.tab.c"
    break;

  case 78: /* changing_val: changing_val "+=" number  */
#line 258 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1801 "simple-bison-code.tab.c"
    break;

  case 79: /* changing_val: changing_val "-=" number  */
#line 259 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1807 "simple-bison-code.tab.c"
    break;

  case 80: /* changing_val: changing_val "*=" number  */
#line 260 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1813 "simple-bison-code.tab.c"
    break;

  case 81: /* changing_val: changing_val "/=" number  */
#line 261 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1819 "simple-bison-code.tab.c"
    break;

  case 82: /* assign: var "=" val ";"  */
#line 266 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1825 "simple-bison-code.tab.c"
    break;

  case 83: /* assign: var "=" cmp_expr ";"  */
#line 267 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1831 "simple-bison-code.tab.c"
    break;

  case 84: /* assign: var "=" arithm_expr ";"  */
#line 268 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1837 "simple-bison-code.tab.c"
    break;

  case 85: /* assign: var "=" merge_arr ";"  */
#line 269 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1843 "simple-bison-code.tab.c"
    break;

  case 86: /* val: INTEGER  */
#line 273 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1849 "simple-bison-code.tab.c"
    break;

  case 87: /* val: FLOAT  */
#line 274 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1855 "simple-bison-code.tab.c"
    break;

  case 88: /* val: STRING  */
#line 275 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1861 "simple-bison-code.tab.c"
    break;

  case 89: /* val: arr_elements  */
#line 276 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1867 "simple-bison-code.tab.c"
    break;

  case 90: /* val: val "," val  */
#line 277 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1873 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: INTEGER  */
#line 282 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1879 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: FLOAT  */
#line 283 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1885 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: IDENTIFIER  */
#line 284 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1891 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 285 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1897 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 286 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1903 "simple-bison-code.tab.c"
    break;

  case 96: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 287 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1909 "simple-bison-code.tab.c"
    break;

  case 97: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 288 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1915 "simple-bison-code.tab.c"
    break;

  case 98: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 289 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1921 "simple-bison-code.tab.c"
    break;

  case 99: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 290 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1927 "simple-bison-code.tab.c"
    break;

  case 100: /* merge_arr: arr_elements "+" arr_elements  */
#line 295 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1933 "simple-bison-code.tab.c"
    break;

  case 101: /* decl_statements: decl_statement  */
#line 300 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 1939 "simple-bison-code.tab.c"
    break;

  case 102: /* decl_statements: decl_statements decl_statement  */
#line 301 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[-1].sval); }
#line 1945 "simple-bison-code.tab.c"
    break;

  case 103: /* decl_statement: if_statement  */
#line 305 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 1951 "simple-bison-code.tab.c"
    break;

  case 104: /* decl_statement: while_statement  */
#line 306 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση while\""; }
#line 1957 "simple-bison-code.tab.c"
    break;

  case 105: /* decl_statement: for_statement  */
#line 307 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση for\""; }
#line 1963 "simple-bison-code.tab.c"
    break;

  case 106: /* decl_statement: code  */
#line 308 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1969 "simple-bison-code.tab.c"
    break;

  case 107: /* decl_statement: block_statement  */
#line 309 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1975 "simple-bison-code.tab.c"
    break;

  case 108: /* if_statement: SIF condition decl_statement  */
#line 314 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 1981 "simple-bison-code.tab.c"
    break;

  case 109: /* condition: cmp_expr  */
#line 318 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 1987 "simple-bison-code.tab.c"
    break;

  case 110: /* condition: "(" condition ")"  */
#line 319 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 1993 "simple-bison-code.tab.c"
    break;

  case 111: /* block_statement: "{" decl_statements "}"  */
#line 323 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 1999 "simple-bison-code.tab.c"
    break;

  case 112: /* while_statement: SWHILE condition decl_statement  */
#line 328 "simple-bison-code.y"
                                        { (yyval.sval) = "\"Δήλωση while\""; }
#line 2005 "simple-bison-code.tab.c"
    break;

  case 113: /* for_statement: SFOR "(" assign cmp_expr ";" changing_val ")" decl_statement  */
#line 333 "simple-bison-code.y"
                                                                    { (yyval.sval) = "\"Δήλωση for\""; }
#line 2011 "simple-bison-code.tab.c"
    break;


#line 2015 "simple-bison-code.tab.c"

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

#line 336 "simple-bison-code.y"





/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}

/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
int main(int argc, char **argv)  
{       
        yydebug = 1;

	if (argc == 3)
        {
                if (!(yyin = fopen(argv[1], "r"))) 
                {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                if (!(yyout = fopen(argv[2], "w"))) 
                {
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
		
	int parse = yyparse();

	if (errflag == 0 && parse == 0)
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ     : Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\nΚΩΔΙΚΟΣ ΚΑΤΑΣΤΑΣΗΣ : %d\n", parse);
        else
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ     : Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\nΚΩΔΙΚΟΣ ΚΑΤΑΣΤΑΣΗΣ : %d\n", parse);
        
        fclose(yyin);
        fclose(yyout);

	return 0;
} 
