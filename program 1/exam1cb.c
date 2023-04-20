#include <stdio.h>

int main() {
    int n, i, max, min, diff;
    int arr[100];

    printf("Enter the number of inputs: ");
    scanf("%d", &n);

    printf("Enter the inputs: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    diff = max - min;
    if (diff == arr[0]) {
        printf("The difference between maximum and minimum value is equal to the first input.\n");
    } else {
        printf("The difference between maximum and minimum value is not equal to the first input.\n");
    }

    return 0;
}
