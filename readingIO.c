#include <stdio.h>

int main()
{
    char first_name[10];
    char last_name[10];
    scanf("%9s %9s", first_name, last_name);
    printf("Priviet stalker! So... it seems your name is %s %s and youre not old enough?", first_name, last_name);
    return 0;
}