#include <stddef.h>

char *
my_strrchr(const char *s, int c)
{
	char *last = NULL;

	do {
		if (*s == (char)c) {
			last = (char *)s;
		}
	} while (*s++);

	return last;
}