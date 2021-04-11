#include <stdio.h>
#include <stdlib.h>
void upp(char x[100])
{
    int i;
    for(i=0;x[i]!='\0';i++)
    {
       x[i]=x[i]-32;
    }
    //printing
    printf("%s",x);
}
int main()
{
    char c[100];
    printf("Enter a String\n");
    scanf("%s",&c);
    upp(c);
return 0;
}