/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:46:10 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/22 17:14:14 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<string.h>

char						*ft_strstr(const char *s1,
									   const char *s2)
{
	const char				*cp_s2;
	unsigned long			ct_s2;

	cp_s2 = s2;
	ct_s2 = ft_strlen(s2);
	if (!*s2)
		return ((char *) s1);
	while (*s1 && *s2)
		{
			if (*s1 == *cp_s2)
				cp_s2++;
			else
				cp_s2 = s2;
			if (!*cp_s2)
				{
					while (ct_s2--)
						s1--;
					return ((char *) ++s1);
				}
			s1++;
		}
	return (NULL);
}
