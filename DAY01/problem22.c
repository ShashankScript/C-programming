#include<stdio.h>
int main(){
    int i = 4, j = 2;
    while(i + 1?--i:j++)
        printf("%d ",i);
    return 0;
}

//Condition is (i+1 ? --i : j++).

//If i+1 ≠ 0 → --i runs.

//If i+1 = 0 → j++ runs.
//Iter1: --i=3 → print 3  i 5

//Iter2: --i=2 → print 2  i 4

//Iter3: --i=1 → print 1  i 3

//Iter4: --i=0 → condition 0 → stop