//42 header?
//char passed to function, but it converts it to  int
int     ft_isdigit(int a)
{
    if (a >= 48 && a <= 57)
    return (1);
    else
    return (0);
}

// #include <stdio.h>
// int main (void)
// {
//     char a = '6';
//     int ret = ft_isdigit(a);
//     printf("returned value: %d\n", ret);
//     return 0;
// }
