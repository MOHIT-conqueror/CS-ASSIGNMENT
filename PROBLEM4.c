#include <stdio.h>

int main() {
    int r, c;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Declare arrays for the input matrix and the resulting sum array
    int arr[r][c];
    int sumArr[r][c];

    // Input elements into the 2D array
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate the sum of elements and store in sumArr
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int sum = 0;
            for (int k = 0; k <= i; k++) {
                for (int l = 0; l <= j; l++) {
                    sum += arr[k][l];
                }
            }
            sumArr[i][j] = sum;
        }
    }

    // Print the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print the sum matrix
    printf("Sum Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sumArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
