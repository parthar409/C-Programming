#include <stdio.h>

int main() {
    int m, h, remainderMin;

    printf("Enter time in minutes: ");
    scanf("%d", &m);

    h = m / 60;
    remainderMin = m % 60;

    printf("%d minute(s) is equal to %d hour(s) and %d minute(s).\n", m, h, remainderMin);

    return 0;
}
