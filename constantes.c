/*
* Esse programa tem como objetivo alterar uma string literal, através de uma cópia dela no STACK
*/

#include <stdio.h>

int main() 
{
    char str[] = "String";
    puts(str);
    str[1] = 'p';
    puts(str);
    return 0;
};