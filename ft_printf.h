/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:44:44 by mel-bouh          #+#    #+#             */
/*   Updated: 2023/11/17 22:44:55 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_format(char format, va_list arg);
int		ft_putchar(int c);
int		ft_putnbr(long nb);
int		ft_putstr(char *str);
int		ft_putun(unsigned long nb);
int		ft_putptr(unsigned long long ptr);
int		ft_printhex(unsigned long long nb, int c);

#endif
