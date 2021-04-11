/*write a program to enter temprature in degree celsius and display it in fahrenheit and vice versa*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float cel,far;
    int x;
    printf("1-Celsius\n");
    printf("2-Fahrenheit\n");
    printf("Enter\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Enter Degrees in Celsius\n");
        scanf("%f",&cel);
        far=(cel*(float)9/5)+32;
        printf("%.0f Celsius = %.2f Fahrenheit",cel,far);
    }
    else if(x==2)
    {
        printf("Enter Degrees in Fahrenheit\n");
        scanf("%f",&far);
        cel=(far-32)*((float)5/9);
        printf("%.0f Fahrenheit = %.2f Celsius",far,cel);
    }
return 0;
}