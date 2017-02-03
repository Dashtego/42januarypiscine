#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int val;
	char str[20];
		     
	strcpy(str, "(78");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "c78");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, "7x8");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	return(0);
}
