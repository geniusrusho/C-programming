#include <stdio.h>

int main() {
    float x, y;

    printf("Enter a point (x, y): ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) is in the first quadrant.", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) is in the second quadrant.", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) is in the third quadrant.", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) is in the fourth quadrant.", x, y);
    else
        printf("The point (%.2f, %.2f) is on the origin.", x, y);

    return 0;
}
