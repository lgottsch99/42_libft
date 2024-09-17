//header

//the memchr() function scans the initial n bytes of the memory area pointed to by s for the 
//first instance of c. Both c and the bytes of the memory area pointed to by s are 
//interpreted as unsigned char.

#include <string.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*tmp;
	
	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main (void)
// {
// 	void *r;
// 	char *string = "Hello.";
// 	r = ft_memchr((void*)string, 'i', 5);
// 	printf("result: %s\n", (char *)r);
// }