 // Perform matrix multiplication

#include <stdio.h>



int main() {
    int r1, c1, r2, c2;

  
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &c1);

  
    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible!\n");
        return 0;
    }

  

    // Input elements into the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements into the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

   
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
