/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:10:51 by mel-bouh          #+#    #+#             */
/*   Updated: 2023/11/17 21:49:09 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long nb, int c)
{
	char	*base;
	int		count;

	count = 0;
	if (c == 88)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_printhex(nb / 16, c);
		count += ft_printhex(nb % 16, c);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}
