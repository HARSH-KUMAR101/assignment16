/*Write a program in C to find the transpose of a given matrix.*/
#include<stdio.h>
int main()
{ int a,b,i,j;
    printf("enter the size of the given matrix:\n");
      printf("enter number of rows: ");
      scanf("%d",&a);
      printf("enter number of column: ");
      scanf("%d",&b);
   int x[a][b];
      printf("enter the element of matrix:\n");
        for(i=0;i<a;i++)
        { for(j=0;j<b;j++)
         { printf("[%d][%d]:",i,j);
           scanf("%d",&x[i][j]);
         }
        }
        printf("transpose of given matrix is:\n");
        for(i=0;i<b;i++)
        { for(j=0;j<a;j++)
          {
             printf("%d ",x[j][i]);
          }
           printf("\n");
        }
return 0;
}
