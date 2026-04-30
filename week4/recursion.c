#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Yukseklik: ");
    draw(height);
}

void draw(int n)
{
    // Durma noktası: Eğer n sıfır veya daha küçükse dur
    if (n <= 0)
    {
        return;
    }

    // Fonksiyonu bir küçüğü için tekrar çağır
    draw(n - 1);

    // Kareleri (basamakları) çiz
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
