#include <stdio.h>

int main() {
    int num;
    
    printf("Enter ten numbers: ");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        
        if (num % 2 != 0) {
            printf("%d ", num);
        }
    }   
    return 0;
}
