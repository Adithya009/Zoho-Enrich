#include<stdio.h>

int main() {
   //For the given truth table
   int i,j,k;
   printf("A\tB\tC\tRes\n");
   
   for(i=0;i<=1;i++)
   {
     for(j=0;j<=1;j++)
     {
         for(k=0;k<=1;k++)
         {
             printf("%d\t%d\t%d\t%d\t",i,j,k, i|(j|k) );
           printf("\n");
         }
         printf("\n");
     }
   }
}
