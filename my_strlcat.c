#include <stddef.h>

size_t
my_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len = 0;
	size_t src_len = 0;
	while (dst[dst_len] != '\0') {
		dst_len++;
	}
	while (src[src_len] != '\0') {
		src_len++;
	}
	if (dstsize > 0 && dst_len < dstsize - 1) {
		size_t i = 0;
		while (i < dstsize - dst_len - 1 && src[i] != '\0') {
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return dst_len + src_len;
}
