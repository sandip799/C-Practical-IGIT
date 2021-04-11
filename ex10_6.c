#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
char* fun(char s[],char c) {
    int i,j;
    char t[100];
    char *u=t;
    for(i=0,j=0;s[i]!=0;i++)
    {
       if(s[i]!=c)
       {
           t[j]=s[i];
           j++;
       }
    }
    t[j]=0;
    return u;
}
int main()
{
    char s[100],t[100],c;
    printf("Enter The String\n");
    scanf("%s",s);
    printf("Enter The Charecter : ");
    c=getche();
    char* r=fun(s,c);
    printf("\nThe String is \"%s\"",r);
return 0;
}