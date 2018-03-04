/*
QUESTION:
Write a program to print the occurrences of vowels present in the given string. 

Ex: 
Input 
String : RMK Engg College 
Output 
e --> 3 
0 --> 1

*/

#include<stdio.h>
#include<string.h>
int main() {
   char a[] = "RMK Engineering College", b[] = "aeiou";
   int freq[5] = {0,0,0,0,0},i=0;
   for(i=0;i<strlen(a);i++)
   {
       if(a[i] == 'A' || a[i] == 'a')
       {
           freq[0]++;
       }
       else if(a[i] == 'E' || a[i] == 'e')
       {
           freq[1]++;
       }
       else if(a[i] == 'I' || a[i] == 'i')
       {
           freq[2]++;
           
       }
       else if(a[i] == 'O' || a[i] == 'o')
       {
           freq[3]++;
       }
       else if(a[i] == 'u' || a[i] == 'U')
       {
           freq[4]++;
       }
   }
   
   for(i=0;i<5;i++)
   {
       printf("%c occurs %d times \n",b[i], freq[i]);
   }
}
