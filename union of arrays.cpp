#include <stdio.h>

// Function to print the union of two sorted arrays
void printUnion(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    printf("Union of the two arrays: ");
    
    // Traverse both arrays using pointers
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            // If both elements are equal
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    // Print the remaining elements of the first array
    while (i < size1) {
        printf("%d ", arr1[i]);
        i++;
    }

    // Print the remaining elements of the second array
    while (j < size2) {
        printf("%d ", arr2[j]);
        j++;
    }

    printf("\n");
}

int main() {
    int size1, size2;

    // Get the size of the first array from the user
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    // Declare the first array of the given size
    int arr1[size1];

    // Get elements of the first array from the user
    printf("Enter the elements of the first array (sorted):\n");
    for (int i = 0; i < size1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Get the size of the second array from the user
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    // Declare the second array of the given size
    int arr2[size2];

    // Get elements of the second array from the user
    printf("Enter the elements of the second array (sorted):\n");
    for (int i = 0; i < size2; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Print the union of the two arrays
    printUnion(arr1, size1, arr2, size2);

    return 0;
}

