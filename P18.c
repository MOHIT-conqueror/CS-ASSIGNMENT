// Function to left rotate an array by one element
#include <stdio.h>


void leftRotateByOne(int arr[], int size) {
    int temp = arr[0];

   
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

   
    arr[size - 1] = temp;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    leftRotateByOne(arr, size);

    printf("Array after left rotation by one element: ");
    printArray(arr, size);

    return 0;
}
