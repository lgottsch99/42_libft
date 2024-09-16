/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:54:08 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/15 20:36:25 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	length(char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

char	*ft_strstr(char *haystack, char *needle)
{
	int		l;
	int		i;
	int		check;

	l = ft_strlen(needle); //can i use other fts like this?
	if (l == 0)
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		check = 0;
		if (haystack[i] == needle[0])
		{
			while (needle[check] != '\0' && haystack[i + check] == needle[check])
				check++;
			if (check == l)
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char *ptr;
	char haystack[] = "Hello how are you today?";
	char needle[] = "";

	ptr = ft_strstr(haystack, needle);
	printf("returned pointer: %s\n", ptr);
}*/
