#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k=0;
    char s1[100],s2[100];
    printf("Enter The String For S1\n");
    scanf("%s",s1);
    printf("Enter The String For 21\n");
    scanf("%s",s2);
  
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
        {
            k=k+1;
        }
        else
        {
            printf("Strings Are Not Same\n");
            exit(0);
        }
    }
    printf("Strings Are Same");
return 0; 
}