/*
    Next Step: As an exercise, count how many bytes will be written to each JPEG. 
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
    int byte_counter = 0;

    if(argc < 2)
    {
        return 1;
    }

    //Read file 512 bytes at a time into memory:
    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
    {
        return 1;
    }
    BYTE * buffer = malloc(512);
    char * filename = malloc(7);
    while (fread(buffer, 512, 1, fp) == 1)
    {
        counter++;
        //If start of JPEG is found, do this:
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            byte_counter = 0;
            sprintf(filename, "%03i.jpg", possible_jpeg_counter);
            //FILE *img = fopen(filename, "w");
            printf("JPEG will be created with name: %s\n", filename);
            possible_jpeg_counter++;
        }
        //Else, continue writing to previous JPEG
        else
        {
            
        }
        byte_counter =  byte_counter + 512;
    }
    fclose(fp);
    free(filename);
    free(buffer);
    printf("\n%i Possible JPEGs detected\n", possible_jpeg_counter);
}