#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//Create new node, next pointer points NULL and val is written to node
node_t *create_node(int val)
{
    node_t *temp = malloc(sizeof(node_t));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

//Add new node to top of the list
void push(node_t **head_ref, int val)
{
    node_t *new_node;

    if((*head_ref) == NULL)
        (*head_ref) = create_node(val);
    else
    {
        new_node = create_node(val);
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
    }
}

//Remove the top node and return the value
int pop(node_t **head_ref)
{
    node_t *temp = (*head_ref);
    int val;

    if((*head_ref) == NULL)
        return -1;
    
    val = temp->val;
    (*head_ref) = temp->next;
    free(temp);

    return val;
}

//Prints the list
void print_list(node_t *head)
{
    printf("Printing the list: \n");
    for(node_t *temp=head; temp!=NULL; temp=temp->next)
        printf("%d ", temp->val);
    printf("\n\n");
}