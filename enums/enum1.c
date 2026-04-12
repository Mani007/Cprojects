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

typedef struct grade{
    A5 quality;
    int size;
} Grade;
int main() {
    printf("Enums in C \n");
    Grade* g = (Grade*)malloc(sizeof(Grade));
    g->quality = C;
    g->size = 20;
    printf("The value of quality is %d\n", g->quality);
    free(g); // always free the memory allocated

return 0;
}