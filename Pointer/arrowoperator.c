#include <stdio.h>
typedef struct {
    int x;
    int y;
} Point;
int main() {
    printf("Arrow operator to Pointer \n");
    Point p = {
        .x = 10,
        .y = 15
    };
    Point *ptr = &p;
    printf("The value of x using simple method is %d \n", p.x);
    printf("The value of x using pointer casting is %d \n", (*ptr).x);
    printf("The value of x using pointer arrow operator is %d \n", ptr->x);
    ptr->x = 50;
    ptr->y = 70;
    printf("The value of x using pointer arrow operator is After change %d \n", ptr->x);
    printf("The value of y using pointer arrow operator is After change %d \n", ptr->y);
return 0;
}