#include<stdio.h>
void main()
{
float P,T,R,SI;
printf("Enter the principal amount,Rate of intrest ,Time period:");
scanf("%f%f%f",&P,&R,&T);
SI=P*T*R/100;
printf("Simple interest=%f",SI);
}