#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "");  /*change these values to test different conditions*/
	strcpy(str2, "same");

	ret = ft_strcmp(str1, str2);
	printf("Test Function\n");
	if(ret < 0)
	{
		printf("String1 is less than String2");
	}
	else if(ret > 0) 
	{
		printf("String2 is less than String1");
	}
	else 
	{
 		printf("String1 is equal to String2");
	}
	ret = strcmp(str1, str2);
	printf("\n---------vs---------");
	printf("\nLibrary Function\n");
	if(ret < 0)
	{
		printf("String1 is less than String2");
	}
	else if(ret > 0) 
	{
		printf("String2 is less than String1");
	}
	else 
	{
 		printf("String1 is equal to String2");
	}

	strcpy(str1, "abcde");  /*change these values to test different conditions*/
	strcpy(str2, "");

	ret = ft_strcmp(str1, str2);
	printf("\n\nTest Function\n");
	if(ret < 0)
	{
		printf("String1 is less than String2");
	}
	else if(ret > 0) 
	{
		printf("String2 is less than String1");
	}
	else 
	{
 		printf("String1 is equal to String2");
	}
	ret = strcmp(str1, str2);
	printf("\n---------vs---------");
	printf("\nLibrary Function\n");
	if(ret < 0)
	{
		printf("String1 is less than String2");
	}
	else if(ret > 0) 
	{
		printf("String2 is less than String1");
	}
	else 
	{
 		printf("String1 is equal to String2");
	}						      
							      
	strcpy(str1, "");  /*change these values to test different conditions*/
	strcpy(str2, "");

	ret = ft_strcmp(str1, str2);
	printf("\n\nTest Function\n");
	if(ret < 0)
	{
		printf("String1 is less than String2");
	}
	else if(ret > 0) 
	{
		printf("String2 is less than String1");
	}
	else 
	{
 		printf("String1 is equal to String2");
	}
	ret = strcmp(str1, str2);
	printf("\n---------vs---------");
	printf("\nLibrary Function\n");
	if(ret < 0)
	{
		printf("String1 is less than String2");
	}
	else if(ret > 0) 
	{
		printf("String2 is less than String1");
	}
	else 
	{
 		printf("String1 is equal to String2");
	}
	return(0);
}
