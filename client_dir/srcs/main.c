/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 17:56:31 by gpetrov           #+#    #+#             */
/*   Updated: 2014/02/09 17:56:34 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libclient.h"
#include	"libft.h"

int			main(int ac, char **av)
{
	int		i;
	int		pid;
	char	*str;

	i = -1;
	if (ac != 3)
		(void) ft_arg_error();
	pid = ft_atoi(av[1]);
	str = ft_strdup(av[2]);
	while (str[++i] != 0)
		(void) ft_char_transform(str[i], pid);
	(void) ft_char_transform('\0', pid);
	return (0);
}
