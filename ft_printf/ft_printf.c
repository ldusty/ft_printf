/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:45:36 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 13:50:11 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len = ft_vpointer(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len = ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_hex_putnbr(va_arg(args, unsigned int), format);
	else if (format == '%')
		len = ft_putstr("%");
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	args;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
