/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:31:35 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:31:36 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

void						*ft_memalloc(unsigned long size)
{
	void					*mem;

	if ((mem = (void *) malloc(size * sizeof(*mem))) == NULL)
		return (NULL);
	mem = ft_memset(mem, 0x00, size);
	return (mem);
}
