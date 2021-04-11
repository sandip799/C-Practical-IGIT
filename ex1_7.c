#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 1st number\n");
    scanf("%d",&num1);
    printf("enter 2nd number");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("after swapping num1=%d & num2=%d",num1,num2);
}
