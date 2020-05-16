/*
   Author:Kalpana Baigar
   C Program to Toggle case of string
   
*/ 


#include<string.h>
#include<stdio.h>

void toggle(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		
		
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		
	}
	
	printf("\nafter toggling case:\n");
	printf("%s",str);
	
}

int main()
{
	char array[30];
	
	printf("enter string:\n");
	scanf("%[^\n]s",array);
	
	toggle(array);
	
	
	
	return 0;
}
