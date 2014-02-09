/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:37:38 by adjivas           #+#    #+#             */
/*   Updated: 2013/12/01 22:02:40 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<string.h>

char						*ft_strncpy(char *s1,
										char const *s2,
										unsigned long n)
{
	unsigned long			i;

	if (s2 == NULL || s1 == NULL)
		return (NULL);
	i = 0x00;
	while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	if (i != n)
		s1[i] = 0x00;
	return (s1);
}
