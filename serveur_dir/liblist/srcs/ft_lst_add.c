/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:40:50 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:40:51 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

#include				<stdio.h>

void					ft_lst_add(t_list *list, void *objet)
{
	if (!(*list).count)
		(*list).count = 0x00;
	if ((*list).count++)
		(void) ft_lst_after(ft_lst_malloc(), &(*list), objet);
	else
		(void) ft_lst_first(ft_lst_malloc(), &(*list), objet);
}
