#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1: result = num1 + num2;
            printf("%.2f", result);
            break;
        case 2: result = num1 - num2;
            printf("%.2f", result);
            break;
        case 3: result = num1 * num2;
            printf("%.2f", result);
            break;
        case 4: result = num1 / num2;
            printf("%.2f", result);
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}
