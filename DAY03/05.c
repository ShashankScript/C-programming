#include<stdio.h>
struct inner{
    int x;
};
struct outer{
    struct inner in;
    int y;
};

int main() {
    struct outer o = {{10},20};
    printf("%d %d", o.in.x, o.y);
    
    return 0;
}

// Step 1: struct inner
// struct inner {
//     int x;
// };


// This defines a type struct inner with one member: x.

// Step 2: struct outer
// struct outer {
//     struct inner in;
//     int y;
// };


// This defines a type struct outer which has:

// a member in (which itself is a struct inner)

// an integer y.

// So struct outer looks like this:

// struct outer:
// +-------------------+
// | struct inner in   |
// |   └── int x       |
// | int y             |
// +-------------------+

// Step 3: Initialization
// struct outer o = {{10}, 20};


// o.in.x = 10 (that’s what {10} means, initialize the inner struct)

// o.y = 20

// So now:

// o.in.x = 10
// o.y    = 20

// Step 4: Printing
// printf("%d %d", o.in.x, o.y);


// o.in.x = 10

// o.y = 20