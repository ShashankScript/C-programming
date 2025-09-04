#include<stdio.h>
#define L 10
int main(){
    int money = 10;
    switch(money,money*2){
        case L: printf("william");
            break;
        case L*2: printf("warren");
            break;
        case L*3: printf("carlos");
            break;
        default: printf("lawrence");
        case L*4 : printf("inqvar");
            break;

    }
    return 0;
}

//In switch(money, money*2) the comma operator is used.

//It evaluates money (10) then money*2 (20).

//Final result = 20.
//So, effectively → switch(20).