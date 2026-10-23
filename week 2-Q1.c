#include<stdio.h>
void main()
{
    int a,b,c,sum,avg;
    printf("enter three values:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("sum of three numbers is %d",sum);
    avg=sum/3;
    printf("\naverage of three numbers is %d",avg);
}