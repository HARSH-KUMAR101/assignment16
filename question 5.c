/*Write a program in C to find the sum of left diagonals of a matrix.*/
#include<stdio.h>
int main()
{ int a[3][3]={1,2,3,4,5,6,7,8,9};
  int i,j,sum=0;
     for(i=0;i<3;i++)
     { for(j=0;j<3;j++)
        { if(i==j)
           sum=sum+a[i][j];
        }
     }
     printf("sum of left diagonal of 3x3 matrix is %d\n",sum);
 return 0;
}

