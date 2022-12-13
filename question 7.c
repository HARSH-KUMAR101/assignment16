/*Write a program in C to print or display the lower triangular of a given matrix.*/
#include<stdio.h>
int main()
{ int a[3][3]={1,2,3,4,5,6,7,8,9};
  int i,j,sumrow,sumcol;
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
      { if(i<j)
         printf("0 ");
        else
         printf("%d ",a[i][j]);
      }
      printf("\n");
    }
 return 0;

}
