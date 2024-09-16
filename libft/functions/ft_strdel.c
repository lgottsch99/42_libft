#include <string.h>

void ft_strdel(char **as)
{
    if (as == NULL) // Geht auch mit ft_memdel
    return ;
    free(*as);
    *as = NULL;
}