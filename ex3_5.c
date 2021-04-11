#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,div,rem,sum=0;
    printf("Enter a 4 Digit Number\n");
    scanf("%d",&num);
    while(num!=0)
    {
       rem=num%10;
       sum=sum+rem;
       num=num/10;
    }
    printf("Sum of All Digits Are %d",sum);
return 0;
}