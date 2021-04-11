#include <stdio.h>
void main()
{
    float money;
    int paisa;
    printf("Enter Total Ammount\n");
    scanf("%f",&money);
    paisa=money*100;
    printf("Total Ammount in Paisa =%d\n",paisa);
}