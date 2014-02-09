/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintodec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 19:32:44 by gpetrov           #+#    #+#             */
/*   Updated: 2014/02/08 19:32:45 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"
#include						"libft.h"

/*
** The function returns the converting result of bin to ascii.
*/

unsigned char					ft_bintodec(const char *bin)
{
	int							max;
	int							dec;
	int							i;
	char						tmp;

	i = -1;
	dec = 0;
	max = 128;
	while (max >= 1)
		{
			i++;
			tmp = bin[i];
			dec += (tmp * max);
			max = max / 2;
		}
	return (dec);
}
