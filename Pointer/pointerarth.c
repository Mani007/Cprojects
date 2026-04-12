#include <stdio.h>
int main() {
    printf("Pointer Arthematic \n");
    int a[5] = {10,20,30,40,50};
    int *p = &a[0];  // pointing first element of the array
    printf("Pointer address %X \n",p); 
    printf("Pointer next address %X \n",p+1); 
return 0;
}