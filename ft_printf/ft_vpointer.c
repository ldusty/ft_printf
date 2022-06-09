/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vpointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:04:47 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 14:24:12 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len_v(unsigned long long n)
{
	int	len;

	len = 0;
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_hex_v(unsigned long long n)
{
	if (n >= 16)
	{
		ft_hex_v(n / 16);
		ft_hex_v(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar((char)(n + '0'));
		else
			ft_putchar((char)(n - 10 + 'a'));
	}
}

int	ft_hex_putnbr_v(unsigned long long n)
{
	if (!n)
		return (ft_putchar('0'));
	else
		ft_hex_v(n);
	return (ft_hex_len_v(n));
}

int	ft_vpointer(unsigned long long n)
{
	write(1, "0x", 2);
	return (ft_hex_putnbr_v(n) + 2);
}
