#include <stdio.h>
int arr[5][5];
int main() {
    
    int n = 5;
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
    //         if (i == j && i == n/2)        
    //             arr[i][j] = 30;
    //         else if (i == j)            
    //             arr[i][j] = 10;
    //         else if (i + j == n - 1)      
    //             arr[i][j] = 20;
    //         else
    //             arr[i][j] = 0;
    //     }
        //}
            if (i==j){
                arr[i][j] += 10;
            }
            if(j == (4 - i)){
                arr[i][j] += 20;
            }
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
