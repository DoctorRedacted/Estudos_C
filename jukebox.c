#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "Women - Penal Colony",
    "Low Roar - Anything You Need",
    "Nine Inch Tails - Hurt",
    "Pisse - Fahrradsattel",
    "Clams Casino - I'm God",
};

void find_track(char search_for[])
{
    int i;
    for(i = 0; i < 5; i++) {
        if(strstr(tracks[i], search_for))
            printf("Track %i: '%s'", i, tracks[i]);
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track(search_for);
    return 0;
}