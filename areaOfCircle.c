#include<stdio.h>
int main()
{
    float radius,area,pi=3.1415;
    printf("Enter radius :");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of the circle is : %f",area);
    return 0;
}