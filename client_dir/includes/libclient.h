/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libclient.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 21:25:21 by gpetrov           #+#    #+#             */
/*   Updated: 2014/02/08 19:28:35 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

#ifndef		LIBCLIENT_H
# define	LIBCLIENT_H

/*
**	Client's lib
*/

void		ft_arg_error(void);
void		ft_char_transform(int, int);
int			ft_bin_to_dec(char *);

#endif		/* !LIBCLIENT_H */
