#include<stdio.h>
int main(){
    int i = 5, j;
    j = ++i + ++i + ++i + ++i;
    printf("%d %d",i,j);
    return 0;
}

// 6     7     8     9
//(++i + ++i) + ++i + ++i
// it goes like out of 2 operands bigger one get assigned like between
//6 and 7 7 is greater so both operand value become 7
// 7     7     8      9
// it goes only with first 2 operands