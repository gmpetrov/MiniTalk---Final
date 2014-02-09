/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_put_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:45:15 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:45:16 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

void					ft_lst_put_back(const t_list *list, size_t i,
										const unsigned char hr)
{
	t_element			*target;

	target = (*list).first;
	if (i)
		(void) ft_put_str_hr((*target).objet, hr);
	while (i && --i && (*target).objet && (target = (*target).after))
		(void) ft_put_str_hr((*target).objet, hr);
}
