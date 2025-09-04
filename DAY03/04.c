#include<stdio.h>
struct S{
    int a;
};
int main() {
    struct S s = {5};
    struct S *ptr = &s;
    ptr->a = 10;
    printf("%d %d", s.a, ptr->a);
    return 0;
}

// Step (1) → struct S s = {5};

// We create a box named s:

// s.a = 5
// where did s.a come from?

// From the struct definition: struct S { int a; };

// When you created struct S s, it gave you a variable s that has one member → a.

// Step (2) → struct S *ptr = &s;

// We make a pointer ptr that points to s:

// ptr ---> s.a = 5


// Think: ptr is an arrow pointing to the box s.

// Step (3) → ptr->a = 10;

// This means:

// Follow the arrow (ptr) to the box (s)

// Change its a value to 10.

// So now:

// ptr ---> s.a = 10

// Step (4) → printf("%d %d", s.a, ptr->a);

// s.a = 10

// ptr->a = 10 (because ptr points to s)

// So the output is:

// 10 10