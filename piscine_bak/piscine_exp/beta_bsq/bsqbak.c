/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 05:30:42 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/17 00:29:04 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUF_SIZE 4096

char	*ft_malloc(int i, char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_strlen(char *str);

char	*ft_malloc(int i, char *str)
{
	char *str2;
	int j;

	str2 = (char*)malloc(i + 100000);
	j = 0;
	while (j <= i)
	{
		str2[j] = str[j];
		j++;
	}
	free(str);
	return (str2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main()
{
	char buf[1];
	char *from_file;
	int ret;
	int fd;
	int i;
	
	from_file = (char*)malloc(50000);
	fd = open("alpha", O_RDONLY);
	i = 0;
	while ((ret = read(fd, buf, 1)))
	{
		if ((i + 1) % 50000 == 0)
			from_file = ft_malloc(i, from_file);
		from_file[i] = buf[0];
		i++;
	}
	from_file[i + 1] = '\0';
	ft_putstr(from_file);
	return (0);
}
