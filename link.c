#include <stdio.h>
#include <stdlib.h>

//Represents a node
typedef struct node
{
    int roll_number;
    int age;
    char *name;
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
    n->name = "Rashmi";
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
    n->name = "Alex";
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
    n->name = "Steve";
    n->next = NULL;
    list->next->next = n;
    
    //Add number to list:
    n = malloc(sizeof(node));
    
    if (n == NULL)
    {
        return 1;
    }
    n->roll_number = 4;
    n->age = 20;
    n->name = "Kylie";
    n->next = NULL;
    list->next->next->next = n;
    
    //Print List:
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("Name: %s\tRoll Number: %i\tAge: %i\n", tmp->name, tmp->roll_number, tmp->age);
    }
    
    //Free List:
    while(list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}












