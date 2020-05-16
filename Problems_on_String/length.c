/*
   Author:Kalpana Baigar
   Program to Find the frequency of a character in a string
*/ 

#include<stdio.h>
#include<string.h>
  
int length(char str1[])
{
	int cnt=0;
    while(*str1!='\0')	
    {
    	
    	cnt++;
    	str1++;
	}
	
	return cnt;
}  
  
  
int main() 
{
  int iret=0;	
  char str[50];
  printf("enter string:");
  scanf("%[^\n]",str);
  iret=length(str);
  
  printf("length of string is: %d",iret);	
	
	
 /*
  char str[20];
  int cnt=0;
  printf("enter string");
  scanf("%[^\n]",str);
  // printf("%s",str);
   printf("Your string: %s\n", str);
   while(*str!='\0')
   {
   	 cnt++;
   }

  printf("length is: %d",cnt);
  */
  
 return 0;	
}
