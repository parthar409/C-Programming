#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    for (int temp = binary; temp > 0; temp /= 10) {
        rem = temp % 10;
        decimal += rem * base;
        base *= 2;
    }
    printf("Decimal to binary number %d is: %d", binary, decimal);

    return 0;
}
