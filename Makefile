#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/07 21:30:41 by gpetrov           #+#    #+#              #
#    Updated: 2014/02/09 18:10:01 by gpetrov          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		= client
NAME2		= serveur
FILES		= main.c ft_arg_error.c ft_bin_to_dec.c ft_char_transform.c
FILES2		= ft_bintodec.c ft_getpid.c ft_pause.c ft_signal.c ft_byte.c \
			ft_lst_client.c ft_readusr.c main.c
SRCS		= $(addprefix client_dir/srcs/, $(FILES))
SRCS2	 	= $(addprefix serveur_dir/srcs/, $(FILES2))
OBJS		= $(SRCS:client_dir/srcs/%.c=client_dir/.obj/%.o)
OBJS2		= $(SRCS:serveur_dir/srcs/%.c=serveur_dir/.obj/%.o)
INC			= -I client_dir/includes -I libft/includes
INC2		= -I serveur_dir/includes -I libft/includes \
			-I serveur_dir/liblist/includes
FLAGS		=  -Wall -Wextra -Werror -O3
LIB			= -L libft -lft

all: $(NAME) $(NAME2)
$(NAME): $(OBJS) $(OBJS2)
	make -C libft
	make -C serveur_dir/liblist
	cc $(FLAGS) $(SRCS) -o $(NAME) $(INC) $(LIB)
	cc $(FLAGS) $(SRCS2) -o $(NAME2) $(INC2) $(LIB) \
	-L serveur_dir/liblist -llist
client_dir/.obj/%.o: client_dir/srcs/%.c
	mkdir -p client_dir/.obj
	cc -c $< -o $@ $(FLAGS) $(INC)
serveur_dir/.obj/%.o: serveur_dir/srcs/%.c
	mkdir -p serveur_dir/.obj
	cc -c $< -o $@ $(FLAGS) $(INC2)
clean:
	rm -rf .obj
fclean: clean
	rm -f $(NAME)
	rm -f $(NAME2)
re: fclean all
