#include <unistd.h> //better in macro 
//#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main (void)
// {
//     char c = 'H';
//     int fd = 1;
//     ft_putchar(c, fd);
//     ft_putchar('\n', fd);
// }