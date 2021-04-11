/*write a prpgram that takes radius of a circle and displays its area and perimeter*/
#include<stdio.h>
#define PI 3.14
void main()
{
    float radius,area,perimeter;
    printf("Enter The Radius Of The Circle\n");
    scanf("%f",&radius);
    perimeter=2*PI*radius;
    area=PI*radius*radius;
    printf("Area of the circle is %f & perimeter is %f",area,perimeter);
}