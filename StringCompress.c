#include<stdio.h>
#include<string.h>

void compress(int n, char a[n]){
    int i=0,j=0,count = 1;
    while(i<n)
    {
        j = i+1;
        //Until the next character is same, count increments
        if(a[i] == a[j])
        {
            count++;
            i++;
        }
        //prints occurence if next character is different
        else
        {
            if(count > 1)
            {
            printf("%c%d",a[i],count);
            }
            else
            {
                printf("%c",a[i]);
            }
            count = 1;
            i = j;
        }
    }
}
int main() {
  char a[100];
  scanf("%s",&a);
  int n = strlen(a);
  compress(n,a);
}
