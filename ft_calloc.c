/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:45:19 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/24 18:57:40 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdlib.h>

#include "libft.h"

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
// 	s = (char *)ft_calloc(1, 0);
// 	if (!s)
// 	{
// 		printf("fail\n");
// 		return (1);
// 	}
// 	int i;
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%c\n", s[i]);
// 		i++;
// 	}
// }