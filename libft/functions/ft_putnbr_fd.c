//#include "libft.h"
#include <unistd.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	display(char *array, int i, int fd)
{
	while (i > 0)
	{
		i--;
		ft_putchar_fd(&array[i], fd);
	}
}

void ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	array[10];
	int		i;

	i = 0;
	number = n;
	if (number == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (number < 0)
	{
		number = number * -1;
		ft_putchar_fd('-', fd);
	}
	while (number > 0)
	{
		array[i] = (number % 10) + 48;
		number = number / 10;
		i++;
	}
	display(array, i, fd);
}
