NAME = libftprintf.a


SRCS =	ft_printf.c\
		ft_putchar_fd.c\
		ft_putchar.c\
		ft_puthex.c\
		ft_putnbr_fd.c\
		ft_putunbr_fd.c\
		ft_putstr_fd.c\
		ft_strlen.c\
		ft_putptr.c\

CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
OBJS = ${SRCS:%.c=%.o}
RM		= rm -f

all: ${NAME}
${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

%.o:%.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all 
.PHONY:	all clean fclean re

