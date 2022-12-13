/*Write a program in C to find the row with maximum number of 1s.*/
#include<stdio.h>
int main()
{ int r,c,i,j;
    printf("enter total num of rows: ");
    scanf("%d",&r);
    printf("enter total num of column: ");
    scanf("%d",&c);
  int a[r][c],count=0,count1=0,temp;
  int d=0,b=0;
       for(i=0;i<r;i++)
       { for(j=0;j<c;j++)
         {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
         }
       }
      for(i=0;i<r;i++)
      {  count=0;
        for(j=0;j<c;j++)
        {
         if(a[i][j]==1)
          count++;
        }
         if(b<count)
         {
           b=count;
           d=i;
         }
      }
      printf("%d row contains maximum value of 1s",d+1);
return 0;
}
