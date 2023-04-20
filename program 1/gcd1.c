#include <stdio.h>

int main() {
    int number1, number2, minimum, counter, GCD = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    minimum = (number1 < number2) ? number1 : number2;

    for (counter = 1; counter <= minimum; counter++) {
        if (number1 % counter == 0 && number2 % counter == 0) {
            GCD = counter;
        }
    }
    printf("GCD of %d and %d is %d", number1, number2, GCD);
    return 0;
}
