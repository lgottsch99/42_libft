/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:38:53 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 15:42:57 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
}
// #include <stdio.h>
// int main (void)
// {
// 	char string[6] = "Hello!";
// 	printf("%s\n", string);
// 	ft_bzero(string, 0);
// 	int i = 0;
// 	while (i < 6)
// 	{
// 		printf("%c\n", string[i]);
// 		i++;
// 	}
// }
