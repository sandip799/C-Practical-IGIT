#include<stdio.h>
void main()
{
    int a[100][100],i,j,k,num,sum,sum1;
    printf("Enter Square Matrix Side\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            printf("Enter The a[%d][%d] element\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<num;i++)
    {
        sum=0;
        sum1=0;
        for(j=0;j<num;j++)
        {
           sum=sum+a[i][j];
           sum1=sum1+a[j][i];
        }
        printf("Sum of Row %d =%d\n",i,sum);
        printf("Sum of Column %d =%d\n",i,sum1);
    }
}
