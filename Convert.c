#include<stdio.h>
#include<string.h>
void convert(int n, int base)
{
    int num=0,rem = 0,digit = 1;
    while(n > 0)
    {
        rem = n%base;
        num = num + (rem*digit);
        digit = digit*10;
        n /= base;
    }
    printf("%d",num);
}
int main() {
  int n,base;
  scanf("%d%d",&n,&base);
  
  //unout 
  if(base > 16)
  {
      printf("Enter a proper base");
      return 0;
  }
  if(n < 0)
  {
      printf("Enter a positive number");
      return 0;
  }
  convert(n,base);
}
