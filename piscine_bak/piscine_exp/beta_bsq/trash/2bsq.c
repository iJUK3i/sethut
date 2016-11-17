#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_bsq_in(void);
char	*ft_strcat(char *dest, char *src);

int		main(int ac, char *argv[])
{
	char *fd;
	int i;

	FILE *file = open("alpha", O_RDONLY);
	while (*file != EOF)
	{
		ft_putstr(*file);
		file++;
	}
	close(file);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		ft_putchar(*str);
		i++;
	}
}
/*
char	*ft_bsq_in(void)
{
	int i;
	int j;
	char buf[1];
	size_t bytes_read;
	char *in;

	in = (char*)(malloc(2));
	j = 0;
	while ((bytes_read = read(0, buf, 1)))
	{
		i = 0;
		while (i < (int)bytes_read)
		{
			in = ft_strcat(in, (char*)(malloc(1)));
			in[j] = buf[i];
			i++;
			j++;
		}
	}
	return (in);
}

char	*ft_strcat(char *dest, char *src)
{
	if (*src)
	{
		*(dest + ft_strlen(dest)) = *src;
		ft_strcat(dest, (src + 1));
	}
	else
		*(dest + ft_strlen(dest)) = '\0';
	return (dest);
}
*/
