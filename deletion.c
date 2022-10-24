
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
} node ;

void deleteElement(int *p)
{

    free(p);
}

void deleteNode(node *node)
{
    free(node);
}

int main()
{
    int i = 10 ;
    int *p = &i ;

    node *parent = (node *)malloc(sizeof(node));
    parent->data = 10;

    node *child = (node *)malloc(sizeof(node));
    parent->next = child ;

    deleteElement(p);
    printf("\np : %d",*p);

    deleteNode(parent);
    printf("\nparent node: %d",parent->data);
    printf("\nchild node : %d",child->data);
    return 0 ;
}
