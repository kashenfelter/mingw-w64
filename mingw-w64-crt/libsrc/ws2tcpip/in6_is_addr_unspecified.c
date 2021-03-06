#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#undef  __CRT__NO_INLINE
#define __CRT__NO_INLINE
#include <winsock2.h>
#include <ws2tcpip.h>

int IN6_IS_ADDR_UNSPECIFIED(const struct in6_addr *a)
{
	return ((a->s6_words[0] == 0) &&
		(a->s6_words[1] == 0) &&
		(a->s6_words[2] == 0) &&
		(a->s6_words[3] == 0) &&
		(a->s6_words[4] == 0) &&
		(a->s6_words[5] == 0) &&
		(a->s6_words[6] == 0) &&
		(a->s6_words[7] == 0));
}
