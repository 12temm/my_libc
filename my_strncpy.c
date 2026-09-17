#include "my_libc.h"

char *
my_strncpy(char *dst, const char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++) {
		dst[i] = src[i];
	}
	while (i < n) {
		dst[i] = '\0';
		i++;
	}
	return dst;
}