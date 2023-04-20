#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n = 80;

    // Allocate memory space
    ptr = (int*) malloc(n * sizeof(int));

    // Deallocate memory space
    free(ptr);
    n = 100;
    ptr = (int*) malloc(n * sizeof(int));
    free(ptr);

    return 0;
}
