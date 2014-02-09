/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_put_n.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:41:16 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:41:17 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

void					ft_lst_put_n(const t_list *list, size_t i,
									 const unsigned char hr)
{
	t_element			*target;

	if (!(*list).count)
		return ;
	target = (*list).first;
	while (--i > 0x00 && (*target).objet && (target = (*target).after));
	(void) ft_put_str_hr((*target).objet, hr);
}
