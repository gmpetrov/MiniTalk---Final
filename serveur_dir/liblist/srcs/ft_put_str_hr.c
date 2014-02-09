/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_hr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 22:35:15 by adjivas           #+#    #+#             */
/*   Updated: 2014/01/09 22:35:16 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"liblist.h"

#include				<unistd.h>
#include				<stdlib.h>

void					ft_put_str_hr(const void *s, const unsigned char hr)
{
	if (s && !(write(0x01, s, ft_str_len(s))))
		(void) exit(EXIT_FAILURE);
	if (hr && !(write(0x01, &hr, 0x01)))
		(void) exit(EXIT_FAILURE);
}
