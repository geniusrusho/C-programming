#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        int innerSum = 0, j = 0;

        while (j < i && i <= n) {
            innerSum += i;
            i++;
            j++;
        }

        sum += innerSum;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
