#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of colums : ");
    scanf("%d", &n);
    int arr[m][n];

    printf("Enter elements : \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("reverse wave matrix:\n");
    for (int j = n - 1; j >= 0; j--) { 
        if (j % 2 == 0) { 
            for (int i = m - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
            }
        } else { 
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}
