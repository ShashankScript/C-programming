#include<stdio.h>
int f(int);
int main() {
    int i = 3,val;
    val = sizeof f(i) + f(i = 2) + f(i - 1);
    printf("%d %d",val,i);
}
int f(int num){
    return num * 5;
}

//sizeof f(i) → size of int = 4 (function not called).

//f(i = 2) → assigns i = 2, then returns 10.

//f(i - 1) → now i = 2, so f(1) = 5.

//So val = 4 + 10 + 5 = 19.

//Since i was changed to 2



//i = 3
//val = sizeof f(i) + f(i) + f(i - 1);
//return num * 5;
//hence sizeof f(i) = 4 since sizeof int is 4 
//4 + 3 *5 + 2 * 5
//4 + 15 + 10 = 29