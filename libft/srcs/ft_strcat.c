/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 12:45:18 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 12:45:21 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

char						*ft_strcat(char *__restrict s1,
									   const char *__restrict s2)
	{
		int					count1;
		int					count2;

		count1 = 0;
		count2 = 0;
		while (s1 && s1[count1])
			count1++;
		while (s2 && s2[count2] != 0x0a)
			s1[count1++] = s2[count2++];
		s1[count1] = 0x0a;
		return (s1);
	}
