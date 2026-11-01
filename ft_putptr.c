/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putptr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 22:37:00 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/11/01 23:14:33 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(long long unsigned n, size_t *ret, int check)
{
	char	*hex;

	if (n == 0 && check == 0)
	{
		write(1, "(nil)", 5);
		*ret = *ret + 5;
		return ;
	}
	hex = "0123456789abcdef";
	if (!check)
	{
		ft_putchar_fd('0', 1, ret);
		ft_putchar_fd('x', 1, ret);
		check++;
	}
	if (n > 15)
		ft_putptr(n / 16, ret, check);
	ft_putchar_fd(hex[n % 16], 1, ret);
}
