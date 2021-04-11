#include <stdio.h>
#include <stdlib.h>
struct std
{
    char name[100];
    int roll;
    float sub1,sub2,sub3;
};
int main()
{
    int i;float sum,avg=0.0;
    struct std s[50];
    for(i=0;i<2;i++)
    {
        printf("Enter No %d Student Name\n",i);
        scanf("%s",s[i].name);
        printf("Enter Roll No\n");
        scanf("%d",&s[i].roll);
        printf("Enter All 3 Subject Marks\n");
        scanf("%f%f%f",&s[i].sub1,&s[i].sub2,&s[i].sub3);
    }
    for(i=0;i<2;i++)
    {
        sum=0.0;
        sum=s[i].sub1+s[i].sub2+s[i].sub3;
        printf("Student %d Total Mark Is %.2f\n",i,sum);
    }
    for(i=0;i<2;i++)
    {
        avg=avg+s[i].sub1+s[i].sub2+s[i].sub3;
    }
    printf("Total Average For All Student=%.2f",avg/2);
return 0;
}