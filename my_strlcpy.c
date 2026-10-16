#include <stddef.h>

size_t
my_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_len = 0;
	size_t i = 0;
	while (src[src_len] != '\0') {
		src_len++;
	}
	if (dstsize > 0) {
		while (i < dstsize - 1 && src[i] != '\0') {
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return src_len;
}