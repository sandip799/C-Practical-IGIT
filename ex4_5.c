#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[100];int unit,x;float money;
    printf("Enter Coustomer's Name\n");
    scanf("%s",name);
    printf("Enter Total No of Units %s Consumed\n",name);
    scanf("%d",&unit);
    //if
    if(unit<=125)
    {
        x=1;
    }
    else if(unit>=125 && unit<=200)
    {
        x=2;
    }
    else if(unit>=200 && unit<=300)
    {
        x=3;
    }
    else if(unit>300)
    {
        x=4;
    }
    switch(x)
    {
       case 1:
            printf("%s's Total Charge is 100\n",name);
            break;
       //for first 200 unit
       case 2:
            printf("%s's Total Charge is %.2f\n",name,((float)unit*0.8));
            break;
       case 3:
         printf("%s's Total Charge is %.2f\n",name,(160+(unit%200)*1.30));
         break;
        //last case
        case 4:
        money=290+(unit%300)*2;
        if(money>400)
       {
         printf("%s's Total Charge is %.2f\n",name,(money+(float)money/100*15));
       }
       else
         printf("%s's Total Charge is %.2f\n",name,money);
         break;
            
    }
return 0;
}