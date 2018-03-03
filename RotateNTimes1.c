#include<stdio.h>

int main() {
  int num,a[100],r,i=0,n=0,res=0;
  scanf("%d%d",&num,&r);
  int temp = num;
  while(temp > 0)
  {
      a[n] = temp%10;
      temp /= 10;
      n++;
  }
  for(i=r-1;i>=0;i--)
  {
      res = res*10 + a[i];
  }
  for(i=n-1;i>=r;i--)
  {
      res = res*10 +  a[i];
  }
  printf("%d",res);
}
