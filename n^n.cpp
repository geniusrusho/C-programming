#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i);
    }

    printf("The sum of powers of integers from 1 to %d is %.0f\n", n, sum);

    return 0;
}
