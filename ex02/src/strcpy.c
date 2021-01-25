#include <stddef.h>

char* my_strcpy(char* dest, char const* src)
{
    size_t i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = '\0';
    return dest;
}
