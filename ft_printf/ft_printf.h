/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldusty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:46:00 by ldusty            #+#    #+#             */
/*   Updated: 2021/12/24 13:46:08 by ldusty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *form, ...);

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_unsigned_putnbr(unsigned int n);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(unsigned int n);
int		ft_hex_putnbr(unsigned int n, char format);
int		ft_vpointer(unsigned long long n);
int		ft_print_str(char *s);
#endif
