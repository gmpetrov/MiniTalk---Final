/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:44:34 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/27 16:18:44 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

unsigned long				ft_strlen(const char *s)
{
	const int				*end = (int *) s;
	unsigned int			target;

	if (!s)
		return (0x00);
	while ((target = *end++))
		{
			if ((target - 0x01010101) & ~target & 0x80808080)
				{
					if (!(target & 0xFF))
						return ((const char *) end - 0x04 - s);
					if (!(target & 0xFF00))
						return ((const char *) end - 0x03 - s);
					if (!(target & 0xFF0000))
						return (((const char *) end - 0x02) - s);
					if (!(target & 0xFF000000))
						return (((const char *) end - 0x01) - s);
					return (((const char *) end + 0x03) - s);
				}
		}
	return (0x00);
}