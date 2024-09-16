  #include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    // The memmove() function copies len bytes from string src to string dst.  
    //The two strings may overlap; the copy is always done in a non-destructive manner

//copy source iwo hin to be safe dass es nicht verändert wird ->NO MALLOC 
    // --> geht ft_memalloc?

    unsigned char *d;
    unsigned char *s;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    while (len > 0)
    {
        *d = *s;
        d++;
        s++;
        len--;
    }

    return (dst);
}