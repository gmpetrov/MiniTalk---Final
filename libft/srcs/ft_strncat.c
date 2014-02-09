/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:45:29 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:45:30 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

char						*ft_strncat(char *__restrict s1,
										const char *__restrict s2,
										unsigned long n)
{
	char					*cp_s1;

	cp_s1 = s1;
	while (*s1 != 0x00)
		s1++;
	while (n && (*s1++ = *s2++))
		n--;
	*s1 = 0x00;
	return (cp_s1);
}
