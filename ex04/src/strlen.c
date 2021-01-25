#include <stddef.h>

size_t my_strlen(char const* str)
{
    size_t i = 0;

    while (str[i])
    {
        ++i;
    }
    return i;
}
