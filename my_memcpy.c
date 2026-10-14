#include <stddef.h>

void *
my_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
	while (len > 0) {
		*d = *s;
		d++;
		s++;
		len--;
	}
	return dst;
}