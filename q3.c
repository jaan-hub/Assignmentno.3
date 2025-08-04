#include<stdio.h>
int main()
{
    int x,y,num,select;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    printf("select the optiion\n");
    printf("1:equality\n");
    printf("2:less than\n");
    printf("3:quotient and remainder\n");
    printf("4:range check\n");
    printf("5:swap values\n");
    scanf("%d",&select);
    switch(select)
    {
        case 1:if(x==y)
                 printf("x is equal to y\n");
                else
                 printf("x is not equal to y\n");
                break;
        case 2:if(x<y)
                 printf("x is less than y\n");
                else
                 printf("x is not less than y\n");
                break;
        case 3:if(y!=0)
               {
                printf("quotient is:%d\n",x/y);
                printf("remainder is:%d\n",x%y);
               }else{
                printf("not divide by zero\n");
               }
               break;
        case 4:
             printf("enter number:");
             scanf("%d",&num);
                if(num>=x && num<=y)
                 printf("number lies within range\n");
                else
                 printf("number is outside the range\n");
                break;
        case 5:
        {
            int temp=x;
            x=y;
            y=temp;
            // printf("swapped %d and %d\n",x,y);
            printf("after swapping x=%d,y=%d\n",x,y);
            break;
        }
        default:printf("invalid case\n");
    }
    return 0;
}