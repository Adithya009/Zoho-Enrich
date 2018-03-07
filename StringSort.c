#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
  char a[][100] = {"12" , "25" , "3" , "24" , "26" , "29"};
  int n = 6, i = 0, j = 0;
  char b[100];
  //simple bubble sort
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      { 
          //swaps if length is unequal. If length equal, it compares the both strings and swaps. 
          if( (strlen(a[i])> strlen(a[j]))  || (  strlen(a[i]) == strlen(a[j]) && strcmp(a[i],a[j]) > 0) )
          {
              strcpy(b,a[i]);
              strcpy(a[i],a[j]);
              strcpy(a[j],b);
          }
      }
  }
  for(i=0;i<n;i++)
  {
      printf("%s\t",a[i]);
  }
}
