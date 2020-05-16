/*
   Author:Kalpana Baigar
   C Program to Find the Frequency of Characters in a String
*/ 



#include<stdio.h>
#include<string.h>

void frequency(char string[],char value)
{
	int i,icnt=0;
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]==value)
		{
			icnt++;
		}
	}
	
	printf("frequency is : %d",icnt);
}





int main()
{
	
	char ch;
	char arr[30];
	
	puts("enter  string");
	gets(arr);
	puts("entered string is:");
	puts(arr);
	
	printf("enter character:");
	scanf("%c",&ch);

    printf("entered character is: %c",ch);
    
	
	frequency(arr,ch);
	
	return 0;
}
