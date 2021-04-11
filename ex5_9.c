#include<stdio.h>
void main()
{
    int num,i,sum=0;
    printf("Enter A Number\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
      printf("This Is A Perfect Number\n");
    }
    else
    {
        printf("This Is Not A Perfect Number");
    }
}