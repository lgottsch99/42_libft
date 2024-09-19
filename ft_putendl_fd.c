//header
#include <string.h>
// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

#include <unistd.h>
void    ft_putendl_fd(char *s, int fd)
{
    size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
    write(fd, "\n", 1);
}

// int main (void)
// {
// 	char * s = "I dont want to be sick anymore.";
// 	ft_putendl_fd(s, 1);
// }