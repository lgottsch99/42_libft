/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:00:07 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 19:21:36 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

returns The substring or NULL if the allocation fails.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
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