/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:45:19 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 15:43:06 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "libft.h"
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