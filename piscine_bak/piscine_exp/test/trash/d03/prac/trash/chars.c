# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    chars                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/28 01:06:51 by ksmith            #+#    #+#              #
#    Updated: 2016/10/28 01:09:42 by ksmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	char	c;

	c = '*';
	ft_putchar(c);
	ft_putchar('\n');
	return (0);
}
