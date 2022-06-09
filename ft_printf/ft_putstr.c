/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:59:47 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 14:20:05 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	c;

	c = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[c])
		c++;
	write(1, s, c);
	return (c);
}

int	ft_putstr(char *s)
{
	int	c;

	c = 0;
	if (!s)
		return (0);
	while (s[c])
		c++;
	write(1, s, c);
	return (c);
}
