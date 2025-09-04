#include <stdio.h>

int main() {
    FILE *f = fopen("name.txt","w+");
    fprintf(f,"NEW12345678");
    rewind(f);
    char ch;
    
    while((ch=fgetc(f)) != EOF)
        printf("%c",ch);
    
    fclose(f);
    return 0;
}

// Step 1: FILE *f = fopen("name.txt","w+");

// Opens a file named name.txt in read + write mode.

// "w+" mode means:

// Create the file if it doesn’t exist.

// If it exists, clear (truncate) it first.

// Allow both reading and writing.

// So now file is ready.

// Step 2: fprintf(f,"12345678");

// Writes "12345678" into the file.

// After this, the file pointer (cursor) is at the end of the file.

// So file content:

// 12345678
// ^ (cursor at end)

// Step 3: rewind(f);

// Moves the file pointer back to the start of the file.

// Now ready to read from the beginning.

// So:

// 12345678
// ^ (cursor at start)

// Step 4: Reading loop
// char ch;
// while((ch=fgetc(f)) != EOF)
//     printf("%c",ch);


// fgetc(f) reads one character at a time.

// It returns that character until end of file.

// When end is reached, it returns EOF.

// So the loop reads:

// '1' → print '1'
// '2' → print '2'
// ...
// '8' → print '8'
// EOF → stop

// Step 5: fclose(f);

// Closes the file properly.