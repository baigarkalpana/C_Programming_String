/*
   Author:Kalpana Baigar
   Program to  capitalize first character of each word in a string.toupper string function
*/ 

#include<stdio.h>
#include<string.h>

int main()
{
	
	int i=0;
	char str[40];
	printf("enter string:");
	scanf("%[^\n]s",str);
	
	for(i=0;i<strlen(str);i++)
	{
		if(i==0)
		{
			str[i]=toupper(str[i]);
			
		}
		if(str[i]==' ')
		{ 
		    i++; 
			str[i]=toupper(str[i]);
		}
	}
	
  printf("\n\n%s",str);	
	
	
  /*	
	int i=0;
	char array[40]="hello friends how are you ";
	printf("%s",array);
	
    
    for(i=0;i<strlen(array);i++)
    {
	    if(i==0 || array[i-1]==' ')
	    {
	        array[i]=toupper(array[i]);
	    }
	    
    }
   printf("\n\n%s",array);
   */	
	return 0;
}





