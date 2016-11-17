# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 07:24:29 by ksmith            #+#    #+#              #
#    Updated: 2016/11/13 16:52:53 by ksmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR= includes
SDIR= srcs

NAME= eval_expr
OBJS= ft_atoi.o ft_put.o shya.o main.o oper.o llist.o s2q.o ss.o

CC= gcc
CFLAGS= -Wall -Werror -Wextra
RM= /bin/rm -f
QQ= rm -f *.c *.o *.a *.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

qq:
	$(QQ)
