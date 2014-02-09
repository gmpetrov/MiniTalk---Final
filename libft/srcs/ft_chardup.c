/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chardup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 21:52:37 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 21:52:39 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libft.h"

const char						*ft_chardup(unsigned char c)
{
	char						*dup;

	dup = ft_memalloc(0x03 * sizeof(char));
	*dup = c;
	*(0x01 + dup) = 0x00;
	return ((const char *) dup);
}

