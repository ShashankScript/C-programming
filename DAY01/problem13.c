#include<stdio.h>
int main(){
    int i = 5, j;
    j = ++i - --i - --i - --i;
    printf("%d %d",i,j);
    return 0;
}


// value go like 6 5 4 3
//6 - 6 - 4 -  3
//-7