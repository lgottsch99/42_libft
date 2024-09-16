#include <string.h>

void ft_memdel(void **ap)
{
    if (ap == NULL)
        return;
    free(*ap); //only frees memory, doesnt change existence of/ location ptr is pointing to
    *ap = NULL; //ptr still points to location before, so need to set it to NULL
}