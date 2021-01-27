#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

// Do not copy this function in a project.
// It was created only for the purpose of this exercise.
// In a real function, the read statement may be done multiple times.
char* get_stdin_content(void)
{
    size_t buffer_size = 1024;
    char* buffer = malloc(sizeof(char) * buffer_size);
    ssize_t ret;

    if (buffer)
    {
        ret = read(STDIN_FILENO, buffer, buffer_size);
        if (ret != -1)
        {
            buffer[ret] = '\0';
        }
        else
        {
            free(buffer);
            buffer = NULL;
        }
    }
    return buffer;
}
