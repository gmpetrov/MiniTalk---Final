/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free_objet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 22:48:14 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 22:48:16 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

#include				<stdlib.h>

void					ft_lst_free_objet(t_list *list)
{
	unsigned long		count;
	t_element			*target;

	target = (*list).first;
	count = (*list).count;
	if (count)
		(void) free((*target).objet);
	while (count && --count && (*target).objet && (target = (*target).after))
		(void) free((*target).objet);
	return ;
}
