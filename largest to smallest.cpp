#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // check and swap the values to arrange in ascending order
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("The numbers arranged in descending order are: %d %d %d", a, b, c);
    return 0;
}
