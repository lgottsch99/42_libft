// header

#include <unistd.h>

// void    ft_putchar_fd(char c, int fd)
// {
//     write(fd, &c, 1);
// }

void    ft_putnbr_fd(int n, int fd)
{
	//int to chars
	char array[10];
	int	i;
	long num;

	num = n;
	//write array
	if (num == 0)
	{
		write(fd, "0", 1);
		return;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * (-1);
	}
	i = 0;
	while (num)//cut last digit off and store in array
	{
		array[i] = (num % 10) + 48; // get last d and shift to char
		num = num / 10; //shift comma
		i++;
	}
	//print array but backwards
	while (i > 0)
	{
		i--;
		ft_putchar_fd(array[i], fd);
	}
}

// int main (void)
// {
// 	int x =  0;
// 	ft_putnbr_fd(x, 1);
// 	write(1, "\n", 1);
// }