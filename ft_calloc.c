//header

/* The calloc() function allocates memory for an array of nmemb elements of size bytes 
each and returns a pointer to the allocated memory. The memory is set to zero. 
If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can
 later be successfully passed to free().

 The malloc() and calloc() functions return a pointer to the allocated memory that is suitably 
 aligned for any kind of variable. On error, these functions return NULL. NULL may also be 
 returned by a successful call to malloc() with a size of zero, or by a successful call to 
 calloc() with nmemb or size equal to zero.
 */

// #include <string.h>
// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*tmp;

// 	tmp = (unsigned char *)s;
// 	while (n)
// 	{
// 		*tmp = '\0';
// 		tmp++;
// 		n--;
// 	}
// }

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

//difference to malloc: calloc sets all bytes to \0
//only size not sizeof(size), weil sonst = größe size_t
//need size * nmemb weil bzero sonst nur das erste stück bearbeitet

// #include <stdio.h>
// int main(void)
// {
// 	char * s;
// 	s = (char *)ft_calloc(3, 7);
// 	if (!s)
// 	{
// 		printf("fail\n");
// 	}
// 	int i;
// 	i = 0;
// 	while (i < 7)
// 	{
// 		printf("%c\n", s[i]);
// 		i++;
// 	}
// }