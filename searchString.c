#include <stdio.h>
#include <string.h>


void main() {
    char s0[30];
    char s1[10];

    printf("Insert a phrase: ");
    fgets(s0, 29, stdin);
    printf("Insert a word to search for, in the phrase: ");
    fgets(s1, 9, stdin);

    if(strstr(s0, s1))
        printf("The phrase %scontains %s", &s1, &s0);
}
