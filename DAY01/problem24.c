#include<stdio.h>
int main(){
    static int i; //i = 0 by default
    for(++i;++i;++i){       //Initialization: ++i → executed once before loop starts Condition: ++i → checked each iteration.Increment: ++i → done after each iteration body.
        printf("%d ",i);
        if(i==4)
        break;
    }
    return 0;
}

//Loop: for(++i; ++i; ++i)

//Init: ++i → i=1

//Cond: ++i → i=2 → true → print 2

//Inc: ++i → i=3

//Next cycle:

//Cond: ++i → i=4 → true → print 4 → break