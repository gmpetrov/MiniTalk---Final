/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:44:25 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:44:27 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

int							ft_memcmp(const void *s1, const void *s2,
									  unsigned long n)
{
	const unsigned char		*cast_s1;
	const unsigned char		*cast_s2;
	unsigned long			i;

	i = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;

	while (i < n)
		{
			if (cast_s1[i] != cast_s2[i])
				return (cast_s1[i] - cast_s2[i]);
			i++;
		}
	return (0x00);
}
