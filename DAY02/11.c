#include<stdio.h>

int main() {
    char s1[7] = "1234", *p;
    p = s1 + 2;
    *p = '0';
    printf("%s", s1);
    return 0;
}

//Step 1: Array initialization
//char s1[7] = "1234";


//This puts the string "1234" into the array:

//Index : Value
//s1[0] = '1'
//s1[1] = '2'
//s1[2] = '3'
//s1[3] = '4'
//s1[4] = '\0'
//s1[5] = ?  (unused)
//s1[6] = ?  (unused)

//Step 2: Pointer assignment
//p = s1 + 2;


//s1 points to the start of the array (s1[0]).

//s1 + 2 → address of s1[2].

//So now p points to the character '3'.

//Step 3: Changing the value
//*p = '0';


//*p refers to s1[2] (because p points there).

//s1[2] was '3'. Now it becomes '0'.

//So the array is now:

//s1 = "1204"

//Step 4: Printing
//printf("%s", s1);


//%s prints the string starting from s1[0] until the null terminator.

//That is "1204".

//✅ Final Output:
//1204