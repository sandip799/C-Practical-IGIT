#include<stdio.h>
void main()
{
    int sum=0,num=0;
    for(int i=100;i<200;i++)
    {
        if(i%7==0)
        {
            num=num+1;
            sum=sum+i;
        }
    }
    printf("Number of Integers = %d & Sum Of Integers = %d",num,sum);
}