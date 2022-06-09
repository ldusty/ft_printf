/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:44:38 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 13:44:50 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	ft_hex(unsigned int n, char format)
{
	if (n >= 16)
	{
		ft_hex(n / 16, format);
		ft_hex(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar((char)(n + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((char)(n - 10 + 'a'));
			if (format == 'X')
				ft_putchar((char)(n - 10 + 'A'));
		}
	}
}

int	ft_hex_putnbr(unsigned int n, char format)
{
	if (!n)
		return (ft_putchar('0'));
	else
		ft_hex(n, format);
	return (ft_hex_len(n));
}
