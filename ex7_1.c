#include<stdio.h>
void main()
{
    int a[100][100],i,j,row,col,num=0;
    printf("Enter No of Rows\n");
    scanf("%d",&row);
    printf("Enter No of Col\n");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter The a[%d][%d] element\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==a[j][i])
            {
                num=num+1;
            }
        }
    }
    //print matrix
    printf("Matrix is \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    if(num==row*col)
    {
        printf("Matrix is Symmetric\n");
    }
    else
    {
        printf("Matrix isn't Symmetric\n");
    }
}
