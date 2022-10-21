/* N = ESTUDANTES
* D = MILILITROS POR ESTUDANTES
* L = LITROS DA GARRAFA
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n,l,d;
    printf("Insert the quantity of people: ");
    scanf("%4i", &n);
    printf("Insert the coffe pot litters: ");
    scanf("%4i", &l);
    printf("Insert the quantity of coffe in mililiters, per person: ");
    scanf("%4i", &d);

    float calc = (n*d)/1000;
    int output = l;
    printf("%i", output);
    while(output < calc) {
        output+=l;
    };
    printf("%i", output);
    return 0;
};