/**        DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                   Version 2, December 2004
 *
 * Copyright (C) 2019 Matthias Gatto <uso.cosmo.ray@gmail.com>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
 */


/* #include <string.h> */

#define AF_ENDL "\n"

#define AF_CAT(a, b) a ## b

#define AF_FMT1(v)				\
 	'%', _Generic(v, int : 'd',		\
		      unsigned int : 'u',	\
		      short : 'u',		\
		      unsigned short : 'u',	\
		      double : 'f',		\
		      float : 'f',		\
		      long : 'f',		\
		      long long : 'f',		\
		      unsigned long : 'f',	\
		      unsigned long long : 'f',	\
		      void * : 'p',		\
		      char : 'c',		\
		      unsigned char : 'c',	\
		      const char * : 's',	\
		      char * : 's'		\
		),

#define AF_FMT2(a, b) AF_FMT1(a) AF_FMT1(b)

#define AF_FMT3(a, b, c) AF_FMT2(a, b) AF_FMT1(c)

#define AF_FMT4(a, b, ...) AF_FMT2(a, b) AF_FMT2( __VA_ARGS__)

#define AF_FMT5(a, ...) AF_FMT1(a) AF_FMT4(__VA_ARGS__)

#define AF_FMT6(a, ...) AF_FMT1(a) AF_FMT5(__VA_ARGS__)

#define AF_FMT7(a, ...) AF_FMT1(a) AF_FMT6(__VA_ARGS__)

#define AF_FMT8(a, ...) AF_FMT1(a) AF_FMT7(__VA_ARGS__)

#define AF_FMT9(a, ...) AF_FMT1(a) AF_FMT8(__VA_ARGS__)

#define AF_FMT10(a, ...) AF_FMT1(a) AF_FMT9(__VA_ARGS__)

#define AF_FMT11(a, ...) AF_FMT1(a) AF_FMT10(__VA_ARGS__)

#define AF_FMT12(a, ...) AF_FMT1(a) AF_FMT11(__VA_ARGS__)

#define AF_FMT13(a, ...) AF_FMT1(a) AF_FMT12(__VA_ARGS__)


#define AF_FMT_(nb, ...) AF_CAT(AF_FMT, nb) (__VA_ARGS__)	\

static inline int __af_fuck_i(int l) {
	return l;
}

static inline unsigned int __af_fuck_ui(unsigned int l) {
	return l;
}

static inline double __af_fuck_l(long l) {
	return l;
}

static inline double __af_fuck_ll(long long l) {
	return l;
}

static inline double __af_fuck_lu(unsigned long l) {
	return l;
}

static inline double __af_fuck_llu(unsigned long long l) {
	return l;
}

static inline double __af_fuck_d(double l) {
	return l;
}

static inline double __af_fuck_f(float f) {
	return f;
}

static inline const char *__af_fuck_p(const void *p)
{
	return p;
}

#define AF_CAST1(X)					\
	_Generic((X),					\
		 default : __af_fuck_p,			\
		 double: __af_fuck_d,			\
		 float: __af_fuck_f,			\
		 int : __af_fuck_i,			\
		 unsigned int : __af_fuck_ui,		\
		 long : __af_fuck_l,			\
 		 long long : __af_fuck_ll,		\
		 unsigned long : __af_fuck_lu,		\
		 unsigned long long : __af_fuck_llu) (X)

#define AF_CAST2(a, b) AF_CAST1(a), AF_CAST1(b)
#define AF_CAST3(a, ...) AF_CAST1(a), AF_CAST2(__VA_ARGS__)
#define AF_CAST4(a, ...) AF_CAST1(a), AF_CAST3(__VA_ARGS__)
#define AF_CAST5(a, ...) AF_CAST1(a), AF_CAST4(__VA_ARGS__)
#define AF_CAST6(a, ...) AF_CAST1(a), AF_CAST5(__VA_ARGS__)
#define AF_CAST7(a, ...) AF_CAST1(a), AF_CAST6(__VA_ARGS__)
#define AF_CAST8(a, ...) AF_CAST1(a), AF_CAST7(__VA_ARGS__)
#define AF_CAST9(a, ...) AF_CAST1(a), AF_CAST8(__VA_ARGS__)
#define AF_CAST10(a, ...) AF_CAST1(a), AF_CAST9(__VA_ARGS__)
#define AF_CAST11(a, ...) AF_CAST1(a), AF_CAST10(__VA_ARGS__)
#define AF_CAST12(a, ...) AF_CAST1(a), AF_CAST11(__VA_ARGS__)
#define AF_CAST13(a, ...) AF_CAST1(a), AF_CAST12(__VA_ARGS__)

#define AF_CAST_(nb, ...) AF_CAT(AF_CAST, nb) (__VA_ARGS__)	\

#define AF_FMT(...)							\
	(const char []) {						\
		AF_FMT_(AF_GET_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)	\
			0 } ,						\
		AF_CAST_(AF_GET_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

#ifndef AF_PRINT_FUNC
#define AF_PRINT_FUNC printf
#endif

#define AF_PRINT(...)				\
	AF_PRINT_FUNC(AF_FMT(__VA_ARGS__))

#define AF_GET_ARG_COUNT(...) AF__GET_ARG_COUNT(			\
		0, ## __VA_ARGS__, 70, 69, 68,				\
		67, 66, 65, 64, 63, 62, 61, 60,				\
		59, 58, 57, 56, 55, 54, 53, 52,				\
		51, 50, 49, 48, 47, 46, 45, 44,				\
		43, 42, 41, 40, 39, 38, 37, 36,				\
		35, 34, 33, 32, 31, 30, 29, 28,				\
		27, 26, 25, 24, 23, 22, 21, 20,				\
		19, 18, 17, 16, 15, 14, 13, 12,				\
		11, 10, 9, 8, 7, 6, 5, 4, 3, 2,				\
		1, 0)

#define AF__GET_ARG_COUNT(						\
	_0, _1_, _2_, _3_, _4_, _5_, _6_, _7_, _8_, _9_, _10_,		\
	_11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_,		\
	_20_, _21_, _22_, _23_, _24_, _25_, _26_, _27_, _28_,		\
	_29_, _30_, _31_, _32_, _33_, _34_, _35_, _36, _37,		\
	_38, _39, _40, _41, _42, _43, _44, _45, _46, _47,		\
	_48, _49, _50, _51, _52, _53, _54, _55, _56, _57,		\
	_58, _59, _60, _61, _62, _63, _64, _65, _66, _67,		\
	_68, _69, _70, count, ...) count
