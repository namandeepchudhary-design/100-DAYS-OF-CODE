//Read and print a matrix.
#include <stdio.h>
int main() {
    int a[10][10];  
    int m, n;        
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
