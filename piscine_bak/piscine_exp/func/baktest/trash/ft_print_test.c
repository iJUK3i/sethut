# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_test                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/27 12:23:37 by ksmith            #+#    #+#              #
#    Updated: 2016/10/27 12:45:06 by ksmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>
void ft_print_alphabet(void);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet();
{
	char i = 'a';
	while ( i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_alphabet();
}
