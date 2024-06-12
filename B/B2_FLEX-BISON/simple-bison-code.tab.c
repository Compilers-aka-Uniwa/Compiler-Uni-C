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
  YYSYMBOL_logic_line = 66,                /* logic_line  */
  YYSYMBOL_decl_var = 67,                  /* decl_var  */
  YYSYMBOL_type = 68,                      /* type  */
  YYSYMBOL_var = 69,                       /* var  */
  YYSYMBOL_pos_elem = 70,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 71,              /* arr_elements  */
  YYSYMBOL_integ = 72,                     /* integ  */
  YYSYMBOL_fl = 73,                        /* fl  */
  YYSYMBOL_str = 74,                       /* str  */
  YYSYMBOL_build_func = 75,                /* build_func  */
  YYSYMBOL_func = 76,                      /* func  */
  YYSYMBOL_scan_params = 77,               /* scan_params  */
  YYSYMBOL_len_params = 78,                /* len_params  */
  YYSYMBOL_cmp_params = 79,                /* cmp_params  */
  YYSYMBOL_print_params = 80,              /* print_params  */
  YYSYMBOL_decl_func = 81,                 /* decl_func  */
  YYSYMBOL_name_func = 82,                 /* name_func  */
  YYSYMBOL_call_func = 83,                 /* call_func  */
  YYSYMBOL_params = 84,                    /* params  */
  YYSYMBOL_type_params = 85,               /* type_params  */
  YYSYMBOL_sign = 86,                      /* sign  */
  YYSYMBOL_arithm_expr = 87,               /* arithm_expr  */
  YYSYMBOL_number = 88,                    /* number  */
  YYSYMBOL_assign = 89,                    /* assign  */
  YYSYMBOL_oper_eq = 90,                   /* oper_eq  */
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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
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
       0,    96,    96,   105,   106,   107,   112,   116,   117,   118,
     119,   120,   124,   125,   130,   131,   135,   136,   137,   138,
     142,   143,   147,   148,   152,   153,   158,   162,   163,   164,
     165,   169,   173,   174,   175,   179,   180,   181,   185,   186,
     187,   188,   189,   190,   191,   196,   200,   201,   205,   208,
     209,   213,   214,   220,   221,   222,   223,   227,   228,   229,
     230,   231,   232,   233,   237,   238,   239,   245,   246,   247,
     248,   252,   253,   254,   255,   256,   257,   258,   259,   263,
     264,   265,   266,   267,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   288,   293,   294,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   312,
     316,   317,   321,   326,   331
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
  "NEWLINE", "UNKNOWN", "$accept", "program", "logic_line", "decl_var",
  "type", "var", "pos_elem", "arr_elements", "integ", "fl", "str",
  "build_func", "func", "scan_params", "len_params", "cmp_params",
  "print_params", "decl_func", "name_func", "call_func", "params",
  "type_params", "sign", "arithm_expr", "number", "assign", "oper_eq",
  "val", "cmp_expr", "merge_arr", "decl_statements", "decl_statement",
  "if_statement", "condition", "block_statement", "while_statement",
  "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     120,  -104,    47,  -104,  -104,  -104,  -104,  -104,   -35,  -104,
      47,   120,    23,    40,    48,    49,  -104,    99,    -1,    -9,
     103,   -11,    51,  -104,  -104,    42,    55,    61,   120,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,    79,    47,   214,
     120,   103,   120,   102,   121,    18,    29,    26,  -104,  -104,
    -104,  -104,    75,   164,   103,  -104,    89,    18,  -104,  -104,
    -104,  -104,  -104,    93,    79,    79,    79,    79,    79,    79,
      79,    79,  -104,    90,  -104,  -104,  -104,    98,   108,  -104,
    -104,  -104,  -104,  -104,    14,  -104,  -104,    22,  -104,   107,
    -104,  -104,    66,   163,  -104,   173,   174,   145,   145,  -104,
     126,  -104,   251,  -104,   128,   214,  -104,  -104,   172,    92,
      70,  -104,  -104,  -104,   231,  -104,   224,  -104,   254,   254,
      79,  -104,    44,  -104,    18,  -104,  -104,  -104,  -104,     8,
      87,    97,  -104,  -104,    26,  -104,  -104,  -104,  -104,   135,
     104,   104,   104,   104,   104,     7,  -104,   184,    86,  -104,
    -104,   207,   136,   143,  -104,  -104,   200,  -104,   202,  -104,
     217,  -104,  -104,  -104,    54,    54,  -104,  -104,  -104,   108,
    -104,  -104,  -104,  -104,  -104,  -104,   263,    17,  -104,  -104,
    -104,  -104,  -104,  -104,   103,   103,   188,   161,    75,    75,
     171,  -104,   171,   171,   171,  -104,   120,   108,  -104,  -104,
    -104,  -104,  -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,     0,     9,     7,    46,    11,     8,     0,    10,
       0,     0,     0,     0,     0,     0,   108,     0,     2,     0,
       0,     0,     0,    26,   104,     0,     0,     0,     3,    97,
      99,   107,   100,   101,    86,    84,    85,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     4,
       5,   102,     6,     0,     0,   103,    12,     0,    45,   105,
     106,    98,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,   113,   112,    31,     0,    39,    38,
      40,    41,    43,    42,     0,    34,    33,     0,    32,     0,
      36,    35,     0,    86,    81,    84,    85,     0,     0,    66,
      82,    57,    69,    79,    67,    68,    70,    13,     0,     0,
       0,   111,    88,    87,    94,    89,    93,    90,    91,    92,
       0,    27,     0,    30,     0,    24,    20,    22,    16,     0,
       0,     0,    28,    29,     0,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    47,
      48,     0,     0,     0,    44,    17,     0,    18,     0,    19,
       0,    37,    96,    58,    59,    60,    61,    62,    63,    80,
      64,    65,    82,    83,    51,    50,     0,     0,    15,    14,
      21,    23,    25,    52,     0,     0,     0,     0,    74,    73,
       0,    72,     0,     0,     0,    71,     0,     0,    77,    78,
      75,    76,   114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,  -104,  -103,   -19,   -41,   -51,    76,    80,
      74,  -104,   -38,  -104,  -104,   124,   -49,  -104,  -104,  -104,
    -104,    64,   -27,    83,   106,   196,  -104,    96,   -28,  -104,
     257,   -25,  -104,    -4,  -104,  -104,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    17,    18,    19,    20,    21,    99,    88,   129,   130,
     131,    22,    23,    77,    89,    92,    84,    24,    25,    26,
     109,   148,   101,   102,   103,    27,   187,   104,    39,   106,
      28,    29,    30,    40,    31,    32,    33
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    52,   100,    61,    82,   147,    42,    83,   110,    62,
     169,    94,   170,   171,    41,    72,    82,    74,    61,    83,
       1,    78,    79,    80,    81,   105,   125,   126,   127,    90,
      91,    53,    85,    86,    63,   107,   112,   113,   114,   115,
     116,   117,   118,   119,    54,    56,   184,   152,    51,   153,
      34,     2,    35,    36,     3,     4,    49,     5,    87,     6,
     155,    50,     7,   156,   123,   185,     8,     9,    10,   124,
     137,   138,    44,   147,   128,   154,    12,    13,    14,    15,
      87,    37,    34,    82,    35,    36,    83,   142,   162,    45,
     143,    57,   151,   144,   172,    11,    38,    46,    47,    48,
      12,    13,    14,    15,    16,     1,     1,   163,    55,   135,
     136,     2,    59,    37,     3,     4,   133,     5,    60,     6,
     150,   134,     7,     1,    76,   124,     8,     9,    10,     2,
      54,    97,     3,     4,    98,     5,   175,     6,   108,   157,
       7,   176,   158,   111,     8,     9,    10,   120,   121,   159,
     135,   136,   160,   139,   149,    11,    75,   132,   186,   122,
      12,    13,    14,    15,    16,   188,   189,    93,    94,    95,
      96,   202,    97,    11,   197,    98,   170,   171,    12,    13,
      14,    15,    16,   145,     3,     4,    87,   174,   178,     6,
     -58,    97,     7,   -58,    98,   179,   -58,     9,    37,   -58,
     -53,   -54,   -58,   -53,   -54,   126,   -53,   -54,   127,   -53,
     -54,   196,   -53,   -54,   122,    87,   190,   191,   -80,   192,
     -58,   125,   146,   164,   165,   166,   167,   168,   -64,   -65,
     -53,   -54,   180,   193,   182,   194,   195,    73,   181,    64,
     183,   173,    65,    54,    66,    67,    64,    68,    69,    65,
      70,    66,    67,    71,    68,    69,    64,    70,   161,    65,
      71,    66,    67,    64,   177,    69,    65,    70,    43,    67,
      71,     0,    69,     0,    70,     3,     4,    71,   140,     0,
       6,   141,     0,     7,   142,     0,    64,   143,     9,    65,
     144,     0,    67,     0,     0,    69,   198,     0,   199,   200,
     201
};

static const yytype_int16 yycheck[] =
{
      25,    20,    53,    28,    45,   108,    10,    45,    57,    37,
       3,     4,     5,     6,    49,    40,    57,    42,    43,    57,
       3,     3,     4,     5,     6,    53,     4,     5,     6,     3,
       4,    42,     3,     4,    38,    54,    64,    65,    66,    67,
      68,    69,    70,    71,    55,     3,    29,     3,    57,     5,
       3,     9,     5,     6,    12,    13,    57,    15,    51,    17,
      52,    62,    20,    55,    50,    48,    24,    25,    26,    55,
      97,    98,    49,   176,    52,   124,    58,    59,    60,    61,
      51,    34,     3,   124,     5,     6,   124,    33,   139,    49,
      36,    49,   120,    39,   145,    53,    49,    49,    49,     0,
      58,    59,    60,    61,    62,     3,     3,     3,    57,     5,
       6,     9,    57,    34,    12,    13,    50,    15,    57,    17,
      50,    55,    20,     3,     3,    55,    24,    25,    26,     9,
      55,    27,    12,    13,    30,    15,    50,    17,    49,    52,
      20,    55,    55,    50,    24,    25,    26,    57,    50,    52,
       5,     6,    55,    27,    62,    53,    54,    50,   177,    51,
      58,    59,    60,    61,    62,   184,   185,     3,     4,     5,
       6,   196,    27,    53,     3,    30,     5,     6,    58,    59,
      60,    61,    62,    55,    12,    13,    51,     3,    52,    17,
      27,    27,    20,    30,    30,    52,    33,    25,    34,    36,
      27,    27,    39,    30,    30,     5,    33,    33,     6,    36,
      36,    50,    39,    39,    51,    51,    28,    29,    55,    31,
      57,     4,    50,   140,   141,   142,   143,   144,    55,    55,
      57,    57,   156,    45,   160,    47,    48,    41,   158,    32,
     176,   145,    35,    55,    37,    38,    32,    40,    41,    35,
      43,    37,    38,    46,    40,    41,    32,    43,   134,    35,
      46,    37,    38,    32,    57,    41,    35,    43,    11,    38,
      46,    -1,    41,    -1,    43,    12,    13,    46,    27,    -1,
      17,    30,    -1,    20,    33,    -1,    32,    36,    25,    35,
      39,    -1,    38,    -1,    -1,    41,   190,    -1,   192,   193,
     194
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     9,    12,    13,    15,    17,    20,    24,    25,
      26,    53,    58,    59,    60,    61,    62,    65,    66,    67,
      68,    69,    75,    76,    81,    82,    83,    89,    94,    95,
      96,    98,    99,   100,     3,     5,     6,    34,    49,    92,
      97,    49,    97,    94,    49,    49,    49,    49,     0,    57,
      62,    57,    69,    42,    55,    57,     3,    49,    95,    57,
      57,    95,    92,    97,    32,    35,    37,    38,    40,    41,
      43,    46,    95,    89,    95,    54,     3,    77,     3,     4,
       5,     6,    70,    76,    80,     3,     4,    51,    71,    78,
       3,     4,    79,     3,     4,     5,     6,    27,    30,    70,
      71,    86,    87,    88,    91,    92,    93,    69,    49,    84,
      80,    50,    92,    92,    92,    92,    92,    92,    92,    92,
      57,    50,    51,    50,    55,     4,     5,     6,    52,    72,
      73,    74,    50,    50,    55,     5,     6,    86,    86,    27,
      27,    30,    33,    36,    39,    55,    50,    68,    85,    62,
      50,    92,     3,     5,    80,    52,    55,    52,    55,    52,
      55,    79,    71,     3,    87,    87,    87,    87,    87,     3,
       5,     6,    71,    91,     3,    50,    55,    57,    52,    52,
      72,    73,    74,    85,    29,    48,    69,    90,    69,    69,
      28,    29,    31,    45,    47,    48,    50,     3,    88,    88,
      88,    88,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    67,    68,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    76,    76,    76,
      76,    77,    78,    78,    78,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      97,    97,    98,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     2,     3,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     4,     4,     2,
       3,     2,     3,     1,     1,     2,     2,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     2,     1,
       1,     1,     2,     2,     1,     2,     2,     1,     1,     3,
       1,     3,     3,     3,     9
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
  case 2: /* program: logic_line  */
#line 96 "simple-bison-code.y"
                                     { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[0].sval)); }
#line 1348 "simple-bison-code.tab.c"
    break;

  case 3: /* logic_line: decl_statements  */
#line 105 "simple-bison-code.y"
                                { (yyval.sval) = (yyvsp[0].sval); }
#line 1354 "simple-bison-code.tab.c"
    break;

  case 4: /* logic_line: logic_line ";"  */
#line 106 "simple-bison-code.y"
                                { (yyval.sval) = (yyvsp[-1].sval); }
#line 1360 "simple-bison-code.tab.c"
    break;

  case 5: /* logic_line: logic_line NEWLINE  */
#line 107 "simple-bison-code.y"
                                { (yyval.sval) = (yyvsp[-1].sval); }
#line 1366 "simple-bison-code.tab.c"
    break;

  case 6: /* decl_var: type var  */
#line 112 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1372 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SINT  */
#line 116 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1378 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SFLOAT  */
#line 117 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1384 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SDOUBLE  */
#line 118 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1390 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SSHORT  */
#line 119 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1396 "simple-bison-code.tab.c"
    break;

  case 11: /* type: SLONG  */
#line 120 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1402 "simple-bison-code.tab.c"
    break;

  case 12: /* var: IDENTIFIER  */
#line 124 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1408 "simple-bison-code.tab.c"
    break;

  case 13: /* var: var "," var  */
#line 125 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1414 "simple-bison-code.tab.c"
    break;

  case 14: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 130 "simple-bison-code.y"
                                             { (yyval.sval) = strdup(yytext); }
#line 1420 "simple-bison-code.tab.c"
    break;

  case 15: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 131 "simple-bison-code.y"
                                             { (yyval.sval) = strdup(yytext); }
#line 1426 "simple-bison-code.tab.c"
    break;

  case 16: /* arr_elements: "[" "]"  */
#line 135 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1432 "simple-bison-code.tab.c"
    break;

  case 17: /* arr_elements: "[" integ "]"  */
#line 136 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1438 "simple-bison-code.tab.c"
    break;

  case 18: /* arr_elements: "[" fl "]"  */
#line 137 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1444 "simple-bison-code.tab.c"
    break;

  case 19: /* arr_elements: "[" str "]"  */
#line 138 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1450 "simple-bison-code.tab.c"
    break;

  case 20: /* integ: INTEGER  */
#line 142 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1456 "simple-bison-code.tab.c"
    break;

  case 21: /* integ: integ "," integ  */
#line 143 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1462 "simple-bison-code.tab.c"
    break;

  case 22: /* fl: FLOAT  */
#line 147 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1468 "simple-bison-code.tab.c"
    break;

  case 23: /* fl: fl "," fl  */
#line 148 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1474 "simple-bison-code.tab.c"
    break;

  case 24: /* str: STRING  */
#line 152 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1480 "simple-bison-code.tab.c"
    break;

  case 25: /* str: str "," str  */
#line 153 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1486 "simple-bison-code.tab.c"
    break;

  case 26: /* build_func: func  */
#line 158 "simple-bison-code.y"
              { (yyval.sval) = strdup(yytext); }
#line 1492 "simple-bison-code.tab.c"
    break;

  case 27: /* func: SSCAN "(" scan_params ")"  */
#line 162 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1498 "simple-bison-code.tab.c"
    break;

  case 28: /* func: SLEN "(" len_params ")"  */
#line 163 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1504 "simple-bison-code.tab.c"
    break;

  case 29: /* func: SCMP "(" cmp_params ")"  */
#line 164 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1510 "simple-bison-code.tab.c"
    break;

  case 30: /* func: SPRINT "(" print_params ")"  */
#line 165 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1516 "simple-bison-code.tab.c"
    break;

  case 31: /* scan_params: IDENTIFIER  */
#line 169 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1522 "simple-bison-code.tab.c"
    break;

  case 32: /* len_params: arr_elements  */
#line 173 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1528 "simple-bison-code.tab.c"
    break;

  case 33: /* len_params: STRING  */
#line 174 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1534 "simple-bison-code.tab.c"
    break;

  case 34: /* len_params: IDENTIFIER  */
#line 175 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1540 "simple-bison-code.tab.c"
    break;

  case 35: /* cmp_params: STRING  */
#line 179 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1546 "simple-bison-code.tab.c"
    break;

  case 36: /* cmp_params: IDENTIFIER  */
#line 180 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1552 "simple-bison-code.tab.c"
    break;

  case 37: /* cmp_params: cmp_params "," cmp_params  */
#line 181 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1558 "simple-bison-code.tab.c"
    break;

  case 38: /* print_params: STRING  */
#line 185 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1564 "simple-bison-code.tab.c"
    break;

  case 39: /* print_params: IDENTIFIER  */
#line 186 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1570 "simple-bison-code.tab.c"
    break;

  case 40: /* print_params: INTEGER  */
#line 187 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1576 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: FLOAT  */
#line 188 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1582 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: func  */
#line 189 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1588 "simple-bison-code.tab.c"
    break;

  case 43: /* print_params: pos_elem  */
#line 190 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1594 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: print_params "," print_params  */
#line 191 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1600 "simple-bison-code.tab.c"
    break;

  case 45: /* decl_func: name_func decl_statement  */
#line 196 "simple-bison-code.y"
                                 { (yyval.sval) = strdup(yytext); }
#line 1606 "simple-bison-code.tab.c"
    break;

  case 46: /* name_func: SFUNC  */
#line 200 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1612 "simple-bison-code.tab.c"
    break;

  case 47: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 201 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1618 "simple-bison-code.tab.c"
    break;

  case 48: /* call_func: name_func "(" print_params ")"  */
#line 205 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1624 "simple-bison-code.tab.c"
    break;

  case 49: /* params: "(" ")"  */
#line 208 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1630 "simple-bison-code.tab.c"
    break;

  case 50: /* params: "(" type_params ")"  */
#line 209 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1636 "simple-bison-code.tab.c"
    break;

  case 51: /* type_params: type IDENTIFIER  */
#line 213 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1642 "simple-bison-code.tab.c"
    break;

  case 52: /* type_params: type_params "," type_params  */
#line 214 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1648 "simple-bison-code.tab.c"
    break;

  case 53: /* sign: INTEGER  */
#line 220 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1654 "simple-bison-code.tab.c"
    break;

  case 54: /* sign: FLOAT  */
#line 221 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1660 "simple-bison-code.tab.c"
    break;

  case 55: /* sign: "+" sign  */
#line 222 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1666 "simple-bison-code.tab.c"
    break;

  case 56: /* sign: "-" sign  */
#line 223 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1672 "simple-bison-code.tab.c"
    break;

  case 57: /* arithm_expr: sign  */
#line 227 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1678 "simple-bison-code.tab.c"
    break;

  case 58: /* arithm_expr: IDENTIFIER  */
#line 228 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1684 "simple-bison-code.tab.c"
    break;

  case 59: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 229 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1690 "simple-bison-code.tab.c"
    break;

  case 60: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 230 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1696 "simple-bison-code.tab.c"
    break;

  case 61: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 231 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1702 "simple-bison-code.tab.c"
    break;

  case 62: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 232 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1708 "simple-bison-code.tab.c"
    break;

  case 63: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 233 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1714 "simple-bison-code.tab.c"
    break;

  case 64: /* number: INTEGER  */
#line 237 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1720 "simple-bison-code.tab.c"
    break;

  case 65: /* number: FLOAT  */
#line 238 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1726 "simple-bison-code.tab.c"
    break;

  case 66: /* number: pos_elem  */
#line 239 "simple-bison-code.y"
                   { (yyval.sval) = strdup(yytext); }
#line 1732 "simple-bison-code.tab.c"
    break;

  case 67: /* assign: var "=" val  */
#line 245 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Ανάθεση τιμής σε μεταβλητή\"\n\n", line-1); }
#line 1738 "simple-bison-code.tab.c"
    break;

  case 68: /* assign: var "=" cmp_expr  */
#line 246 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Σύγκριση\"\n\n", line-1); }
#line 1744 "simple-bison-code.tab.c"
    break;

  case 69: /* assign: var "=" arithm_expr  */
#line 247 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Αριθμητική έκφραση\"\n\n", line-1); }
#line 1750 "simple-bison-code.tab.c"
    break;

  case 70: /* assign: var "=" merge_arr  */
#line 248 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Συνένωση πινάκων\"\n\n", line-1); }
#line 1756 "simple-bison-code.tab.c"
    break;

  case 71: /* oper_eq: var "++"  */
#line 252 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1762 "simple-bison-code.tab.c"
    break;

  case 72: /* oper_eq: var "--"  */
#line 253 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1768 "simple-bison-code.tab.c"
    break;

  case 73: /* oper_eq: "++" var  */
#line 254 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1774 "simple-bison-code.tab.c"
    break;

  case 74: /* oper_eq: "--" var  */
#line 255 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1780 "simple-bison-code.tab.c"
    break;

  case 75: /* oper_eq: var "+=" number  */
#line 256 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1786 "simple-bison-code.tab.c"
    break;

  case 76: /* oper_eq: var "-=" number  */
#line 257 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1792 "simple-bison-code.tab.c"
    break;

  case 77: /* oper_eq: var "*=" number  */
#line 258 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1798 "simple-bison-code.tab.c"
    break;

  case 78: /* oper_eq: var "/=" number  */
#line 259 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1804 "simple-bison-code.tab.c"
    break;

  case 79: /* val: number  */
#line 263 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1810 "simple-bison-code.tab.c"
    break;

  case 80: /* val: IDENTIFIER  */
#line 264 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1816 "simple-bison-code.tab.c"
    break;

  case 81: /* val: STRING  */
#line 265 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1822 "simple-bison-code.tab.c"
    break;

  case 82: /* val: arr_elements  */
#line 266 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1828 "simple-bison-code.tab.c"
    break;

  case 83: /* val: val "," val  */
#line 267 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1834 "simple-bison-code.tab.c"
    break;

  case 84: /* cmp_expr: INTEGER  */
#line 272 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1840 "simple-bison-code.tab.c"
    break;

  case 85: /* cmp_expr: FLOAT  */
#line 273 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1846 "simple-bison-code.tab.c"
    break;

  case 86: /* cmp_expr: IDENTIFIER  */
#line 274 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1852 "simple-bison-code.tab.c"
    break;

  case 87: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 275 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1858 "simple-bison-code.tab.c"
    break;

  case 88: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 276 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1864 "simple-bison-code.tab.c"
    break;

  case 89: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 277 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1870 "simple-bison-code.tab.c"
    break;

  case 90: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 278 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1876 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 279 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1882 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 280 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1888 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 281 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1894 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 282 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1900 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: "!" cmp_expr  */
#line 283 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1906 "simple-bison-code.tab.c"
    break;

  case 96: /* merge_arr: arr_elements "+" arr_elements  */
#line 288 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1912 "simple-bison-code.tab.c"
    break;

  case 97: /* decl_statements: decl_statement  */
#line 293 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 1918 "simple-bison-code.tab.c"
    break;

  case 98: /* decl_statements: decl_statements decl_statement  */
#line 294 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[-1].sval); }
#line 1924 "simple-bison-code.tab.c"
    break;

  case 99: /* decl_statement: if_statement  */
#line 298 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση if\"\n\n", line-1); }
#line 1930 "simple-bison-code.tab.c"
    break;

  case 100: /* decl_statement: while_statement  */
#line 299 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση while\"\n\n", line-1); }
#line 1936 "simple-bison-code.tab.c"
    break;

  case 101: /* decl_statement: for_statement  */
#line 300 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση for\"\n\n", line-1); }
#line 1942 "simple-bison-code.tab.c"
    break;

  case 102: /* decl_statement: decl_var ";"  */
#line 301 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση μεταβλητής\"\n\n", line-1); }
#line 1948 "simple-bison-code.tab.c"
    break;

  case 103: /* decl_statement: build_func ";"  */
#line 302 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Ενσωματωμένη απλή συνάρτηση\"\n\n", line-1); }
#line 1954 "simple-bison-code.tab.c"
    break;

  case 104: /* decl_statement: decl_func  */
#line 303 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση συναρτήσεων χρήστη\"\n\n", line-1); }
#line 1960 "simple-bison-code.tab.c"
    break;

  case 105: /* decl_statement: call_func ";"  */
#line 304 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); fprintf(yyout, "[BISON] Line=%d, expression=\"Κλήση συναρτήσεων χρήστη\"\n\n", line-1); }
#line 1966 "simple-bison-code.tab.c"
    break;

  case 106: /* decl_statement: assign ";"  */
#line 305 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[-1].sval); }
#line 1972 "simple-bison-code.tab.c"
    break;

  case 107: /* decl_statement: block_statement  */
#line 306 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 1978 "simple-bison-code.tab.c"
    break;

  case 108: /* decl_statement: NEWLINE  */
#line 307 "simple-bison-code.y"
                                         { }
#line 1984 "simple-bison-code.tab.c"
    break;

  case 109: /* if_statement: SIF condition decl_statement  */
#line 312 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1990 "simple-bison-code.tab.c"
    break;

  case 110: /* condition: cmp_expr  */
#line 316 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 1996 "simple-bison-code.tab.c"
    break;

  case 111: /* condition: "(" condition ")"  */
#line 317 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2002 "simple-bison-code.tab.c"
    break;

  case 112: /* block_statement: "{" decl_statements "}"  */
#line 321 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 2008 "simple-bison-code.tab.c"
    break;

  case 113: /* while_statement: SWHILE condition decl_statement  */
#line 326 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 2014 "simple-bison-code.tab.c"
    break;

  case 114: /* for_statement: SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement  */
#line 331 "simple-bison-code.y"
                                                                    { (yyval.sval) = strdup(yytext); }
#line 2020 "simple-bison-code.tab.c"
    break;


#line 2024 "simple-bison-code.tab.c"

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

#line 334 "simple-bison-code.y"





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
