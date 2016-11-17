/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 05:30:42 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/15 07:11:38 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_strcpy(char *src, char *dest);
void	ft_strlen(char *str);
char	*ft_make(char c, char *from_file);


int		main(int)
{
	int fd;
	int buf;
	int ret;

	while (read("alpha", from_file, 1))
	{
		ret = ft_make(c, from_file);
	}
	return (ret);
}

char	*ft_make(char c, char *from_file)
{
	int i;
	char *new_str;

	i = 0;
	newstr = (char*)malloc((sizeof(from_file) + 1));

	new_str = ft_strcpy(new_str, from_file);
	new_str[ft_strlen(from_file)] = c;
	new_str[ft_strlen(from_file) + 1] = '\0';

/*  if (isfree != 0)
 *  free(from_file);
 *//*
	while (read(0, oldstr, 1)
	{
		((char*(malloc(sizeof(

	fstr = (char*)(malloc(sizeof(*fstr)
	*/
	return (new_str);
}

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strcpy(char *dest, const char *src)
{
	char *d;

	d = dest;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
/*	*dest = 0;*/
	return (d);
}
