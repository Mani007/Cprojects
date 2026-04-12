#include <stdio.h>
int main() {
    printf("Pointer Arthematic \n");
    int a[5] = {10,20,30,40,50};
    int *p = &a[0];  // pointing first element of the array
    // printf("Pointer address %X \n",p); 
    // printf("Pointer next address %X \n",p+1);
    // in 32-bit computer size of pointer is always 4 byte irrespective of the data type
    printf("Pointer sizes %d", sizeof(p)); // in 64-bit computer size of pointer is always 8 byte 
return 0;
}