/*8. Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2*/
#include<stdio.h>
int main()
{
int a[50],i,n;
printf("Input the number of elements to store in the array :");
scanf("%d",&n);
printf("Input %d number of elements in the array :\n",n);
for(i=0;i<n;i++)
{
    printf("element - [%d]:",i);
    scanf("%d",&a[i]);
}
printf("The values store into the array are :\n");

for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nThe values store into the array in reverse are :\n");
for(i=n-1;i>=0;i--)
{
    printf("%d ",a[i]);
}

}