#include <stdio.h>

void checkOddOrEven(int num);

int main() {
    int nums[5];
    int i;

    printf("Enter five numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++) {
        checkOddOrEven(nums[i]);
    } 

    return 0;
}

void checkOddOrEven(int num) {
    if(num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}
