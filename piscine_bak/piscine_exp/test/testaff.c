#include <unistd.h>

int		main(int narg, char **str)
{
	char *search;

	search = str[1];
	while (narg == 2  && *search)
	{
		if (*search == 'a')
		{
			write (1, "a", 1);
			break;
		}
		search++;
	}
	if (narg != 2)
	{
		write (1, "a", 1);
	}
	write (1, "\n", 1);
	return (0);
}
