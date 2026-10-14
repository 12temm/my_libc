#include <stddef.h>

void *
my_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
	if (d < s) {
		while (len > 0) {
			*d = *s;
			d++;
			s++;
			len--;
		}
	} else if (d > s) {
		d += len;
		s += len;
		while (len > 0) {
			d--;
			s--;
			*d = *s;
			len--;
		}
	}
	return dst;
}