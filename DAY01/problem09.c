#include<stdio.h>
int main(){
    int a = 30, b = 40, x;
    x = (a != 10) && (b = 50);
    printf("%d", x);
    return 0;
}

// 30 != 10 hence true b =50 is assigned so true
// true AND true is 1