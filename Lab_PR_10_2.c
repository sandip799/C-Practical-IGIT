/* Write a program using function to take a string as input and then convert all lowercase 
characters to its uppercase equivalent */
#include <stdio.h>
#include <stdlib.h>
void upp(char x[100])
{
    int i;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>='a' && x[i]<='z')
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