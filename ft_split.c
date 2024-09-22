/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:07:52 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/22 17:47:16 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	//malloc space for sub
	sub = (char	*)malloc(sizeof(char) * (len + 1));  
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
/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.

use: malloc, free

return: The array of new strings resulting from the split.
NULL if the allocation fails.
*/

static int	ft_words(char const *s, char c)
{
	int	words;
	int	control;
	int	i;
	
	i = 0;
	control = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && control == 0)
		{
			words++;
			control = 1;
		}
		else if (s[i] == c)
			control = 0;
		i++;
	}
	printf("words: %i\n", words);
	return (words);
}

static int	ft_sep(char const *s, char c, int i) //seperate word in string starting from certain location
{
	int	y;

	y = 0;
	while (s[i + y] != c && s[i + y])
		y++;
	return (y);
}

static void ft_free_all(char **array, int x)
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
	char	**array;
	int		i;
	char	*ptr;
	int		x;
	
	if (!(array = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			if (!(ptr = ft_substr(s, i, ft_sep(s, c, i))))
			{
				ft_free_all(array, x);
				return (NULL);
			}		
			array[x++] = ptr;
			i = i + ft_sep(s, c, i);
		}
	}
	array[x] = NULL;
	return (array);
}

int main(void)
{
	char	*s = "hello..why.am.......I.sick";
	char	c = '.';
	char **array = ft_split(s, c);
	int i = 0;
	while (array[i])
	{
		printf("substr: %s\n", array[i]);
		i++;
	}
}