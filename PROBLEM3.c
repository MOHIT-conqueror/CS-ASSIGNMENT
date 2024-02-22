#include <stdio.h>

// Function to check if an array is a palindrome
int isPalindrome(int arr[], int size) {
    int idx = 0;

    while (idx < size / 2) {
        if (arr[idx] != arr[size - idx - 1]) {
            return 0; // Not a palindrome
        }
        idx++;
    }
    return 1; // Palindrome
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int palindromeCount = 0;

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("The array is a palindrome.\n");
        palindromeCount++;
    } else {
        printf("The array is not a palindrome.\n");
    }

    printf("Total palindromes found: %d\n", palindromeCount);

    return 0;
}
