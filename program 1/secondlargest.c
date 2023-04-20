#include <stdio.h>

int main() {
    int arr[10] = {12, 45, 23, 67, 9, 54, 13, 27, 36, 5};
    int largest = arr[0];
    int second_largest = arr[0];
    
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }  
    printf("second largest element %d\n", second_largest);
    return 0;
}
