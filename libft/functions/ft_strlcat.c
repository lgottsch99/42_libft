#include <string.h>

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{   
	size_t	y; //size_t bc it can handle larger values than int
    size_t dlen;
    size_t srclen;

	y = 0;
    dlen = ft_strlen(dst);
    srclen = ft_strlen(src);

    if (dstsize <= dlen) //no space in buffer -> no concat!
        return (dlen + srclen);
    while (y < (dstsize - dlen - 1) && src[y] != '\0')
	{
	    dst[dlen + y] = src[y];
    	y++;
    }
    dst[dlen + y] = '\0';
    return (dlen + srclen);
}

// #include <stdio.h>
// int main (void)
// {
//     char *dst = "Hello ";
//     char *src = "World";

//     int ret = ft_strlcat(dst, src, 11);
//     printf("ret: %i, dst: %s\n", ret, dst);
// }