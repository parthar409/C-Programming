#include <stdio.h>

void generate_spiral(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    generate_spiral(n);
    return 0;
}

void generate_spiral(int n) {
    int matrix[n][n];
    int num = 1;
    int rows = 0;
    int rowe = n - 1;
    int cols = 0;
    int cole = n - 1;
    
    while (num <= n * n) {
        // Fill the top row from left to right
        for (int i = cols; i <= cole; i++) {
            matrix[rows][i] = num++;
        }
        rows++;
        
        // Fill the right column from top to bottom
        for (int i = rows; i <= rowe; i++) {
            matrix[i][cole] = num++;
        }
        cole--;
        
        // Fill the bottom row from right to left
        for (int i = cole; i >= cols; i--) {
            matrix[rowe][i] = num++;
        }
        rowe--;
        
        // Fill the left column from bottom to top
        for (int i = rowe; i >= rows; i--) {
            matrix[i][cols] = num++;
        }
        cols++;
    }
    // Print the generated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


