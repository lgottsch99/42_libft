 #include <string.h>
 #include <stdlib.h>
 #include <stdio.h>
 //writes len bytes of value c (converted to an unsigned char) to the string b.
void *ft_memset(void *b, int c, size_t len)
{
    int i;
    unsigned char *tmp;
    tmp = (unsigned char *)b;

    i = 0;
    while (i < len)
    {
        *tmp = (unsigned char)c;
        tmp++;
        i++;
    }
    return (b);
}

// int main (void)
// {
//     int c = 68;
//     char *b;
//     size_t s = 2;

//     // malloc b
//     b = (char *)malloc(s * sizeof(int));
//     b = (char *)ft_memset(b, c, s);
//     printf("b is: %s\n", b);

// }