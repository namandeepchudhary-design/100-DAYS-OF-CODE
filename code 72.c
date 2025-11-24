//Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int a[10][10];
    int m, n, i, j;
    int sum = 0;  
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum += a[i][j]; 
        }
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}
