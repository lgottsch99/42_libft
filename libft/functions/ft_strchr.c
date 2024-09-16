 //The strchr() function locates the first occurrence of c (converted to a char) 
     //in the string pointed to by s.  The terminating
     //null character is considered to be part of the string; 
     //therefore if c is ‘\0’, the functions locate the terminating ‘\0’.

#include <string.h>
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

 char *ft_strchr(char *s, int c)
 {
     char x;
     int slen;
     int i;

     slen = ft_strlen(s);
    x = (char)c;
    i = 0;
    while (i <= slen)
    {
        if (s[i] == x)
            return (s+i);
        i++;
    }
    return (NULL);
 }