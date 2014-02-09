/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:44:45 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:44:47 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strdup(const char *s1)
{
	char					*str;
	size_t					size;

	size = ft_strlen(s1) + 0x01;
	if ((str = (char *) malloc(size * sizeof(*str))) == NULL)
		return (NULL);
	(void) ft_memcpy((void *) str, (void *) s1, size);
	return (str);
}
