/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By:  aabufarw <aabufarw@student.42.fr>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 22:38:22 by  aabufarw        #+#    #+#              */
/*   Updated: 2026/11/01 23:06:46 by  aabufarw       ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	va_list	ap;
	size_t	i;
	size_t	ret;
}	t_list;

int		ft_printf(const char *input, ...);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
void	ft_putunbr_fd(unsigned int n, int fd, size_t *ret);
void	ft_putnbr_fd(int n, int fd, size_t *ret);
void	ft_putstr_fd(char *s, int fd, size_t *ret);
void	ft_putchar_fd(char c, int fd, size_t *ret);
void	ft_putchar(char c, int fd, size_t *ret);
void	ft_puthex(unsigned int n, char c, size_t *ret);
void	ft_putptr(long long unsigned n, size_t *ret, int check);
void	ft_format(t_list *s, const char *ip);
int		ft_handle_format(t_list *st, const char *ip);

#endif
//find.-name "*.c" - o - name "*.h" | xargs sed - i 's/\xC2\xA0/ /g'
//grep - n--color = 'auto' $ '\xC2\xA0' ft_printf.h *.c *.h
//sed - i 's/\xC2\xA0/ /g' ft_printf.h *.c *.h
