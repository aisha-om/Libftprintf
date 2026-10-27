/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  aabufarw <aabufarw@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:36:33 by  aabufarw         #+#    #+#             */
/*   Updated: 2026/10/27 22:36:35 by  aabufarw        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd, size_t *ret, size_t *i)
{
	if (n > 9)
		ft_putunbr_fd(n / 10, fd, ret, i);
	ft_putchar_fd(n % 10 + 48, fd, ret);
	if (n < 10)
		*i = *i + 1;
}
