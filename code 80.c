//Multiply two matrices.
#include <stdio.h>
int main() {
    int m, n, p, q;
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrix multiplication not possible (columns of A != rows of B)\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            C[i][j] = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
