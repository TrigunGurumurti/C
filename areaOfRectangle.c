#include<stdio.h>
int main()
{
    float length,breadth,area;
    printf("Enter length and breadth :");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    printf("Area of Rectangle is : %f",area);
    return 0;
}