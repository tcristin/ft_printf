/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcristin <tcristin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:58:30 by tcristin          #+#    #+#             */
/*   Updated: 2021/12/31 11:20:37 by tcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h> ///////////////////// УДАЛИТЬ /////////////////////////////

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putuint(unsigned int nb);
int	ft_puthex(unsigned long long nb, char c);
int	ft_putptr(unsigned long long ptr);
int	ft_spec(va_list ap, char c);

#endif
