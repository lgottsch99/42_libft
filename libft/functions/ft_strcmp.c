/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:14:06 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/14 11:51:44 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strcmp compares length and content
//returns 0 if exactly the same
//else positive or negative number

#include <stdbool.h>

// int	ft_smallerorbigger(char s1, char s2)
// {
// 	int	x;

// 	x = s1 - s2;
// 	return (x);
// }

int	ft_strcmp(char *s1, char *s2)
{
	bool	same;
	int		i;
	int		x;

	same = true;
	x = 0;
	i = 0;
	while (same == true)
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			same = false;
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (x);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	int 	x;

// 	x = ft_strcmp(str1, str2);
// 	printf("%i\n", x);
// }
