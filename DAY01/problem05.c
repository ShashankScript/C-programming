#include<stdio.h>
int main(){
    int x = 25;
    if(!!x){
        printf("%d",!x);
    }else{
        printf("%d",x);
    }
    return 0;


}


//it is like not(not25)
//not(anything)==0
//not(0)==1
//hence then not(1)==0