#include<stdio.h>
struct A {int x;};
void change(struct A *a){
        a->x = 20;
        printf("in change function  value of x is : %d\n",a->x);
};
int main() {
    struct A a = {10};
    change(&a);
    printf("in main function value of x is : %d", a.x);
    
    return 0;
}
