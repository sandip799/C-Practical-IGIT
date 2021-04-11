#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter a Number\n");
    scanf("%d",&num);
    while(num !=0)
    {
        num=num/10;
        count=count+1;
    }
    printf("Total No Of Digits = %d",count);
}