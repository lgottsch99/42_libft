#include <string.h>

void ft_strclr(char *s)
{
    size_t i; //size t bc what if string is longer than int?

    i = 0;
    while (s[i])
    {
        s[i] = '\0';
        i++;
    }
}