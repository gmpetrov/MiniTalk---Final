/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 12:25:46 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 12:25:48 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"

#include						<signal.h>

/*
** The function returns void and only inits the triggers SIGUSR1 and SIGUSR2.
*/

void							ft_signal(void)
{
	(void) signal(SIGUSR1, ft_readusr);
	(void) signal(SIGUSR2, ft_readusr);
	return ;
}
