#include<stdio.h>
int main(){
    unsigned char c = 280;
    switch(c){
        printf("start\t");
        case 280 : printf("DB\t");
        case 24 : printf("RO\t");
        default : printf("RA");
        printf("end");
    }
    return 0;
}