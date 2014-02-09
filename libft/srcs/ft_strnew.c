/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:36:20 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:36:22 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strnew(unsigned long size)
{
	char					*str;
	unsigned long			count;

	count = 0;
	if ((str = (char *) malloc(size * sizeof(*str))) == NULL)
		return (NULL);
	while (count <= size)
		{
			str[count] = 0x00;
			count++;
		}
	return (str);
}
