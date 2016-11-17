#include <ctype.h>

int	atoi(char s[])
{
	int i;
	int n;
	int sign;

	i = 0;
	while (isspace(s[i]))
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else
	{
		sign = 1;
		if (s[i] == '+')
		{
			i++;
		}
	}
	n = 0;
	while (isdigit(s[i]))
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (sign * n);
}

int	main(void)
{
	atoi("-94%d\n");
	return (0);
}
