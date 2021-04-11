#include <stdio.h>
#include <stdlib.h>
void ls(int r,int c,int a[r][c])
{
      int i,j,*p,temp;
      int* elem=a;
    for(i=0;i<r*c;i++)
    {
        p=(int*)a;
        for(j=0;j<i;j++)
        {
        if(*p>*elem)
        {
            int temp=*p;
            *p=*elem;
            *elem=temp;
        }
        p++;
        }
        elem++;
    }
    
   printf("2nd Smallest No Is %d & 2nd Largest No is %d\n",a[0][1],a[r-1][c-2]);

}
int main()
{
   int r,c;
   printf("Enter Number Of Rows\n");
   scanf("%d",&r);
   printf("Enter Number of Column\n");
   scanf("%d",&c);
   int a[r][c],*p,i,j;
   printf("Enter Elements in array\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

   ls(r,c,a);
}