#include<stdio.h>
void main()
{
    int num,num1,rev=0,rem;
    printf("Enter a Number\n");
    scanf("%d",&num);
    num1=num;
    while(num !=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==num1)
    {
        printf("The Number is Palindrome\n");
    }
    else{
        printf("This is Not a Palindrome Number\n");
    }
}