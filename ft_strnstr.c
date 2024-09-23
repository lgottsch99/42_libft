/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:56:51 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 15:46:29 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	length_little;
	size_t	i;
	size_t	y;

	length_little = ft_strlen(little);
	if (length_little == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			y = 0;
			while (big[i + y] == little[y] && i + y <= len)
			{
				if (little[y + 1] == '\0')
					return ((char *)&big[i]);
				y++;
			}
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	char * big = "Foo Bar Baz";
// 	char *little = "hi";
// 	char* r = ft_strnstr(big, little, 25);
// 	printf("%s\n", r);
// }