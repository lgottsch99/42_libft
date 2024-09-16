/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:01:04 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/15 19:34:51 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main (void)
{
	char source[] = "World";
	char dest [] = "Hello";

	ft_strncat(dest, source, 5);

	printf("dest is: %s\n", dest);
}*/
