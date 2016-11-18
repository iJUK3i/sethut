#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int		main(int nb_arg, char **str_in)
{
	int i;
	int j;
	char v;

	v = **str_in;
	if (nb_arg >= 2)
	{
		i = 0;
		while (str_in[2][i])
		{
			ft_putstr(*str_in);
			i++;
		}
	}
	else
		write (1, "nope\n", 5);
	return (0);
}
