#include <strings.h>

void    ft_bzero(void *s, size_t n)
{
    //The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing
    char *tmp;
    tmp = (char *)s;
    while (n > 0)
    {
        *tmp = 0;
        tmp++;
        n--;
    }
}

#include <stdio.h>
int main (void)
{
    char *string = "Hello";
    ft_bzero(string, 3);
    printf("%s\n", string);
}