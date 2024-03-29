// Function to calculate the factorial of a number using recursion
#include <stdio.h>


int fact(int n) {
    
    if (n == 0) {
        return 1;
    }
   
    else {
        return n * fact(n - 1);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &n);

   
    int factorial = fact(n);

   
    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
