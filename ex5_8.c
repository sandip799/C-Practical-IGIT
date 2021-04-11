#include<stdio.h>
void main()
{
    int num,rem,val=0,num1;
    printf("Enter A Number\n");
    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        rem=num%10;
        val=val+(rem*rem*rem);
        num=num/10;
    }
    if(val==num1)
    {
        printf("The Number Is Armstrong\n");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
}