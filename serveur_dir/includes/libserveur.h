/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libserveur.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:52:36 by adjivas           #+#    #+#             */
/*   Updated: 2013/12/03 13:00:20 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						<stdio.h>

#ifndef							LIBSERVEUR_H
# define						LIBSERVEUR_H

# include						"liblist.h"

typedef enum e_bool				m_bool;

enum							e_bool
{
	true  = 0x01,
	false = 0x00
};

/*
** Serveur's lib.
*/

unsigned char					ft_bintodec(const char *);
m_bool							ft_getpid(void);
void							ft_lst_client(t_list *list);
void							ft_signal(void);
void							ft_byte(unsigned short int);
void							ft_pause(void);
void							ft_readusr(int);

#endif							/* !LIBSERVEUR_H */
