// Function to count the number of digits of a given number using recursion
#include <stdio.h>


int noofDigits(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    else {
        return 1 + noofDigits(n / 10);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int count = nooofDigits(n);
 
    printf("Number of digits in %d = %d\n", n, count);

    return 0;
}
