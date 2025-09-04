#include<stdio.h>
void foo(int n,int sum){
    int k = 0,j = 0;
    if(n == 0) return;
    k = n % 10;        // last digit
    j = n / 10;        // remaining number
    sum = sum + k;     // add digit to sum (but sum is local!)
    foo(j,sum);        // recursive call
    printf("%d ", k);  // print digit after recursion
}
int main() {
    int a = 2048, sum = 0;
    foo(a, sum);
    printf("%d\n", sum);

    
    return 0;
}

//First call: n = 2048, sum = 0

//k = 2048 % 10 = 8

//j = 2048 / 10 = 204

//sum = 0 + 8 = 8

//Call: foo(204, 8)

//After recursion: printf("8 ")

//Second call: n = 204, sum = 8

//k = 204 % 10 = 4

//j = 204 / 10 = 20

//sum = 8 + 4 = 12

//Call: foo(20, 12)

//After recursion: printf("4 ")

//Third call: n = 20, sum = 12

//k = 20 % 10 = 0

//j = 20 / 10 = 2

//sum = 12 + 0 = 12

//Call: foo(2, 12)

//After recursion: printf("0 ")

//Fourth call: n = 2, sum = 12

//k = 2 % 10 = 2

//j = 2 / 10 = 0

//sum = 12 + 2 = 14

//Call: foo(0, 14) → base case (return)

//After recursion: printf("2 ")

//Fifth call: n = 0 → returns immediately.