#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Kelime listemiz
    string words[] = {"elma", "armut", "muz", "kiraz", "cilek"};

    string s = get_string("Aranan meyve: ");

    for (int i = 0; i < 5; i++)
    {
        // strcmp 0 dönerse kelimeler aynı demektir
        if (strcmp(words[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
