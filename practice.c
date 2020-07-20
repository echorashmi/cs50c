/* 
    File of Random Practice Code
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
    
    Load the entire card.raw file into memory:
    
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