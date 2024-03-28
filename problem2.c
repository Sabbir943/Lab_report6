/*2. Write a program in C to check whether a 
number is a prime number or not using the
function.
Test Data :
Input a positive number : 5
Expected Output : The number 5 is a prime number.*/
#include<stdio.h>
void prime(int x){
    
    int i;
    int isprime=0;
    for(i=2;i<=x/2;i++)
    {
     if(x%2==0)
     {
        isprime=1;
        break;
     }
     }
     if(isprime==0)
     {
        printf("The number %d is a prime number.",x);
     }
     else{
        printf("The number %d is not a prime number.",x);
     }
}
int main()
{
    int n;
    printf("Input a positive number:");
    scanf("%d",&n);
    prime(n);
   
}