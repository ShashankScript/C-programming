//check if a number is 2^n using bitwise operator

#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is NOT a power of 2.\n", num);
    }

    return 0;
}

// What does this code do?
// It asks you to enter a number.
// It checks if the number is a power of 2 (like 1, 2, 4, 8, 16, 32, ...).
// It prints whether the number is or is not a power of 2.
// How does it check?
// num & (num - 1) is a trick:
// For powers of 2, this is always 0.
// For other numbers, it is not 0.
// Example:

// 8 in binary: 1000
// 7 in binary: 0111
// 1000 & 0111 = 0000 (so 8 is a power of 2)