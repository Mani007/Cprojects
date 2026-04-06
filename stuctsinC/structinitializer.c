#include <stdio.h>
typedef struct city{
    int id;
    char* name;  // strings in C
} City;
int main() {
    printf("Struct Initializer in C\n");
    City c1 = {0}; // initialize everything in the struct as 0 or null
    printf("City id is %d\n",c1.id);
    printf("City id is %s\n",c1.name);
return 0;
}