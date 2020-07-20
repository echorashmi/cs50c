#include <stdio.h>
#include <stdlib.h>

//Represents a node
typedef struct node
{
    int roll_number;
    int age;
    struct node *next;
}
node;

int main(void)
{
    //Create a list of size 0:
    node *list = NULL;
    
    //Add number to list:
    node *n = malloc(sizeof(node));
    
    if (n == NULL)
    {
        return 1;
    }
    n->roll_number = 1;
    n->age = 10;
    n->next = NULL;
    list = n;
    
    //Add number to list:
    n = malloc(sizeof(node));
    
    if (n == NULL)
    {
        return 1;
    }
    n->roll_number = 2;
    n->age = 30;
    n->next = NULL;
    list->next = n;
    
    //Add number to list:
    n = malloc(sizeof(node));
    
    if (n == NULL)
    {
        return 1;
    }
    n->roll_number = 3;
    n->age = 50;
    n->next = NULL;
    list->next->next = n;
    
    //Print List:
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i: %i\n", tmp->roll_number, tmp->age);
    }
    
    //Free List:
    while(list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}












