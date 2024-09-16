//#include "libft.h"
#include <unistd.h>

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int main(void)
// {
//     char* s = "Hello";
//     int fd = 1;

//     ft_putstr_fd(s, fd);
//     ft_putchar_fd('\n', fd);
// }