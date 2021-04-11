#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch[100];
    char temp;
    int i,x=0;
    printf("Enter The Charecter\n");
    scanf("%c",&temp);
    printf("Enter The String\n");
    scanf("%s",ch);
    for(i=0;ch[i]!=0;i++)
    {
        if(ch[i]==temp)
        {
            x=x+1;
        }
    }
    printf("Frequency of %c is %d",temp,x);
return 0;
}