#include<stdio.h>
void main()
{
    char c;
    printf("Enter The Charecter\n");
    scanf("%c",&c);
    if(("%d",c)>=65 && ("%d",c)<=90)
    {
        printf("Uppercase\n");
    }
    else{
        printf("Lowercase\n");
    }
}