/*Write a program in C to accept a matrix and determine whether it is a sparse matrix.*/
#include<stdio.h>
int main()
{ int n,m,i,j;
    printf("enter total num of rows: ");
    scanf("%d",&n);
    printf("enter total num of column: ");
    scanf("%d",&m);
  int a[n][m],count=0;
       for(i=0;i<n;i++)
       { for(j=0;j<m;j++)
         {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
         }
       }
         for(i=0;i<n;i++)
       {  for(j=0;j<m;j++)
         { if(a[i][j]==0)
              count++;
         }
       }
       if(count>(m*n/2))
         printf("it is a sparse matrix\n");
       else
         printf("it is a dense matrix\n");
return 0;
}
