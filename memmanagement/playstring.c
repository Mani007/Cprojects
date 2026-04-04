#include <stdio.h>
int main() {
    printf("Charater and Strings\n");
    char c = 'a';
    printf(" the char is %c \n",c);
    char *s = "abc";
    //char *s = 'abc'; // This will make it a intiger not string pay attention to " " and ' '. 
    //printf(" the string is %s \n",s);
    printf(" the string is %c \n",*s);
    //printf(" the string is %s \n",*s); This will create problem as *s can only point to first location of the string
return 0;
}