/*6. Write a program in C to convert a decimal
 number to a binary number using the function.
Test Data :
Input any decimal number : 65
Expected Output :The Binary value is : 1000001*/
#include<stdio.h>   
void binary(int x){
    int bin=0,remainder=0,place=1;
    while(x!=0)
    {
    remainder=x%2;
    x=x/2;
    bin=bin+(remainder*place);
    place=place*10;
    }
    printf("The Binary value is : %d\n",bin);
}
int main()
{
    int n;
    printf("Input any decimal number :");
    scanf("%d",&n);
    binary(n);
}
