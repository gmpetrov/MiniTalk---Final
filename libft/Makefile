# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 11:23:59 by adjivas           #+#    #+#              #
#    Updated: 2013/12/03 13:01:17 by adjivas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a
DIRC  = srcs/
FLAG  = -Werror -Wextra -Wall -O3
INDS  = -I./includes/
SRCS  = ft_strlen.c
SRCS += ft_strcmp.c
SRCS += ft_putstr_fd_len.c
SRCS += ft_atoi.c
SRCS += ft_isalpha.c
SRCS += ft_isdigit.c
SRCS += ft_isalnum.c
SRCS += ft_isascii.c
SRCS += ft_isprint.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strequ.c
SRCS += ft_putchar.c
SRCS += ft_putstr.c
SRCS += ft_putendl.c
SRCS += ft_strdup.c
SRCS += ft_memcpy.c
SRCS += ft_strncmp.c
SRCS += ft_stpcpy.c
SRCS += ft_strchr.c
SRCS += ft_itoa.c
SRCS += ft_strstr.c
SRCS += ft_strrchr.c
SRCS += ft_strnstr.c
SRCS += ft_strcat.c
SRCS += ft_strnew.c
SRCS += ft_strclr.c
SRCS += ft_strsub.c
SRCS += ft_memcmp.c
SRCS += ft_stpncpy.c
SRCS += ft_memdel.c
SRCS += ft_strcpy.c
SRCS += ft_strdel.c
SRCS += ft_strncat.c
SRCS += ft_strncpy.c
SRCS += ft_strtrim.c
SRCS += ft_putchar_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_memalloc.c
SRCS += ft_strnequ.c
SRCS += ft_memset.c
SRCS += ft_bzero.c
SRCS += ft_strjoin.c
SRCS += ft_memmove.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_striter.c
SRCS += ft_striteri.c
SRCS += ft_strmap.c
SRCS += ft_strmapi.c
SRCS += ft_putnbr.c
SRCS += ft_chardup.c
LSTC  = $(patsubst %,$(DIRC)%,$(SRCS))
ONJO  = $(SRCS:.c=.o)

.PHONY: default all clean fclean re

default: all

all: $(NAME) clean

$(NAME):
	@gcc -c $(INDS) $(FLAG) $(LSTC)
	@ar rc $(NAME) $(ONJO)
	@ranlib $(NAME)

clean:
	@rm -f $(ONJO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
