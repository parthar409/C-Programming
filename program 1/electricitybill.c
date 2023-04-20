#include <stdio.h>

int main() {
    float units, bill;

    printf("Enter the total units: ");
    scanf("%f", &units);

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 25 + (units - 50) * 1.00;
    } else if (units <= 250) {
        bill = 125 + (units - 150) * 1.50;
    } else {
        bill = 375 + (units - 250) * 2.00;
    }
    printf("The total electricity bill is: %.2f Taka\n", bill);

    return 0;
}
