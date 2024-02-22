// Function to calculate the nth Fibonacci number using recursion
#include <stdio.h>


int fib(int n) {
    
    if (n == 0 || n == 1) {
        return n;
    }
   
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int t;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &t);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < t; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
