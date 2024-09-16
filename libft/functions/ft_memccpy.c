#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    // The memccpy() function copies bytes from string src to string dst.  
    //If the character c (as converted to an unsigned char) occurs in the string src,
    //  the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  
    //Otherwise, n bytes are copied, and a NULL pointer is returned.
    size_t i;
    unsigned char *tmp1; //why u char needed and void* not ok?
    unsigned char *tmp2;

    tmp1 = (unsigned char *)dst;
    tmp2 = (unsigned char *)src;

    i = 0;
    while (i < n)
    {
        *tmp1 = *tmp2;
        if (*tmp2 == (unsigned char)c)
        {
            return (tmp1++);
        }
        tmp1++;
        tmp2++;
        i++;
    }
    return (0);
}

// int main(void)
// {
//     const char *src = "HIhAello"; // src can still be a string literal
//     char *dst = malloc(8 * sizeof(char)); // Allocate memory for dst
//     void *ptr = malloc(sizeof(void*));

//     if (dst == NULL)
//     {
//         fprintf(stderr, "Memory allocation failed\n");
//         return 1;
//     }

//     strcpy(dst, "11111111111"); // Initialize dst with some value
//     ptr = ft_memccpy(dst, src, 65, 7);
//     printf("result dst: %s\n", dst);
// printf("result ptr: %p\n", ptr);

//     free(dst); // Free the allocated memory
//     free(ptr);
//     return 0;
// }