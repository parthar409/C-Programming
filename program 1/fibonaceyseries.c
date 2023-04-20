#include <stdio.h>

int main() {
    int i, n, first = 0, second = 1, fibo;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            fibo = i;
        } else {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
    } 
    return 0;
}
