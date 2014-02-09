/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:36:35 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:36:37 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strsub(char const *s,
									   unsigned int start,
									   size_t len)
{
	char					*str;

	if (!s)
		return (NULL);
	if ((str = (char *) malloc(len * sizeof(*str))) == NULL)
		return (NULL);
	while (start-- && *++s)
		;
	(void) ft_strncpy(str, s, len);
	return (str);
}
