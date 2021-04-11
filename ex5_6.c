#include<stdio.h>
void main()
{
    int a,b,hcf,big;
    printf("Enter 1st Integer\n");
    scanf("%d",&a);
    printf("Enter 2nd Integer\n");
    scanf("%d",&b);
    if(a>b)
    {
        big=a;
    }
    else
    {
        big=b;
    }
    for(int i=1;i<=big;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    //LCM of numbers
    while(1)
    {
        if(big%a==0 && big%b==0)
        {
            printf("LCM of %d & %d is %d\n",a,b,big);
            break;
        }
        big++;
    }
    printf("HCF of %d & %d is %d",a,b,hcf);
}