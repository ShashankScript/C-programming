#include<stdio.h>

int main() {
    char c[] = "GATE2025";
    char *p = c;
    printf("%s", p + p[3] - p[1]);
    return 0;
}

//Step 1: The string
//c = "GATE2025"
//Indexes:
//c[0] = 'G'  (ASCII 71)
//c[1] = 'A'  (ASCII 65)
//c[2] = 'T'  (ASCII 84)
//c[3] = 'E'  (ASCII 69)
//c[4] = '2'  (ASCII 50)
//c[5] = '0'  (ASCII 48)
//c[6] = '2'  (ASCII 50)
//c[7] = '5'  (ASCII 53)
//c[8] = '\0'

//Step 2: Pointer p

//p = c;
//So p points to the first character ('G').

//Step 3: Expression inside printf
//p + p[3] - p[1]


//p[3] = 'E' = 69

//p[1] = 'A' = 65

//So:

//p + (69 - 65)
//= p + 4

//Step 4: Pointer arithmetic

//p points to c[0] ('G').

//p + 4 → points to c[4], i.e. '2'.

//Step 5: Printing

//printf("%s", p + 4);

//This prints the string starting at c[4]:

//"2025"


//+ 4 points to c[4], which is the character '2'.

//But since you used %s, printf does not stop at just one character.

//It keeps printing from that memory address onward, until it finds the terminating '\0'.

//The array in memory
//c = [ 'G', 'A', 'T', 'E', '2', '0', '2', '5', '\0' ]
//          ↑                       ↑
//          p[0]                   end of string


//When p + 4 → points at '2' (index 4).
//printf("%s", p+4) prints:

//'2' '0' '2' '5' '\0'


//which is "2025".

//✅ If you wanted only one character:
//printf("%c", *(p + p[3] - p[1]));


//This would print just:

//2
