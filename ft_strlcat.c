//header

#include <string.h>
// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  ls;
    size_t  ld;
    size_t  i;

    ls = ft_strlen(src);
    ld = ft_strlen(dst);

    if (size <= ld) //no free byte in dst!
        return (ls + ld); 
    i = 0;
    while (i < (size - ld - 1) && src[i])
    {
        dst[ld + i] = src[i];
        i++;
    }
    dst[ld + i] = '\0';
    return (ls + ld);
}

// #include <stdio.h>
// int main (void)
// {
//     char *src = " World";
//     char dst[20]= "Hello";
//     size_t length= ft_strlcat(dst, src, 8);
//     printf("my l: %zu, dst: %s\n", length, dst);
    
// }