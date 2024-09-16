/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:57:18 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/15 19:47:51 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_smallerorbigger(char s1, char s2)
// {
// 	return ((unsigned char)s1 - (unsigned char)s2);
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	x;
	int	i;

	if (n < 1)
	{
		return (0);
	}
	i = 0;
	while (i < (int)n)
	{
		if (s1[i] != s2[i])
		{
			x = (unsigned char)s1[i] - (unsigned char)s2[i];
			break ;
		}
		else
		{
			x = 0;
		}
		i++;
	}
	return (x);
}

// #include <stdio.h>
// int 	main (void)
// {
// 	char str1[] = "Hello World";
// 	char str2[] = "Hello there";
// 	int	x;

// 	x = ft_strncmp(str1, str2, 2);
// 	printf("%i\n", x);
// }
