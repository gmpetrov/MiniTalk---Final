/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:35:54 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:35:56 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strmapi(char const *s,
										char (*f)(unsigned int, char))
{
	char					*str;
	unsigned int			index;

	if (!s || !f)
		return (NULL);
	index = 0x00;
	if ((str = (char *) malloc((ft_strlen(s) + 0x01) * sizeof(*str))) == NULL)
		return (NULL);
	while (*s)
		*str++ = f(index++, *s++);
	*str = 0x00;
	while (*--str > 0x00)
		;
	return (++str);
}
