#include<stdio.h>

int main() {
  int i,j,k,n=3;
  float mat[3][3],res=1,temp=0;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          scanf("%f",&mat[i][j]);
      }
  }
  //Leaving the first row, calculating the upper triangular matrix
  for(i=1;i<n;i++)
  {
      for(j=0;j<i;j++)
      {
            temp = ((float)mat[i][j]/mat[j][j]);
            for(k=0;k<n;k++)
            {
                mat[i][k] = mat[i][k] - (temp*mat[j][k]);
            }
      }
  }
  //Multiplying the leading diagonal for determinant value
  for(i=0;i<n;i++)
  {
      res *= mat[i][i];
  }
  printf("%.0f",res);
}
