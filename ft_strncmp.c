/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:20:22 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/16 17:52:03 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//what if one str shorter than the other?

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		x;

	i = 0;
	while (i < n)
	{
		if ((s1[i] != s2[i]) || !s1[i] || !s2[i])
		{
			x = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			return (x);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main (void)
// {
// 	char * s1 = "Hello";
// 	char *s2 = "Hello World";
// 	int i = ft_strncmp(s1, s2, 3);
// 	printf("%i\n", i);
// }