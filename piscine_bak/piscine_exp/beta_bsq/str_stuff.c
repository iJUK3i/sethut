#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &str, 1);
		str++;
	}
}

void	ft_putnbr(int nb);
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int		main()
{
	int fd;
	int ret;
	char buf;

	fd = open("alpha", O_RDONLY);
	ret = read(fd, buf, 1);
	buf[ret] = '\0';
	ft_putnbr(ret);
	ft_putstr(buf);
	return (0);
}
/*dest = (char*)malloc(sizeof(char*/
