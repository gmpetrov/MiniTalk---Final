/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:33:13 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 18:33:15 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

int							ft_isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}