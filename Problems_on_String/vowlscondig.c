/*
   Author:Kalpana Baigar
   Program to Find the number of vowels,digits and white spaces in string
*/ 

#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,vowels=0,spaces=0,digit=0;
	char array[40]="hello friends how are you 1 2 ";
	printf("%s",array);
	
	while(array[i]!='\0')
	{
		if((array[i]=='a') || (array[i]=='e') || (array[i]=='i') || (array[i]=='o') || (array[i]=='u'))
		{
			vowels++;
		}
		
    	else if((array[i]>='0') && (array[i]<='9'))
		{
		  digit++;	
		}	
		
		else if(array[i]==' ')
		{
		   spaces++;	
		}	
		i++;
	}
	
	printf("\nNumber of voewls is:%d",vowels);
	printf("\nNumbers of digits are:%d",digit);
	printf("\nNumber of white spaces:%d",spaces);
	
	return 0;
}
