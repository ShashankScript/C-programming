#include<stdio.h>
int main(){
    float a = 0.5, b = 0.9;
    if(b==0.9){
        printf("Sachin");

    }else{
        printf("Rahul");

    }
    return 0;

}

//inside if loop b becomes constant data type hence it is converted to double
//if we replace float with double then sachin will get printed
