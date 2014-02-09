/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:40:25 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:40:26 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

void					ft_lst_first(t_element *pre, t_list *list, void *str)
{
	(*list).after = pre;
	(*list).first = pre;

	(*pre).objet = str;
	(*pre).after = pre;
}
