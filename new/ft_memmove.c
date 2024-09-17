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
    //copy src into temp array
    
        //  how big does it need to be?
        // unsigned char temp[n]; CAUSES PROBLEM!!!!!!

    i = 0;
    while (i < n)
    {
        temp[i] = ((unsigned char *) src)[i];
        i++;
    }
    //copy from tmp to dest
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = temp[i];
        i++;
    }
    //return dest
    return (dest);
}

#include <stdio.h>
int main (void)
{
    char * src = "Hello";
    char * dest = "nooooooooooooo";
    dest = ft_memmove(dest, src, 3);
    printf("dest result: %s\n", dest);
}