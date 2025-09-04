#include<stdio.h>
int main(){
    int a = 2;
    if(a--,--a,a){
        printf("dalai lama");
    }else{
        printf("jim rogers");
        return 0;
    }
}


//a-- → post-decrement.

//Value of expression = 2 (but ignored).

//After execution → a = 1.

//--a → pre-decrement.

//a becomes 0.

//Value = 0 (ignored).

//Final a → 0.

//This is the result of the whole comma expression.
//since it is 0 so false so else part get executed
