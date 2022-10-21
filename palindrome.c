/*
* Programa com intuito de verificar se uma palavra/frase é um palindromo
*/



#include <stdio.h>
#include <string.h>

int main()
{
    char palindrome[30];
    printf("Insert a word to see if it is a palindrome: ");
    size_t len = strlen(palindrome);
    char *reverse = palindrome + len-1;
    char *continuous = palindrome;
    fgets(palindrome, 29, stdin);
    while(reverse > (len/2) && continuous < (len/2))
    {
        reverse--;
        continuous++;
        printf("%s", *reverse);
        printf("%s", *continuous);

        if(*reverse == *continuous) {
            printf("%c %c", *continuous, *reverse);
            continue;
        } else {
            printf("Não é um palindrome");
            break;
        }
    }
    return 0;
}