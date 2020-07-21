//Next Step: Follow up on my StackExchange question: https://cs50.stackexchange.com/questions/38905/find-hex-values-inside-a-string-in-c
/* 
    File of Random Practice Code
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{   
    /* Find a sub-string in a given string: */
    char * given_string = "This is a long given string. Happy Programming! 0xff";
    
    int length = strlen(given_string);
    for (int i = 0; i < length; i++)
    {
        if(given_string[i] == 0xff)
        {
            printf("Here: %c\n", given_string[i]);
            break;
        }
        else
        {
            printf("Not Here: %c\n", given_string[i]);
        }
    }
    
     
    /*
    //Load the entire card.raw file into memory:
    
    char * buffer = 0;
    long length;
    FILE * f = fopen ("card.raw", "rb");
    
    if (f)
    {
        fseek (f, 0, SEEK_END);
        length = ftell (f);
        fseek (f, 0, SEEK_SET);
        buffer = malloc (length);
        if (buffer)
        {
            fread (buffer, 1, length, f);
        }
        fclose (f);
    }
    */
    /*
    int index = 0;
    int needlelen = 4;
    int foundat = -1;
    //Count how many occurences of 00xf are in the buffer.
    while (index < length - needlelen + 1)
    {
        if(buffer[0] == 0xff)
        {
            foundat = index;
        }
        index++;
    }
    */
    //Examining random contents of buffer:
    //printf("Hex: %x\n", 0xff);
    
    
    /*
    
    Read file 512 bytes at a time into memory:
    
    FILE * fp = fopen("card.raw", "rb");
    if (fp)
    {
        void * buffer = malloc(512);
        while (fread(buffer, 512, 1, fp) == 1)
        {
            printf("%s\n", buffer);
        }
        fclose(fp);
        free(buffer);
    }
    
    */
    
    
    /*
    How to Create multiple JPEG files using a For Loop:
    
        for(int i = 0; i < 10; i++)
        {
            char filename[10];
            sprintf(filename, "%03i.jpg", i);
            fopen(filename, "w");
        }
    */    
}