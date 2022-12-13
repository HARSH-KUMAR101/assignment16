/*Write a program in C to find the sum of rows and columns of a Matrix.*/
#include<stdio.h>
int main()
{ int a[3][3]={1,2,3,4,5,6,7,8,9};
  int i,j,sumrow,sumcol;
    for(i=0;i<3;i++)
    {  sumrow=sumcol=0;
         for(j=0;j<3;j++)
     {  sumcol=sumcol+a[j][i];
        sumrow=sumrow+a[i][j];
     }
      printf("sum of %d row is %d and sum of %d column is %d\n",i+1,sumrow,i+1,sumcol);
    }
 return 0;
}
