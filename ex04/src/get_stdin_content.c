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

    if (buffer) {
        read(STDIN_FILENO, buffer, buffer_size);
    }
    return buffer;
}
