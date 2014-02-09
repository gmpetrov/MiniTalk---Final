/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readusr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 15:53:33 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 15:53:35 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"

#include						<signal.h>

/*
** The function returns void and calls ft_byte with the bit value from (usr).
*/

void							ft_readusr(int usr)
{
	return ((void) ft_byte(!!(usr - SIGUSR1)));
}
