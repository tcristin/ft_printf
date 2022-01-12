/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <tcristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 11:05:38 by tcristin          #+#    #+#             */
/*   Updated: 2021/12/31 12:03:36 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	if (count * size != 0)
	{
		while (i < count * size)
		{
			*(unsigned char *)(ptr + i) = '\0';
			i++;
		}
	}
	return (ptr);
}

static int	ft_uintlen(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static char	*ft_uitoa(unsigned int nb)
{
	char	*str;
	int		len;

	len = ft_uintlen(nb);
	str = ft_calloc(len + 1, sizeof(*str));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (nb != 0)
	{
		str[len - 1] = '0' + nb % 10;
		nb /= 10;
		len--;
	}
	return (str);
}

int	ft_putuint(unsigned int nb)
{
	char	*str;
	int		len;

	len = 0;
	if (nb == 0)
		len += ft_putchar('0');
	else
	{
		str = ft_uitoa(nb);
		len = ft_putstr(str);
		free(str);
	}
	return (len);
}
