// #include<stdio.h>
// struct A{
//     int x;
// };
// int main() {
//     struct A arr[2] = {{1}, {2}};
//     printf("%d", arr[1].x);
    
//     return 0;
// }

#include<stdio.h>
struct A{
    int x;
};
int main() {
    struct A arr[5] = {{1}, {2}, {5}, {7}, {9}};
    printf("%d", arr[4].x);
    
    return 0;
}