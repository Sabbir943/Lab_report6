/*9. Write a program in C to find the sum of all
 elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15*/
#include<stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    printf("Enter Length of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("element - [%d]:",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
{
    
    sum=sum+a[i];
}
printf("\nSum of all elements stored in the array is :%d\n",sum);
return 0;
}