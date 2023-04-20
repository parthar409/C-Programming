#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10;
    int y = 20;
    int z = MAX(x, y);
    printf("The maximum of %d and %d is %d.\n", x, y, z);
    return 0;
}
