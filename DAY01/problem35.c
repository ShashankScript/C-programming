#include <stdio.h>
int main() {
    int i, j;
    int size = 4;  // square of 4x4

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size; j++) {
            if(i == 1 || i == size || j == 1 || j == size) {
                printf("*  ");   // star with space
            } else {
                printf("   ");  // inside empty space
            }
        }
        printf("\n");
    }

    return 0;
}
