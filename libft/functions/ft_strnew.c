 #include <stdlib.h>

char *ft_strnew(size_t size)
{
    char *ptr;
    ptr = (char *)malloc(size * sizeof(char));
    if (!ptr)
    {
        return (NULL);
        //free(ptr);
    }
    ft_strclr(ptr); //sets every char to \0
    return (ptr);
}