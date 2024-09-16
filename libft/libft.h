// globals FORBIDDEN

//macros

//typedefs

//libraries
#include <string.h> //--> in macro verstecken? alle benutzten libraries?

// contains all prototypes of functions
void    ft_bzero(void *s, size_t n);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl(char const *s);
void    ft_putendl_fd(char const *s, int fd);

int	    ft_atoi(char *str);

int     ft_isdigit(int a);
int     ft_isalpha(int a);
int     ft_isalnum(int arg);
int     ft_isascii(int arg);
int     ft_isprint(int arg);

int	    ft_strlen(const char *s);
char	*ft_strcat(char *dest, char *src);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strdup(const char *s1);
int	    ft_strcmp(char *s1, char *s2);
int	    ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(char *haystack, char *needle);
char    *strnstr(const char *haystack, const char *needle, size_t len);
void    ft_strclr(char *s);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
char    *ft_strchr(char *s, int c);

void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void * dst, const void * src, int c, size_t n);
void    ft_memdel(void **ap);

void    *ft_memalloc(size_t size);


//extra added
int ft_islower(int arg);
int ft_isupper(int c);

