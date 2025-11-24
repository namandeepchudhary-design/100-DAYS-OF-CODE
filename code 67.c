//Insert an element in an array at a given position..
#include <stdio.h>
int main() {
    int a[100], n, i, key, pos;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter  elements \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to insert ");
    scanf("%d", &key);
    printf("Enter the position of the element");
    scanf("%d", &pos);
    pos=pos-1;
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
