#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100][100],b[100][100],c[100][100],i,j,r1,c1,r2,c2,x,k,sum=0;
    //input matrix 2
    printf("Enter No Of Rows in Matrix 1\n");
    scanf("%d",&r1);
    printf("Enter No Of Col in Matrix 2\n");
    scanf("%d",&c1);
    printf("Input Like Matrix Using Space & Enter Key\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input matrix 2
    printf("Enter No Of Rows in Matrix 2\n");
    scanf("%d",&r2);
    printf("Enter No Of Col In Matrix 2\n");
    scanf("%d",&c2);
    printf("Input Like Matrix Using Space & Enter Key\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    while(1)
    {
        printf("1. A+B\n");
        printf("2. A-B\n");
        printf("3. B-A\n");
        printf("4. A*B\n");
        printf("5. EXIT\n");
        printf("Enter Your Choice\n");
        scanf("%d",&x);

        //switch statement
 switch(x)
  {
      //addition
    case 1:
        if(r1==r2 && c1==c2)
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
            //print
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Error!\n");
        }
        break;
        //subtraction
    case 2:
        if(r1==r2 && c1==c2)
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    c[i][j]=a[i][j]-b[i][j];
                }
            }
            //print
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Error!\n");
        }
        break;
        //sub2
        case 3:
        if(r1==r2 && c1==c2)
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    c[i][j]=b[i][j]-a
                    [i][j];
                }
            }
            //print
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Error!\n");
        }
        break;
        //matrix multiplication
        case 4:
            {
                if(c1==r2)
                {
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<c2;j++)
                        {
                            for(k=0;k<r2;k++)
                            {
                               sum=sum+a[i][k]*b[k][j];
                            }
                            c[i][j]=sum;
                            sum=0;
                        }
                    }
                }
                printf("Matrix Multiplication=\n");
                //printing result
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                    {
                        printf("%d     ",c[i][j]);
                    }
                    printf("\n");
                }
            }
    case 5:
        exit(0);
    default:
        {
            printf("Wrong Option\n");
        }
  }


    }
}
