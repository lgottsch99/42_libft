/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:39:57 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/12 20:54:03 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h> //for type size_t???

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}	
/*
int	main()
{
	char source[] = "Hello World";
	char destination[12];

	ft_strncpy(destination, source, 9);

	for (int i = 0; i < 12; i++)
	{
		printf("%c", destination[i]);
	}
}*/
