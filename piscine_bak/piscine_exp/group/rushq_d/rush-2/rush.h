/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dliang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:55:42 by dliang            #+#    #+#             */
/*   Updated: 2016/11/13 16:55:55 by dliang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 4096

void	ft_putstr(char *str);
void	ft_putnbr(int num);
int		ft_strlen(char *str);
int		ft_xlen(char *str);
int		ft_ylen(char *str);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);
int		ft_strcmp(char *str1, char *str2);
void	check_rush(char *input, int x, int y);
void	print_rush(int rushnb, int x, int y, int multi);
int		check_invalid(int x, int y);
#endif
