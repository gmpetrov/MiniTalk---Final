/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:31:35 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/09 18:04:40 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"liblist.h"

#include					<stdlib.h>

static void					*ft_mem_set(void *s, int c, unsigned long n)
{
	unsigned long			i;

	i = 0;
	while (i < n)
		((char *) s)[i++] = c;
	return (s);
}

void						*ft_mem_malloc(unsigned long size)
{
	void					*mem;

	if ((mem = (void *) malloc(size * sizeof(*mem))) == NULL)
		return (NULL);
	mem = ft_mem_set(mem, 0x00, size);
	return (mem);
}
