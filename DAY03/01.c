// #include<stdio.h>
// union A{
//     char c;
//     int i;
// };
// int main() {
//     union A a;
//     printf("%1u", sizeof(a));
    
//     return 0;
// }


// #include<stdio.h>
// //#pragma pack(1)
// struct A{
//     char c;
//     int i; 
// };
// int main() {
//    struct A a;
//     printf("%1u", sizeof(a));
    
//     return 0;
// }

#include<stdio.h>
//#pragma pack(1)
struct A{
    char c;
    char d;
    int i; 
};
int main() {
   struct A a;
    printf("%1u", sizeof(a));
    
    return 0;
}


// A variable of type int must be stored at an address divisible by 4 (because int is 4 bytes).

// If the compiler finds that the next available address is not divisible by 4, it inserts padding bytes until alignment is correct.

// 🔹 What happens in your struct

// char c;

// Takes 1 byte, stored at address 0.

// Next free address = 1.

// char d;

// Takes 1 byte, stored at address 1.

// Next free address = 2.

// Now comes int i;

// Needs to start at an address divisible by 4.

// The current address = 2 (after c and d).

// 2 is not divisible by 4 → compiler must shift it forward.

// 👉 The nearest divisible-by-4 address after 2 is 4.
// So compiler inserts 2 padding bytes at addresses 2 and 3.

// int i; then starts at address 4 and occupies 4 bytes (4–7).

// 🔹 Why exactly 2 bytes (not 1 or 3)?

// If it added only 1 padding byte → i would start at address 3.

// 3 % 4 = 3 → ❌ not aligned.

// If it added 2 padding bytes → i starts at address 4.

// 4 % 4 = 0 → ✅ correctly aligned.

// If it added 3 padding bytes → i starts at 5.

// 5 % 4 = 1 → ❌ not aligned.

// 👉 So exactly 2 padding bytes are needed.

// What #pragma pack(1) means

// It tells the compiler:
// 👉 "Pack all members of the struct with 1-byte alignment."

// That means no padding will be inserted between members.

// Each member starts immediately after the previous one, even if it breaks the natural alignment rule.

// 🔹 Your struct again
// struct A {
//     char c;   // 1 byte
//     char d;   // 1 byte
//     int i;    // 4 bytes
// };

// Without #pragma pack(1)
// [ c ][ d ][ _ ][ _ ][ i i i i ]   --> total 8 bytes


// (_ = 2 bytes padding)

// With #pragma pack(1)
// [ c ][ d ][ i i i i ]             --> total 6 bytes


// 👉 No padding at all.

// 🔹 Effect

// Size of struct becomes 6 bytes instead of 8.

// But: the int i is stored starting at offset 2 (not aligned to 4).

// ⚠️ Important consequence

// On some CPUs, accessing misaligned data (like this int at offset 2) is slower or even causes a crash.
// That’s why the compiler normally adds padding automatically — for safety and speed.

// ✅ So when #pragma pack(1) is uncommented → padding disappears.