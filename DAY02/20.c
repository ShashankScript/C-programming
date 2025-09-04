#include <stdio.h>
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)  
            sum = sum + 4;
        else             
            sum = sum + 7;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
