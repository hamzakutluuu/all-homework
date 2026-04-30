#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int n = get_int("Sayı (Çıkış için 0): ");
        if (n == 0) break;

        node *new_node = malloc(sizeof(node));
        if (new_node == NULL) return 1;

        new_node->number = n;
        new_node->next = list;
        list = new_node;
    }

    // Listeyi yazdır
    printf("Listeniz: ");
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i ", tmp->number);
    }
    printf("\n");

    // Belleği serbest bırak (Memory Leak önlemek için)
    node *cursor = list;
    while (cursor != NULL)
    {
        node *tmp = cursor;
        cursor = cursor->next;
        free(tmp);
    }
}
