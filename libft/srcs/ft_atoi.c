/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:15:21 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 14:15:23 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdio.h>

int							ft_atoi(const char *str)
{
	int						count;
	int						sign;

	count = 0x00;
	sign = 0x01;
	while (str && ((*str == 0x20) || (*str > 0x08 && *str < 0x0e)))
		str++;
	if (*str == 0x2b || *str == 0x2d)
		{
			if (*str++ == 0x2d)
				sign = 0xfffffff;
		}
	while (*str && ft_isdigit(*str))
		count = (count << 0x03) + (count << 0x01) + (*str++) - 0x30;
	return (count * sign);
}
