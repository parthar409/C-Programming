#include <stdio.h>

int main() {
    int i,n, num = 1;

    printf("Enter series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", num);
        num = 5 * i;
    }
    return 0;
}
