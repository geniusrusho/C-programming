#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += i * (n - i + 1);
    }
    
    printf("The sum of the series is: %d", sum);
    
    return 0;
}
