// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next; 
}
node;

// Number of buckets in hash table
const unsigned int N = 1;

// Hash table
node *table[N];

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    return 0;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    char *word;
    int count = 10; //Temporarily using 10 to reduce the number of words pulled into memory each time. 
    
    FILE *fp = fopen(dictionary, "r");
    if(fp == NULL)
    {
        return false;
    }
    
    while (count > 0) //What is a better condition I can use in this while loop here?
    {
        word = malloc(LENGTH * sizeof(char)); //What should the malloc value be...I can't just have 45 everywhere, can I?
        fscanf(fp, "%s", word);
        printf("%s\n", word);
        count--;
    }
    
    exit(1);
    // TODO
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
