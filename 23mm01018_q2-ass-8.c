#include <stdio.h>

void matrixMultiplication(int mat1[][100], int mat2[][100], int res[][100], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return;
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[100][100], mat2[100][100], res[100][100];
    int r1, c1, r2, c2;

    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    matrixMultiplication(mat1, mat2, res, r1, c1, r2, c2);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}