#include <stdio.h>
#include <stdlib.h>

int* sandip(int *a,int *b,int r,int c)
{
   int i,j,v[r][c];
   int *x=v;
   for(i=0;i<r*c;i++)
   {
      *x=*a+*b;
      x++;
      a++;
      b++;
   }
   x=v;
   printf("After Addition Is \n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",*x);
           x++;
       }
       printf("\n");
   }
}
int main()
{
    int r,c,i,j;
    printf("Enter Row & Column Of Matrices\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("Enter Elements In Array 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Elements in Array 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int *p=(int *)a;
    int *q=(int *)b;
    sandip(p,q,r,c);
return 0;
}