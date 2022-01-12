# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcristin <tcristin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 22:34:30 by tcristin          #+#    #+#              #
#    Updated: 2021/12/31 11:41:25 by tcristin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c		ft_putchar.c		ft_putstr.c		\
			ft_putnbr.c		ft_putptr.c			ft_spec.c		\
			ft_puthex.c		ft_putuint.c

HEADER	=	ft_printf.h

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

${NAME}	:	${OBJS} ${HEADER}
	ar rcs ${NAME} $?

all		:	${NAME}

clean	:
	rm -f ${OBJS} ${OBJS_B}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all

.PHONY	: all clean fclean re
