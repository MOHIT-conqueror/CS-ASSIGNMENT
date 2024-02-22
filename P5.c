
 // Print the transpose matrix
#include <stdio.h>

int main() {
    int r, c;

   
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

   
    int arr[r][c];
    int transpose[c][r];

   
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            transpose[i][j] = arr[j][i];
        }
    }

   
    printf("Original Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

   
    printf("Transpose Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
