//#pragma once
#ifndef simplestruct_H
#define simplestruct_H
typedef struct threeD {
    int x;
    int y;
    int z;
} ThreeD;
ThreeD* add3Dpoint(int x,int y, int z);
ThreeD* create3Dpoint();
void print3Dpoint(ThreeD* new3d);
#endif 