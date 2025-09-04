#include<stdio.h>
int main(){
    int i,j;
    i = j = 3,4;
    while(--i && j++)
        printf("%d %d\n",i,j);
    return 0;
}

//In i = j = 3,4 the comma has lowest precedence, so it becomes i = (j=3),4.

//First j=3, then i=3.

//So initial values: i=3, j=3.
//Iteration 1:

//--i → i=2 (true)

//j++ → returns 3 (true), then j=4

//Condition = true && true = true

//Print → 2 4

///Iteration 2:

//--i → i=1 (true)

//j++ → returns 4 (true), then j=5

//Condition = true

//Print → 1 5

//Iteration 3:

//--i → i=0 (false)

//Since first part is false, j++ is not evaluated (short-circuit).

//Condition = false

//Loop ends.

//✅ Final Output:
//2 4
//1 5
