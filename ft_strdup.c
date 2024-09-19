//header

/*
The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and
     returns a pointer to it.  The pointer may subsequently be used as an argument to the function
     free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/
#include <stdlib.h>

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int	len;
	int	i;

	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = (char)s1[i];
		i++;
	}
	return (ptr);
}

// /in loop: len includes nul, so it should be copied as well
// #include <stdio.h>
// int main (void)
// {
// 	char *s1 = "";
// 	char *ptr;
// 	ptr = ft_strdup(s1);
// 	printf("%s\n", ptr);
// }