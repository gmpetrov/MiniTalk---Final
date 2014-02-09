/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:46:40 by adjivas           #+#    #+#             */
/*   Updated: 2013/12/01 22:03:10 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

int							ft_strncmp(const char *s1,
									   const char *s2,
									   unsigned long n)
{
	unsigned long			i;

	i = 0x00;
	while (s1[i] == s2[i] && s1[i] && i < n)
		i++;
	if (i != n)
		return (s1[i] - s2[i]);
	else
		return (0x00);
}
