
#include <stdio.h>
#include<string.h>

//function to print the substring
void  print(char a[1000],int index_i , int end)
{
    int i;
    for(i=index_i;i<=end;i++)  
    {
        printf("%c",a[i]);
    }
}

/*
Checking for unique substring at every index for longest length
Updates the starting index and ending index if length is maximum than previous maximum
*/

void uniqueSubstring(char a[1000], int n)
{
    int i,j,index_i,end=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])         
            {
                break;
            }
        }
        if(j - i  > end)
        {
            end = j-i;
            index_i = i;
        }
    }
    print(a,index_i,end);
    
}


void main()
{
    char a[1000];
    scanf("%s",&a);
    int n = strlen(a);
    uniqueSubstring(a,n);
}
