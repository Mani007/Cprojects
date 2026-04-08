#include <stdio.h>
void update_value_ptr(int *p, int new_val){ // passing the ref of the variable
    *p = new_val;  // dereferencing and assigning new value to the pointer
} // This type of memory access is the reason for memory vulnerabilities, RUST avoid this using borrow checker 
int main() {
    printf("Pointer and functions \n");
    int x = 10; // 
    int *x_ptr = &x;
    printf("The original value of x is %d \n",x);
    update_value_ptr(x_ptr,20);  // updating data value using pointer
    printf("The new value of x is %d \n",x);
return 0;
}