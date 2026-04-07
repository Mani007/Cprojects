#include <stdio.h>
typedef struct city{
    int id;
    char* name;  // strings in C
} City;
City scale_factor(City c, int scale){
    c.id = c.id * scale;
    return c; // This will create a new copy rather modify the old struct  as we will store it in new Struct 
} 
int main() {
    printf("Struct Initializer in C\n");
    City c1 = {0}; // initialize everything in the struct as 0 or null
    printf("City id is %d\n",c1.id);
    printf("City id is %s\n",c1.name);
    // Positional initializer
    City c2 = {1,"ABC"};
    printf("City id is %d\n",c2.id);
    printf("City id is %s\n",c2.name);
    // Designated initializer - The best way to initialize the struct
    City c3 = {
        .id = 2,
        .name = "xyz"
    };
    printf("City id is %d\n",c3.id);
    printf("City id is %s\n",c3.name);
    City c4 = scale_factor(c3,5);
    printf("City id is %d\n",c4.id);
    printf("City id is %s\n",c4.name);
return 0;
}