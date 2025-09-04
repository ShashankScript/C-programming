#include<stdio.h>
int main(){
    int a = 0, b = 10;
    if(++a && ++b){
        printf("%d %d",a,b);

    }else{
        printf("%2d %2d",a,b);

    }
return 0;
}