#include <stdio.h>
typedef enum alphabets5 {
    A, // is 0
    B, // is 1
    C, // is 2
    D, // is 3
    E //is 4
} A5;
int main() {
    printf("Enums in C \n");
    A5 mychar = C;
    printf("The value of mychar is %d\n", mychar);

return 0;
}