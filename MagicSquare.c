#include<stdio.h>
void magicSquare(int n)
{
    int i,j,count, next_i, next_j,r = n*n;
    int a[n][n];
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           a[i][j] = -1;
       }
   }
   i= 0, j = n/2; 
   for(count=1;count<=r;++count)
   {
       a[i][j] = count;
       
       //Moves the next to be filled up and right
       next_i = i-1;
       next_j = j+1;
       
       //Index out of bound handling
       if(next_i<0)
       {
           next_i = n-1 ;
       }
       if(next_j==n)
       {
           next_j = 0;
       }
       
       //If the cell is already occupied, move down
       if(a[next_i][next_j] != -1)
       {
           next_i = i+1;
           if(i+1 == n)
           {
               i = 0;
           }
           next_j = j;
       }
       
       i = next_i;
       j = next_j;
   }
   printf("Magic Square : \n");

   //Printing matrix
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("%d ",a[i][j]);
       }
       printf("\n");
   }
    
}
int main() {
   int n,i,j;
   scanf("%d",&n);
   if(n<0 || n%2==0 )
   {
       printf("Enter a postive and odd order for magic square");
       return 0;
   }
   magicSquare(n);
}
