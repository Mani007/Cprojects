#include <stdio.h>
#include ".\simplestruct.h"
int main() {
    printf("Playing with struct in library format\n");
    ThreeD* n3d = add3Dpoint(5,6,7);
    print3Dpoint(n3d);
    //add3Dpoint(2,3,4);
    //print3Dpoint();
return 0;
}