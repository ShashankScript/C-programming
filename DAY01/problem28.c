#include<stdio.h>
enum Days {MON, TUE, WED = 10, THU, FRI};

int main(){
    printf("%d %d %d %d",MON,TUE,WED,FRI);
    return 0;
}