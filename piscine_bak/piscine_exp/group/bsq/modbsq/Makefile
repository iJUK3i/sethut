# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 22:44:30 by ksmith            #+#    #+#              #
#    Updated: 2016/11/16 23:25:39 by kmurray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR= include

NAME= bsq

SRC= \
	 		ft_instructions.c\
			bin_bsq.c\
			binary_array.c\
			bsq.c\
			empty_char.c\
			find_max.c\
			ft_bsq_in.c\
			ft_map.c\
			full_char.c\
			make_bsq.c\
			make_str.c\
			obs_char.c\
			ft_malloc.c\
			ft_putchar.c\
			ft_nbr_lines.c\
			ft_line_len.c\
			ft_strlen.c

OBJS= *.o
LIBNAME= libbsq.a
CFILES= $(addprefix ./src/, $(SRC))

CFLAGS= gcc -Wall -Werror -Wextra
RM= /bin/rm -f

all: $(NAME)

$(NAME):
	$(CFLAGS) -c $(CFILES) -I$(IDIR)
	ar rc $(LIBNAME) $(OBJS)
	ranlib $(LIBNAME)
	$(CFLAGS) main.c -I$(IDIR) -L. -lbsq -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(LIBNAME)

re: fclean all
