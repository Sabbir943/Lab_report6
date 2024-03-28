#include<stdio.h>
int factorial(int n){
    int fact=1;
    int i;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    
}