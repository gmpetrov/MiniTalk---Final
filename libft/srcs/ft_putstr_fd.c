/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:33:37 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:33:38 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<unistd.h>

void						ft_putstr_fd(char const *s, int fd)
{
	(void) write(fd, s, ft_strlen(s) + 1);
	return ;
}
