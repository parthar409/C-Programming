#include <stdio.h>

int main() {
    int even_sum = 0, odd_sum = 0;

    for (int i = 10; i <= 30; i++) {
        if (i % 2 == 0) {
            even_sum += i;  
        } else {
            odd_sum += i;  
        }
    }
    printf("sum of even numbers 10 and 30 is: %d\n", even_sum);
    printf("sum of odd numbers 10 and 30 is: %d\n", odd_sum);

    return 0;
}
