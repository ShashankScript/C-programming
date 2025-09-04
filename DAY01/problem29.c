#include<stdio.h>
enum cricket{
    Taylor,
    Kallis = 17,
    Chanderpaul

} x = Taylor | Kallis & Chanderpaul;

int main(){
    printf("%d",x);
    return 0;
}