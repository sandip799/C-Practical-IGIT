#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter The Value Of x\n");
    scanf("%d",&x);
    (x>0 && printf("Y=1") || x==0 && printf("Y=0") || x<0 && printf("Y=-1"));
}