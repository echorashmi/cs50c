/* 
    Next Step:
/* 
    File of Practice Code
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{   
    int counter = 0;
    int possible_jpeg_counter = 0;
    
    //Read file 512 bytes at a time into memory:
    FILE * fp = fopen("card.raw", "rb");
    if (fp)
    {
        BYTE * buffer = malloc(512);
        while (fread(buffer, 512, 1, fp) == 1)
        {
            counter++;
            printf("%i", counter);
            if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
            {
                printf(" - Possible JPEG Detected!\n");
                possible_jpeg_counter++;
            }
            else
            {
                printf("\n");
            }
        }
        fclose(fp);
        free(buffer);
        printf("\n%i Possible JPEGs detected\n", possible_jpeg_counter);
    }
    
    
    /*
    //Load the entire card.raw file into memory:
    
    unsigned char * buffer = 0;
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
            fread (buffer, sizeof(unsigned char), length, f);
        }
        fclose (f);
    }
    
    printf("%c", buffer[1000000]);
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
    How to Create multiple JPEG files using a For Loop:
    
        for(int i = 0; i < 10; i++)
        {
            char filename[10];
            sprintf(filename, "%03i.jpg", i);
            fopen(filename, "w");
        }
    */    
}