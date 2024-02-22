 // Print odd and even array

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int oddArr[n], evenArr[n];
    int oddCount = 0, evenCount = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    
    printf("Even numbers:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

   
    printf("Odd numbers:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}
