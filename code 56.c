//READ AND PRINT ELEMENTS OF A ONE-DIMENSIONAL ARRAY
#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Reading elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing elements
    printf("Array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
