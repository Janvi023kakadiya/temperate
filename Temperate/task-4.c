#include <stdio.h>
int main()
{
    int n, sum=0, a, b;
    printf("Enter number to find sum of a and b = ");
    scanf("%d", &n);
    
    b = n % 10;
 
    while(n >= 10)
    {
        n = n / 10;
    }
    a = n;
 
    sum = a + b;
    printf("Sum of a and b = %d", sum);
   
}