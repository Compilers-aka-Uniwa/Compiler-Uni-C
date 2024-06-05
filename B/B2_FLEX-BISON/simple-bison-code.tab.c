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
#line 19 "simple-bison-code.y"

/* Ορισμοί και δηλώσεις γλώσσας C. Οτιδήποτε έχει να κάνει με ορισμό ή αρχικοποίηση
   μεταβλητών & συναρτήσεων, αρχεία header και δηλώσεις #define μπαίνει σε αυτό το σημείο */
        
        #include <stdio.h>
	#include <stdlib.h>
	#define YYSTATE char*
        #define YYDEBUG 1
	
	int line = 1;
	int errflag = 0;
	extern char *yytext;
	
	/* === ΠΙΝΑΚΑΣ ΣΥΜΒΟΛΩΝ === */
	char* sym[] = 
	{ "break", "do", "if", "sizeof", "case", "double", "int", "struct", "func", "else", 
	  "long", "switch", "const", "float", "return", "void", "continue", "for", "short", "while", 
	  "+", "*=", "--", "-", "/=", "<", "*", "!", ">", "/", "&&", "<=", "%", "||", ">=", "=", "==", 
	  "&", "+=", "!=", "-=", "++" };
	
	void yyerror(char *);

#line 94 "simple-bison-code.tab.c"

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
  YYSYMBOL_SCAN = 3,                       /* SCAN  */
  YYSYMBOL_LEN = 4,                        /* LEN  */
  YYSYMBOL_CMP = 5,                        /* CMP  */
  YYSYMBOL_PRINT = 6,                      /* PRINT  */
  YYSYMBOL_IDENTIFIER = 7,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_INTEGER = 9,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_SIZEOF = 14,                    /* SIZEOF  */
  YYSYMBOL_CASE = 15,                      /* CASE  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_INT = 17,                       /* INT  */
  YYSYMBOL_STRUCT = 18,                    /* STRUCT  */
  YYSYMBOL_FUNC = 19,                      /* FUNC  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_LONG = 21,                      /* LONG  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CONST = 23,                     /* CONST  */
  YYSYMBOL_FLOAT_KEY = 24,                 /* FLOAT_KEY  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_VOID = 26,                      /* VOID  */
  YYSYMBOL_CONTINUE = 27,                  /* CONTINUE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_SHORT = 29,                     /* SHORT  */
  YYSYMBOL_WHILE = 30,                     /* WHILE  */
  YYSYMBOL_PLUS = 31,                      /* "+"  */
  YYSYMBOL_MULEQ = 32,                     /* "*="  */
  YYSYMBOL_PMINEQ = 33,                    /* "--"  */
  YYSYMBOL_MINUS = 34,                     /* "-"  */
  YYSYMBOL_DIVEQ = 35,                     /* "/="  */
  YYSYMBOL_LT = 36,                        /* "<"  */
  YYSYMBOL_MUL = 37,                       /* "*"  */
  YYSYMBOL_NOT = 38,                       /* "!"  */
  YYSYMBOL_GT = 39,                        /* ">"  */
  YYSYMBOL_DIV = 40,                       /* "/"  */
  YYSYMBOL_AND = 41,                       /* "&&"  */
  YYSYMBOL_LEQ = 42,                       /* "<="  */
  YYSYMBOL_MOD = 43,                       /* "%"  */
  YYSYMBOL_OR = 44,                        /* "||"  */
  YYSYMBOL_GREQ = 45,                      /* ">="  */
  YYSYMBOL_ASSIGNOP = 46,                  /* "="  */
  YYSYMBOL_EQUAL = 47,                     /* "=="  */
  YYSYMBOL_ADDROP = 48,                    /* "&"  */
  YYSYMBOL_PLUSEQ = 49,                    /* "+="  */
  YYSYMBOL_NOTEQ = 50,                     /* "!="  */
  YYSYMBOL_MINEQ = 51,                     /* "-="  */
  YYSYMBOL_PPLUSEQ = 52,                   /* "++"  */
  YYSYMBOL_OPEN_PARENTHESIS = 53,          /* "("  */
  YYSYMBOL_CLOSE_PARENTHESIS = 54,         /* ")"  */
  YYSYMBOL_OPEN_SQ_BRACKET = 55,           /* "["  */
  YYSYMBOL_CLOSE_SQ_BRACKET = 56,          /* "]"  */
  YYSYMBOL_OPEN_CU_BRACKET = 57,           /* "{"  */
  YYSYMBOL_CLOSE_CU_BRACKET = 58,          /* "}"  */
  YYSYMBOL_COMMA = 59,                     /* ","  */
  YYSYMBOL_BACKSLASH = 60,                 /* "\\"  */
  YYSYMBOL_DELIMITER = 61,                 /* ";"  */
  YYSYMBOL_NEWLINE = 62,                   /* NEWLINE  */
  YYSYMBOL_END_OF_FILE = 63,               /* END_OF_FILE  */
  YYSYMBOL_UNKNOWN = 64,                   /* UNKNOWN  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program = 66,                   /* program  */
  YYSYMBOL_decl_arr = 67,                  /* decl_arr  */
  YYSYMBOL_pos_elem = 68,                  /* pos_elem  */
  YYSYMBOL_elements = 69,                  /* elements  */
  YYSYMBOL_arr_int = 70,                   /* arr_int  */
  YYSYMBOL_arr_fl = 71,                    /* arr_fl  */
  YYSYMBOL_arr_str = 72,                   /* arr_str  */
  YYSYMBOL_build_func = 73,                /* build_func  */
  YYSYMBOL_func = 74,                      /* func  */
  YYSYMBOL_scan_params = 75,               /* scan_params  */
  YYSYMBOL_len_params = 76,                /* len_params  */
  YYSYMBOL_cmp_params = 77,                /* cmp_params  */
  YYSYMBOL_print_params = 78,              /* print_params  */
  YYSYMBOL_decl_var = 79,                  /* decl_var  */
  YYSYMBOL_type = 80,                      /* type  */
  YYSYMBOL_var = 81,                       /* var  */
  YYSYMBOL_decl_operations = 82,           /* decl_operations  */
  YYSYMBOL_type_of_op = 83                 /* type_of_op  */
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
#define YYLAST   122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   108,   109,   110,   114,
     117,   119,   120,   121,   122,   125,   126,   129,   130,   133,
     134,   138,   141,   142,   143,   144,   147,   150,   151,   152,
     155,   156,   157,   160,   161,   162,   163,   164,   165,   170,
     173,   174,   175,   176,   177,   180,   181,   186,   188,   188,
     188,   188,   189,   189,   189,   189,   190,   190,   190,   190,
     191,   191,   191,   191,   192,   192,   192,   192,   193,   193,
     193,   193,   194,   194,   194,   194,   195,   195,   195,   195,
     196,   196,   196,   196
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
  "\"end of file\"", "error", "\"invalid token\"", "SCAN", "LEN", "CMP",
  "PRINT", "IDENTIFIER", "STRING", "INTEGER", "FLOAT", "BREAK", "DO", "IF",
  "SIZEOF", "CASE", "DOUBLE", "INT", "STRUCT", "FUNC", "ELSE", "LONG",
  "SWITCH", "CONST", "FLOAT_KEY", "RETURN", "VOID", "CONTINUE", "FOR",
  "SHORT", "WHILE", "\"+\"", "\"*=\"", "\"--\"", "\"-\"", "\"/=\"",
  "\"<\"", "\"*\"", "\"!\"", "\">\"", "\"/\"", "\"&&\"", "\"<=\"", "\"%\"",
  "\"||\"", "\">=\"", "\"=\"", "\"==\"", "\"&\"", "\"+=\"", "\"!=\"",
  "\"-=\"", "\"++\"", "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"",
  "\",\"", "\"\\\\\"", "\";\"", "NEWLINE", "END_OF_FILE", "UNKNOWN",
  "$accept", "program", "decl_arr", "pos_elem", "elements", "arr_int",
  "arr_fl", "arr_str", "build_func", "func", "scan_params", "len_params",
  "cmp_params", "print_params", "decl_var", "type", "var",
  "decl_operations", "type_of_op", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-49)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -49,     0,   -49,   -45,   -27,   -22,    -2,   -12,    -4,     1,
     -49,   -49,   -49,   -49,   -49,   -49,   -48,    -7,     7,     2,
      65,    14,    19,    77,    -6,    97,    39,    30,    43,    47,
      51,    33,    56,    60,    64,    68,    72,    76,    80,    84,
     -49,   -49,   -49,   -49,   -49,    42,   -49,   -49,   -49,    44,
     -49,   -49,     3,   -49,    48,   -49,   -49,   -39,    52,   -49,
     -49,   -49,   -49,   -36,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,    45,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,    65,   -49,   -49,   -49,   -49,   -49,   -49,    36,    40,
      41,   -49,   -49,    97,    99,   -49,    39,   -49,   -49,   -49,
     100,   -49,   101,   -49,   102,   -49,    57,   -49,   -49,   -49,
     -49,   -49
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,     1,     0,     0,     0,     0,     0,     0,     0,
      42,    40,    44,    41,    43,     6,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     5,    21,     2,    45,     0,     8,    47,    26,     0,
      29,    28,     0,    27,     0,    31,    30,     0,    34,    33,
      35,    37,    36,     0,    56,    68,    80,    57,    69,    81,
      58,    70,    82,    59,    71,    83,     0,    72,    48,    60,
      73,    49,    61,    74,    50,    62,    75,    51,    63,    76,
      64,    52,    77,    65,    53,    78,    66,    54,    79,    67,
      55,     0,    39,    22,    19,    15,    17,    11,     0,     0,
       0,    23,    24,     0,     0,    25,     0,     9,    46,    12,
       0,    13,     0,    14,     0,    32,     0,    38,    16,    18,
      20,    10
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -49,   -49,   -49,   -49,    81,    -5,    -8,    -3,   -49,   115,
     -49,   -49,     4,     6,   -49,   -49,    17,   -49,   -49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    16,    61,    53,   108,   109,   110,    17,    62,
      49,    54,    57,    63,    19,    20,    45,    21,    22
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       2,    50,    51,     3,     4,     5,     6,     7,    23,     8,
       9,   104,   105,   106,    40,   112,    10,    11,   115,    27,
     113,    12,    28,   116,    13,    29,    24,    32,    30,    14,
      33,    25,    36,    34,    31,    37,    35,    64,    38,    65,
      66,    39,     3,     4,     5,     6,    58,    59,    60,    52,
      67,    26,    68,    69,    70,    41,    71,    72,    73,   107,
      74,    75,    15,    77,    43,    78,    79,    80,    42,    81,
      82,    83,    44,    84,    85,    86,    46,    87,    88,    89,
      47,    90,    91,    92,    48,    93,    94,    95,    52,    96,
      97,    98,   119,    99,   100,   120,   121,   123,   103,   122,
     124,   101,   111,   102,    55,    56,   117,   114,   126,   105,
     104,   106,    76,   131,   129,   128,    18,   125,   118,     0,
       0,   130,   127
};

static const yytype_int8 yycheck[] =
{
       0,     7,     8,     3,     4,     5,     6,     7,    53,     9,
      10,     8,     9,    10,    62,    54,    16,    17,    54,    31,
      59,    21,    34,    59,    24,    37,    53,    31,    40,    29,
      34,    53,    31,    37,    46,    34,    40,     7,    37,     9,
      10,    40,     3,     4,     5,     6,     7,     8,     9,    55,
       7,    53,     9,    10,     7,    62,     9,    10,     7,    56,
       9,    10,    62,     7,    62,     9,    10,     7,    61,     9,
      10,     7,     7,     9,    10,     7,    62,     9,    10,     7,
      61,     9,    10,     7,     7,     9,    10,     7,    55,     9,
      10,     7,    56,     9,    10,    59,    56,    56,    54,    59,
      59,    59,    54,    61,     7,     8,    61,    55,     9,     9,
       8,    10,    31,    56,   122,   120,     1,   113,   101,    -1,
      -1,   124,   116
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    66,     0,     3,     4,     5,     6,     7,     9,    10,
      16,    17,    21,    24,    29,    62,    67,    73,    74,    79,
      80,    82,    83,    53,    53,    53,    53,    31,    34,    37,
      40,    46,    31,    34,    37,    40,    31,    34,    37,    40,
      62,    62,    61,    62,     7,    81,    62,    61,     7,    75,
       7,     8,    55,    69,    76,     7,     8,    77,     7,     8,
       9,    68,    74,    78,     7,     9,    10,     7,     9,    10,
       7,     9,    10,     7,     9,    10,    69,     7,     9,    10,
       7,     9,    10,     7,     9,    10,     7,     9,    10,     7,
       9,    10,     7,     9,    10,     7,     9,    10,     7,     9,
      10,    59,    61,    54,     8,     9,    10,    56,    70,    71,
      72,    54,    54,    59,    55,    54,    59,    61,    81,    56,
      59,    56,    59,    56,    59,    77,     9,    78,    70,    71,
      72,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    66,    66,    67,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    74,    74,    74,    74,    75,    76,    76,    76,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    80,    80,    81,    81,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     3,     2,     0,     3,     4,
       4,     2,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     2,     4,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
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
#line 104 "simple-bison-code.y"
                                 { printf("[BISON] ΔΗΛΩΣΗ ΜΕΤΑΒΛΗΤΗΣ\n"); }
#line 1256 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program decl_arr NEWLINE  */
#line 105 "simple-bison-code.y"
                                   { printf("[BISON] ΔΗΛΩΣΗ ΠΙΝΑΚΑ\n"); }
#line 1262 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program decl_arr  */
#line 106 "simple-bison-code.y"
                            { printf("[BISON] ΘΕΣΗ ΠΙΝΑΚΑ\n"); }
#line 1268 "simple-bison-code.tab.c"
    break;

  case 5: /* program: program build_func NEWLINE  */
#line 107 "simple-bison-code.y"
                                     { printf("[BISON] ΔΗΛΩΣΗ ΣΥΝΑΡΤΗΣΗΣ\n"); }
#line 1274 "simple-bison-code.tab.c"
    break;

  case 6: /* program: program NEWLINE  */
#line 108 "simple-bison-code.y"
                                       { printf("[BISON] ΑΛΛΑΓΗ ΓΡΑΜΜΗΣ\n"); }
#line 1280 "simple-bison-code.tab.c"
    break;

  case 7: /* program: %empty  */
#line 109 "simple-bison-code.y"
                                 { }
#line 1286 "simple-bison-code.tab.c"
    break;

  case 8: /* program: program decl_operations NEWLINE  */
#line 110 "simple-bison-code.y"
                                          { printf("[BISON] ΠΡΑΞΕΙΣ\n"); }
#line 1292 "simple-bison-code.tab.c"
    break;

  case 9: /* decl_arr: IDENTIFIER "=" elements ";"  */
#line 114 "simple-bison-code.y"
                                    { printf("[BISON] Line=%d, Δήλωση Πίνακα\n", line); }
#line 1298 "simple-bison-code.tab.c"
    break;

  case 10: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 117 "simple-bison-code.y"
                                   { yyval = strdup(yytext); }
#line 1304 "simple-bison-code.tab.c"
    break;

  case 11: /* elements: "[" "]"  */
#line 119 "simple-bison-code.y"
                {yyval = strdup(yytext); }
#line 1310 "simple-bison-code.tab.c"
    break;

  case 12: /* elements: "[" arr_int "]"  */
#line 120 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1316 "simple-bison-code.tab.c"
    break;

  case 13: /* elements: "[" arr_fl "]"  */
#line 121 "simple-bison-code.y"
                         { yyval = strdup(yytext); }
#line 1322 "simple-bison-code.tab.c"
    break;

  case 14: /* elements: "[" arr_str "]"  */
#line 122 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1328 "simple-bison-code.tab.c"
    break;

  case 15: /* arr_int: INTEGER  */
#line 125 "simple-bison-code.y"
                      { yyval = yyvsp[0]; }
#line 1334 "simple-bison-code.tab.c"
    break;

  case 16: /* arr_int: arr_int "," arr_int  */
#line 126 "simple-bison-code.y"
                              { yyval = strdup(yytext); }
#line 1340 "simple-bison-code.tab.c"
    break;

  case 17: /* arr_fl: FLOAT  */
#line 129 "simple-bison-code.y"
                    { yyval = yyvsp[0]; }
#line 1346 "simple-bison-code.tab.c"
    break;

  case 18: /* arr_fl: arr_fl "," arr_fl  */
#line 130 "simple-bison-code.y"
                            { yyval = strdup(yytext); }
#line 1352 "simple-bison-code.tab.c"
    break;

  case 19: /* arr_str: STRING  */
#line 133 "simple-bison-code.y"
                    { yyval = strdup(yytext); }
#line 1358 "simple-bison-code.tab.c"
    break;

  case 20: /* arr_str: arr_str "," arr_str  */
#line 134 "simple-bison-code.y"
                              { yyval = strdup(yytext); }
#line 1364 "simple-bison-code.tab.c"
    break;

  case 21: /* build_func: func ";"  */
#line 138 "simple-bison-code.y"
                 { printf("[BISON] line=%d, Build-in Συνάρτηση\n", line); }
#line 1370 "simple-bison-code.tab.c"
    break;

  case 22: /* func: SCAN "(" scan_params ")"  */
#line 141 "simple-bison-code.y"
                                 { yyval = strdup(yytext); }
#line 1376 "simple-bison-code.tab.c"
    break;

  case 23: /* func: LEN "(" len_params ")"  */
#line 142 "simple-bison-code.y"
                                 { yyval = strdup(yytext); }
#line 1382 "simple-bison-code.tab.c"
    break;

  case 24: /* func: CMP "(" cmp_params ")"  */
#line 143 "simple-bison-code.y"
                                 { yyval = strdup(yytext); }
#line 1388 "simple-bison-code.tab.c"
    break;

  case 25: /* func: PRINT "(" print_params ")"  */
#line 144 "simple-bison-code.y"
                                     { yyval = strdup(yytext); }
#line 1394 "simple-bison-code.tab.c"
    break;

  case 26: /* scan_params: IDENTIFIER  */
#line 147 "simple-bison-code.y"
                   { yyval = strdup(yytext); }
#line 1400 "simple-bison-code.tab.c"
    break;

  case 27: /* len_params: elements  */
#line 150 "simple-bison-code.y"
                 { yyval = strdup(yytext); }
#line 1406 "simple-bison-code.tab.c"
    break;

  case 28: /* len_params: STRING  */
#line 151 "simple-bison-code.y"
                 { yyval = strdup(yytext); }
#line 1412 "simple-bison-code.tab.c"
    break;

  case 29: /* len_params: IDENTIFIER  */
#line 152 "simple-bison-code.y"
                     { yyval = strdup(yytext); }
#line 1418 "simple-bison-code.tab.c"
    break;

  case 30: /* cmp_params: STRING  */
#line 155 "simple-bison-code.y"
               { yyval = strdup(yytext); }
#line 1424 "simple-bison-code.tab.c"
    break;

  case 31: /* cmp_params: IDENTIFIER  */
#line 156 "simple-bison-code.y"
                     { yyval = strdup(yytext); }
#line 1430 "simple-bison-code.tab.c"
    break;

  case 32: /* cmp_params: cmp_params "," cmp_params  */
#line 157 "simple-bison-code.y"
                                    { yyval = strdup(yytext); }
#line 1436 "simple-bison-code.tab.c"
    break;

  case 33: /* print_params: STRING  */
#line 160 "simple-bison-code.y"
               { yyval = strdup(yytext); }
#line 1442 "simple-bison-code.tab.c"
    break;

  case 34: /* print_params: IDENTIFIER  */
#line 161 "simple-bison-code.y"
                     { yyval = strdup(yytext); }
#line 1448 "simple-bison-code.tab.c"
    break;

  case 35: /* print_params: INTEGER  */
#line 162 "simple-bison-code.y"
                  { yyval = strdup(yytext);}
#line 1454 "simple-bison-code.tab.c"
    break;

  case 36: /* print_params: func  */
#line 163 "simple-bison-code.y"
               { yyval = strdup(yytext); }
#line 1460 "simple-bison-code.tab.c"
    break;

  case 37: /* print_params: pos_elem  */
#line 164 "simple-bison-code.y"
                   { yyval = strdup(yytext); }
#line 1466 "simple-bison-code.tab.c"
    break;

  case 38: /* print_params: print_params "," print_params  */
#line 165 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1472 "simple-bison-code.tab.c"
    break;

  case 39: /* decl_var: type var ";"  */
#line 170 "simple-bison-code.y"
                     { printf("[BISON] Line=%d, Δήλωση Μεταβλητής\n", line); }
#line 1478 "simple-bison-code.tab.c"
    break;

  case 40: /* type: INT  */
#line 173 "simple-bison-code.y"
            { yyval = strdup(yytext); }
#line 1484 "simple-bison-code.tab.c"
    break;

  case 41: /* type: FLOAT_KEY  */
#line 174 "simple-bison-code.y"
                    { yyval = strdup(yytext); }
#line 1490 "simple-bison-code.tab.c"
    break;

  case 42: /* type: DOUBLE  */
#line 175 "simple-bison-code.y"
                 { yyval = strdup(yytext); }
#line 1496 "simple-bison-code.tab.c"
    break;

  case 43: /* type: SHORT  */
#line 176 "simple-bison-code.y"
                { yyval = strdup(yytext); }
#line 1502 "simple-bison-code.tab.c"
    break;

  case 44: /* type: LONG  */
#line 177 "simple-bison-code.y"
                { yyval = strdup(yytext); }
#line 1508 "simple-bison-code.tab.c"
    break;

  case 45: /* var: IDENTIFIER  */
#line 180 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1514 "simple-bison-code.tab.c"
    break;

  case 46: /* var: var "," var  */
#line 181 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1520 "simple-bison-code.tab.c"
    break;

  case 47: /* decl_operations: type_of_op ";"  */
#line 186 "simple-bison-code.y"
                       { printf("[BISON] Line=%d, Πρόσθεση\n", line); }
#line 1526 "simple-bison-code.tab.c"
    break;

  case 48: /* type_of_op: INTEGER "+" INTEGER  */
#line 188 "simple-bison-code.y"
                             { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1532 "simple-bison-code.tab.c"
    break;

  case 49: /* type_of_op: INTEGER "-" INTEGER  */
#line 188 "simple-bison-code.y"
                                                                       { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1538 "simple-bison-code.tab.c"
    break;

  case 50: /* type_of_op: INTEGER "*" INTEGER  */
#line 188 "simple-bison-code.y"
                                                                                                               { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1544 "simple-bison-code.tab.c"
    break;

  case 51: /* type_of_op: INTEGER "/" INTEGER  */
#line 188 "simple-bison-code.y"
                                                                                                                                                       { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1550 "simple-bison-code.tab.c"
    break;

  case 52: /* type_of_op: FLOAT "+" FLOAT  */
#line 189 "simple-bison-code.y"
                           { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1556 "simple-bison-code.tab.c"
    break;

  case 53: /* type_of_op: FLOAT "-" FLOAT  */
#line 189 "simple-bison-code.y"
                                                                 { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1562 "simple-bison-code.tab.c"
    break;

  case 54: /* type_of_op: FLOAT "*" FLOAT  */
#line 189 "simple-bison-code.y"
                                                                                                     { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1568 "simple-bison-code.tab.c"
    break;

  case 55: /* type_of_op: FLOAT "/" FLOAT  */
#line 189 "simple-bison-code.y"
                                                                                                                                         { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1574 "simple-bison-code.tab.c"
    break;

  case 56: /* type_of_op: IDENTIFIER "+" IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                     { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1580 "simple-bison-code.tab.c"
    break;

  case 57: /* type_of_op: IDENTIFIER "-" IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                                                                     { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1586 "simple-bison-code.tab.c"
    break;

  case 58: /* type_of_op: IDENTIFIER "*" IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                                                                                                                   { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1592 "simple-bison-code.tab.c"
    break;

  case 59: /* type_of_op: IDENTIFIER "/" IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                                                                                                                                                                 { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1598 "simple-bison-code.tab.c"
    break;

  case 60: /* type_of_op: INTEGER "+" FLOAT  */
#line 191 "simple-bison-code.y"
                             { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1604 "simple-bison-code.tab.c"
    break;

  case 61: /* type_of_op: INTEGER "-" FLOAT  */
#line 191 "simple-bison-code.y"
                                                                     { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1610 "simple-bison-code.tab.c"
    break;

  case 62: /* type_of_op: INTEGER "*" FLOAT  */
#line 191 "simple-bison-code.y"
                                                                                                           { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1616 "simple-bison-code.tab.c"
    break;

  case 63: /* type_of_op: INTEGER "/" FLOAT  */
#line 191 "simple-bison-code.y"
                                                                                                                                                 { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1622 "simple-bison-code.tab.c"
    break;

  case 64: /* type_of_op: FLOAT "+" INTEGER  */
#line 192 "simple-bison-code.y"
                             { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1628 "simple-bison-code.tab.c"
    break;

  case 65: /* type_of_op: FLOAT "-" INTEGER  */
#line 192 "simple-bison-code.y"
                                                                     { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1634 "simple-bison-code.tab.c"
    break;

  case 66: /* type_of_op: FLOAT "*" INTEGER  */
#line 192 "simple-bison-code.y"
                                                                                                           { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1640 "simple-bison-code.tab.c"
    break;

  case 67: /* type_of_op: FLOAT "/" INTEGER  */
#line 192 "simple-bison-code.y"
                                                                                                                                                 { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1646 "simple-bison-code.tab.c"
    break;

  case 68: /* type_of_op: IDENTIFIER "+" INTEGER  */
#line 193 "simple-bison-code.y"
                                  { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1652 "simple-bison-code.tab.c"
    break;

  case 69: /* type_of_op: IDENTIFIER "-" INTEGER  */
#line 193 "simple-bison-code.y"
                                                                               { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1658 "simple-bison-code.tab.c"
    break;

  case 70: /* type_of_op: IDENTIFIER "*" INTEGER  */
#line 193 "simple-bison-code.y"
                                                                                                                          { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1664 "simple-bison-code.tab.c"
    break;

  case 71: /* type_of_op: IDENTIFIER "/" INTEGER  */
#line 193 "simple-bison-code.y"
                                                                                                                                                                     { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1670 "simple-bison-code.tab.c"
    break;

  case 72: /* type_of_op: INTEGER "+" IDENTIFIER  */
#line 194 "simple-bison-code.y"
                                  { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1676 "simple-bison-code.tab.c"
    break;

  case 73: /* type_of_op: INTEGER "-" IDENTIFIER  */
#line 194 "simple-bison-code.y"
                                                                               { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1682 "simple-bison-code.tab.c"
    break;

  case 74: /* type_of_op: INTEGER "*" IDENTIFIER  */
#line 194 "simple-bison-code.y"
                                                                                                                          { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1688 "simple-bison-code.tab.c"
    break;

  case 75: /* type_of_op: INTEGER "/" IDENTIFIER  */
#line 194 "simple-bison-code.y"
                                                                                                                                                                     { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1694 "simple-bison-code.tab.c"
    break;

  case 76: /* type_of_op: FLOAT "+" IDENTIFIER  */
#line 195 "simple-bison-code.y"
                                { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1700 "simple-bison-code.tab.c"
    break;

  case 77: /* type_of_op: FLOAT "-" IDENTIFIER  */
#line 195 "simple-bison-code.y"
                                                                           { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1706 "simple-bison-code.tab.c"
    break;

  case 78: /* type_of_op: FLOAT "*" IDENTIFIER  */
#line 195 "simple-bison-code.y"
                                                                                                                    { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1712 "simple-bison-code.tab.c"
    break;

  case 79: /* type_of_op: FLOAT "/" IDENTIFIER  */
#line 195 "simple-bison-code.y"
                                                                                                                                                             { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1718 "simple-bison-code.tab.c"
    break;

  case 80: /* type_of_op: IDENTIFIER "+" FLOAT  */
#line 196 "simple-bison-code.y"
                                { yyval = yyvsp[-2] + yyvsp[0]; }
#line 1724 "simple-bison-code.tab.c"
    break;

  case 81: /* type_of_op: IDENTIFIER "-" FLOAT  */
#line 196 "simple-bison-code.y"
                                                                           { yyval = yyvsp[-2] - yyvsp[0]; }
#line 1730 "simple-bison-code.tab.c"
    break;

  case 82: /* type_of_op: IDENTIFIER "*" FLOAT  */
#line 196 "simple-bison-code.y"
                                                                                                                    { yyval = yyvsp[-2] * yyvsp[0]; }
#line 1736 "simple-bison-code.tab.c"
    break;

  case 83: /* type_of_op: IDENTIFIER "/" FLOAT  */
#line 196 "simple-bison-code.y"
                                                                                                                                                             { yyval = yyvsp[-2] / yyvsp[0]; }
#line 1742 "simple-bison-code.tab.c"
    break;


#line 1746 "simple-bison-code.tab.c"

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

#line 205 "simple-bison-code.y"





/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}

/* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

extern FILE *yyin;
extern FILE *yyout;

/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
int main(int argc, char **argv)  
{       
        yydebug = 0;

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
        else if (argc == 2)
        {
                if (!(yyin = fopen(argv[1], "r"))) 
                {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
        }
		
	int parse = yyparse();

	if (errflag == 0 && parse == 0)
		printf("\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\n", parse);
        else
		printf("\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\n", parse);

	return 0;
} 
