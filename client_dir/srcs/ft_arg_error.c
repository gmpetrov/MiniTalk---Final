/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 21:23:10 by gpetrov           #+#    #+#             */
/*   Updated: 2014/02/08 19:29:02 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libclient.h"
#include	"libft.h"

#include	<stdlib.h>

void		ft_arg_error(void)
{
	(void) ft_putstr_fd("[USAGE] ./client [PID] [STR]\n\0", 0x01);
	(void) exit(0);
}
