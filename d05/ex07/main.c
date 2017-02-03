#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "samt");  /*change these values to test different conditions*/
	strcpy(str2, "same");

	ret = ft_strncmp(str1, str2, 3);
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
	ret = strncmp(str1, str2, 3);
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

	strcpy(str1, "lo");  /*change these values to test different conditions*/
	strcpy(str2, "loort");

	ret = ft_strncmp(str1, str2, 5);
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
	ret = strncmp(str1, str2, 2);
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
							      
	strcpy(str1, "sames");  /*change these values to test different conditions*/
	strcpy(str2, "same");

	ret = ft_strncmp(str1, str2, 6);
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
	ret = strncmp(str1, str2, 6);
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
