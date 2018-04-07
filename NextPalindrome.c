#include<stdio.h>

int reverseNumber(int n)
{
    int reverse = 0;
    while(n > 0)
    {
        reverse = (reverse*10) + (n%10);
        n /= 10;
    }
    return reverse;
}

void nextPalindrome(int n)
{
    int flag = 1;
    n++;
    while(flag  == 1)
    {
        if(reverseNumber(n) == n)
        {
            flag++;
            printf("%d",n);
        }
        n++;
    }
}


int main() {
   int n;
   scanf("%d",&n);
   nextPalindrome(n);
}
