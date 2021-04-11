#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c[100];
    int i,elem,swap,j;
    printf("Enter The String\n");
    scanf("%s",c);
    //sorting alphabetically
     for(i=0;c[i]!='\0';i++)
    {
        elem=c[i];
        for(j=0;j<=i;j++)
        {
            if(elem>c[j])
            {
                swap=c[j];
                c[j]=elem;
                c[i]=swap;
                elem=swap;
            }
            else
            {
                c[i]=elem;
            }
        }
    }
    //printing 
    for(i=strlen(c);i>=0;i--)
    {
        printf("%c",c[i]);
    }
return 0;
}