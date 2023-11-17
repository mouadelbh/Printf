/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:59:30 by mel-bouh          #+#    #+#             */
/*   Updated: 2023/11/17 21:49:19 by mel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write (1, "0x", 2);
	if (!ptr)
	{
		count += write (1, "0", 1);
		return (count);
	}
	count += ft_printhex(ptr, 0);
	return (count);
}
