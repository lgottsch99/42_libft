/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:14 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 20:02:31 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

//1 + FT STRLEN BC check \0
char	*ft_strrchr(const char *s, int c) //ptr to the LAST OCCURENCE
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main (void)
// {
// 	int c = '\0';
// 	char *s = "hallo";
// 	char* result;
// 	result = ft_strrchr(s, c);
// 	printf("%s\n", result);
// }