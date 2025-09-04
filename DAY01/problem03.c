#include<stdio.h>
#define x 5 + 2
int main(){
    int a;
    a = x*x*x;
    printf("%d", a);
return 0;
}

//here bodmas is being followed as bracket is not there hence
//5+2*5+2*5+2
//5+10+10+2
//27