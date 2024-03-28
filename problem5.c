/*5. Write a C program to generate nth Fibonacci
 term using function.*/
 #include<stdio.h>
 void fibonacci(int x){
    int first=0,second=1,fibo=0,count=0;
    printf("The fibonacci number is:");
    
   while(count<x)
   {
    if(count<=1)
    {
     fibo=count;
    }
    else{
    fibo=first+second;
    first=second;
    second=fibo;

    }
    printf("%d ",fibo);

    count++;
   }
    }
 int main()
 {
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    fibonacci(n);
 }