/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:32:30 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:32:33 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

void						ft_putendl_fd(char const *s, int fd)
{
	(void) ft_putstr_fd(s, fd);
	(void) ft_putchar_fd(0x0a, fd);
	return ;
}
