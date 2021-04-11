#include<stdio.h>
void main()
{
    int a[100],num,swap,elem,i,j;
    printf("Enter Total Number Of Inputs You Have To Input\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter No %d Integer\n",i);
        scanf("%d",&elem);
        for(j=0;j<=i;j++)
        {
            if(elem>a[j])
            {
                swap=a[j];
                a[j]=elem;
                a[i]=swap;
                elem=swap;
            }
            else
            {
                a[i]=elem;
            }
        }
    }
    printf("\nSecond Largest Number= %d\n",a[1]);
    printf("Second Smallest Number=%d",a[num-2]);
}
