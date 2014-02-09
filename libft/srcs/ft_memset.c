/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:42:29 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:42:34 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

void						*ft_memset(void *s, int c, unsigned long n)
{
	unsigned long			i;

	i = 0;
	while (i < n)
		((char *) s)[i++] = c;
	return (s);
}
