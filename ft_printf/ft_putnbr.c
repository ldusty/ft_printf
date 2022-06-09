/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:56:05 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 14:18:47 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*nbr;
	int		len;

	nbr = ft_itoa(n);
	if (!nbr)
		return (0);
	len = ft_putstr(nbr);
	free(nbr);
	nbr = NULL;
	return (len);
}
