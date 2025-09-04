#include<stdio.h>

int f1(void);
int f2(void);
int f3(void);
int x = 10;   // global variable

int main() {
    int x = 1;   // local variable in main
    x += f1() + f2() + f3() + f2();
    printf("%d", x);
    return 0;
}

int f1() {
    int x = 25;  // local to f1
    x++;
    return x;    // returns 26
}

int f2() {
    static int x = 50;  // static local (retains value across calls)
    x++;
    return x;
}

int f3() {
    x *= 10;     // modifies global x (not main’s x!)
    return x;
}



//Step 1: Enter main

// Local x = 1

// Step 2: Expression
// x += f1() + f2() + f3() + f2();


// We evaluate functions in order (left to right in most compilers, but here we’ll assume standard C sequence of execution as per the given code flow).

// Call f1()

// Local x = 25

// x++ → 26

// Returns 26

// Call f2() (first time)

// Static x = 50 (initialization happens once)

// x++ → 51

// Returns 51

// Call f3()

// Uses global x (declared at top = 10)

// x *= 10 → 10 * 10 = 100

// Returns 100

// Call f2() (second time)

// Static x already exists (was 51 after first call)

// x++ → 52

// Returns 52

// Step 3: Sum up
// f1() + f2() + f3() + f2()
// = 26 + 51 + 100 + 52
// = 229

// Step 4: Update main’s local x
// main’s x = 1 + 229 = 230

// ✅ Final Output:
// 230
    
