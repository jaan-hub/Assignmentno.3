#include<stdio.h>
int main()
{
    int option;
    float   PI=3.14,area=3.14,radius;
    printf("enter radius:");
    scanf("%f",&radius);
    printf("select option\n");
    printf("1:area of circle:\n");
    printf("2:circumference of circle:\n");
    printf("3:volume of sphere:\n");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
          printf("area of circle=%f\n",PI*radius*radius);
          break;
        case 2:
          printf("circumference of circle=%f\n",2*PI*radius);
          break;
        case 3:
          printf("volume of sphere=%f\n",(4.0/3.0)*PI*radius*radius*radius);
          break;
        default:
          printf("invalid");
    }
    return 0;
}