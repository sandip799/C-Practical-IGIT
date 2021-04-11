#include<stdio.h>
void main()
{
    int a,b,c,small;
    printf("Enter All 3 Numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        small=b;
    }
    else
    {
        small=a;
    }
    if(small>c)
    {
        small=c;
        printf("Smallest Number is %d",small);
    }
    else
    {
        printf("Smallest Number is %d",small);
    }
}