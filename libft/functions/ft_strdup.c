/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:01:57 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/23 16:30:30 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	while (s1[len] != '\0')
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *ptr;
// 	char string[] = "Hello there";

// 	ptr = ft_strdup(string);

// 	printf("string at returned ptr: %s\n", ptr);
// }
