/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:44:00 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:44:02 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

void						*ft_memmove(void *s1, const void *s2,
										unsigned long n)
{
	unsigned char			*buf;

	buf = (unsigned char *) malloc(sizeof(buf) * n);
	(void) ft_memcpy(buf, s2, n);
	(void) ft_memcpy(s1, buf, n);
	(void) free(buf);
	return (s1);
}
