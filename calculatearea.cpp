#include<cstdio>
#include<stdio.h>
#include<math.h>

double calculateArea(double x1, double y1, double x2,double y2, double x3, double y3)
{
    double area = 0.5 * fabs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
    return area;

}
int main()
{
    double x1,y1,x2,y2,x3,y3, area;
    printf("Enter coordinates of triangle:\n");
    printf("x1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);
    printf("x2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);
    printf("x3 = ");
    scanf("%lf", &x3);
    printf("y3 = ");
    scanf("%lf", &y3);

    area = calculateArea(x1, y1, x2, y2, x3, y3);

    printf("Area of triangle = %lf\n", area);

    return 0;


}