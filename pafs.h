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

#include <string.h>

#define AF_ENDL "\n"

#define AF_CAT(a, b) a ## b

static inline const char *af_concat(const char *a, const char *b)
{
	static char buf[64];
	size_t la = strlen(a);

	memcpy(buf, a, la);
	memcpy(buf + la, b, strlen(b));
	return buf;
}

#define AF_GGEN(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN2(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN3(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)


#define AF_GGEN4(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN5(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN6(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN7(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN8(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN9(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_GGEN10(f, append, a, ...)				\
	_Generic(a, int : f(append"%d", __VA_ARGS__),		\
		 unsigned int : f(append"%u", __VA_ARGS__),	\
		 long long : f(append"%ll", __VA_ARGS__),	\
		 const char * : f(append"%s", __VA_ARGS__),	\
		 char * : f(append"%s", __VA_ARGS__)		\
		)

#define AF_FMT_MOD1(append, v)				\
	_Generic(v, int : append"%d",			\
		 unsigned int : append"%u",		\
		 long long : append"%ll",		\
		 const char * : append"%s",		\
		 char * : append"%s"			\
		)

#define AF_FMT_MOD2(append, ...)			\
	AF_GGEN(AF_FMT_MOD1, append, __VA_ARGS__)

#define AF_FMT_MOD3(append, ...)			\
	AF_GGEN2(AF_FMT_MOD2, append, __VA_ARGS__)	\

#define AF_FMT_MOD4(append, ...)			\
	AF_GGEN3(AF_FMT_MOD3, append, __VA_ARGS__)	\

#define AF_FMT_MOD5(append, ...)			\
	AF_GGEN4(AF_FMT_MOD4, append, __VA_ARGS__)	\

#define AF_FMT_MOD6(append, a, b, c, ...)		\
	af_concat(AF_FMT_MOD3(append, a, b, c),		\
		  AF_FMT_MOD3("", __VA_ARGS__))		\

#define AF_FMT_MOD7(append, ...)			\
	AF_GGEN6(AF_FMT_MOD6, append, __VA_ARGS__)	\

#define AF_FMT_MOD8(append, ...)			\
	AF_GGEN7(AF_FMT_MOD7, append, __VA_ARGS__)	\

#define AF_FMT_MOD9(append, ...)			\
	AF_GGEN8(AF_FMT_MOD8, append, __VA_ARGS__)	\

#define AF_FMT_MOD10(append, ...)			\
	AF_GGEN9(AF_FMT_MOD9, append, __VA_ARGS__)	\

#define AF_FMT_MOD11(append, ...)			\
	AF_GGEN10(AF_FMT_MOD10, append, __VA_ARGS__)	\



#define AF_FMT1(a) AF_FMT_MOD1("", a), a

#define AF_FMT2(...) AF_FMT_MOD2("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT3(...) AF_FMT_MOD3("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT4(...) AF_FMT_MOD4("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT5(...) AF_FMT_MOD5("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT6(...) AF_FMT_MOD6("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT7(...) AF_FMT_MOD7("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT8(...) AF_FMT_MOD8("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT9(...) AF_FMT_MOD9("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT10(...) AF_FMT_MOD10("", __VA_ARGS__), __VA_ARGS__

#define AF_FMT11(...) AF_FMT_MOD11("", __VA_ARGS__), __VA_ARGS__


#define AF_FMT_(nb, ...) AF_CAT(AF_FMT, nb) (__VA_ARGS__)	\

#define AF_FMT(...)						\
	AF_FMT_(AF_GET_ARG_COUNT(__VA_ARGS__), __VA_ARGS__)

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
