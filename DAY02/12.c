#include<stdio.h>
#include<string.h>

int main() {
    char p[20];
    char *s = "string";
    int length = strlen(s);//length = 6
    int i;
    for (i = 0; i < length; i++){
        p[i] = s[length - i - 1];
        p[length] = '\0';

    }
    printf("%s", p);
    
    return 0;
}


//s = "string"
//length = strlen(s) = 6
//Characters:
//s[0] = 's'
//s[1] = 't'
//s[2] = 'r'
//s[3] = 'i'
//s[4] = 'n'
//s[5] = 'g'
//Step 2: Loop execution
//Loop: for (i = 0; i < 6; i++)

//i = 0:
//p[0] = s[6 - 0 - 1] = s[5] = 'g'  p[i] = s[length - i - 1];
//p[6] = '\0'

//i = 1:
//p[1] = s[6 - 1 - 1] = s[4] = 'n'
//p[6] = '\0'

//i = 2:
//p[2] = s[3] = 'i'
//p[6] = '\0'

//i = 3:
//p[3] = s[2] = 'r'
//p[6] = '\0'

// = 4:
//p[4] = s[1] = 't'
//p[6] = '\0'

//i = 5:
//p[5] = s[0] = 's'
//p[6] = '\0'

//Step 3: Result in array p
//After loop, p contains:


//Copy code
//p[0] = 'g'
//p[1] = 'n'
//p[2] = 'i'
//p[3] = 'r'
//p[4] = 't'
//p[5] = 's'
//p[6] = '\0'
//So → p = "gnirts"