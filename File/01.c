#include<stdio.h>

int main() {
    FILE *f = fopen("fnew.txt","r+");
    if(f == NULL)
    printf("File not found\n");
    else
    printf("opened\n");
    fclose(f);
    return 0;
}