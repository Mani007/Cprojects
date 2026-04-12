#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    printf("Strings and pointer\n");
    // char s1[] = "hi";
    // char s2[] = " hello";
    //char *s2 = " hello";
    // strcat(s1,s2);
    // printf(" New string: %s \n",s1);
    char *s1 = "Hello, ";
    char *s2 = "world!";

    char *s = malloc(strlen(s1) + strlen(s2) + 1); // +1 for '\0'

    if (s == NULL) {
        return 1; // allocation failed
    }

    sprintf(s, "%s%s", s1, s2);

    printf("%s\n", s);

    free(s); // always free allocated memory
return 0;
}