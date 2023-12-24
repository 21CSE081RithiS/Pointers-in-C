#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int *count = (int *)calloc(size, sizeof(int));

    printf("Output: ");
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (count[i] > 1) {
            found = 1;
            printf("%d ", i);
        }
    }

    if (!found) {
        printf("-1");
    }

    free(count);
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find and print the duplicate elements
    findDuplicates(arr, size);

    return 0;
}


