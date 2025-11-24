//Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int a[100], n, i, key;
    int low, high, mid, found = 0;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements (ascending order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) 
        {
            found = 1;
            break;
        } 
        else if(a[mid] < key) 
            low = mid + 1;
        else 
            high = mid - 1;
    }
    if(found) 
        printf("Element %d found at position %d (index %d).\n", key, mid + 1, mid);
     else 
        printf("Element %d not found in the array.\n", key);
    return 0;
}
