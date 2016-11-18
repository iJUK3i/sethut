#include <unistd.h>

int		main(void)
{
	int i;

	i = 9;
	while (i > 1)
	{
		write (1, &i, 1);
		i--;
	}
	return (0);
}
