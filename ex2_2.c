#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int p,rate,year;
    printf("Enter Total Principle , Rate & Years\n");
    scanf("%d%d%d",&p,&rate,&year);
    float si=p*((float)rate/100)*year;
    float ci=p*pow((1+(float)rate/100),year)-p;
    printf("Simple Inrterest is %.2f\n",si);
    printf("Compound Inrterest is %.2f",ci);
return 0;
}