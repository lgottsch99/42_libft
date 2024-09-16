/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:19:23 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/18 10:51:25 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	create_number(char *str, int i)
{
	int	num;
	int	count;

	num = 0;
	count = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (count == 0)
		{
			num = str[i] - 48;
			count = 1;
		}
		else if (count > 0)
			num = num * 10 + str[i] - 48;
		i++;
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	neg;

	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	num = create_number(str, i);
	return (num * neg);
}
/*
#include <stdio.h>
int main ()
{
	int	x;
	char input[] = " \v	----+-0214ab567";
	
	printf("input: %s\n", input);
	x = ft_atoi(input);
	printf("value after atoi: %d\n", x);
}*/
