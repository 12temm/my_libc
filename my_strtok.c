#include <stdlib.h>

char *
my_strdup(const char *s)
{
	size_t len = 0;
	size_t i = 0;
	char *dest;
	while (s[len] != '\0') {
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL) {
		return NULL;
	}
	while (i <= len) {
		dest[i] = s[i];
		i++;
	}
	return dest;
}