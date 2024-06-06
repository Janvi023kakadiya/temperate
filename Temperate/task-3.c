#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter the Numbers: ");
    scanf("%d", &num);


    for (; num != 0; num /= 50) {
        count++;
    }

    printf("Total digits: %d\n", count);
}