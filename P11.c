// Function to calculate power using recursion
#include <stdio.h>


int Calcuofpower(int x, int y) {
   
    if (y == 0) {
        return 1;
    }
    
    else {
        return x * power(x, y - 1);
    }
}

int main() {
    int x, y;

    printf("Enter the base number (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

  
    int result = Calcuofpower(x, y);

   
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}
