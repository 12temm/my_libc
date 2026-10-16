#include <stddef.h>

size_t
my_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d_len = 0;
	size_t s_len = 0;
	size_t i = 0;
	while (src[s_len] != '\0') {
		s_len++;
	}
	while (d_len < dstsize && dst[d_len] != '\0') {
		d_len++;
	}
	if (d_len == dstsize) {
		return dstsize + s_len;
	}
	while (src[i] != '\0' && (d_len + i) < (dstsize - 1)) {
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return d_len + s_len;
}