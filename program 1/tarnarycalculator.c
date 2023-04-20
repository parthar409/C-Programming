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

    result =num1+((choice==1)?num2:(choice==2)?-num2:(choice==3)?num1*num2:(num2==0)?0:num1/num2);

    printf("Result: %.2f\n", result);

    return 0;
}
