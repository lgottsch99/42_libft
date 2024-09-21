//HEADER

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*tmp;
// 	char	*sub;
// 	unsigned int	i;

// 	if (!s)
// 		return (NULL);
// 	//malloc space for sub
// 	sub = (char	*)malloc(sizeof(char) * (len + 1));  
// 	if (!sub)
// 		return (NULL);
// 	//copy  
// 	tmp = (char *)s;
// 	i = 0;
// 	while (i < len)
// 	{
// 		sub[i] = tmp [start];
// 		start++;
// 		i++;
// 	}
// 	sub[i] = '\0';
// 	return (sub);
// }
/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.

use: malloc, free

return: The array of new strings resulting from the split.
NULL if the allocation fails.
*/

static size_t ft_words(char const *s, char c)
{
	size_t	elements;
	size_t	i;
	size_t	check; //checks if not c, not c = 1

	elements = 0;
	check = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			check = 1;
		}
		if (s[i] == c && check == 1)
		{
			elements++;
			check = 0;
		}
		i++;
	}
	return (elements);
}

static void ft_free(char **array, int x)
{
	int i; 

	i = 0; 
	while (i <= x)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char **array;
	size_t words;
	size_t	i;
	size_t	y;
	size_t	control;
	char *ptr; 
	int	x; // 

	words = ft_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1)); //1 extra for last null ptr
	if (!array)
		return (NULL);
	
	i = 0;
	control = 0;
	x = 0; 
	while(s[i])
	{
		if (s[i] != c && control == 0)//first char of str
		{
			control = 1;
			y = 0;
			while (s[i + y] != c && s[i + y])
				y++; // y is length of new substring
			
			ptr = ft_substr(s, i, y);
			
			if (!ptr)
			{
				ft_free(array, x); ///IN CASE ANY ALLOC FAILS EVERYTHING NEEDS FREE
				return (NULL); 
			}
			else
			{
				array[x] = ptr;
				x++;	
			}
			
		}
		else if (s[i] != c && control == 1)
			i++;
		else if (s[i] == c)
		{
			control = 0;
			i++;
		}
	}
	array[x] = NULL;
	return (array);
}

// int main(void)
// {
// 	char	*s = "...hello..why.am.......I.sick";
// 	char	c = '.';
// 	char **array = ft_split(s, c);
// 	int i = 0;
// 	while (array[i])
// 	{
// 		printf("substr: %s\n", array[i]);
// 		i++;
// 	}
// }