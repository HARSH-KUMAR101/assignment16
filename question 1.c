/*Write a program to calculate the sum of two matrices each of order 3x3*/
#include<stdio.h>
int main()
{ int a[3][3]={10,20,30,40,50,60,70,80,90};
  int b[3][3]={10,20,30,40,50,60,70,80,90};
  int i,j;
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
      {
        printf("%d ",a[i][j]+b[i][j]);
      }
      printf("\n");
    }
 return 0;
}
