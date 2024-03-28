/*3. Write a C program to find diameter, circumference and area of circle using functions.*/
#include<stdio.h>
#define PI 3.1416
void calculate(float x){
float result1=2*x;
float result2=2*PI*x;
float result3=PI*x*x;
printf("Diameter of circle:%.2f\n",result1);
printf("circumference of circle:%.2f\n",result2);
printf("Diameter of circle:%.2f\n",result3);
}

int main()
{
    float circle;
    printf("Input radious:");
    scanf("%f",&circle);
    calculate(circle);
    
}