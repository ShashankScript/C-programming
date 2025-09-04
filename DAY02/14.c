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
            printf("%4d", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// Row 0 (i = 0)

// j=0 → j<i? (0<0?) ❌ → arr[0][0] = 0

// j=1 → 1<0? ❌ → arr[0][1] = 1

// j=2 → arr[0][2] = 2

// j=3 → arr[0][3] = 3

// Row 0 → 0 1 2 3

// Row 1 (i = 1)

// j=0 → 0<1? ✅ → arr[1][0] = 1

// j=1 → 1<1? ❌ → arr[1][1] = 1

// j=2 → arr[1][2] = 2

// j=3 → arr[1][3] = 3

// Row 1 → 1 1 2 3

// Row 2 (i = 2)

// j=0 → 0<2? ✅ → arr[2][0] = 2

// j=1 → 1<2? ✅ → arr[2][1] = 2

// j=2 → 2<2? ❌ → arr[2][2] = 2

// j=3 → arr[2][3] = 3

// Row 2 → 2 2 2 3

// Row 3 (i = 3)

// j=0 → 0<3? ✅ → arr[3][0] = 3

// j=1 → 1<3? ✅ → arr[3][1] = 3

// j=2 → 2<3? ✅ → arr[3][2] = 3

// j=3 → 3<3? ❌ → arr[3][3] = 3

// Row 3 → 3 3 3 3