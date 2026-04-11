#include <stdio.h>
int main() {
    printf("Array and pointer \n");
    int arr[5] = {100,200,300,400,500};  // declaring int array with some initial values
    int *ptr = &arr;
    int *ptr = &arr;
    printf("Value at index 0 is %d \n", *ptr);
    printf("Value at index 1 is %d \n", *(ptr+1));
return 0;
}