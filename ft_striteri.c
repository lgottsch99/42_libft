/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:06:44 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/22 13:24:04 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
use: malloc
return: no
*/

// sample 
//void	ft_toupper(unsigned int a, char* b)
// {
// 		if (a >= 0)
// 		{
// 			if (*b >= 'a' && *b <= 'z')
// 				*b = *b - 32;
// 		}
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char string []= "";
// 	printf("og: %s\n", string);
// 	ft_striteri(string, ft_toupper);
// 	printf("new: %s\n", string);
// }