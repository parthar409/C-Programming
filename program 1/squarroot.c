#include <stdio.h>
#include <math.h>

int main(){
    float num, squar, power;
    int x;

    printf("Enter a number: ");
    scanf("%f", &num);

    squar = sqrt(num);
    printf("Square root of %f is %f\n", num, squar);

    printf("Enter number: ");
    scanf("%d", &x);

    power = pow(num, x);
    printf("%f raised to the power of %d is %f\n", num, x, power);

    return 0;
}
