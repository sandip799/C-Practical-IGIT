#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],i,num,ext,p,b;
    printf("Enter Total No Of Elements\n");
    scanf("%d",&num);
    printf("Enter Elements In Array\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Enter The Number You Have To Input in Array 1\n");
        scanf("%d",&b);
        printf("Enter The Position\n");
        scanf("%d",&p);
        ext=a[p];
        a[p]=b;
        a[num]=ext;
        num=num+1;
    //printing array
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}