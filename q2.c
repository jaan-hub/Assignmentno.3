#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    printf("Enter Operator:");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
        printf("result is %d",a+b);
        break;
        case '-':
        printf("result is %d",a-b);
        break;
        case '*':
        printf("result is %d",a*b);
        break;
       case '/':
       printf("result is %d",a/b);
       break;
        default:printf("Invalid operator");
    } 
    return 0;

}