#include <stdio.h>
#include <string.h>
int main() {
    printf("Strings and pointer\n");
    char s1[] = "hi";
    char s2[] = " hello";
    //char *s2 = " hello";
    strcat(s1,s2);
    printf(" New string: %s \n",s1);
return 0;
}