/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:47:54 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:47:55 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

void					ft_lst_free(t_list *list)
{
	t_element			*pre_target;
	t_element			*post_target;

	if (!(*list).count || (*list).count <= 0x00)
		return ;
	pre_target = (*list).first;
	post_target = (*pre_target).after;
	while (((*list).count -= 0x01))
		{
			(void) ft_mem_del((void *) &pre_target);
			pre_target = post_target;
			post_target = (*post_target).after;
		}
	(*list).first = NULL;
	(*list).after = NULL;
}
