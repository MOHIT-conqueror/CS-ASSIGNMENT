#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculating the sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculating the average
    float average = (float)sum / n;

    printf("Average of elements in the array: %.2f\n", average);

    return 0;
}
