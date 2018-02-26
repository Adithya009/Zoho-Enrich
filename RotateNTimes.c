/*
QUESTION:
Write a program to Left rotate a given number by n times. 

Ex: 
Input 
Number : 1234 
No.of.times : 2 
Output : 3412

*/

//code

#include<stdio.h>
#include<string.h>
int main() 
{
   char a[100];
   int x,i=0;
   scanf("%s%d",a,&x);
   printf("The rotated number is");
   for(i=x;i<strlen(a);i++)
   {
       printf("%c",a[i]);
   }
   for(i=0;i<x;i++)
   {
       printf("%c",a[i]);
   }
}
