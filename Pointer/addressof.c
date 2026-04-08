#include <stdio.h>
int main() {
    printf("Address of operator in C \n");
    int a = 10;
    int *ptr;
    ptr=&a;
    printf("Value of a using pointer is %d \n", *ptr);
    printf("Address of a using pointer is %p \n", ptr);

return 0;
}