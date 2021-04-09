#include <stdio.h>

#define LIST_SIZE 20

//This is a simple node with integer value and next pointer
typedef struct node{
    int val;
    struct node *next;
}node_t;

//Function definitions
node_t *create_node(int val);
void push(node_t **head_ref, int val);
int pop(node_t **head_ref);
void print_list(node_t *head);