/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:43:41 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:43:43 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

void						*ft_memcpy(void *__restrict s1,
									   const void *__restrict s2,
									   unsigned long n)
{
	unsigned long			ct;
	unsigned char			*cp_s1;

	ct = 0;
	cp_s1 = ((unsigned char *) s1);
	while (n-- && s2)
		{
			cp_s1[ct] = ((unsigned char *) s2)[ct];
			ct++;
		}
	return ((void *) cp_s1);
}
