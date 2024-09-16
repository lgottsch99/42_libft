#include <unistd.h>

// void	ft_putstr(char const *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, &str[i], 1); //evtl putchar
// 		i++;
// 	}
// }

void ft_putendl(char const *s)
{
    ft_putstr(s);
    write(1, "\n", 1);
}

// int main (void)
// {
//     char *s = "hello";
//     ft_putendl(s);
// }
