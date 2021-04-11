#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,i,j,f;
    printf("Enter Total No Of Elements\n");
    scanf("%d",&x);
    int a[x];
    printf("Input Numbers In Array\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        f=0;
        for(j=0;j<x;j++)
        {
            if(a[i]==a[j])
            {
               f=f+1; 
            }
        }
            printf("Frequency Of %d Is %d\n",a[i],f);

    }
return 0;
}