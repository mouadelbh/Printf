/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:30:00 by mel-bouh          #+#    #+#             */
/*   Updated: 2023/11/16 21:50:42 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

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
