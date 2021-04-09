#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linked_list.h"

int main()
{
    printf("Hello World !!!\n");
    srand(time(NULL));
    node_t *head = NULL;

    for(int i = 0; i<LIST_SIZE; i++)
    {
        push(&head, i);
    }
    print_list(head);

    while(head != NULL)
    {
        printf("%d ", pop(&head));
    }

    return 0;
}