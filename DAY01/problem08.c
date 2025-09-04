#include<stdio.h>
int main(){
    int x = 3, y = 4, z = 4;
    printf("%d", (z >= y >= x?100:200));
    return 0;
}

//it is like 4 >= 4 >= 3 ? 100:200
//4 >= 4 yessss hence 1 
//1 >= 3 nooo hence false so 200 gets print