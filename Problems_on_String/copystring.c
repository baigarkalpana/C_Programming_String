/*
   Author:Kalpana Baigar
   C Program to copy one string to another string
   
*/ 


#include<stdio.h>
#include<string.h>



void stringcopy(char string1[],char string2[])
{
	 strcpy(string2,string1);
	 
	 printf("\n\nstring1 is: %s",string1);
	 
	  printf("\nstring2 is: %s",string2);
}


/*
// USING FORLOOP
void copy(char string1[],char string2[])
{
	int i;

	for(i=0;i<strlen(string1);i++)
	{
			
		string2[i]=string1[i];
	}
    
	string2[i]='\0';
	printf("\n\nstring second is:%s",string2);	
}
*/


int main()
{
	char str1[30];
	
	char str2[30];
	
	printf("enter string");
	scanf("%[^\n]s",str1);
	
	printf("your entered string is: %s",str1);
	
    stringcopy(str1,str2);
   

	
	
}
