/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:56:45 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 15:44:22 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*helpd;

	tmp = (unsigned char *)src;
	helpd = (unsigned char *)dest;
	while (n)
	{
		*helpd = *tmp;
		tmp++;
		helpd++;
		n--;
	}
	return (dest);
}
// #include <stdio.h>
// int main (void)
// {
// 	void *src;
// 	char string[3] = "Hi!";
// 	src = string;

// 	void *dest;
// 	char array[3] = "noo";
// 	dest = array;
// 	dest = ft_memcpy(dest, src, 1);
// 	printf("%s\n", (char *)dest);
// }