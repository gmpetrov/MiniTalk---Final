/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:34:47 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:35:31 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

void						ft_striteri(char *s,
										void (*f)(unsigned int, char *))
{
	unsigned int			index;

	if (s && f)
		{
			index = 0x00;
			while (*s)
				(void) f(index++, s++);
		}
}
