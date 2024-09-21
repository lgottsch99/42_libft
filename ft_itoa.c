//HEADER 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(const char *s1)
// {
// 	char	*ptr;
// 	int	len;
// 	int	i;

// 	len = ft_strlen(s1) + 1;
// 	ptr = (char *)malloc(sizeof(char) * len);
// 	if (!ptr)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		ptr[i] = (char)s1[i];
// 		i++;
// 	}
// 	return (ptr);
// }

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
use: malloc
return: The string representing the integer.
NULL if the allocation fails.
*/

// static size_t ft_length(int n)
// {	
// 	size_t	x;
// 	long	num; 

// 	num = n; 
// 	x = 0; 
// 	if (num < 0)//space for -
// 	{
// 		x++; 
// 		num = num * (-1);
// 	}
// 	while (num)
// 	{
// 		num = num / 10; //shift comma
// 		x++;
// 	}
// 	return (x);
// }

static char *ft_switch(char *itoa, size_t x)
{
	size_t	i; 
	char	tmp; //to store for switching

	i = 0;
	while (i < (x / 2))
	{
		tmp = itoa[i];
		itoa[i] = itoa[x - i - 1]; //-1 bc index at 0
		itoa[x - i - 1] = tmp; 
		i++;
	}
	return (itoa);
}

char	*ft_itoa(int n)
{
	size_t	x;
	size_t	i; 
	char	*itoa; 
	long	num; 

	if (n == 0)
		return(ft_strdup("0"));

	//get len of array
	x = ft_length(n);

	//malloc
	itoa = (char *)malloc(sizeof(char) * (x + 1));
	if(!itoa)
		return (NULL);

	//putnbr into array
	num = n; 
	i = 0; 
	if (num < 0)
	{
		num = num * (-1);
		//i++;
	}
	while (num)
	{
		itoa[i] = (num % 10) + 48; // get last d, shift to char, storing backwards
		num = num / 10; //shift comma
		i++;
	}
	if (n < 0)
	{
		itoa[i] = '-';
		i++;
	}
	itoa[i] = '\0';
	//switch to right order
	itoa = ft_switch(itoa, x);

	return (itoa);
}

// int main (void)
// {
// 	int x1 = -2147483648;
// 	char *string1 = ft_itoa(x1);
// 	printf("%s\n", string1);
// 	int x2 = 2147483647;
// 	char *string2 = ft_itoa(x2);
// 	printf("%s\n", string2);
// 	int x3 = 0;
// 	char *string3 = ft_itoa(x3);
// 	printf("%s\n", string3);
// 	int x4 = 123;
// 	char *string4 = ft_itoa(x4);
// 	printf("%s\n", string4);
// }