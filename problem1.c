/*1. Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :
Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2*/
#include<stdio.h>
void swapping(int x,int y){
    printf("Before swapping: n1 = %d ,n2 = %d",x,y);
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping: n1 = %d ,n2 = %d",x,y);

}
int main()
{
    int n1,n2;
    printf("Input 1st number :");
    scanf("%d",&n1);
    printf("Input 2nd number:");
    scanf("%d",&n2);
    swapping(n1,n2);
}