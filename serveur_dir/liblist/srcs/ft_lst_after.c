/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_after.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:38:41 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:38:42 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

void					ft_lst_after(t_element *new, t_list *list, void *str)
{
	(*(t_element *) ((*list).after)).after = new;
	(*list).after = new;

	(*new).objet = str;
	(*new).after = (*list).first;
}
