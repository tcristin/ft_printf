/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <tcristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 09:53:45 by tcristin          #+#    #+#             */
/*   Updated: 2021/12/31 10:54:46 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned long long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_puthex(unsigned long long nb, char c)
{
	if (nb == 0)
		return (ft_putchar('0'));
	if (nb >= 16)
	{
		ft_puthex(nb / 16, c);
		ft_puthex(nb % 16, c);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (c == 'x' || c == 'p')
				ft_putchar(nb - 10 + 'a');
			if (c == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
	return (ft_hexlen(nb));
}
