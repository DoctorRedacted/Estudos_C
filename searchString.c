#include <stdio.h>
#include <string.h>


void main() {
    char s0[] = "Low Roar - Anything You Need";
    char s1[] = "Roar";
    
    if(strstr(s0, s1))
        printf("I found the %s in %s", s1, s0);
}
