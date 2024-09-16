#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    //The memcpy() function copies n bytes from memory area src to memory area dst. 
    // If dst and src overlap, behavior is undefined.

  unsigned char *tmp1; //why u char needed and void* not ok?
  unsigned char *tmp2;

    tmp1 = (unsigned char *)dst;
    tmp2 = (unsigned char *)src;

    while(n > 0)
    {
        *tmp1 = *tmp2;
        tmp1++;
        tmp2++;
        n--;
    }
    return (dst); //The memcpy() function returns the original value of dst. ->OG POINTER 
}


// int main(void) CHAT GPT MALLOC MAIN
// {
//     const char *src = "HIhello"; // src can still be a string literal
//     char *dst = malloc(8 * sizeof(char)); // Allocate memory for dst

//     if (dst == NULL)
//     {
//         fprintf(stderr, "Memory allocation failed\n");
//         return 1;
//     }

//     strcpy(dst, "aaaaaaaaa"); // Initialize dst with some value
//     ft_memcpy(dst, src, 5);
//     printf("result dst: %s\n", dst);

//     free(dst); // Free the allocated memory
//     return 0;
// }
// #include <stdio.h>
//------------------
// int main (void) MY OWN MAIN, bus error 10
// {
//     char *src = "HIhello";
//     char *dst = "yoooooo";
//     ft_memcpy(dst, src, 5);
//     printf("result dst: %s\n", dst);
// }