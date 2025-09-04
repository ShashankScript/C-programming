#include<stdio.h>
int main(){
    int i = 1, j = 1;
    for(;j;printf("\n%d %d",i,j))
        j = i++ <= 5;
    return 0;
}

//i = j = 1
//j = i++ ,= 5
//iteration   i    j
// 1          2    1     1++ <= 5  true
// 2          3    1     2++ <= 5  true
// 3          4    1     3++ <= 5  true
// 4          5    1     4++ <= 5  true
// 5          6    1     5++ <= 5  true
// 6          7    0     6++ <= 5  false so j = 0 but due to i++ i = 7