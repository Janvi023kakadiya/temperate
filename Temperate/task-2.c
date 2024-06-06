 #include <stdio.h>
 
int main()
    int j, k
{;
    printf("Enter a number: ");
    scanf("%d", &j);
    printf("Multiplication table of %d:\n ", j);
    printf(" \n");
    for (k = 1; k<= 10; k++)
     	 printf("%d x %d = %d\n", j, k, j * k);
   
} 