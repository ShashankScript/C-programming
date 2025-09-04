#include<stdio.h>
int incr(int i){
    static int count = 0;
    count = count + i;
    return(count);
}
int main() {
    int i,j;
    for(i = 0; i <= 4; i++)
    j = incr(i);//used for storing count + i
    printf("%d",j);
    
    
    return 0;
}

//when i = 0 j = 0
//when i = 1 j =0 + 1=1
//when i = 2 j = 1 + 2 =3
//when i = 3 j = 3 + 3 = 6
//when i = 4 j = 6 + 4 = 10