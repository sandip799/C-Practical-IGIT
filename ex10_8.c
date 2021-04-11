#include <stdio.h>
#include <stdlib.h>
int identical(int a[100],int b[100],int n1,int n2)
{
    int i;
    if(n1==n2)
    {
        for(i=0;i<n1;i++)
        {
            if(a[i]==b[i])
            {
               continue;
            }
            else
            {
                printf("Matrix Is Not Identity\n");
                return 1;
            }
        }
        return 0;
    }
}
int main()
{
    int a[100],b[100],i,j,n1,n2;
    printf("Enter Total No of inputs in A1\n");
    scanf("%d",&n1);
    printf("Enter Elements in Array 1\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Total No of inputs in A2\n");
    scanf("%d",&n2);
    printf("Enter Elements in Array 2\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    j=identical(a,b,n1,n2);
    if(j==0)
    {
        printf("Identical");
    }
    else
    {
        printf("Not Identical");
    }
return 0;
}