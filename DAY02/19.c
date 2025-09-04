#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of even terms: ");
    scanf("%d", &n);

    int sum = 0, fact = 1;
    int term = 2;   

    for (int k = 1; k <= n; k++) {
        fact = 1;  
        for (int j = 1; j <= term; j++) {
            fact = fact * j;
        }
        sum = sum + fact;
        term += 2;  
    }

    printf("Sum = %d\n", sum);
    return 0;
}