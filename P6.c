 // Calculate the sum of diagonal elements (main diagonal)

#include <stdio.h>

int main() {
    int r, c;

    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

   
    int matrix[r][c];

   
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of diagonal elements (main diagonal)
    int sumMainDiagonal = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                sumMainDiagonal += matrix[i][j];
            }
        }
    }

    
    int sumSecondaryDiagonal = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i + j == rows - 1) {
                sumSecondaryDiagonal += matrix[i][j];
            }
        }
    }

    
    printf("Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("Sum of main diagonal: %d\n", sumMainDiagonal);
    printf("Sum of secondary diagonal: %d\n", sumSecondaryDiagonal);

    return 0;
}

