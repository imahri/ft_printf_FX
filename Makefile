# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imahri <imahri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 08:01:51 by imahri            #+#    #+#              #
#    Updated: 2022/11/12 07:45:23 by imahri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC =	ft_heputnbr.c\
		ft_hputnbr.c\
		ft_putnbr.c\
		ft_pointer.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_unsigned.c\
		ft_printf.c
		
OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

%.o : %.c $(HEADER)
	${CC} ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re