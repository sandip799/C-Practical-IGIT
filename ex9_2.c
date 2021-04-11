#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],*p,num,i;
    p=&a[0];
    printf("Enter Total No Of Inputs\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",p);
        p++;
    }
    //printing array in reverse order
    p=&a[num-1];
    for(i=num;i>0;i--)
    {
        printf("%d ",*p);
        p--;
    }
return 0;
}