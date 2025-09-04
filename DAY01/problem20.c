#include<stdio.h>
int main(){
    int movie = 1;
    switch(movie << 2 + movie){
        default:printf("3 idiots");
        case 4:printf("ghajini");
        case 5:printf("krrish");
        case 8:printf("race\n");
    }
    return 0;
}

//The left shift operator << shifts the binary digits to the left.

//In decimal, left shift by n bits = multiply by 2ⁿ.

//Example:

//1 << 1 = 2

//1 << 2 = 4

//1 << 3 = 8