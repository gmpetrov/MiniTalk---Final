/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:45:59 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:46:01 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<string.h>

char						*ft_strrchr(const char *s, int c)
{
	if (!s)
		return (ft_strdup("\0"));
	else if (!c)
		return (ft_strchr(s, 0x00));
	while (*(++s))
		;
	s--;
	if (*s == c)
		return ((char *) s);
	while (*s)
		{
			if (*s-- == c)
				return ((char *) ++s);
		}
	return (NULL);
}
