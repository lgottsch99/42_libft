//header

//The atoi() function converts the initial portion of the string pointed to by nptr to int. The behavior is the same as
//strtol(nptr, NULL, 10); except that atoi() does not detect errors.


int ft_atoi(const char *nptr)
{
	int i;
	int neg;
	int num;

	num = 0;
	neg = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + nptr[i] - 48;
		i++;
	}
	return (num * neg);
}

// #include <stdio.h>
// int main (void)
// {
//     char *string = " \r	  	\v -12338bdhp ";
// 	int x = ft_atoi(string);
// 	printf("x: %i\n", x);
// }