#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    int choice;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("result=%2f",a+b);
            break;
        case 2:
            printf("result=%2f",a-b);
            break;
        case 3:
            printf("result=%2f",a*b);
            break;
        case 4:
            if(b==0)
            {
                printf("div by 0 is not possible");
            }
            else
            {
                printf("result=%2f",a/b);
            }
            break;
            default:
             printf("invalid option");
            }
            
    }