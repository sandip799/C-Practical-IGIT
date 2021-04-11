#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c[100];
    int n1,n2,i,x;
    printf("Enter The String\n");
    scanf("%s",&c);
    printf("Enter The Substring Range Using Space\n");
    scanf("%d%d",&n1,&n2);
    if(n2>strlen(c))
    {
        printf("The Range Is Higher Than Total Charecters In String\n");
    }
    else{
        for(i=n1;i<=n2;i++)
        {
           printf("%c",c[i]);
        }
    }
return 0;
}