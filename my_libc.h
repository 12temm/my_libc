#ifndef MY_LIBC_H
#define MY_LIBC_H

#include <stddef.h>

size_t my_strlen(const char *str);

char *my_strcpy(char *dest, const char *src);

char *my_strncpy(char *dst, const char *src, int n);

#endif