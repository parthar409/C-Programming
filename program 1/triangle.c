#include <stdio.h>

int main() {
    float n1, n2, n3, sum;

    printf("Enter triangle: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    sum = n1 + n2 + n3;

    if (sum==180&&n1>0&&n2>0&&n3>0) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is invalid.\n");
    }
    return 0;
}