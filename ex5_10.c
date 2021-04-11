#include<stdio.h>
void main()
{
    int num,prev=0,after=1,i,fib=1;
    printf("Enter Total Number\n ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d,",fib);
        fib=prev+after;
        prev=after;
        after=fib;
    }
}