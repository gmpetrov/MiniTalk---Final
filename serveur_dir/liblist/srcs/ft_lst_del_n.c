/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:48:26 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/09 18:01:47 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

static void				ft_lst_del_erase(t_element *pre_target)
{
	t_element			*target;

	target = (*pre_target).after;
	(*pre_target).after = (*target).after;
	(void) ft_mem_del((void *) &target);
}

void					ft_lst_del_n(t_list *list, size_t i)
{
	t_element			*pre_target;

	if (!(*list).count || i <= 0x00 || i > (*list).count)
		return ;
	else if ((*list).count <= 0x00)
		return ((void) ft_lst_free(list));
	(*list).count--;
	pre_target = (*list).first;
	if (i == 0x01)
		{
			(*list).first = (*pre_target).after;
			(*(t_element *) (*list).after).after = (*list).first;
			return (ft_mem_del((void *) &pre_target));
		}
	while (--i > 0x01 && (pre_target = (*pre_target).after));
	(void) ft_lst_del_erase(pre_target);
}
