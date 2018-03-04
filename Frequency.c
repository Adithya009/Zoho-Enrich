/*
QUESTION:

Write a program to print the number of occurrences of each number in a given array that contains the positive numbers 
Ex: 
Input 
Array : [2, 0, 1, 2, 5, 1] 
Output 
2 --> 2 
0 --> 1 
1 --> 2 
5 --> 1

*/

#include<stdio.h>
void frequency (int *a,int n)
{
    //Since the array has only positive numbers we negate to avoid duplicates
    int i,j,count = 0;
    for(i=0;i<n;i++)
    {
        count = 1;
        if(a[i] > 0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i] == a[j]&& a[j] > 0)
                {
                    count++;
                    a[j] = -1*a[j];
                }
            }
            printf("%d occurs %d times",a[i], count);
            printf("\n");
        }
    }
}
int main() {
   int n = 10;
   int a[10] = {1,2,3,4,5,1,1,2,2,2};
   frequency(a,10);
}
