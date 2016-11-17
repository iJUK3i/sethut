# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 22:44:30 by ksmith            #+#    #+#              #
#    Updated: 2016/11/17 09:25:12 by ksmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR= -Iincl/

NAME= nextlvl

SRC= $(wildcard srcs/*.c)

OBJS= *.o
LIB= libift.a

M= main.c
CFLAGS= gcc -Wall -Werror -Wextra
RM= /bin/rm -f
QQ= /bin/mkdir save/ && mv *.c *.o *.a *.h save/
L= ar rc
Li= -L. -lift -o
I= ranlib


all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(SRC) $(IDIR)
	ar rc $(LIB) $(OBJS)
	$(I) $(LIB)
	$(CFLAGS) $(M) $(IDIR) $(Li) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIB)

re: fclean all

qq:
	$(QQ)
