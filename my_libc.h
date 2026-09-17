#include <stddef.h>

size_t my_strlen(const char *str)
{
    size_t length = 0;
    if (str[length] == '\0') {
        return 0;
    } else {
        while (str[length] != '\0') {
            length++;
        }
    }
    return length;
};