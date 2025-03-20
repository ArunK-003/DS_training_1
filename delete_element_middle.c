#include <stdio.h>

int main() {
    int arr[100], n, i, mid;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mid = n / 2;

    for(i = mid; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
