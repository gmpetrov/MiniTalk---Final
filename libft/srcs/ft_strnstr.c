/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:46:18 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:46:20 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

static int					ft_strnstr_return(const char *s1,
											  const char *s2,
											  unsigned long c,
											  unsigned long n)
{
	unsigned long			count;

	count = 0;
	while (s1[c] && s2[c] && s2[count] == s1[c] && (c++ < n))
		{
			count++;
			if (s2[count] == 0x00)
				return (0x01);
		}
	return (0x00);
}

char						*ft_strnstr(const char *s1,
										const char *s2,
										unsigned long n)
{
	unsigned long			count;

	count = 0;
	if (!s2[0x00] || !s1[0x00])
		return ((char *) s1);
	while (s1[count] != 0x0a && count < n)
		{
			if (s2[0x00] == s1[count])
				{
					if (ft_strnstr_return(s1, s2, count, n))
						return ((char *) s1 + count);
				}
			count++;
		}
	return (0x00);
}
