#include <stddef.h>

void *
my_memchr(const void *b, int c, size_t len)
{
	const unsigned char *ptr = (const unsigned char *)b;
	unsigned char target = (unsigned char)c;
	while (len > 0) {
		if (*ptr == target) {
			return (void *)ptr;
		}
		ptr++;
		len--;
	}
	return NULL;
}