#include<stdio.h>
void main()
{
    int num1,num2,swap;
    printf("enter 1st number\n");
    scanf("%d",&num1);
    printf("enter 2nd number\n");
    scanf("%d",&num2);
    swap=num1;
    num1=num2;
    num2=swap;
    printf("After swap num1=%d & num2=%d",num1,num2);
}