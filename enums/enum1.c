#include <stdio.h>
#include <stdlib.h>
typedef enum alphabets5 {
    // Adding some non default value to enum and auto increment
    A =95, // is 0
    B , // is 1
    C , // is 2
    D , // is 3
    E  //is 4
} A5;

// typedef struct grade{
//     A5 quality;
//     int size;
// } Grade;
int main() {
    printf("Enums in C \n");
    A5 grade = B;
    // Grade* g = (Grade*)malloc(sizeof(Grade));
    // g->quality = C;
    // g->size = 20;
    // printf("The value of quality is %d\n", g->quality);
    // free(g); // always free the memory allocated
    switch (grade)
    {
    case A:
        printf("Enum case of A is %d \n", A);
        break;
    case B:
        printf("Enum case of B is %d \n", B);
        break;
    case C:
        printf("Enum case of C is %d \n", C);
        break;
    case D:
        printf("Enum case of D is %d \n", D);
        break;
    case E:
        printf("Enum case of E is %d \n", E);
        break;
    
    default:
        break;
    }

return 0;
}