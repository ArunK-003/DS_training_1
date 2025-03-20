#include <stdio.h>

int main() {
    int arr[100], n, i, mid, newElement;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mid = n / 2;

    printf("Enter the new element to insert in the middle: ");
    scanf("%d", &newElement);

    for(i = n; i > mid; i--) {
        arr[i] = arr[i - 1];
    }

    arr[mid] = newElement;
    n++; 

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
