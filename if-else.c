#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c",&op);
if(op=='+')
    {
        printf("Result= %d",num1+num2);
    }
    else if(op=='-')
    {
        printf("Result= %d",num1-num2);
    }
    else if(op=='*')
    {
        printf("Result= %d",num1*num2);
    }
    else if(op=='/')
    {
        printf("Result= %d",num1/num2);
    }
    else
    {
        printf("Invalid operator.");
    }
    return 0;
}