#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	int val;
	char str[99];

	strcpy(str, "   33347331");
	val = atoi(str);
	printf("string value is: %s, integer value is: %d\n", str, val);

	strcpy(str, "123 456");
	val = atoi(str);
	printf("string value: %s, integer value: %d\n", str, val);
	
	strcpy(str, "-0a 1 b cd 5i.%@!");
	val = atoi(str);
	printf("string value: %s, integer: %d\n", str, val);
	return (0);
}
