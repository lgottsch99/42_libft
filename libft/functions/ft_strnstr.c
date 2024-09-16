#include <string.h>
// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }
 
 char *ft_strnstr(char *haystack, char *needle, size_t len)
 {
    //  The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more
    //  than len characters are searched.  Characters that appear after a ‘\0’ character are not searched. 
 int		lneedle;
	size_t		i;
	int		check;

	lneedle = ft_strlen(needle); //can i use other fts like this?
	if (lneedle == 0 || len == 0) //if no char to be searched return
		return (haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		check = 0;
		if (haystack[i] == needle[0])
		{
			while (needle[check] != '\0' && haystack[i + check] == needle[check])
				check++;
			if (check == lneedle)
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
 }


// #include <stdio.h>
// int main()
// {
// 	char *ptr;
// 	char haystack[] = "Hello how are you today?";
// 	char needle[] = "how";

// 	ptr = ft_strnstr(haystack, needle, 5);
// 	printf("returned pointer: %s\n", ptr);
// }