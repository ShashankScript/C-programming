#include<stdio.h>

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9,10};
    int i = 0, num;
    num = a[++i+a[++i]]+a[++i]+a[++i];
    printf("%d",num);
    return 0;
}

//a[++i+a[++i]]+a[++i]+a[++i]
//a[1+a[2]]+a[3]+a[4];
//a[2+a[2]]+a[3]+a[4];between 1 and 2 2 is bigger
//2 + 2 + 3 +4 == 11