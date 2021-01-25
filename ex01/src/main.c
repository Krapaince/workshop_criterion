#include <my.h>

int main(int ac, char const* const* ag)
{
    (void)ac;
    size_t len_of_program_name = my_strlen(ag[0]);

    return len_of_program_name;
}
