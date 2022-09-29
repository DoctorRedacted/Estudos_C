/*
* Esse programa pega o endereço de uma variável int, localizada no campo de memória STACK, e printa em hexadecimal
*/

#include <stdio.h>

int main() 
{
    int x = 0;
    printf("%p", &x);
    return 0;
};