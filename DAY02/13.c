// #include <stdio.h>
// int main() {
//     int i, j, num = 1;

//     for (i = 0; i < 4; i++) {          
//         for (j = 0; j < 4; j++) {      
//             printf("% d\t", num);       
//             num++;
//         }
//         printf("\n");                  
//     }

//     return 0;
// }


#include<stdio.h>

int main() {
    int n = 4;
    int arr[4][4];
    for(int i=0; i<n; i++){
        for( int j = 0;j < n;j ++){
            arr[i][j] = (4 * i + 1) + j;

        }
    }
    for(int i=0; i<n; i++){
        for( int j = 0;j < n;j ++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}