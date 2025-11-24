//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    printf("Diagonal Traversal:\n");
    for (int d = 0; d <= m + n - 2; d++) {
        for (int i = 0; i < m; i++) {
            int j = d - i;
            if (j >= 0 && j < n) 
                printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
