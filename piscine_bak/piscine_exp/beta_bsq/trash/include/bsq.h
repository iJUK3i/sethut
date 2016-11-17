/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:10:23 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 17:43:11 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

char		*ft_bsq_in(void);
char		*ft_strcat(char *dest, char *src);
void		ft_putstr(char *str);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
int			ft_instr_len(char *str);
int			ft_nbr_lines(char *str);
char		*ft_map(char *in);
char		*ft_instructions(char *in);

#endif
