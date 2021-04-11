#include<stdio.h>
void main()
{
    char c;
    printf("Enter The Charecter\n");
    scanf("%c",&c);
    if(("%d",c)==97 || ("%d",c)==65 || ("%d",c)==69 || ("%d",c)==101 || ("%d",c)==105 || ("%d",c)==73 || ("%d",c)==111 || ("%d",c)==79 || ("%d",c)==117 || ("%d",c)==85)
    {
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
}