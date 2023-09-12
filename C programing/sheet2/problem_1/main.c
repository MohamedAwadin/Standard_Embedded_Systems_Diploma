/*
Sheet2_problem1: Write a program that reads the radius of a circle and calculates the area and circumference.
*/

#include <stdio.h>

float cir_area(float r)
{
    float area = 3.14*(r * r);
    return area;
}
float cir_circumference(float r)
{
    float cir = 2*3.14*(r);
    return cir;
}


int main()
{
    float num, area,cir;
    while(1)
    {
        printf("Enter the radius :\n");
        scanf("%f",&num);
        area = cir_area(num);
        cir = cir_circumference(num);


        printf("Area=%0.2f and Circumference=%0.2f\n",area,cir);

    }
    return 0;
}

