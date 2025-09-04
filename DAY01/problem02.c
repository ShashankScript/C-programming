#include<stdio.h>
int main(){
    int a = 1;
    if (a--){
        printf("Hello\n");
            --a;
            printf("%d",a);

    }
    else
         printf("%d",a);
        return 0;

}