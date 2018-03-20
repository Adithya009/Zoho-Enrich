#include<stdio.h>
#include<string.h>
void compress(int n, char a[n])
{
    int i,freq[26] = {0};
    
    //stores frequency
    for(i=0;i<n;i++)
    {
         freq[a[i]-97]++;
    }
    
    //Checks for frequency based on its Ascii Value, prints if greater than or equal to one
    for(i=0;i<n;i++)
    {
        if(freq[a[i]-97] > 0)
        {
            if(freq[a[i]-97] == 1)
            {
                printf("%c",a[i]);
            }
            else
            {
             printf("%c%d",a[i],freq[a[i]-97]);
            }
            freq[a[i]-97] = -1;
        }
    }
    
}
int main() {
  char a[100];
  scanf("%s",a);
  int n = strlen(a);
  compress(n,a);
}
