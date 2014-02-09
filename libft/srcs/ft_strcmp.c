/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:46:27 by adjivas           #+#    #+#             */
/*   Updated: 2013/12/01 22:03:52 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

int							ft_strcmp(const char *s1,
									  const char *s2)
{
	while (*s1 == *s2++)
		{
			if (*s1++ == 0x00)
				return (0x00);
		}
	return (*(unsigned char *) s1 - *(unsigned char *) --s2);
}
