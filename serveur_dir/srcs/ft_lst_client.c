/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_client.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 23:09:42 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 23:09:43 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"
#include						"libft.h"

/*
** The function returns void and writes list.
*/

void							ft_lst_client(t_list *list)
{
	const char					*str;

	if (!(str = ft_lst_list_to_str(list)))
		(void) ft_lst_put_back(list, (*list).count, 0x00);
	else
		(void) ft_putstr_fd_len(str, 0x01, (*list).count);
	(void) ft_putchar_fd(0x0a, 0x01);
	(void) ft_lst_free_objet(list);
	(void) ft_lst_free(list);
	return ;
}
