#include <stdio.h>

int main() {
    int arr[100], n, i, newElement;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to insert at the beginning: ");
    scanf("%d", &newElement);

    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newElement;
    n++;

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
