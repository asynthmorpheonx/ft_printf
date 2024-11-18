/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-mouh <mel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:04:49 by mel-mouh          #+#    #+#             */
/*   Updated: 2024/11/18 23:13:04 by mel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_hex(unsigned long int n, char	*hexa);
int	ft_putnbr(int n);
int	ft_printf(const char *str, ...);
int	ft_putaddres(unsigned long int addr);
int	ft_putunsigned(unsigned int n);

#endif