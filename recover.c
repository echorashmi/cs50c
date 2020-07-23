/*
    Next Step: As an exercise, count how many bytes will be written to each JPEG.
    Re-watch and break down from Brian's Pseudocode on Walkthrough video.
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
    FILE * img = malloc(512);
    while (fread(buffer, 512, 1, fp) == 1)
    {
        counter++;
        //If start of JPEG is found, do this:
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if(possible_jpeg_counter == 0)
            {
                sprintf(filename, "%03i.jpg", possible_jpeg_counter);
                img = fopen(filename, "w");   printf("\n\n-------Created File %s-------\n", filename);
                fwrite(buffer, 512, 1, img);  printf("Writing 512 bytes to file\n");
            }

            //Close the file you've just been writing to.
            else
            {
                sprintf(filename, "%03i.jpg", possible_jpeg_counter);
                fclose(img);   //printf("-------Closed File %s-------\n", filename);
                img = fopen(filename, "w"); //printf("\n\n-------Created File %s-------\n", filename);
                fwrite(buffer, 512, 1, img); //printf("Writing 512 bytes to file\n");
            }
            possible_jpeg_counter++;
        }

        //Else, if this is an existing JPEG
        else
        {
            //if there is a file open (this "if" avoids the first case where there is no file open.)
            if(possible_jpeg_counter > 0)
                fwrite(buffer, 512, 1, img); //printf("Writing 512 bytes to file %s\n", filename);
        }
    }
    fclose(fp);
    free(filename);
    free(buffer);
}