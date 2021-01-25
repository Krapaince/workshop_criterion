#include <stdlib.h>

#include <my.h>

char* my_strdup(char const* src)
{
    size_t len = my_strlen(src);
    char* ret = malloc(sizeof(char) * (len + 1));

    if (!ret)
    {
        my_strcpy(ret, src);
    }
    return ret;
}
