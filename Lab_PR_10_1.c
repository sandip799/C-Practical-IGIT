/*  Write a program using function to determine whether a year is a leap year or not */
#include <stdio.h>
#include <stdlib.h>
void year(int x)
{
    if(x%4==0)
    {
        printf("%d is a Leap Year\n",x);
    }
    else{
        printf("%d is Not a Leap Year\n",x);
    }
}
int main()
{
    int y;
    printf("Enter The Year\n");
    scanf("%d",&y);
    year(y);
return 0;
}