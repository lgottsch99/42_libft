/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:15:37 by lgottsch          #+#    #+#             */
/*   Updated: 2024/06/18 15:49:38 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char *array, int i)
{
	while (i > 0)
	{
		i--;
		write(1, &array[i], 1);
	}
}

void	ft_putnbr(int n)
{
	long	number;
	char	array[10];
	int		i;

	i = 0;
	number = n;
	if (number == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (number < 0)
	{
		number = number * -1;
		write(1, "-", 1);
	}
	while (number > 0)
	{
		array[i] = (number % 10) + 48;
		number = number / 10;
		i++;
	}
	display(array, i);
}
/*
int	main ()
{
	int x = -456;
	ft_putnbr(x);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}*/
//long needed for conversion from neg to pos!!
//array to store: one more added after last number, 
//so need to minus one FIRST (thats also why condition i >>>0!
