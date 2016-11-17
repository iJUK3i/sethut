/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 05:30:42 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/16 02:13:56 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUF_SIZE 4096

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*ft_strcpy(char *dest, char *src);
void	ft_strlen(char *str);
char	*ft_make(char c, char *from_file);
char 	*get_file(char *file);

struct		s_map_n
{
	char data;
	struct s_map_n *link;
};

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*get_file(char *file)
{
	int fd;
	char *new_str;
	char buf[BUF_SIZE];

	fd = open("alpha", O_RDONLY);
	file = read(fd, buf, 1);
	ft_putstr(buf);
	ft_strcpy(buf, new_str);
	return (new_str);

int		main()
{
	//mapfile coming soon?
	char *from_file;
	char *temp;
	struct s_map_n *head;


	head = NULL;
	s_map_n *temp = (s_map_n*)malloc(sizeof(s_map_n));
	temp->data = get_file(map_file);
	temp->link = NULL;
	head = temp;
	return (0);
}
