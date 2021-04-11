#include<stdio.h>
void main()
{
    int a[100][100],i,j,k,num;
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
        for(k=0;k<i;k++)
        {
            printf("  ");
        }
        for(j=i;j<num;j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
    }
}
