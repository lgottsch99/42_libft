/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:15:13 by lgottsch          #+#    #+#             */
/*   Updated: 2024/09/16 17:52:04 by lgottsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // for NULL
#include <string.h> // for size_t


int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);


int	ft_toupper(int c);
int	ft_tolower(int c);

int	ft_strncmp(const char *s1, const char *s2, size_t n);


char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);



void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *s);

