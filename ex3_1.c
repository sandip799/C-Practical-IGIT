#include<stdio.h>
#include<math.h>
void main()
{
    double s1,s2,s3,div,area,b_area;
    printf("Enter Three Sides Of Triangle\n");
    scanf("%lf%lf%lf",&s1,&s2,&s3);
    div=(s1+s2+s3)/2;
    b_area=div*(div-s1)*(div-s2)*(div-s3);
    area=sqrt(b_area);
    printf("Area of the triangle =%.2lf\n",area);
}