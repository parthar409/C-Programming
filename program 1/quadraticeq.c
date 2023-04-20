#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, x1, x2;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are real and different: %lf and %lf\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("The roots are real and equal: %lf\n", x1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        printf("The roots are complex and different: %lf + %lfi and %lf - %lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
