#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int r;
    int ig;
};
int main()
{
    int i,sum=0,img=0;
    struct complex c[2];
    for(i=0;i<2;i++)
    {
       printf("Enter No%d Complex Number Real Part\n",i);
       scanf("%d",&c[i].r);
       printf("Enter No%d Complex Number Imaginary Part\n",i);
       scanf("%d",&c[i].ig);
    }
    for(i=0;i<2;i++)
    {
       sum=sum+c[i].r;
       img=img+c[i].ig;
    }
    printf("Sum of two complex number is %d+%di",sum,img);
return 0;
}