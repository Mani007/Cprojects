#include <stdio.h>
#include <stdlib.h>
typedef union uni  // Union always allocate memory of the largest size of datatype, here its int
{
    int id;
    char s;
} Uni;  // This memory is allocated in continuous memory layout
// We can also have a struct inside of union or vice versa 
// Accessing members of union is often considered as bad practice as the union always allocate largest memory of its type
// union is often helpful for memory optimization such as model quantization in ML

int main() {
    printf("Unions in C\n");
    //Uni u;
    Uni *u1 = (Uni *) malloc(sizeof(Uni)); // allocating memory for char
    Uni *u2 = (Uni *) malloc(sizeof(Uni)); // allocating memory for int
    u1->s = "A";
    u2->id = 30;
    printf("The size of Uni U1 with string is %d\n",sizeof(u1)); 
    printf("The size of Uni U2 with int is %d\n",sizeof(u2)); 
return 0;
}