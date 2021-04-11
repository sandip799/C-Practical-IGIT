/*
Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).
*/
#include<stdio.h>
#include<conio.h>
void main() {
    long n;
    printf("Enter an integer : ");
    scanf("%ld",&n);
    long i=2;
    double sum=1;
    while(i<=n) {
        double t=i;
        long j=-1;
        do {
            t/=j;
            j--;
        }while(j>=-(i+1));
        sum+=t;
        i++;
    }
    printf("\n%d ",1);
    for(i=2;i<=n;i++) {
        if(i%2==0)
            printf("-(%ld/%ld!) ",i,i+1);
        else
            printf("+(%ld/%ld!) ",i,i+1);
    }
    printf("= %lf",sum);
    getch();
}