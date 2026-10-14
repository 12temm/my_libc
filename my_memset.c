#include <stddef.h>

void *
my_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = (unsigned char *)b;
	while (len > 0) {
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return b;
}