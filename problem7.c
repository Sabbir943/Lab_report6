/*7. Write a program in C to store elements
 in an array and print them.
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2*/
#include <stdio.h>
int main()
{
    int i,n;
    int a[50];
    printf("Input elements in the array:",n);
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}