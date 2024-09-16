#include "libft.h" //function isdigit + isalpha

int ft_isalnum(int arg)
{
    if (ft_isdigit(arg)!= 0 || ft_isalpha(arg) != 0)
    return 1;
    else 
    return 0;
}