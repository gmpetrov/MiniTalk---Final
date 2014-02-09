# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/09 22:16:41 by adjivas           #+#    #+#              #
#    Updated: 2014/01/09 22:16:42 by adjivas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = liblist.a
DIRC  = srcs/
FLAG  = -Wall -Wextra -Werror
INDS  = -I./includes/ 
SRCS= ft_lst_add.c
SRCS += ft_lst_after.c
SRCS += ft_lst_del_n.c
SRCS += ft_lst_first.c
SRCS += ft_lst_free.c
SRCS += ft_lst_malloc.c
SRCS += ft_lst_put_back.c
SRCS += ft_lst_put_n.c
SRCS += ft_lst_free_objet.c
SRCS += ft_mem_del.c
SRCS += ft_mem_malloc.c
SRCS += ft_put_str_hr.c
SRCS += ft_str_len.c
SRCS += ft_lst_list_to_str.c
LSTC  = $(patsubst %,$(DIRC)%,$(SRCS))
OBJO  = $(SRCS:.c=.o)

.PHONY: default all $(NAME) clean fclean re

default: all

all: $(NAME) clean

$(NAME):
	@gcc -c $(INDS) $(FLAG) $(LSTC)
	@ar rc $(NAME) $(OBJO)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
