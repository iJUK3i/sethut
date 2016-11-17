/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:10:23 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/16 23:08:04 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

char		*ft_strcat(char *dest, char *src);
void		ft_putchar(char c);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
int			ft_line_len(char *str);
int			ft_nbr_lines(char *str);
char		*ft_map(char *in);
char		*ft_instructions(char *in);
char		full_char(char *str);
char		obs_char(char *str);
char		empty_char(char *str);
char		*ft_bsq_in(void);
int			**binary_array(char *map, char *instr);
void		bin_bsq(int **arr, char *map, char *instr);
int			find_max(int **arr, char *map, char *instr);
void		make_bsq(int **arr, int max, char *map, char *instr);
void		bsq(char *str);
int			check_if_valid(char *map, char *instr);
char		*make_str(char *new_str);
char 		*ft_malloc(int i, char *str);

#endif
