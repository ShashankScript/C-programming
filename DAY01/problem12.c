#include<stdio.h>
int main(){
    int i = 5, j;
    j = --i - --i - --i - --i;
    printf("%d %d",i,j);
    return 0;
}

//  4    3     2      1
//(--i - --i) - --i - --i
//by previous question logic in first 2 operand greater one will be taken
//  4 - 4 - 2 - 1
// -3