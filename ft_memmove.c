//header

//The memmove() function copies n bytes from memory area src to memory area dest. 
//The memory areas may overlap: copying takes place as though the bytes in src are 
//first copied into a temporary array that does not overlap src or dest, and the bytes 
//are then copied from the temporary array to dest.
//returns ptr to dest.
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char    *temp_d;
    unsigned char    *temp_s;

    temp_d = (unsigned char *)dest;
    temp_s = (unsigned char *)src;
    i = 0;
    if ((temp_d == temp_s) || n == 0)
        return (dest);
    if (temp_d < temp_s)
    {
        while (i < n)
        {
            temp_d[i] = temp_s[i];
            i++;
        }
    }
    else if (temp_s < temp_d)
    {
        while (n > 0)
        {
            temp_d[n - 1] = temp_s[n - 1]; //why need to -1? BC INDEX STARTS AT 0!!!
            n--;
        }
    }
    return (dest);
}
//what if they are pointing to same location?
    //if src < dest -> backward copying
    //check if src is after dest < src -> forward copying

// #include <stdio.h>
// int main(void)
// {
//     char src1[] = "Hello, World!";
//     char src2[] = "Overlap Test";
    
//     // Test case 1: Basic copy
//     char dest1[20];
//     ft_memmove(dest1, src1, 13); // Copy "Hello, World!"
//     printf("Test 1 - Basic copy: %s\n", dest1);

//     // Test case 2: Overlapping regions (src before dest)
//     printf("Before memmove: %s\n", src2);
//     ft_memmove(src2 + 8, src2, 6); // Copy "Overlap" into "Test"
//     printf("Test 2 - Overlapping src before dest: %s\n", src2);

//     // Test case 3: Overlapping regions (dest before src)
//     char dest2[20] = "abcdefghij";
//     printf("Before memmove: %s\n", dest2);
//     ft_memmove(dest2, dest2 + 5, 5); // Shift "fghij" to the start
//     dest2[5] = '\0'; // Null terminate
//     printf("Test 3 - Overlapping dest before src: %s\n", dest2);

//     return 0;
// }
