/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:57:42 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/12 20:52:14 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//strcpy does not compare length of source and dest
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main ()
{
	char source[] = "Hello World";
	char destination[12];

	ft_strcpy(destination ,source);

	for (int i = 0; i < 12; i++)
	{
		printf("%c", destination[i]);
	}
	printf("\n");
}*/
