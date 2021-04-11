#include<stdio.h>
void main()
{
    int i,x,j;
    printf("Enter Total No Of Charecters You Have Input\n");
    scanf("%d",&x);
    char c[x];
    printf("Enter Charecters\n");
    for(i=0;i<x;i++)
    {
        scanf("%c ",&c[i]);
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++)
        {
            if(c[i]==c[j])
            {
                c[i]=-1;
            }
        }
    }

    printf("After Deletion=\n");
    for(i=0;i<x;i++)
    {
        if(c[i]!=-1)
        {
            printf("%c,",c[i]); 
        }
    }
}
