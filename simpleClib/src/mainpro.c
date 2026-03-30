#include <stdio.h>
//#include "E:\Document backup\Cprojects\simpleClib\include\base_lib.h"
# include "..\\include\base_lib.h"
int main(){
    int n1 = 10;
    int n2 = 5;
    int res1 = sum(n1,n2);
    printf("The sum is %d\n",res1);
    int res2 = sub(n1,n2);
    printf("The subtraction is %d\n",res2);
    return 0;
}