/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pause.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 14:40:18 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 14:40:19 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"

#include						<unistd.h>

/*
** The function returns void and pauses the program until nothing signals is
** send.
*/

void							ft_pause(void)
{
	while (pause())
		;
}
