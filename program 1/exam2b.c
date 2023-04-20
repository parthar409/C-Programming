#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int* ptr = arr; 

    printf("Elements of the array using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++; 
    }
    return 0;
}
