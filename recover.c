#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
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
    
}







