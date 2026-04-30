#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 50, 10, 5, 100, 1, 500};
    int n = get_int("Sayı: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
