#include <stdio.h>
typedef enum alphabets5 {
    // Adding some non default value to enum
    A =95, // is 0
    B = 85, // is 1
    C = 50, // is 2
    D = 15, // is 3
    E = 10 //is 4
} A5;
int main() {
    printf("Enums in C \n");
    A5 mychar = C;
    printf("The value of mychar is %d\n", mychar);

return 0;
}