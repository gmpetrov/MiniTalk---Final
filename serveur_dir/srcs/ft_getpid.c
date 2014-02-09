/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getpid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 12:04:18 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 12:04:20 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"

#include						<unistd.h>

/*
** The function returns the current process ID between 0 and 99999.
*/

m_bool							ft_getpid(void)
{
	return ((unsigned int) getpid());
}
