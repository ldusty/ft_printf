/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 14:01:08 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 14:21:20 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	char	*nbr;
	int		len;

	nbr = ft_unsigned_itoa(n);
	if (!nbr)
		return (0);
	len = ft_putstr(nbr);
	free(nbr);
	nbr = NULL;
	return (len);
}
