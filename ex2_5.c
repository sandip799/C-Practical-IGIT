#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef int integer;
typedef float Decimal;
int main()
{
    integer p,rate,year;
    printf("Enter Total Principle , Rate & Years\n");
    scanf("%d%d%d",&p,&rate,&year);
    Decimal si=p*((Decimal)rate/100)*year;
    Decimal ci=p*pow((1+(Decimal)rate/100),year)-p;
    printf("Simple Inrterest is %.2f\n",si);
    printf("Compound Inrterest is %.2f",ci);
return 0;
}