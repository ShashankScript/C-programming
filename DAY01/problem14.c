#include<stdio.h>
int main(){
    int a;
    a = 015 + 0x71 + 5;
    printf("%d",a);
    return 0;
}

//if start with 0 then it is octal
//if sstart with 0x then it is hexadecimal
//15 == 13
//17 == 113
//113 + 13 + 5 = 131