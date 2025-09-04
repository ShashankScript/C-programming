//change the bit to the position ref 9 -> 1001 change second bit 3 2 1 0
//                                                               1 0 0 1
//if 1 remains 1 0 change to 1                                   1 1 0 1
//if 1 remains 1 0 change to 1                                   1 1 0 1
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number and bit position to set: ");
    scanf("%d %d", &n, &i);

    // Set the ith bit to 1
    int result = n | (1 << i);

    printf("Number after setting %d-th bit: %d\n", i, result);
    return 0;
}