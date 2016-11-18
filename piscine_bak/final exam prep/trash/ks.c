#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char v;

	v = 'a';
	i = 0;
	if (argc < 2)
		write (1, "f", 1);
	write (1, &v, 1);
	return (0);
}


		
