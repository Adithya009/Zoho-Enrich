#include<stdio.h>

int main() {
  int num,count = 0;
  scanf("%d",&num);
  while(num > 0)
  {
      if((num - (num/2)*2 )==1)
      {
          count++;
      }
      num /= 2;
  }
  printf("%d",count);
}
