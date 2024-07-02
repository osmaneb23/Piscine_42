# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 20:06:00 by obouayed          #+#    #+#              #
#    Updated: 2023/08/22 20:13:43 by obouayed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

REPF = ./srcs/
REPH = ./includes/

NAME = libft.a
LIB = ranlib

SRC = ${addprefix $(REPF), $(FILES)}
OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror
AR = ar rc

.c.o:
	gcc	${FLAGS}	-c -I ${REPH} $< -o $@

${NAME}: ${OBJS}
			${AR}	${NAME}	${OBJS}
			${LIB}	${NAME}

all: ${NAME}

clean:
	rm	-f	${OBJS}

fclean: clean
	rm	-f	${NAME}

re: fclean all

.PHONY: all clean fclean re