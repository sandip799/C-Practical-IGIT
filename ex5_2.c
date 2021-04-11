#include<stdio.h>
void main()
{
    int i,j,k,num,p,q;
    printf("Enter Number Of Rows\n");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        q=i;
        p=1;
        for(j=1;j<=num-i;j++)
        {
           printf("  ");
        }
        for(k=1;k<=i*2-1;k++)
        {
            if(q<1)
            {
               p=p+1;
               printf("%d ",p);
            }
            else
            {
                printf("%d ",q);
                q--;
            }
        }
        printf("\n");
    }
}
