#include <stdio.h>
#include <stdlib.h>

//Represents a node
typedef struct node
{
    int roll_number;
    int age;
    //char *name;
    struct node *next;
}
node;

int main(void)
{
    node *list, *head, *p;
    
    //Create a list of size 0:
    int n, i;
    head = NULL;
    list = NULL;
    
    printf("Number of Elements: ");
    scanf("%d", &n);
    
    //Run a Loop to get inputs. 
    for (i = 0; i < n; i++)
    {
        //Generate a Node with input from the user:
            p = malloc(sizeof(struct node));
            printf("Enter Roll Number: ");
            scanf("%i", &p->roll_number);
            printf("Enter Age: ");
            scanf("%i", &p->age);
            //printf("Enter Name: ");
            //scanf("%s", p->name);
            p->next = NULL;
        
        //If the node is at 0, set this node to the head 
        if(head == NULL)
            head = p;
        //If not 0, set this node to the next in the list
        else  
            list->next = p;
            
        list = p;
    }
    
    /*
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
    */
}
    
    
/*
head = NULL;

for (i = 0; i < n; i++)
{
    p = malloc(sizeof(struct node));
    printf("Enter Roll Number: ");
    scanf("%i", &p->roll_number);
    p->next = NULL;
    if(head == NULL)
        head = p;
    else
        prev->next = p;
    prev = p;
}

//Print List:
for (node *tmp = p; tmp != NULL; tmp = tmp->next)
{
    printf("Roll Number: %i\n", tmp->roll_number);
}

//Free List:
while(p != NULL)
{
    node *tmp = p->next;
    free(p);
    p = tmp;
}

return 0;
    
}
*/












