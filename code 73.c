//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int a[10][10], row, col;
    int sum[10];  
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        sum[i] = 0; 
        for (int j = 0; j < col; j++) {
            sum[i] += a[i][j];
        }
    }
    printf("\nMatrix\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of each row:\n");
    for (int i = 0; i < row; i++) {
        printf("Row %d sum = %d\n", i + 1, sum[i]);
    }
    return 0;
}
