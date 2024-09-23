/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:58:22 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/23 19:21:27 by lgottsch         ###   ########.fr       */
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

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

static size_t	ft_count_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;
	size_t	count_start;
	size_t	control;

	i = 0;
	count_start = 0;
	while (s1[i] != '\0')
	{
		y = 0;
		control = 0;
		while (set[y] != '\0')
		{
			if (s1[i] == set[y])
			{
				count_start++;
				control = 1;
			}
			y++;
		}
		if (control == 0)
			break ;
		i++;
	}
	return (count_start);
}

static size_t	ft_count_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	y;
	size_t	control;
	size_t	count_end;

	i = ft_strlen(s1) - 1;
	count_end = 0;
	while (s1[i])
	{
		y = 0;
		control = 0;
		while (set[y] != '\0')
		{
			if (s1[i] == set[y])
			{
				count_end++;
				control = 1;
			}
			y++;
		}
		if (control == 0)
			break ;
		i--;
	}
	return (count_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count_start;
	size_t	count_end;
	size_t	len;
	size_t	i;
	char	*trim;

	len = ft_strlen(s1);
	count_start = ft_count_start(s1, set);
	count_end = ft_count_end(s1, set);
	trim = (char *)malloc(sizeof(char) * (len - count_start - count_end + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (count_start < (len - count_end))
	{
		trim[i] = s1[count_start];
		i++;
		count_start++;
	}
	trim[i] = '\0';
	return (trim);
}

// int main (void)
// {
// 	char	*s = "baaasunaaabbbbb";
// 	char *set = "ab";
// 	char *trim = ft_strtrim(s, set);
// 	printf("%s\n", trim);
// }