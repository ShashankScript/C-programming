//find the ith bit of a number

#include <stdio.h>

int main() {
    int n,i;
    printf("Enter number and bit position to set: ");
    scanf("%d %d",&n,&i);
    
    int bit = (n >> i) & 1;
    printf("the %d-th bit is : %d\n", i, bit);
    return 0;
}