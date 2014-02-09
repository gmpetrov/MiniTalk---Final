/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:18:17 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/27 14:06:29 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strtrim(char const *s)
{
	unsigned long			ct;
	char					*cp;
	char					*str;

	ct = 0;
	cp = (char *) s;
	if (s == NULL)
		return (NULL);
	while ((*s == 10 || *s == 9 || *s == 44 || *s == 32) && ++ct)
		s++;
	while (*++s)
		;
	while (*--s && (*s == 10 || *s == 9 || *s == 44 || *s == 32))
		ct++;
	s = cp;
	ct = ft_strlen(s) - ct;
	if (!(str = (char *) malloc(++ct * sizeof(*str))))
		return (NULL);
	cp = str;
	while ((*s == 10 || *s == 9 || *s == 44 || *s == 32))
		s++;
	while (--ct)
		*str++ = *s++;
	*str = 0x00;
	return (cp);
}
