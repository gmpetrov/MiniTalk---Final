/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:39:59 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:32:19 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<unistd.h>

void						ft_putendl(char const *s)
{
	(void) write(0x01, s, ft_strlen(s));
	(void) write(0x01, "\n", 0x01);
	return ;
}
