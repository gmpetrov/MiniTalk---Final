/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 11:20:19 by adjivas           #+#    #+#             */
/*   Updated: 2014/02/08 11:20:21 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include						"libserveur.h"
#include						"libft.h"

#include						<stdlib.h>

/*
** The function is the entry point, it initializes the event server and
** never can returns a entier.
*/

int								main(void)
{
	(void) ft_putnbr_fd(ft_getpid(), 0x01);
	(void) ft_putchar_fd(0x0a, 0x01);
	(void) ft_signal();
	(void) ft_pause();
	return (EXIT_SUCCESS);
}
