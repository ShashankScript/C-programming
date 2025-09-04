#include<stdio.h>
int main(){
    int a = 0, b = 10;
    if(++a || ++b){
        printf("%d %d",a,b);

    }else{
        printf("%2d %2d",a,b);

    }
return 0;
}

//in or only one get checked like if output 1 came then deal done
//1 10


