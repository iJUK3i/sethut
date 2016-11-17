/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   voidstar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 00:00:35 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 00:17:36 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int	a;
	char c;
	char *ptr;

	a = 3;
	c = 'b';
	ptr = &c;
	ft_putaddr(ptr);

	return (0);
}
