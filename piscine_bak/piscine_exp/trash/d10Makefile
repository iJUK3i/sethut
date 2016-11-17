# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 02:38:25 by ksmith            #+#    #+#              #
#    Updated: 2016/11/08 16:19:34 by ksmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR= srcs/
IDIR= includes/
NAME= libft.a
SRC= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CC= gcc
CFLAGS= -Wall -Werror -Wextra -c -I$(SDIR) -I$(IDIR)
RM= /bin/rm -f
RAN= ranlib
L= ar rc
QQ= rm *.c *.o *.a *.h

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	$(L) $(NAME) $(OBJS)
	$(RAN) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

qq:
	$(QQ)
