// Function to find the sum of digits of a number using recursion
#include <stdio.h>


int sumOfDigits(int num) {
   
    if (num < 10) {
        return num;
    }

        return num % 10 + sumOfDigits(num / 10);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

   
    int sum = sumOfDigits(number);


    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}
