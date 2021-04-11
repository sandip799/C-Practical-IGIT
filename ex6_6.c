#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[100],b[100],c[100],i,j,ind=0,num1,num2,x,val1;
    int ext,p,a1;
    int swap,elem;
    printf("Enter Total Number Of Input In Array A\n");
    scanf("%d",&num1);
    printf("Input In 1st Array\n");
    for(i=0;i<num1;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter Total Number Of Inputs In Array B\n");
    scanf("%d",&num2);
    for(i=0;i<num2;i++)
    {
        scanf("%d",&b[i]);
    }
    //switch statement
     while(1)
    {
        printf("1.Traverse A\n");
        printf("2.Traverse B\n");
        printf("3.Insert New Element In A\n");
        printf("4.Insert New Element In B\n");
        printf("5 Delete An Element From A\n");
        printf("6.Delete An Element From B\n");
        printf("7.Search An Element In A\n");
        printf("8.Search An Element In B\n");
        printf("9.Sort A in Ascending Order\n");
        printf("10.Sort B in Ascending Order\n");
        printf("11.Merge A and B To From a New Array\n");
        printf("12.EXIT\n");
        printf("Enter Your Choice:-\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("Elements in Array A Are:-\n");
            for(i=0;i<num1;i++)
            {
              printf("%d\n",a[i]);
            }
            break;
        case 2:
            printf("Elements in Array B Are:-\n");
            for(j=0;j<num2;j++)
            {
              printf("%d\n",b[j]);
            }
           break;
        case 3:
        //adding new element in array A
        printf("Enter The Number You Have To Input in Array 1\n");
        scanf("%d",&a1);
        printf("Enter The Position\n");
        scanf("%d",&p);
        ext=a[p];
        a[p]=a1;
        a[num1]=ext;
        num1=num1+1;
        break;
        case 4:
         //adding new element in array B
        printf("Enter The Number You Have To Input in Array B\n");
        scanf("%d",&a1);
        printf("Enter The Position\n");
        scanf("%d",&p);
        ext=b[p];
        b[p]=a1;
        b[num2]=ext;
        num2=num2+1;
        break;
        //delete an element from array a
        case 5:
            printf("Enter The Position Of The Element You Have To Delete\n");
            scanf("%d",&p);
            a[p]=a[num1-1];
            num1=num1-1;
            break;
         //delete an element from array b
        case 6:
            printf("Enter The Position Of The Element You Have To Delete\n");
            scanf("%d",&p);
            b[p]=b[num2-1];
            num2=num2-1;
            break;
        //search an element in array
        case 7:
            printf("Enter The Element You Have To Search\n");
            scanf("%d",&ext);
            for(i=0;i<num1;i++)
            {
                if(ext==a[i])
                {
                    printf("Index Number=%d\n",i);
                    break;
                }
            }
            printf("Not In The Array\n");
            break;
         //search an element in array B
        case 8:
            printf("Enter The Element You Have To Search\n");
            scanf("%d",&ext);
            for(i=0;i<num2;i++)
            {
                if(ext==b[i])
                {
                    printf("Index Number=%d\n",i);
                    break;
                }
            }
            printf("Not In The Array\n");
            break;
        //ascending order
        case 9:
            for(i=0;i<num1;i++)
    {
        elem=a[i];
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
    printf("Ascending Order\n");
    for(i=num1-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    break;
     //ascending order b
        case 10:
            for(i=0;i<num2;i++)
    {
        elem=b[i];
        for(j=0;j<=i;j++)
        {
            if(elem>b[j])
            {
                swap=b[j];
                b[j]=elem;
                b[i]=swap;
                elem=swap;
            }
            else
            {
                b[i]=elem;
            }
        }
    }
    printf("Ascending Order\n");
    for(i=num2-1;i>=0;i--)
    {
        printf("%d\n",b[i]);
    }
    break;
    //merge two array & print
        case 11:
                //merge two array
                ind=0;
   for(i=0;i<num1;i++)
  {
    c[ind]=a[i];
    ind++;
  }
  for(i=0;i<num2;i++)
  {
    c[ind]=b[i];
    ind++;
  }
  //print
  printf("Elements in New Array Are:-\n");
  for(i=0;i<num1+num2;i++)
  {
    printf("%d,",c[i]);
  }
  printf("\n");
            break;
        case 12:
            exit(1);
        default:
          printf("XXX\n");
            break;
        }
    }
}

