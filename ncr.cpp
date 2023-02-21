#include <stdio.h>

// Function to compute the factorial of a given number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, r;
    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Error: n should be greater than or equal to r");
        return 0;
    }

    int nCr = factorial(n) / (factorial(r) * factorial(n - r));

    printf("%dC%d = %d\n", n, r, nCr);

    return 0;
}
