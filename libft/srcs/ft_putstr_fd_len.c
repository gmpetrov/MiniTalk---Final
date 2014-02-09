/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:33:37 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:33:38 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<unistd.h>

void						ft_putstr_fd_len(char const *s, int f,
											 unsigned long l)
{
	(void) write(f, s, l);
	return ;
}
