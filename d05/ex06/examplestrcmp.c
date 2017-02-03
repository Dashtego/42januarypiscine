#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[15];
	char str2[15];
	int ret;
							      
	strcpy(str1, "same");
	strcpy(str2, "same");

	ret = strcmp(str1, str2);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1");
	}
	else 
	{
 		printf("str1 is equal to str2");
	}

	strcpy(str1, "short");
	strcpy(str2, "longer");

	ret = strcmp(str1, str2);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1");
	}
	else 
	{
 		printf("str1 is equal to str2");
	}

	strcpy(str1, "longer");
	strcpy(str2, "short");

	ret = strcmp(str1, str2);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1");
	}
	else 
	{
 		printf("str1 is equal to str2");
	}
	return(0);
}
