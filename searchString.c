#include <stdio.h>
#include <string.h>


int main() {
char s0[] = "Low Roar - Anything You Need";
char s1[] = "Roar";

if(strstr(s0, s1))
    puts("I found the word you were searching for!");
}