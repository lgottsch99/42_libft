/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:07:52 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 15:45:09 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
	return (words);
}

static int	ft_sep(char const *s, char c, int i)
{
	int	y;

	y = 0;
	while (s[i + y] != c && s[i + y])
		y++;
	return (y);
}

static void	*ft_free_all(char **array, int x)
{
	int	i;

	i = 0;
	while (i <= x)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	char	*ptr;
	int		x;

	array = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			ptr = ft_substr(s, i, ft_sep(s, c, i));
			if (!ptr)
				return (ft_free_all(array, x));
			array[x++] = ptr;
			i = i + ft_sep(s, c, i);
		}
	}
	array[x] = NULL;
	return (array);
}

// int main(void)
// {
// 	char	*s = "hello.why..am.i.....sick.";
// 	char	c = '.';
// 	char **array = ft_split(s, c);
// 	int i = 0;
// 	while (array[i])
// 	{
// 		printf("substr: %s\n", array[i]);
// 		i++;
// 	}
// }