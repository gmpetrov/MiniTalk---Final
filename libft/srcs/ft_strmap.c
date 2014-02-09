/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:35:45 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:35:47 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strmap(char const *s, char (*f)(char))
{
	char					*str;
	char					*cp_str;
	size_t					ct;

	if (!s || !f)
		return (NULL);
	ct = ft_strlen(s);
	if ((str = (char *) malloc((ct + 0x01) * sizeof(*str))) == NULL)
		return (NULL);
	cp_str = str;
	while (*s)
		*str++ = f(*s++);
	return (cp_str);
}
