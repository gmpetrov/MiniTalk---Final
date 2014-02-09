/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_list_to_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 23:13:36 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 23:13:38 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"liblist.h"

/*
** The function obtains a double list of char and return a string.
*/

const char					*ft_lst_list_to_str(t_list *list)
{
	t_element				*element;
	unsigned long			count;
	char					*str;

	str = (char *) ft_mem_malloc(((*list).count + 0x01) * sizeof(char));
	element = (*list).first;
	count = -1;
	while (++count < (*list).count)
		{
			str[count] = *(char *) (*element).objet;
			element = (*element).after;
		}
	str[count] = 0x00;
	return ((const char *) str);
}
