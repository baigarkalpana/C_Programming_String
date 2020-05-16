/*
   Author:Kalpana Baigar
   C Program to Compare two strings
   
*/ 


#include<stdio.h>
#include<string.h>

int main()
{
	int ret=0,i;
	char str1[]="hello";
	char str2[]="hello"; 

	
	
	/*
	ret=strcmp(str1,str2);
	if(ret==0)
	{
		printf("Both strings are Equals");
	}
	
	else
	{
		printf("both strings are not equal");
	}
	*/
	

	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]!=str2[i])
		{
			ret=1;
		}
	}
	
	if(ret==0)
	{
		printf("both strings are equal");
	}
	else
	{
		printf("both strings are not equal");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
