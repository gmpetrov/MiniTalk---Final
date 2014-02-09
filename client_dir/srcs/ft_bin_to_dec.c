/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_to_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 21:23:10 by gpetrov           #+#    #+#             */
/*   Updated: 2014/02/08 19:29:02 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libclient.h"
#include	"libft.h"

int			ft_bin_to_dec(char *bin)
{
	int		max;
	int		dec;
	int		i;
	char	tmp;

	i = -1;
	dec = 0;
	max = 128;
	while (max >= 1)
		{
			tmp = bin[++i];
			dec += (ft_atoi(&tmp) * max);
			max = max / 2;
		}
	return (dec);
}
