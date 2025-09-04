#include<stdio.h>
const enum Alpha{
    X,Y = 5,Z
}p = 10;
int main() {
    enum Alpha a,b;
    a = X;
    b = Z;
    printf("%d", a+b-p);
    
    return 0;
}

//Enums are just numbers.

//You set a = 0, b = 6, and p = 10.

//Then you calculated 0 + 6 - 10 = -4.