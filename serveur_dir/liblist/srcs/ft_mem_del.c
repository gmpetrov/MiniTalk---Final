/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:34:34 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:34:35 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

#include				<stdlib.h>

void					ft_mem_del(void **ap)
{
	(void) free(*ap);
	*ap = NULL;
}
