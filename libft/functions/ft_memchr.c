 #include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    int i;
    i = 0;
    while (i < n && (unsigned char)s[i] != '\0')
    {
        if ((unsigned char)s[i] == (unsigned char) c)
        {
            return (s[i]); //ptr an stelle i
        }
        i++;
    }
}
     //The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
     //The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.