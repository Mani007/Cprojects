//#pragma once
#include <stdio.h>  // include this
#include "simplestruct.h"
ThreeD new3d;  // Make it global
void add3Dpoint(int x,int y, int z){
    //ThreeD new3d; // This is local, make it global or static
    new3d.x = x;
    //new3d->y = y;  // This is not a pointer byt actual structure
    new3d.y = y;  
    new3d.z = z;
}

void print3Dpoint(){
    printf("The x coordinate is %d\n", new3d.x);
    printf("The y coordinate is %d\n", new3d.y);
    printf("The z coordinate is %d\n", new3d.z);
}