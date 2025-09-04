#include<stdio.h>
int f(int n){
    static int r = 0;
    if(n <= 0)
        return 1;
    if (n > 3){
        r = n;
        return f(n - 2) + 2;
    }
    return f(n -1) + r;
}
int main() {
    int n = 5; int result = f(n);
    printf("f(%d) = %d\n", n, result);
    
    
    return 0;
}

//5 > 3
//r = 5
//f(n -2) +2 = f(3) + 2

//3 > 3 nooo 3 <= 0 noo
//f(n - 1) + r
//f(3 - 1)+ 5 = f(2) + 5
//call f(2)
//f(2 -1)+5 = f(1) + 5
//call f(1)
//f(1 -1)+ 5= f(0)+5
//f(0) = 1
//f(1) = 1 + 5 = 6
//f(2) = 6 + 5 = 11
//f(3) = 11 + 5 = 16
//f(5) = 16 + 2= 18