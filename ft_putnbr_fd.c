/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 22:37:08 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/11/01 23:18:21 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, size_t *ret)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd, ret);
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('2', fd, ret);
		n = 147483648;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd, ret);
	ft_putchar_fd(n % 10 + 48, fd, ret);
}
