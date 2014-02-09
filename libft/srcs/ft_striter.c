/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:35:22 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/26 12:32:07 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

void						ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		{
			while (*s)
				(void) f(s++);
		}
}
