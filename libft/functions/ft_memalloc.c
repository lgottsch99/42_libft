#include <stdlib.h>
#include <string.h>

void *ft_memalloc(size_t size)
{
    void *m;
    m = malloc(size * sizeof(*m));
    if (!m)
    {
        free(m);
        return (NULL);
    }
    return (m);
}