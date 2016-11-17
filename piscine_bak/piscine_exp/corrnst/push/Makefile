# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 20:02:10 by ksmith            #+#    #+#              #
#    Updated: 2016/11/13 17:35:40 by ksmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR= srcs/
IDIR= includes/

NAME= rush-2

SRC= *.c
OBJS= *.o

CC= gcc
CFLAGS= -Wall -Werror -Wextra -c -I$(SDIR) -I$(IDIR)
RM= /bin/rm -f
RAN= ranlib
L= ar rc

all: $(NAME)

$(NAME);
	$(CC) $(CFLAGS) $(SRC)
	$(L) $(NAME) $(OBJS)
	$(RAN) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
