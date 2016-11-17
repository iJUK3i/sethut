/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 06:19:00 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 07:34:48 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# define NBR 1
# define OP 0
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

struct		s_list
{
	int	type;
	int	value;
	struct s_list	*next;
};

int					eval_expr(char *str);
struct s_list		*parse(char *in);
int					ft_putchar(char c);
void				ft_putnbr(long nb);
int					ft_atoi(char *str);
long				ft_add(int a, int b);
long				ft_sub(int a, int b);
long				ft_mul(int a, int b);
long				ft_mod(int a, int b);
long				ft_div(int a, int b);
void				ft_putstr(char *str);
struct s_list		*pop(struct s_list **list);
int					is_head(struct s_list *list);
void				print_list(struct s_list *list);
long				solve_stack(struct s_list *input);
int					ops_find(char *op_string, char op);
struct s_list		*ft_create_elem(int type, int value);
void				qu_push(struct s_list **list, struct s_list **new);
struct s_list		*st_push(struct s_list **list, struct s_list **new);
void				move_to_queue(struct s_list **queue, struct s_list **stack);
#endif
