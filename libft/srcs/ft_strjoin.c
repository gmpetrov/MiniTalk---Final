/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:58:34 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/09 17:54:08 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strjoin(char const *s1, char const *s2)
{
	char					*str;
	char					*p_str;

	if (!s1 || !s2)
		return (NULL);
	if ((str = (char *) malloc((ft_strlen(s1) +
		ft_strlen(s2)) * sizeof(*str))) == NULL)
		return (NULL);
	p_str = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = 0x00;
	return (p_str);
}
