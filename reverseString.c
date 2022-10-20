#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    printf("Insert a phrase to see it reversed: ");
    fgets(s, 29, stdin);
    char *end = s;
    size_t len = strlen(end);
    char *t = end+len-1;
    while(t >= s)
    {
        printf("%c", *t);
        t-=1;
    }
    return 0;
}