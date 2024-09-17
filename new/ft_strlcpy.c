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

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(src);
    if (size == 0)
        return (len);
    i = 0; 
    while (i < (size - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}

// #include <stdio.h>
// int main (void)
// {
//     char dest[20];
//     char *src = "HEllo";
//     size_t x = ft_strlcpy(dest, src, 10);
//     printf("x: %zu, dest: %s\n", x, dest);
// }