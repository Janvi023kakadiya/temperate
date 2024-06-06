#include<stdio.h>

int main(){

    int a,fac=1,n;

    printf("Enter a number:- ");

    scanf("%d",&n); 

    for(a=1; a<=n; a++)

        fac=fac*a; 

    printf("Factorial of %d is: %d",n,fac);

 

}