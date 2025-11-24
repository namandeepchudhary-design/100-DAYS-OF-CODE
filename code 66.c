//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int a[100], n, i, key, pos;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements (ascending order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &key);
    pos = n; // default is end of array
    for(i = 0; i < n; i++) {
        if(key < a[i]) {
            pos = i;
            break;
        }
    }
    for(i = n; i > pos; i--) 
    {
        a[i] = a[i - 1];
    }
    a[pos] = key;
    n++; 
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
