#include <stdio.h>

int rankOfMatrix(float mat[4][4])
{
    int rank = 4;
    for (int row = 0; row < rank; row++) {
        if (mat[row][row] != 0) {
            for (int col = 0; col < 4; col++) {
                if (col != row) {
                    float mult = mat[col][row] / mat[row][row];
                    for (int i = 0; i < rank; i++)
                        mat[col][i] -= mult * mat[row][i];
                }
            }
        }
        else {
            int reduce = 1;
            for (int i = row + 1; i < 4; i++) {
                if (mat[i][row] != 0) {
                    for (int j = 0; j < rank; j++) {
                        float temp = mat[row][j];
                        mat[row][j] = mat[i][j];
                        mat[i][j] = temp;
                    }
                    reduce = 0;
                    break ;
                }
            }
            if (reduce) {
                rank--;
                for (int i = 0; i < 4; i++)
                    mat[i][row] = mat[i][rank];
            }
            row--;
        }
    }
    return rank;
}

int main()
{
    float mat[4][4] = {{1, 2, 3, 0},
                       {2, 4, 3, 2},
                       {3, 2, 1, 3},
                       {6, 8, 7, 5}};
    printf("Rank of the matrix is %d\n", rankOfMatrix(mat));
    return 0;
}
