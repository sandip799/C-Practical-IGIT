#include<stdio.h>
void main()
{
    int p,c,m;
    printf("Please Enter Your Math Mark\n");
    scanf("%d",&m);
    printf("Please Enter Your Physics Mark\n");
    scanf("%d",&p);
    printf("Please Enter Your Chemistry Mark\n");
    scanf("%d",&c);
    if(m>=60 && p>=50 && c>=40 || (m+p+c)>=200)
    {
        printf("Admitted ;-)");
    }
    else{
        printf("Not Admitted :-(");
    }

}