#include<stdio.h>
int factorial(int n){
    if(n==1||n==0)
    {return 0;
        }
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
    
}
