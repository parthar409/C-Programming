#include <stdio.h>

int main() {
    int n,sum = 0;
    float average;
    printf("Enter number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    average = (float) sum / n;

    printf("The sum of numbers: %d\n", sum);
    printf("The average of numbers: %.2f\n", average);

    return 0;
}
