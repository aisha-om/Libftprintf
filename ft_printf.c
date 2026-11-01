/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 22:38:57 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/11/01 23:28:14 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *ip, ...)

{
	t_list	st;
	int		tmp;

	st.i = 0;
	st.ret = 0;
	va_start(st.ap, ip);
	while (ip[st.i])
	{
		if (ip[st.i] == '%')
			ft_handle_format(&st, ip);
		else
			ft_putchar_fd(ip[st.i++], 1, &st.ret);
	}
	va_end(st.ap);
	tmp = st.ret;
	return (tmp);
}

int	ft_handle_format(t_list *st, const char *ip)
{
	st->i++;
	if (ip[st->i] == '%')
		ft_putchar_fd('%', 1, &st->ret);
	else
		ft_format(st, ip);
	st->i++;
	return (0);
}

void	ft_format(t_list *st, const char *ip)
{
	if (ip[st->i] == 'c')
		ft_putchar(va_arg(st->ap, int), 1, &st->ret);
	else if (ip[st->i] == 's')
		ft_putstr_fd(va_arg(st->ap, char *), 1, &st->ret);
	else if (ip[st->i] == 'd' || ip[st->i] == 'i')
		ft_putnbr_fd(va_arg(st->ap, int), 1, &st->ret);
	else if (ip[st->i] == 'u')
		ft_putunbr_fd(va_arg(st->ap, unsigned int), 1, &st->ret);
	else if (ip[st->i] == 'X' || ip[st->i] == 'x')
		ft_puthex(va_arg(st->ap, unsigned int), ip[st->i], &st->ret);
	else if (ip[st->i] == 'p')
		ft_putptr(va_arg(st->ap, long long unsigned), &st->ret, 0);
}
