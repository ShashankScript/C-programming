#include<stdio.h>
struct A {int x;};
void change(struct A a) { a.x = 20;}
int main() {
    struct A a = {10};
    change(a);
    printf("%d", a.x);
    
    return 0;
}

// Step 1: Struct definition
// struct A { int x; };


// A struct A has one integer inside it, called x.

// Step 2: Create a struct
// struct A a = {10};


// Now you have a box in memory:

// a.x = 10

// Step 3: Call change(a)

// When you call a function in C, the argument is copied (unless you use pointers).

// So here:

// A copy of a is made.

// Inside change, we call that copy also a (but it’s a different variable from the a in main).

// So now memory looks like:

// main:   a.x = 10
// change: a.x = 10   (copy)

// Step 4: Inside change
// a.x = 20;


// This changes the copy’s x:

// main:   a.x = 10
// change: a.x = 20


// But the function ends → the copy is destroyed.
// The original (main’s a) is still 10.

// Step 5: Back in main
// printf("%d", a.x);


// a.x is still 10.