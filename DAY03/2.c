// #include<stdio.h>
// //#pragma pack(1) // COMMENT THIS LINE TO SEE PADDING EFFECT

// struct A{
//     char c; // 1 byte
    
//     int i;  // 4 byte
// };
// int main() {
//     int j;
// struct A a = {'A', 0x12345678};

// unsigned char *ptr = (unsigned char *)&a;

// printf("Size of struct A : %lu bytes\n",sizeof(a));
// printf("byte by byte memory layout \n");
    
//     return 0;
// }


#include<stdio.h>
//#pragma pack(1) // COMMENT THIS LINE TO SEE PADDING EFFECT

struct A{
    char c; // 1 byte
    
    int i;  // 4 byte
};
int main() {
    int j;
struct A a = {'A', 0x12345678};

unsigned char *ptr = (unsigned char *)&a;

printf("Size of struct A : %lu bytes\n",sizeof(a));
printf("byte by byte memory layout \n");

for(j = 0; j <sizeof(a); j++){
    printf("Byte %2d : 0x%02X\n",j,ptr[j]);
//0x%02X

// 0x → literally prints "0x".

// %X → print an integer as hexadecimal (uppercase letters).

// 02 → print at least 2 digits, pad with 0 if needed.

// Example:

// If value = 7 → prints 0x07

// If value = 255 → prints 0xFF

// 👉 This prints the byte value (from memory) as a nice 2-digit hex.

}
    return 0;
}

//Step 1: The struct definition
// struct A {
//     char c;   // 1 byte
//     int i;    // 4 bytes
// };


// c takes 1 byte.

// i takes 4 bytes.

// Normally, compilers align int on 4-byte boundaries → so it inserts padding if necessary.

// So the struct in memory looks like this:

// Case A: Without pragma pack
// [ c ][ _ ][ _ ][ _ ][ i ][ i ][ i ][ i ]


// c = 'A' (0x41) at byte 0

// 3 bytes _ = padding

// i = 0x12345678 stored in little-endian order (bytes: 78 56 34 12)

// 👉 Total size = 8 bytes

// Case B: With pragma pack(1)
// [ c ][ i ][ i ][ i ][ i ]


// No padding

// i directly follows c
// 👉 Total size = 5 bytes

// 🟢 Step 2: Initialization
// struct A a = {'A', 0x12345678};


// c = 'A' → ASCII = 65 = 0x41.

// i = 0x12345678.

// In little-endian machines (like x86 PCs), the int is stored as:

// 0x78 0x56 0x34 0x12

// 🟢 Step 3: Casting to unsigned char *
// unsigned char *ptr = (unsigned char *)&a;


// This makes a pointer that points to the struct byte by byte.

// Now ptr[0] is the first byte of the struct, ptr[1] the second, etc.

// 🟢 Step 4: Loop
// for(j = 0; j < sizeof(a); j++) {
//     printf("Byte %2d : 0x%02X\n", j, ptr[j]);
// }


// This prints every byte of the struct in hex.

// 🟢 Example Output
// Case A: Without #pragma pack(1)
// Size of struct A : 8 bytes
// byte by byte memory layout
// Byte  0 : 0x41   // 'A'
// Byte  1 : 0x00   // padding
// Byte  2 : 0x00   // padding
// Byte  3 : 0x00   // padding
// Byte  4 : 0x78   // int least significant byte
// Byte  5 : 0x56
// Byte  6 : 0x34
// Byte  7 : 0x12   // int most significant byte

// Case B: With #pragma pack(1)
// Size of struct A : 5 bytes
// byte by byte memory layout
// Byte  0 : 0x41   // 'A'
// Byte  1 : 0x78   // int LSB
// Byte  2 : 0x56
// Byte  3 : 0x34
// Byte  4 : 0x12   // int MSB


// ✅ Summary

// This program shows you exactly how padding and alignment work by printing raw memory.

// Without packing: struct = 8 bytes (with 3 padding bytes).

// With packing: struct = 5 bytes (no padding).

// The order of int bytes (78 56 34 12) comes from little-endian storage.