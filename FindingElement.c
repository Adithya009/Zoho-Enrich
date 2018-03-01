
#include<stdio.h>

int main() {
   int a[100],key, flag = 0,i=0;
   scanf("%d",&key);
   // if element found it doesnot scan since the elements are unique
   while(scanf("%d",&a[i]))
   {
      if(a[i]==key)
      {
          flag = 1;
          printf("%d",i);
          break;
      }
      else
      {
      i++;
      }
   }
   if(flag == 0)
   {
       printf("-1");
   }
   
}
