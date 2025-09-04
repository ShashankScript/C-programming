#include<stdio.h>
struct point{
    int x,y;
};
int main() {
    struct point p1 = {10,20};
    struct point p2 = p1;
    p2.x = 30;
    printf("%d %d %d %d",p1.x, p1.y, p2.x, p2.y);
    
    return 0;
}

//struct point p1 = {10,20};

// p1.x = 10
// p1.y = 20


// struct point p2 = p1;

// Structs in C can be assigned directly → it copies all members.

// So now:

// p2.x = 10
// p2.y = 20


// p2.x = 30;

// p2.x = 30
// p2.y = 20


// (p1 is unchanged)

// 🔹 Final values

// p1.x = 10

// p1.y = 20

// p2.x = 30

// p2.y = 20