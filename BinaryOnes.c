/*
QUESTION:
Write a program to print the no.of '1's present in the binary form of a given decimal number. 

Example : 
Input : 15 
Output : 4 (as 15 will be expressed as 1111 in binary form) 

Input : 8 
Output : 1 ( as 8 is expressed as 1000) 

*/

//code
#include<stdio.h>

int main() {
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   int count = 0;
   /*Since the binary is the base of 2, and the remainder is reversed for binary digits, 
   Finding modulo at each stage would give the number of 1's and 0's.
   */
   while(num>0)
   {
       if(num%2 == 1)
       {
           count++;
       }
       num /= 2;
   }
   printf("%d",count);
}
