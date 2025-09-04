//change the bit to the position ref 9 -> 1001 change first bit 3 2 1 0
//                                                              1 0 0 1
//                                                              0 1 0 1
//if 0 remains 0 1 change to 0 

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number and bit position to clear: ");
    scanf("%d %d", &n, &i);

    // Clear the ith bit (set it to 0)
    int result = n & ~(1 << i);

    printf("Number after clearing %d-th bit: %d\n", i, result);
    return 0;
}