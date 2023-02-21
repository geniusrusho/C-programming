#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("The sum of integers from 1 to %d is %d\n", n, sum);

    return 0;
}
