// HEADER

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

returns The substring or NULL if the allocation fails.
*/
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	//malloc space for sub
	sub = (char	*)malloc(sizeof(char) * (len + 1)); // does substring need to be terminated? 
	if (!sub)
		return (NULL);
	//copy  
	tmp = (char *)s;
	i = 0;
	while (i < len)
	{
		sub[i] = tmp [start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *s = "Hello World this is sick lilli.";
// 	size_t	len = 5;
// 	int	index = 6; //we start indexing at 0!

// 	char *sub = ft_substr(s, index, len);
// 	printf("%s\n", sub);
// }