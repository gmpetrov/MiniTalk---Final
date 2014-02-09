/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:45:49 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/22 15:03:16 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<string.h>

char						*ft_strchr(const char *s, int c)
{
	if (*s && *s++ == (char) c)
		return ((char *) --s);
	while (*s && *s++)
		{
			if (*s == (char) c)
				return ((char*) s);
		}
	return (NULL);
}
