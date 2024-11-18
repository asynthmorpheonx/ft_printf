/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:09:24 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/18 23:11:38 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hex(unsigned long int n, char	*hexa)
{
	char	buffer[16];
	int		i;
	int		count;

	if (n == 0)
		return (write(1, "0", 1));
	i = 0;
	while (n > 0)
	{
		buffer[i++] = hexa[n % 16];
		n /= 16;
	}
	count = i;
	while (i >= 0)
		ft_putchar(buffer[--i]);
	return (count);
}
