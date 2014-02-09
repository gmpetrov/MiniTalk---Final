/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:44:12 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:44:17 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<string.h>

void						*ft_memchr(const void *s, int c, unsigned long n)
	{
		unsigned char		*cp_s;

		cp_s = (unsigned char *) s;
		while (n--)
			{
				if (*cp_s++ == (unsigned char) c)
					return (--cp_s);
			}
		return (NULL);
	}
