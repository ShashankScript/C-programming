#include<stdio.h>
int main(){
    int n = 2;
    int sum = 5;
    switch (n)
    {
         case 2: sum = sum - 3;
         case 3: sum *= 4;
            break;
        default: sum = 0;
    }
    printf("%d",sum);
    return 0;
}

//n=2, sum=5

///case 2: → sum = 5-3 = 2 → no break → fall-through

//case 3: → sum = 2*4 = 8 → break