/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:13:30 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/23 16:40:48 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	get_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < (size - 1))
			len += ft_strlen(sep);
		i++;
	}
	len = len + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		len;
	int		i;

	ptr = 0;
	if (size == 0)
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	len = get_len(size, strs, sep);
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < (size - 1))
			ft_strcat(ptr, sep);
		i++;
	}
	ptr[len - 1] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int	main (void)
{
	char *result;
	char *array[5];
	array[0] = "abcd";
	array[1] = "efgh";
	array[2] = "ijkl";
	array[3] = "mnop";
	array[4] = "qrst";

	char sep[] = "#";
	int size = 3;

	for (int i = 0; i < size; i++)
		printf("input: %s\n", array[i]);
	printf("sep: %s\n", sep);	

	result = ft_strjoin(size, array, sep);

	printf("result: %s\n", result);
}*/
