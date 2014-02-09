/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:45:06 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/22 12:52:45 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

char						*ft_stpncpy(char *__restrict s1,
										const char *__restrict s2,
										unsigned long n)
{
	char					*cp_s1;

	cp_s1 = (char *) s1;
	while (*s2 != 0x00 && n--)
		*s1++ = *s2++;
	return (cp_s1);
}
