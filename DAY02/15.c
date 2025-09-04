#include <stdio.h>

int main() {
    int n = 4;
    int arr[4][4];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i)
                arr[i][j] = i;  
            else
                arr[i][j] = j;   
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
