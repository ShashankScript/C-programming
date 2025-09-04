#include<stdio.h>
int main(){
    int a,b;
    a = 5,7,9;
    b = (3,6,8);

    printf("%d", a+b);

    return 0;


}


//= has higher precedence then ,
//so a = 5
//(3,6,8) → evaluates 3, then 6, then keeps 8.
//5 + 8 = 13