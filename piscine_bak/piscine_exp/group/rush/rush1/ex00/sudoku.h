/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:57:51 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/06 23:17:43 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SUDOKU_H__
#define __SUDOKU_H__
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		solve(char **arr);
int		safe(char **arr, int row, int col, int n);
int		*next_blank(char **arr);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	print_sudoku(char **str);
void	populate(int i, int *check);
int		check_block(char **arr, int blocknum, int *check);
int		check_row(char *row, int *check);
int		check_column(char **arr, int rn, int cn, int *check);
int		alldiff(char **arr);
int		check_argc(int argc);
int		check_forbidden_chars(int argc, char **argv);
int		check_number_digits(int argc, char **argv);
int		check_inputs(int argc, char **argv);
int		find(char **arr);

#endif
