#include <stdio.h>
#include <stdlib.h>
// Stack frame
// pointer to struct inside a function as stack
// function pointer and stack frame
typedef struct coordinate{
    int x;
    int y;
}Coord; 

// Without malloc
Coord* new_coord(int x, int y){
    Coord C;
    C.x = x;
    C.y = y;
    return &C;
}

// With malloc
Coord* new_coord_alloc(int x, int y){
    Coord* C = (Coord*)malloc(sizeof(Coord));
    C->x = x;
    C->y = y;
    return C;
}

// print coordinate
void printOne(Coord *C){
    printf("The X is %d and the Y is %d\n",C->x,C->y);
}
void printTwo(Coord *C){
    // calling print 1 from here
    //printOne(C);
    printf("TWO :: The X is %d and the Y is %d\n",C->x,C->y);
}
void printThree(Coord *C){
    // callinf print 2 from here
    printTwo(C);
    printOne(C);
    printf("THREE :: The X is %d and the Y is %d\n",C->x,C->y);
}

// Parent function for creating a stack frame
int main() {
    printf("Stack basics in C\n");
    Coord *c1 = new_coord_alloc(2,3);
    printThree(c1);
return 0;
}