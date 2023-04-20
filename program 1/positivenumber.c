#include <stdio.h>

int main() {
    int n,i, nums[20];
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Positive numbers in the array are: ");
    for (i = 0; i < n; i++) {
        if (nums[i] > 0) {
            printf("%d ", nums[i]);
        }
    }
    return 0;
}
