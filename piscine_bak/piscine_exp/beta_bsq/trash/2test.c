#include <stdio.h>
#include <stdlib.h>

int		main()
{
	FILE * fpoint;
	fpoint = fopen("alpha", "r");
	char single[150];

	while (!feof(fpoint))
	{
		fgets(single, 150, fpoint);
		puts(single);
	}
	fclose(fpoint);
	return (0);
}

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
