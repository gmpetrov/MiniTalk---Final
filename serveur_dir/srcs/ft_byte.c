/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_byte.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 16:45:14 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/09 18:00:10 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"
#include						"libft.h"

/*
** The function registers the byte and writes by call the char.
*/

void							ft_byte(unsigned short int bite)
{
	static t_list				*list;
	static unsigned short int	targ;
	static char					*byte;
	unsigned char				dup;

	if (!byte && !(targ = 0))
		{
			list = ft_memalloc((0x02) * sizeof(t_list));
			byte = ft_memalloc((0x08) * sizeof(char));
			byte[0x08] = 0x00;
		}
	byte[targ] = bite;
	if (++targ == 0x08 && !(targ = 0))
		{
			dup = ft_bintodec(byte);
			if (!dup)
				(void) ft_lst_client(list);
			else
				(void) ft_lst_add(list, (void *) ft_chardup(dup));
		}
	return ;
}
