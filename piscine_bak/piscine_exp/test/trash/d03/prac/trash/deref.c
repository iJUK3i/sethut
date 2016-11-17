/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deref.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 00:41:06 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/28 00:47:49 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	char	a;
	char	b;
	char	*ptr;

	a = '3';
	b = 'o';
	ptr = &b;
	ft_putaddr(&b);
	ft_putchar('\n');
	ft_putaddr(ptr +1);
	ft_putchar(' ');
	ft_putchar(*(ptr + 1));
	ft_putchar('\n');
	return (0);
}
