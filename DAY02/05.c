#include<stdio.h>
int fun(int);
int main() {
    int x;
    x = fun(5);
    printf("%d",x);
    return 0;    
    
}
int fun(int n){
    int x = 1,k;
    if(n == 1) return x;
    for(k = 1; k < n; ++k)
    x = x + fun(k)*fun(n - k);
    return x;
}

//fun(1)
//if(n == 1) → return 1
//So fun(1) = 1

//fun(2)
//x = 1
//k=1 → x = 1 + fun(1)*fun(1)  x = x + fun(k)*fun(n - k);
//       = 1 + 1*1
//       = 2
//So fun(2) = 2

//fun(3)
//x = 1
//k=1 → x = 1 + fun(1)*fun(2) = 1 + 1*2 = 3  x = x + fun(k)*fun(n - k);(n - k) = 3 -1 =2
//k=2 → x = 3 + fun(2)*fun(1) = 3 + 2*1 = 5  x = x + fun(k)*fun(n - k);
//So fun(3) = 5

//fun(4)
//x = 1
//k=1 → x = 1 + fun(1)*fun(3) = 1 + 1*5 = 6  x = x + fun(k)*fun(n - k);
//k=2 → x = 6 + fun(2)*fun(2) = 6 + 2*2 = 10
//k=3 → x = 10 + fun(3)*fun(1) = 10 + 5*1 = 15
//So fun(4) = 15

//fun(5)
//x = 1
//k=1 → x = 1 + fun(1)*fun(4) = 1 + 1*15 = 16  x = x + fun(k)*fun(n - k);
//k=2 → x = 16 + fun(2)*fun(3) = 16 + 2*5 = 26
//k=3 → x = 26 + fun(3)*fun(2) = 26 + 5*2 = 36
//k=4 → x = 36 + fun(4)*fun(1) = 36 + 15*1 = 51
//So fun(5) = 51