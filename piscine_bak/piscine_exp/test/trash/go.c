/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 04:14:05 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/12 12:42:34 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		eval_expr(int argc, char **argv);
void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void 	ft_putnbr(int nb)
{
	if 	(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

int		eval_expr(int argc, char **argv)
{
	int i;
	int v;

	i = 0;
	v = 1;
	if (argc == 0)
		return (0);
	if (argc >= 2)
		return (0);
	while (i < argc)
	{
		while (argv[v][i] != '\0')
		{
			if (argv[v][i] == ' ' || argv[v][i] == '*' || argv[v][i] == '/' || argv[v][i] == '%'
					|| argv[v][i] == '+' || argv[v][i] == '-')
				i++;
		}
		return (0);
	}
}
