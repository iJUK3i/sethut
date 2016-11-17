/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 23:24:30 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/02 23:40:49 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)

int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	ft_putstr('\n');
	ft_putstr(argv[1]);
	ft_putstr('\n');
	ft_putstr(argv[2]);
	ft_putstr('\n');
	return (0);
}
