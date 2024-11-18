/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddres.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:32:03 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/18 23:09:52 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putaddres(unsigned long int addr)
{
	int	count;

	count = 0;
	if (addr == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnbr_hex(addr, "0123456789abcdef");
	return (count);
}
