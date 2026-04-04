// Insted of wraping it to ifdef statements, we can use #pragma once
#ifndef BASE_LIB_H
#define BASE_LIB_H

#include <stdio.h>
#include "base_lib.c"

int sum(int a,int b);
int sub(int a,int b);

#endif 