#include <stdio.h>

void rotateArray(int arr[], int size, int positions) {
    // Create a temporary array to store rotated values
    int temp[size];
    
    // Copy the array elements to the temp array with rotation
    for (int i = 0; i < size; i++) {
        temp[(i + positions) % size] = arr[i]; // Use modulus to wrap around
    }

    // Copy the rotated values back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, positions;
    
    // Input size of the array and the number of positions to rotate
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size]; // Declare the array based on input size
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);
    
    // Rotate the array
    rotateArray(arr, size, positions);
    
    // Print the rotated array
    printf("Array after rotating %d positions: ", positions);
    printArray(arr, size);
    
    return 0;
}
