#include <stdio.h>

void spiralPrint(int m, int n, int arr[m][n]);

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralPrint(3, 3, arr);
    return 0;
}

void spiralPrint(int m, int n, int arr[m][n]) {
    int i, k = 0, l = 0;

    while (k < m && l < n) {
        for (i = l; i < n; i++) {
            printf("%d ", arr[k][i]);
        }
        k++;

        for (i = k; i < m; i++) {
            printf("%d ", arr[i][n-1]);
        }
        n--;
        if (k < m) {
            for (i = n-1; i >= l; i--) {
                printf("%d ", arr[m-1][i]);
            }
            m--;
        }
        if (l < n) {
            for (i = m-1; i >= k; i--) {
                printf("%d ", arr[i][l]);
            }
            l++;
        }
    }
}

