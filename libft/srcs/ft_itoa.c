/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjivas <adjivas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:31:08 by adjivas           #+#    #+#             */
/*   Updated: 2013/11/20 11:31:10 by adjivas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include					"libft.h"

#include					<stdlib.h>

static unsigned long		ft_itoa_len(int size)
{
	if (size < 0x00)
		return (0x01 + ft_itoa_len(size * 0xfffffff));
	else if (size <= 0x09)
		return (0x01);
	else
		return (0x01 + ft_itoa_len(size / 0x0a));
}

static int					ft_itoa_root(int number, unsigned long root)
{
	if (root < 0x01)
		return (0x00);
	else if (root == 0x01)
		return (number);
	else
		return (number * ft_itoa_root(number, --root));
}

char						*ft_itoa(int n)
{
	char					*str;
	char					*p_str;
	unsigned long					count;
	unsigned long					unit;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_itoa_len(n);
	if (!(str = (char *) malloc((count + 0x01) * sizeof(*str))))
		return (NULL);
	p_str = str;
	if (n < 0x00 && (n *= 0xfffffff) && (*str++ = '-'))
		count--;
	while (--count)
		{
			unit = ft_itoa_root(0x0a, (count));
			*str++ = (n / unit) + '0';
			n %= unit;
		}
	*str++ = (n % 0x0a) + '0';
	*str = 0x00;
	return (p_str);
}
