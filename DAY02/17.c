#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int sum = 0, fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;   
        sum = sum + fact; 
    }

    printf("Sum = %d\n", sum);
    return 0;
}
