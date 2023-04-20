/*#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}*/
#include <stdio.h>

int main() {
    int num1, num2, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;
    printf("GCD = %d", gcd);
    return 0;
}
