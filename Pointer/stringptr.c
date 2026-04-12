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

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char *s = malloc(len1 + len2 + 1);

    for (int i = 0; i < len1; i++) {  // applying raw loops over the strings
        s[i] = s1[i];
    }

    for (int i = 0; i < len2; i++) {
        s[len1 + i] = s2[i];
    }

    s[len1 + len2] = '\0';

    printf("%s\n", s);

    free(s);
return 0;
}