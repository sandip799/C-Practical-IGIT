#include<stdio.h>
void main()
{
    int a[100][100],i,j,num,sum=0;
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
        sum=sum+a[i][i];
    }
    printf("Sum Of Diagonal Element=%d",sum);
}
