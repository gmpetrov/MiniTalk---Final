/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_transform.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 21:23:10 by gpetrov           #+#    #+#             */
/*   Updated: 2014/02/08 19:29:02 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libclient.h"

#include	<signal.h>
#include	<unistd.h>

/*
** The function returns void and converts a character to byte and calls
** the server.
*/

void		ft_char_transform(int c, int pid)
{
	double	max;

	max = 256;
	while ((max /= 2) >= 1)
		{
			if (c - max >= 0)
				{
					c = c - max;
					(void) kill(pid, SIGUSR2);
				}
			else
				(void) kill(pid, SIGUSR1);
			(void) usleep(250);
		}
	return ;
}
