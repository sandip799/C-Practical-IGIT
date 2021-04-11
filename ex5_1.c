#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,x=1;
    for(i=3;i>=0;i--)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=x;k++)
        {
            printf("* ");
        }
        printf("\n");
        x=x+2;
    }
return 0;
}