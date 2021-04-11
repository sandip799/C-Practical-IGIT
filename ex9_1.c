#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,a[4][5],*p,count=0;
    p=&a[0][0];
    printf("Enter Elements In Matrix\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",p);
        p++;
    }
    //printing matrix
    printf("Matrix is\n");
    p=&a[0][0];
    for(i=0;i<20;i++)
    {
        printf("%d ",*p);
        p++;
        count=count+1;
        if(count==5)
        {
            printf("\n");
            count=0;
        }
    }
    
return 0;
}