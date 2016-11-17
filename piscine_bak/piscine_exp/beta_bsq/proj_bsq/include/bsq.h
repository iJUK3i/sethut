/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:10:23 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/15 00:32:42 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

char		*ft_strcat(char *dest, char *src);//tested
void		ft_putchar(char c);//tested
void		ft_putstr(char *str);//tested
int			ft_strcmp(char *s1, char *s2);//tested
int			ft_strlen(char *str);//tested
int			ft_line_len(char *str);//tested
int			ft_nbr_lines(char *str);//tested
int			ft_ctobin(char *map, char *instr, char c);
char		*ft_map(char *in);//tested
char		*ft_instructions(char *in);//tested
char		full_char(char *str);//tested
char		obs_char(char *str);//tested
char		empty_char(char *str);//tested
char		*ft_bsq_in(void);
int			**binary_array(char *map, char *instr);

#endif
