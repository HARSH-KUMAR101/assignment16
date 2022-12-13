/*Write a program in C to find the sum of right diagonals of a matrix.*/
#include<stdio.h>
int main()
{ int a[3][3]={1,2,3,4,5,6,7,8,9};
  int i,j,sum=0;
     for(i=0;i<3;i++)
     { for(j=0;j<3;j++)
        { if(i+j==2)
           sum=sum+a[i][j];
        }
     }
     printf("sum of right diagonal of 3x3 matrix is %d\n",sum);
 return 0;
}
