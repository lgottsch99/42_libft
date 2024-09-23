/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:14 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 15:46:34 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

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

	len = 1 + ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (len)
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