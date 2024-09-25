# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgottsch <lgottsch@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 17:49:09 by lgottsch          #+#    #+#              #
#    Updated: 2024/09/25 20:40:43 by lgottsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFUNCTIONS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
					ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
					ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c\
					 ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
					 ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
					 ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
					 ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
					 ft_tolower.c ft_toupper.c

BFUNCTIONS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
					
					 
O_FILES = $(CFUNCTIONS:.c=.o)
BO_FILES = $(BFUNCTIONS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(O_FILES)
	ar rcs $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES) $(BO_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BO_FILES)
	ar rcs $(NAME) $(BO_FILES)

.PHONY: all clean fclean re
