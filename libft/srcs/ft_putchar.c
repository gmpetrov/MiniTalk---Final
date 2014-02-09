/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:28:44 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/09 17:58:01 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"
#include					<unistd.h>

void						ft_putchar(char c)
{
	(void) write(0x01, &c, 0x01);
	return ;
}
