/*
   Author:Kalpana Baigar
   C Program to Concatenate two strings
   
*/ 


#include<stdio.h>
#include<string.h>

int main()
{
	
	char str1[50]="kalpana";
	char str2[50]="baigar";
	
	
  /*	
	int i,j;
	i=0;
    while(str1[i] != '\0')
    {
        i++;
    }

    
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    
    str1[i] = '\0';
  */  
    strcat(str1,str2);
  
    printf("\n\nConcatenated string = %s", str1);
	return 0;
}
