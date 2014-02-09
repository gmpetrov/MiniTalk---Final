/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:43:49 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:43:51 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<string.h>

void						*ft_memccpy(void *s1,
										const void *s2,
										int c,
										unsigned long n)
{
	unsigned char			*str1;
	unsigned char			*str2;
	unsigned long			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0x00;
	if (str1 == NULL || str2 == NULL)
		return (0x00);
	while (i < n)
		{
			str1[i] = str2[i];
			if (str1[i++] == c)
				return (str1 + i);
		}
	return (0x00);
}
