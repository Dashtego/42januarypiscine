/*
 *
 *
 *
 *LIBRARY TEST*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int		main()
{
	char		*a;
	char		*b;

	a = "Hello World";
printf("%s", a);
	b =strdup(a);
	printf("%s", b);
	return (0);
}
