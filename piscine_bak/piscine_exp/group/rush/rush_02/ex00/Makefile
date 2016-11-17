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

IDIR= includes/

NAME= rush-2

SRC= \
			ft_putchar\
			ft_putnbr\
			ft_putstr\
			ft_strcmp\
			ft_strlen\
			checkprint\
			rush00\
			rush01\
			rush02\
			rush03\
			rush04

OBJS= *.o
LIBNAME = librush.a
CFILES = $(addprefix ./srcs/, $(addsuffix .c, $(SRC)))

CFLAGS= gcc -Wall -Werror -Wextra
RM= /bin/rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(CFILES) -I$(IDIR)
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)
	$(CFLAGS) main.c -I$(IDIR) -L. -lrush -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
