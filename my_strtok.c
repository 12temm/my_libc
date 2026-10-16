#include <stddef.h>

char *
my_strtok(char *str, const char *delim)
{
	static char *last = NULL;
	char *start;
	const char *d;
	int is_delim;
	if (str != NULL) {
		last = str;
	}

	if (last == NULL || *last == '\0') {
		return NULL;
	}
	while (*last != '\0') {
		is_delim = 0;
		for (d = delim; *d != '\0'; d++) {
			if (*last == *d) {
				is_delim = 1;
				break;
			}
		}
		if (!is_delim) {
			break;
		}
		last++;
	}
	if (*last == '\0') {
		return NULL;
	}
	start = last;
	while (*last != '\0') {
		for (d = delim; *d != '\0'; d++) {
			if (*last == *d) {
				*last = '\0';
				last++;
				return start;
			}
		}
		last++;
	}
	return start;
}