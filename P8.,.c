// frequency of an element
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

    int element;
    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);

    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            frequency++;
        }
    }

    printf("Frequency of %d in the array is: %d\n", element, frequency);

    return 0;
}
